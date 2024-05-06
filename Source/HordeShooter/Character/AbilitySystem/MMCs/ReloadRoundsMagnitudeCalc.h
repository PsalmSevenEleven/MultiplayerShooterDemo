// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "ReloadRoundsMagnitudeCalc.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UReloadRoundsMagnitudeCalc : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()

	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;
};
