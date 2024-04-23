// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "MSD_AbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UMSD_AbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:

	//Ability activation batching	
	UPROPERTY()
	TArray<struct FGameplayAbilitySpecHandle> HeldAbilityHandles;

	UPROPERTY()
	TArray<FGameplayAbilitySpecHandle> PressedAbilityHandles;

	UPROPERTY()
	TArray<FGameplayAbilitySpecHandle> ReleasedAbilityHandles;
	
	void QueueAbilityPressed(int32 Index);
	void QueueAbilityReleased(int32 Index);

	void HandleQueuedAbilities();

	virtual void AbilitySpecInputPressed(FGameplayAbilitySpec& Spec) override;
	virtual void AbilitySpecInputReleased(FGameplayAbilitySpec& Spec) override;
	
};
