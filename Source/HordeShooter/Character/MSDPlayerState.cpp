// Fill out your copyright notice in the Description page of Project Settings.


#include "MSDPlayerState.h"

#include "AbilitySystemComponent.h"

AMSDPlayerState::AMSDPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	NetUpdateFrequency = 50.0f;
}

UAbilitySystemComponent* AMSDPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
