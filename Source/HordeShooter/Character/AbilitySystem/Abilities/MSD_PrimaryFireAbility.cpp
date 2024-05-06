// Fill out your copyright notice in the Description page of Project Settings.


#include "HordeShooter/Character/AbilitySystem/Abilities/MSD_PrimaryFireAbility.h"

#include "AbilitySystemComponent.h"

UMSD_PrimaryFireAbility::UMSD_PrimaryFireAbility()
{
	//We know that this will be the primary fire ability,
	//so we might as well save the designers some time and have this set by default
	AbilityInputID = EPlayerAbilityInputID::PrimaryFire;
}

void UMSD_PrimaryFireAbility::OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnAvatarSet(ActorInfo, Spec);
	
	FGameplayEffectContextHandle EffectContext = ActorInfo->AbilitySystemComponent.Get()->MakeEffectContext();
	EffectContext.AddSourceObject(this);
	
	FGameplayEffectSpecHandle AttributesEffectHandle = ActorInfo->AbilitySystemComponent.Get()->MakeOutgoingSpec(OnGrantedEffect, 1, EffectContext);
	if (AttributesEffectHandle.IsValid())
	{
		ActorInfo->AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*AttributesEffectHandle.Data.Get(), ActorInfo->AbilitySystemComponent.Get());
	}
	
}

