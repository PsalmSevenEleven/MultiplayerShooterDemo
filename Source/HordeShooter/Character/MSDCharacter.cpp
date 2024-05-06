// Copyright Epic Games, Inc. All Rights Reserved.

#include "MSDCharacter.h"

#include "AbilitySystemGlobals.h"
#include "AsyncTreeDifferences.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "GameplayAbilitiesModule.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"
#include "PropertyEditorCopyPaste.h"
#include "AbilitySystem/MSDPlayerAttributeSet.h"
#include "AbilitySystem/MSD_AbilitySystemComponent.h"
#include "Binding/DynamicPropertyPath.h"
#include "Classes/MSD_CharacterClassDefinition.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Engine/AssetManager.h"
#include "HordeShooter/Background_Infrastructure/MSDGameplayTags.h"
#include "HordeShooter/Background_Infrastructure/MSDSaveGame.h"
#include "HordeShooter/Character/MSDPlayerState.h"
#include "HordeShooter/Character/Input/MSD_PlayerMappableKeySettings.h"
#include "HordeShooter/Character/Input/MSDPlayerController.h"
#include "HordeShooter/UI/InteractPrompt.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"


DEFINE_LOG_CATEGORY(LogTemplateCharacter);

AMSDCharacter::AMSDCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	//This is here by default, will most likely remove later to reflect a first-person camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	//also here by default, most of this will be handled by character class definition DA's
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	//Camera Boom
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 0.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	//Camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	//Hands
	//Not sure if this should be attached here,
	//may end up having to fiddle with something when I implement weapon sway
	HandsMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HandsMesh"));
	HandsMesh->SetupAttachment(CameraBoom);

	//Only the local player needs to see the hands...
	HandsMesh->SetOnlyOwnerSee(true);

	//...and everyone but the local player needs to see the body.
	GetMesh()->SetOwnerNoSee(true);
}

USpringArmComponent* AMSDCharacter::GetCameraBoom() const
{
	return CameraBoom;
}

void AMSDCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const 
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMSDCharacter, CharacterClass);
}

//A C++ version of the blueprint function that returns the player's input action value.
//This is nice because it allows me to get the value I want based on a class variable,
//instead of each InputAction having its own function like with the BP version
//TODO - I should probably move this to an interface to save unnecessary casting in my GAS abilities.
FInputActionValue AMSDCharacter::GetEnhancedInputActionValue(UInputAction* InAction)
{
	UEnhancedInputComponent* PlayerEnhancedInputComponent = Cast<UEnhancedInputComponent>(GetController()->InputComponent);
	if(!PlayerEnhancedInputComponent || !InAction)
	{
		return FInputActionValue();
	}
	return PlayerEnhancedInputComponent->BindActionValue(InAction).GetValue();
}

//From what I can tell, This is where we want to most of our server-side setup for the character.
//The client's end should be handled in OnRep_PlayerState().
void AMSDCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	// storing the ASC in a member variable is technically not necessary,
	// but it's significantly more readable than copy-pasting the code to get it every time I want to access it
	
	MSDPlayerState = GetPlayerState<AMSDPlayerState>();
	if(MSDPlayerState)
	{
		AbilitySystemComponent = MSDPlayerState->GetAbilitySystemComponent();
		AbilitySystemComponent->InitAbilityActorInfo(MSDPlayerState, this);
		
		AttributeSet = AbilitySystemComponent->GetSet<UMSDPlayerAttributeSet>();
		

		ensure(DefaultAbilities);
		DefaultAbilities->AddAbilitiesToASC(AbilitySystemComponent);

		if(MSDPlayerState->GetCharacterClass() != "none")
		{
			ChangeClass(MSDPlayerState->GetCharacterClass(), MSDPlayerState->GetSubclassIndex());
		}
		else
		{
			UMSDSaveGame* SaveGame = Cast<UMSDSaveGame>(UGameplayStatics::LoadGameFromSlot("SaveGame", 0));

			if(SaveGame)
			{
				ChangeClass(SaveGame->GetClassName(), SaveGame->SelectedSubclassIndices[SaveGame->GetClassIndex()]);
			}
		}
	}

	if(GetNetMode() == NM_ListenServer || GetNetMode() == NM_Standalone)
	{
		MSDPlayerController = GetController<AMSDPlayerController>();
		if(MSDPlayerController)
		{
			MSDPlayerController->SetViewTarget(MSDPlayerController->GetPawn());
		}
	}

	CreateHud();
}

//Client-side setup
void AMSDCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	AMSDPlayerState* PS = GetPlayerState<AMSDPlayerState>();
	if (PS)
	{
		AbilitySystemComponent = PS->GetAbilitySystemComponent();
		AbilitySystemComponent->InitAbilityActorInfo(PS, this);
		
		if(AbilitySystemComponent)
		{
			AttributeSet = AbilitySystemComponent->GetSet<UMSDPlayerAttributeSet>();
		}

		//Make sure we have a controller, then bind all of the input
		if(ensure(IsValid(Cast<AMSDPlayerController>(Controller))))
		{
			Cast<AMSDPlayerController>(Controller)->SetupEnhancedInputContext();
			BindASCInputs();
			BindGASInputs(Controller->InputComponent);
			BindNativeInputs(Controller->InputComponent);
		}

		//Initialize the character class
		if(PS->GetCharacterClass() != "none")
		{
			ChangeClass(PS->GetCharacterClass(), PS->GetSubclassIndex());
		}
	}

	MSDPlayerController = GetController<AMSDPlayerController>();
	if(MSDPlayerController)
	{
		//Normally this wouldn't be necessary, but in order to have a 3d menu pop up when the player joins the game,
		//I had to disable auto view target handling in the character class
		MSDPlayerController->SetViewTarget(MSDPlayerController->GetPawn());
	}

	CreateHud();
}

void AMSDCharacter::CreateHud()
{
	if(!bHudCreated)
	{
		AMSDPlayerController* PC = GetController<AMSDPlayerController>();
		if(PC)
		{
			PC->SetupHud();
			bHudCreated = true;
		}
	}
}


#pragma region Input Setup

void AMSDCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if(ensure(IsValid(Cast<AMSDPlayerController>(Controller))))
	{
		Cast<AMSDPlayerController>(Controller)->SetupEnhancedInputContext();
		BindASCInputs();
		BindGASInputs(PlayerInputComponent);
		BindNativeInputs(PlayerInputComponent);
	}
}

void AMSDCharacter::BindASCInputs()
{
	if (!bASCInputBound && AbilitySystemComponent && IsValid(InputComponent))
	{

		const FGameplayAbilityInputBinds Binds(
				FString("Confirm"),
				FString("Cancel"),
				FTopLevelAssetPath(FName("/Script/HordeShooter"), FName("EPlayerAbilityInputID")),
				static_cast<int32>(EPlayerAbilityInputID::Confirm),
				static_cast<int32>(EPlayerAbilityInputID::Cancel)
				);
		AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, Binds);
		bASCInputBound = true;
	}
}

//Automatically binds all GAS abilities to their inputs,
//saving the trouble of creating a variable for every input action and creating a function to call each possible GAS ability.

//This function relies on a custom PlayerMappableKeySettings class which allows
//the designer to tell each input action which of the custom input id's should trigger it.
//It also allows the designer to specify whether the input should be for a GAS ability
//or native function, which allows us to remap native function keys just as easily as GAS abilities.
void AMSDCharacter::BindGASInputs(UInputComponent* PlayerInputComponent) 
{
	UEnhancedInputComponent* PlayerEnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (PlayerEnhancedInputComponent && !bGASInputBound && IsValid(Cast<AMSDPlayerController>(Controller)))
	{
		for(const FEnhancedActionKeyMapping & Action : Cast<AMSDPlayerController>(Controller)->GetPlayerInputMappingContext()->GetMappings())
		{
			//if the action isn't a GAS ability, we'll handle it in BindNativeInputs().
			if (!Action.GetPlayerMappableKeySettings<UMSD_PlayerMappableKeySettings>()->bIsGASAbility)
			{
				continue;
			}
			
			int32 InputID = static_cast<int>(Action.GetPlayerMappableKeySettings<UMSD_PlayerMappableKeySettings>()->InputID);
			PlayerEnhancedInputComponent->BindAction(Action.Action, ETriggerEvent::Started, this, &ThisClass::ActivateGASAbility, InputID, true);
			PlayerEnhancedInputComponent->BindAction(Action.Action, ETriggerEvent::Canceled, this, &ThisClass::ActivateGASAbility, InputID, false);
			PlayerEnhancedInputComponent->BindAction(Action.Action, ETriggerEvent::Completed, this, &ThisClass::ActivateGASAbility, InputID, false);
		}
		
		bGASInputBound = true;
		//TODO (maybe) - add a delegate broadcast here in case something cares about it
	}
}

//While it is technically possible to do everything in GAS and I got it to work during my experimenting,
//the GAS abilities ended up being hacky and dirty and gave me The Sad.

//From what I can tell, for anything that has to trigger repeatedly while an input is held down (look, move, etc)
//it's simpler to make a native function and manually bind it to an InputAction
//which is manually set on the character BP
//(how Lyra handles it).

//This won't automagically handle new abilities like BindGASInputs(), but hopefully we won't need very many native inputs.
void AMSDCharacter::BindNativeInputs(UInputComponent* PlayerInputComponent)
{
	UEnhancedInputComponent* PlayerEnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (PlayerEnhancedInputComponent && !bNativeInputBound && IsValid(Cast<AMSDPlayerController>(Controller)))
	{
		PlayerEnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ThisClass::Move);
		PlayerEnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ThisClass::Look);
		PlayerEnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &ThisClass::Interact);
		PlayerEnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Completed, this, &ThisClass::ReleaseInteract);
	}
	bNativeInputBound = true;
}
#pragma endregion

//The one-size-fits-all function for activating GAS abilities.
//This is bound to all GAS-related input actions in BindGASInputs(),
//and is a cleaner catchall than having a separate function for each ability.
void AMSDCharacter::ActivateGASAbility(int32 Index, bool bOn)
{
	if(!IsValid(GetController()))
	{
		return;
	}
	
	UEnhancedInputComponent* PlayerEnhancedInputComponent = Cast<UEnhancedInputComponent>(GetController()->InputComponent);
	UMSD_AbilitySystemComponent* ASC = Cast<UMSD_AbilitySystemComponent>(AbilitySystemComponent);
	
	if (IsValid(PlayerEnhancedInputComponent) && ASC)
	{
		if(bOn)
		{
			ASC->QueueAbilityPressed(Index);
		}
		else
		{
			ASC->QueueAbilityReleased(Index);
		}
	}
}


//This is the stuff that's cleaner to just handle in C++ inside of the character,
//as opposed to more complicated abilities that we can offload to GAS
#pragma region Native Abilities
void AMSDCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AMSDCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

//If for some reason I need to disable the player's ability to interact with something,
//I'll probably refer to an attribute set that I can manipulate with GAS, same as movement speed and looking around
void AMSDCharacter::Interact()
{
	if(!CurrentInteractable
		|| MSDPlayerState->GetAbilitySystemComponent()->HasMatchingGameplayTag(TAG_Player_Status_Menu))
	{
		return;
	}
	

	IInteractableInterface::Execute_Interact(CurrentInteractable, Cast<APlayerController>(Controller), GetPlayerState());
}

void AMSDCharacter::ReleaseInteract()
{
	if(!CurrentInteractable)
	{
		return;
	}

	//If the object isn't a 'hold' interactable, we just won't implement the StopInteract() function
	IInteractableInterface::Execute_StopInteract(CurrentInteractable, Cast<APlayerController>(Controller), GetPlayerState());
}
#pragma endregion

#pragma region Character Class Utility
void AMSDCharacter::ChangeClass_Implementation(const FString& NewClass, int32 NewSubclass)
{

	CharacterClass = NewClass;
	CharacterSubclass = NewSubclass;
	if(GetNetMode() == NM_Client)
	{
		return;
	}
	
	OnRep_CharacterClass();

	MSDPlayerState = GetPlayerState<AMSDPlayerState>();
	if(MSDPlayerState)
	{
		MSDPlayerState->SetCharacterClass(NewClass);
		MSDPlayerState->SetSubclassIndex(NewSubclass);
	}
}

bool AMSDCharacter::ChangeClass_Validate(const FString& NewClass, int32 NewSubclass)
{
	//TODO - check if the player owns the class in their save game
	//eventually there will be progression and unlocks, but for now just let anything work
	return true;
}

void AMSDCharacter::OnRep_CharacterClass()
{
	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager || CharacterClass == "none")
	{
		return;
	}
	
	FPrimaryAssetId NewClass = FPrimaryAssetId("CharacterClassDefinition", FName(CharacterClass));
	
	AssetManager->LoadPrimaryAsset(NewClass, TArray<FName>({"HubAndMission", "HubOnly"}), FStreamableDelegate::CreateUObject(this, &AMSDCharacter::ChangeClassLoadedCallback, CharacterClass, CharacterSubclass));
}

//This is called when the character classdef is loaded,
//and is where we actually set variables and assign abilities (at some point)
void AMSDCharacter::ChangeClassLoadedCallback(FString NewClass, int32 NewSubclass)
{
	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager || NewClass == "none")
	{
		return;
	}

	FPrimaryAssetId NewClassId = FPrimaryAssetId("CharacterClassDefinition", FName(NewClass));
	
	UMSD_CharacterClassDefinition* ClassDefinition = AssetManager->GetPrimaryAssetObject<UMSD_CharacterClassDefinition>(NewClassId);
	if(!ClassDefinition)
	{
		return;
	}

	GetCapsuleComponent()->SetCapsuleSize(ClassDefinition->CapsuleRadius, ClassDefinition->CapsuleHalfHeight);
	GetCharacterMovement()->MaxWalkSpeed = ClassDefinition->MoveSpeedWalking;
	GetCharacterMovement()->MaxWalkSpeedCrouched = ClassDefinition->MoveSpeedWalking;
	GetMesh()->SetSkeletalMesh(ClassDefinition->HubBodyMesh.Get());
	GetHandsMesh()->SetSkeletalMesh(ClassDefinition->HubHandsMesh.Get());
	GetHandsMesh()->SetRelativeLocation(ClassDefinition->HandMeshLocalPosition);
	CameraBoom->SetRelativeLocation(FVector(0,0,ClassDefinition->CameraHeight));

	
	if(!ClassDefinition->AttributesEffect.Get())
	{
		return;
	}
	
	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);
	
	FGameplayEffectSpecHandle AttributesEffectHandle = AbilitySystemComponent->MakeOutgoingSpec(ClassDefinition->AttributesEffect.Get(), 1, EffectContext);
	if (AttributesEffectHandle.IsValid())
	{
		AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*AttributesEffectHandle.Data.Get(), AbilitySystemComponent);
	}
}


void AMSDCharacter::BeginPlay()
{
	Super::BeginPlay();

	//Tick is an abomination given to designers by God to punish programmers for their hubris
	//Therefore, looping timer
	FTimerHandle InteractTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(InteractTimerHandle, this, &AMSDCharacter::InteractCheck, 0.03f, true);
}


#pragma endregion

void AMSDCharacter::InteractCheck()
{
	if(MSDPlayerState->GetAbilitySystemComponent()->HasMatchingGameplayTag(TAG_Player_Status_Menu))
	{
		return;
	}
	
	FHitResult HitResult;
	//const FName TraceTag("InteractTraceTag");
	//GetWorld()->DebugDrawTraceTag = TraceTag;

	FCollisionQueryParams CollisionParams;
	//CollisionParams.TraceTag = TraceTag;
	
	GetWorld()->LineTraceSingleByChannel(HitResult, FollowCamera->GetComponentLocation(), FollowCamera->GetComponentLocation() + FollowCamera->GetForwardVector() * InteractionDistance, ECollisionChannel::ECC_GameTraceChannel1, CollisionParams);
	
	if(!HitResult.GetActor() || !HitResult.GetActor()->Implements<UInteractableInterface>())
	{
		CurrentInteractable = nullptr;

		if(MSDPlayerController->HUD->InteractPrompt->GetVisibility() == ESlateVisibility::Visible)
		{
			MSDPlayerController->HUD->InteractPrompt->SetVisibility(ESlateVisibility::Collapsed);
		}
		
		return;
	}

	CurrentInteractable = HitResult.GetActor();

	UInteractPrompt* InteractPrompt = MSDPlayerController->HUD->InteractPrompt;

	if(InteractPrompt->GetVisibility() == ESlateVisibility::Collapsed)
	{
		InteractPrompt->SetVisibility(ESlateVisibility::Visible);
			
		FString InteractText;
		EInteractionType InteractionType;
		IInteractableInterface::Execute_RetrieveInteractInfo(CurrentInteractable, InteractText, InteractionType);

		InteractPrompt->PromptText->SetText(FText::FromString(InteractText));

		if(InteractionType == EInteractionType::InteractionType_Hold)
		{
			InteractPrompt->ProgressBar->SetVisibility(ESlateVisibility::Visible);
			InteractPrompt->ProgressBar->PercentDelegate.BindUFunction(CurrentInteractable, "GetPercentComplete");
			InteractPrompt->ProgressBar->SynchronizeProperties();
		}
		else
		{
			InteractPrompt->ProgressBar->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}


USkeletalMeshComponent* AMSDCharacter::GetHandsMesh() const
{
	return HandsMesh;
}


#pragma region Interface Functions
void AMSDCharacter::Interact_Implementation(APlayerController* InteractorController, APlayerState* InteractorState)
{
	//Increase the revive rate, likely with a multiplier to encourage multiple people rezzing at once
}

void AMSDCharacter::StopInteract_Implementation(APlayerController* InteractorController, APlayerState* InteractorState)
{
	//Set the revive rate to... whatever it was before this interaction.
	//Multiply by reciprocal of multiplier, divide by multiplier, whichever
}

void AMSDCharacter::RetrieveInteractInfo_Implementation(FString& InteractText, EInteractionType& InteractionType)
{
	InteractText = "Cultivate";
	InteractionType = EInteractionType::InteractionType_Hold;
}

bool AMSDCharacter::CanInteract_Implementation()
{
	//When the player is downed they will become an interactable,
	//but at the moment they don't even have health soooo...
	return false;
}

//Ability System Interface
UAbilitySystemComponent* AMSDCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

//Player Interface
UCameraComponent* AMSDCharacter::GetCameraComponent_Implementation() const
{
	return FollowCamera;
}

USkeletalMeshComponent* AMSDCharacter::RetrieveHandsMesh_Implementation() const
{
	return HandsMesh;
}

USkeletalMeshComponent* AMSDCharacter::RetrieveBodyMesh_Implementation() const
{
	return GetMesh();
}

UMSDUserWidget* AMSDCharacter::GetCurrentWidget_Implementation() const
{
	return MSDPlayerController->CurrentWidget;
}

void AMSDCharacter::SetCurrentWidget_Implementation(UMSDUserWidget* NewWidget)
{
	MSDPlayerController->CurrentWidget = NewWidget;
}

#pragma endregion
