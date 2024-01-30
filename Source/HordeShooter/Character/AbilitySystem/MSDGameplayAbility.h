// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HordeShooter/HordeShooter.h"
#include "Abilities/GameplayAbility.h"
#include "MSDGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UMSDGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	EPlayerAbilityInputID AbilityInputID;
	
};
