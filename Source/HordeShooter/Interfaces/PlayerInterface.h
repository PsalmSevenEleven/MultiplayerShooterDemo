// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "Camera/CameraComponent.h"
#include "HordeShooter/UI/MSDUserWidget.h"
#include "UObject/Interface.h"
#include "PlayerInterface.generated.h"

class UInputAction;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPlayerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class HORDESHOOTER_API IPlayerInterface
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UCameraComponent* GetCameraComponent() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	USkeletalMeshComponent* RetrieveHandsMesh() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	USkeletalMeshComponent* RetrieveBodyMesh() const;
	
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UMSDUserWidget* GetCurrentWidget() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCurrentWidget(UMSDUserWidget* NewWidget);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetHudVisibility(ESlateVisibility Visibility);

	//A C++ version of the blueprint function that returns the player's input action value.
	//This is nice because it allows me to get the value I want based on a class variable,
	//instead of each InputAction having its own function like with the BP version
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FInputActionValue GetInputActionValue(UInputAction* InAction);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FVector2D GetMouseDirection();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UMSD_MeleeAttackProfile* GetMeleeProfile() const;

	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TArray<int32> GetComboStrikes();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void AddStrikeToCombo(int32 Strike);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FTimerHandle SetComboTimer( float Duration);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ClearCombo();
	
};