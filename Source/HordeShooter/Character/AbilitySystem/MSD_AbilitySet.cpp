// Fill out your copyright notice in the Description page of Project Settings.


#include "MSD_AbilitySet.h"

#include "AbilitySystemComponent.h"
#include "HordeShooter/Character/AbilitySystem/Abilities/MSDGameplayAbility.h"

void UMSD_AbilitySet::AddAbilitiesToASC(UAbilitySystemComponent* ASC) const
{
	ensure(ASC);
	if(!ASC->IsOwnerActorAuthoritative())
	{
		return;
	}

	for(int i = 0; i < Abilities.Num(); i++)
	{
		if(!Abilities[i])
		{
			continue;
		}

		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("AddAbilitiesToASC"));
		
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(Abilities[i].GetDefaultObject(), 1, static_cast<int16>(Abilities[i].GetDefaultObject()->AbilityInputID));
		ASC->GiveAbility(AbilitySpec);
	}
	
	// for (auto & Ability : Abilities)
	// {
	// 	if(!Ability)
	// 	{
	// 		continue;
	// 	}
	// 	FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(Ability->StaticClass(), 1, static_cast<int16>(Ability.GetDefaultObject()->AbilityInputID));
	// 	ASC->GiveAbility(AbilitySpec);
	// }
}
