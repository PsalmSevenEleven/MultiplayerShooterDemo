// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerController.h"
#include "HordeShooter/Interfaces/PlayerInterface.h"
#include "HordeShooter/UI/MSDHud.h"
#include "HordeShooter/UI/MSDUserWidget.h"

#include "MSDPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API AMSDPlayerController : public APlayerController, public IPlayerInterface, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	void SetupEnhancedInputContext();

	class UInputMappingContext* GetPlayerInputMappingContext() const { return PlayerInputMappingContext; }

	
	//Overridden to allow input to pe processed in batches
	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;

	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UMSDHud> HUDClass;
	
	UPROPERTY()
	UMSDHud* HUD = nullptr;

	void SetupHud();
	
	//This is to allow the player to use the pause key to back out of any menu
	UPROPERTY(BlueprintReadWrite)
	UMSDUserWidget* CurrentWidget = nullptr;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputMappingContext* PlayerInputMappingContext;

	UFUNCTION()
	UMSDUserWidget* GetCurrentWidget_Implementation() const override {return CurrentWidget;}

	UFUNCTION()
	void SetCurrentWidget_Implementation(UMSDUserWidget* NewWidget) override {CurrentWidget = NewWidget;}

	UFUNCTION()
	void SetHudVisibility_Implementation(ESlateVisibility Visibility) override;
};


