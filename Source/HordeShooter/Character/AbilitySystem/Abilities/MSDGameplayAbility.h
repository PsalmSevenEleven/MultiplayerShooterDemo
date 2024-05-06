// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HordeShooter/HordeShooter.h"
#include "Abilities/GameplayAbility.h"
#include "MSDGameplayAbility.generated.h"
UENUM()
enum class EAbilityActivationType
{
	ActivateWhileHeld UMETA(DisplayName = "Activate While Held"),
	ActivateOnPressed UMETA(DisplayName = "Activate On Pressed"),
	ActivateOnGranted UMETA(DisplayName = "Activate On Granted"),
};
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

	UPROPERTY(EditDefaultsOnly)
	EAbilityActivationType ActivationType;

	EAbilityActivationType GetActivationType() const { return ActivationType; }
	
};
