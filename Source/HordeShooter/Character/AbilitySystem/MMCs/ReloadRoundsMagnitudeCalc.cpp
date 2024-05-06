// Fill out your copyright notice in the Description page of Project Settings.


#include "HordeShooter/Character/AbilitySystem/MMCs/ReloadRoundsMagnitudeCalc.h"

#include "AbilitySystemComponent.h"
#include "HordeShooter/Character/AbilitySystem/MSD_AbilitySystemComponent.h"
#include "HordeShooter/Character/AbilitySystem/Abilities/MSD_PrimaryFireAbility.h"

float UReloadRoundsMagnitudeCalc::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	//This just grabs the first primary fire ability it finds and returns the reload cost.
	//There should only be one primary fire ability, so this should be fine.

	//Normally wouldn't use a system this convoluted,
	//but it will save a designer from having to make a new cost GE for every primary fire ability

	UMSD_AbilitySystemComponent* MSD_ASC = Cast<UMSD_AbilitySystemComponent>(Spec.GetContext().GetInstigatorAbilitySystemComponent());
	
	UMSD_PrimaryFireAbility* PrimaryFireAbility = MSD_ASC->GetAbilityOfClass<UMSD_PrimaryFireAbility>();
	if (PrimaryFireAbility)
	{
		return PrimaryFireAbility->MagazineSize;
	}
	
	return 0.f;
}
