// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MSDPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API AMSDPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	void SetupEnhancedInputContext();

	class UInputMappingContext* GetPlayerInputMappingContext() const { return PlayerInputMappingContext; }

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputMappingContext* PlayerInputMappingContext;
	
	
};


