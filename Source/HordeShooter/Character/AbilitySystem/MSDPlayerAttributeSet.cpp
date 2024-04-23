// Fill out your copyright notice in the Description page of Project Settings.


#include "HordeShooter/Character/AbilitySystem/MSDPlayerAttributeSet.h"

void UMSDPlayerAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	if(Attribute == GetCurrentHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxHealth());
	}
	else if(Attribute == GetCurrentManaAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxMana());
	}
			
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("PreAttributeChange"));
	Super::PreAttributeChange(Attribute, NewValue);
}

void UMSDPlayerAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
}
