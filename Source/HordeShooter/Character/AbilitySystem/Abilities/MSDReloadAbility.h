// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HordeShooter/Character/AbilitySystem/Abilities/MSDGameplayAbility.h"
#include "MSDReloadAbility.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UMSDReloadAbility : public UMSDGameplayAbility
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	const TSubclassOf<UGameplayEffect> ReloadEffect;

	
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	
	
	UFUNCTION()
	void CompletedCallback();

	UFUNCTION()
	void CancelledCallback();

	//These two aren't technically necessary,
	//but if in the future I want there to be some distinction between the four delegates
	//I have the groundwork laid out
	UFUNCTION()
	void InterruptedCallback();

	UFUNCTION()
	void BlendOutCallback();
	
};
