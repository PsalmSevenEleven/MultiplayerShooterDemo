// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HordeShooter/Character/AbilitySystem/Abilities/MSDGameplayAbility.h"
#include "Abilities/GameplayAbility.h"
#include "Engine/DataAsset.h"
#include "MSD_AbilitySet.generated.h"


/**
 * 
 */
UCLASS(BlueprintType, Const)
class HORDESHOOTER_API UMSD_AbilitySet : public UDataAsset
{
	GENERATED_BODY()

public:
	//TODO - maybe add specific variables for primary fire ability, melee ability, etc.
	//might make getting the abilities we want easier when referring to them later
	
	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UMSDGameplayAbility>> Abilities;
	
	void AddAbilitiesToASC(UAbilitySystemComponent* ASC) const;
};
