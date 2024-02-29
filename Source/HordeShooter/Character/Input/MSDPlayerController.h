// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HordeShooter/UI/MSDHud.h"
#include "HordeShooter/UI/MSDUserWidget.h"
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


	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UMSDHud> HUDClass;
	
	UPROPERTY()
	UMSDHud* HUD = nullptr;

	void SetupHud();
	
	//This is to allow the player to use the pause key to back out of any menu
	UPROPERTY(BlueprintReadWrite)
	UMSDUserWidget* CurrentWidget = nullptr;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputMappingContext* PlayerInputMappingContext;
};


