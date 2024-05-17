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

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FInputActionValue GetInputActionValue(UInputAction* InAction);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FVector2D GetMouseDirection();
	
};
