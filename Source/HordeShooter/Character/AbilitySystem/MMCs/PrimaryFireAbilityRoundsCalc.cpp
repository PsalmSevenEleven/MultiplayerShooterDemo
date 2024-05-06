// Fill out your copyright notice in the Description page of Project Settings.


#include "HordeShooter/Character/AbilitySystem/MMCs/PrimaryFireAbilityRoundsCalc.h"

#include "HordeShooter/Character/AbilitySystem/MSD_AbilitySystemComponent.h"
#include "HordeShooter/Character/AbilitySystem/Abilities/MSD_PrimaryFireAbility.h"

float UPrimaryFireAbilityRoundsCalc::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	
	UMSD_AbilitySystemComponent* MSD_ASC = Cast<UMSD_AbilitySystemComponent>(Spec.GetContext().GetInstigatorAbilitySystemComponent());

	if (UMSD_PrimaryFireAbility* PrimaryFireAbility = MSD_ASC->GetAbilityOfClass<UMSD_PrimaryFireAbility>())
	{
		return PrimaryFireAbility->MagazineSize;
	}
	
	return 0.f;
}
