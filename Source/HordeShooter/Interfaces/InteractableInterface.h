// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Components/ProgressBar.h"
#include "InteractableInterface.generated.h"

UENUM()
enum class EInteractionType : uint8
{
	InteractionType_Press,
	InteractionType_Hold,
};

//I'm treating this project as though there are other people working on it,
//so I'm making this blueprintable so that a designer could more easily prototype interactables
UINTERFACE(MinimalAPI, Blueprintable)
class UInteractableInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class HORDESHOOTER_API IInteractableInterface
{
	GENERATED_BODY()

	
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Interact(APlayerController* InteractorController, APlayerState* InteractorState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void StopInteract(APlayerController* InteractorController, APlayerState* InteractorState);
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void RetrieveInteractInfo(FString& InteractText, EInteractionType& InteractionType);
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool CanInteract();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	float GetPercentComplete();
};
