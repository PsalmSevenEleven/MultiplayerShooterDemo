// Copyright Epic Games, Inc. All Rights Reserved.

#include "MSDCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"
#include "HordeShooter/Character/MSDPlayerState.h"
#include "HordeShooter/Character/Input/MSD_PlayerMappableKeySettings.h"
#include "HordeShooter/Character/Input/MSDPlayerController.h"


DEFINE_LOG_CATEGORY(LogTemplateCharacter);

AMSDCharacter::AMSDCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 0.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	HandsMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HandsMesh"));
	HandsMesh->SetupAttachment(FollowCamera);
	HandsMesh->SetOnlyOwnerSee(true);
	
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
	
	AMSDPlayerState* MSDPlayerState = GetPlayerState<AMSDPlayerState>();
	if(MSDPlayerState)
	{
		AbilitySystemComponent = MSDPlayerState->GetAbilitySystemComponent();
		AbilitySystemComponent->InitAbilityActorInfo(MSDPlayerState, this);

		ensure(DefaultAbilities);
		DefaultAbilities->AddAbilitiesToASC(AbilitySystemComponent);
	}
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
		
		if(ensure(IsValid(Cast<AMSDPlayerController>(Controller))))
		{
			Cast<AMSDPlayerController>(Controller)->SetupEnhancedInputContext();
			BindASCInputs();
			BindGASInputs(Controller->InputComponent);
			BindNativeInputs(Controller->InputComponent);
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
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, TEXT("Binding ASC Inputs"));

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
		//TODO - add this delegate in case something cares about it
		//OnGASInputBound.Broadcast();
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
	
	if (IsValid(PlayerEnhancedInputComponent) && AbilitySystemComponent)
	{
		if(bOn)
		{
			AbilitySystemComponent->PressInputID(Index);
		}
		else
		{
			AbilitySystemComponent->ReleaseInputID(Index);
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
#pragma endregion