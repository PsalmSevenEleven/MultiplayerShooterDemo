// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystem/MSD_AbilitySet.h"

#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "HordeShooter/Interfaces/InteractableInterface.h"
#include "HordeShooter/Interfaces/PlayerInterface.h"
#include "Input/MSDPlayerController.h"

#include "MSDCharacter.generated.h"


class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);


UCLASS(config=Game)
class AMSDCharacter : public ACharacter,
public IInteractableInterface, public IAbilitySystemInterface, public IPlayerInterface
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* HandsMesh;

	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;
	

	//Input actions for stuff that is defined in this class (not GAS)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* InteractAction;


	UPROPERTY(EditDefaultsOnly)
	int32 InteractionDistance = 350;

public:
	AMSDCharacter();

	USpringArmComponent* GetCameraBoom() const;
	
	USkeletalMeshComponent* GetHandsMesh() const;

protected:

	//native code for character movement
	void Move(const FInputActionValue& Value);

	//native code for camera movement
	void Look(const FInputActionValue& Value);
	
	//Native code for interacting with anything that implements the interactable interface
	void Interact();

	//Need this for 'hold' style interaction
	void ReleaseInteract();

	UPROPERTY()
	AActor* CurrentInteractable = nullptr;
	
	//This is where we're binding all of our input, GAS or otherwise
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	
	//TODO - move this to an interface
	UFUNCTION(BlueprintCallable, BlueprintPure)
	FInputActionValue GetEnhancedInputActionValue(UInputAction* InAction);
	
	//probably also this
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void ChangeClass(const FString& NewClass, int32 NewSubclass);

	//This was originally an FPrimaryAssetId, but in the interest of saving bandwidth, I've changed it to a string
	//The process for using the variable is slightly more convoluted now,
	//but it shouldn't be noticeably worse in terms of perf
	UPROPERTY(ReplicatedUsing=OnRep_CharacterClass, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FString CharacterClass = "none";
	
	UPROPERTY(ReplicatedUsing=OnRep_CharacterClass, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	int32 CharacterSubclass = 0;
	
	
	//Since I'm using primary assets for the classes, they'll be loaded at runtime.
	//Therefore, callback function for when the class is loaded
	virtual void ChangeClassLoadedCallback(FString NewClass, int32 NewSubclass);
	
	//called every 30th of a second or so to see if a player is looking at an interactable object
	virtual void InteractCheck();


protected:
	UPROPERTY()
	class AMSDPlayerState* MSDPlayerState;
	
	UPROPERTY(BlueprintReadOnly)
	UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(BlueprintReadOnly)
	mutable const class UMSDPlayerAttributeSet* AttributeSet;

	UPROPERTY()
	AMSDPlayerController* MSDPlayerController;

	//This is where we want to do most of the server-side setup for the character based on my understanding
	virtual void PossessedBy(AController* NewController) override;

	//And this is for client-side setup
	virtual void OnRep_PlayerState() override;
	
private:

	bool bHudCreated = false;
	void CreateHud();
	
	bool bASCInputBound = false;
	void BindASCInputs();
	
	bool bGASInputBound = false;
	void BindGASInputs(UInputComponent* PlayerInputComponent);

	bool bNativeInputBound = false;
	void BindNativeInputs(UInputComponent* PlayerInputComponent);
	
	UFUNCTION()
	void ActivateGASAbility(int32 Index, bool bOn);

	//change this to edit all characters' non-class-specific abilities
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<const UMSD_AbilitySet> DefaultAbilities;

	
	UFUNCTION()
	virtual void OnRep_CharacterClass();

	virtual void BeginPlay() override;

public:

#pragma region Interface Implementations

	//Interact Interface
	UFUNCTION()
	void Interact_Implementation(APlayerController* InteractorController, APlayerState* InteractorState) override;

	UFUNCTION()
	void StopInteract_Implementation(APlayerController* InteractorController, APlayerState* InteractorState) override;

	UFUNCTION()
	void RetrieveInteractInfo_Implementation(FString& InteractText, EInteractionType& InteractionType) override;

	UFUNCTION()
	bool CanInteract_Implementation() override;


	//Ability System Interface
	UFUNCTION()
	UAbilitySystemComponent* GetAbilitySystemComponent() const override;


	//Player Interface
	UFUNCTION()
	UCameraComponent* GetCameraComponent_Implementation() const override;

	UFUNCTION()
	USkeletalMeshComponent* RetrieveHandsMesh_Implementation() const override;

	UFUNCTION()
	USkeletalMeshComponent* RetrieveBodyMesh_Implementation() const override;

	UFUNCTION()
	UMSDUserWidget* GetCurrentWidget_Implementation() const override;

	UFUNCTION()
	void SetCurrentWidget_Implementation(UMSDUserWidget* NewWidget) override;
	
#pragma endregion
	
};

