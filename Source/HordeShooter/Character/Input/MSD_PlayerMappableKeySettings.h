// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerMappableKeySettings.h"
#include "HordeShooter/HordeShooter.h"
#include "MSD_PlayerMappableKeySettings.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class HORDESHOOTER_API UMSD_PlayerMappableKeySettings : public UPlayerMappableKeySettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	EPlayerAbilityInputID InputID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	bool bIsGASAbility = true;
};
