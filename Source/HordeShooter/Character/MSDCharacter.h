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

//This is the character class for use in an actual match; at some point i'll need a lobby character class
UCLASS(config=Game)
class AMSDCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* HandsMesh;

	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;
	

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
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

	//change this to edit all characters' base abilities
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<const UMSD_AbilitySet> DefaultAbilities;


	UPROPERTY(ReplicatedUsing=OnRep_CharacterClass, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FString CharacterClass = "none";

	
	void ChangeClassLoadedCallback(FString NewClass);

	UFUNCTION()
	void OnRep_CharacterClass();
	
	
};

