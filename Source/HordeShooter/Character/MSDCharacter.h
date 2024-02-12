// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/MSD_AbilitySet.h"

#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"

#include "MSDCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);


UCLASS(config=Game)
class AMSDCharacter : public ACharacter
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

	
public:
	AMSDCharacter();

	USkeletalMeshComponent* GetHandsMesh() const;

protected:

	//native code for character movement
	void Move(const FInputActionValue& Value);

	//native code for camera movement
	void Look(const FInputActionValue& Value);
	
	//This is where we're binding all of our input, GAS or otherwise
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	
	//TODO - move this to an interface
	UFUNCTION(BlueprintCallable, BlueprintPure)
	FInputActionValue GetEnhancedInputActionValue(UInputAction* InAction);

	//probably also this
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void ChangeClass(const FString& NewClass);

protected:

	UPROPERTY(BlueprintReadOnly)
	UAbilitySystemComponent* AbilitySystemComponent;

	//This is where we want to do most of the server-side setup for the character based on my understanding
	virtual void PossessedBy(AController* NewController) override;

	//And this is for client-side setup
	virtual void OnRep_PlayerState() override;
	
private:
	
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


	//This was originally an FPrimaryAssetId, but in the interest of saving bandwidth, I've changed it to a string
	//The process for using the variable is slightly more convoluted now,
	//but it shouldn't be that much worse in terms of perf
	UPROPERTY(ReplicatedUsing=OnRep_CharacterClass, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FString CharacterClass = "none";

	UFUNCTION()
	void OnRep_CharacterClass();

	//Since I'm using primary assets for the classes, they'll be loaded at runtime.
	//Therefore, callback function for when the class is loaded
	void ChangeClassLoadedCallback(FString NewClass);
};

