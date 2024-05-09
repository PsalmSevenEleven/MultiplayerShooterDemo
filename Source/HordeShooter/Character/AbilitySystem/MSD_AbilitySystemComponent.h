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

	//Grabs the first activatable ability that this component has of the specified class
	template<class T>
	T* GetAbilityOfClass();
	
#pragma region Ability Input Batching
	
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
#pragma endregion
	
	//Yoinked from AbilitySystemComponent_Abilities.cpp, with modifications to allow me to specify mesh
	virtual float PlayMontageOnSkeletalMesh(UGameplayAbility* InAnimatingAbility, FGameplayAbilityActivationInfo ActivationInfo, UAnimMontage* NewAnimMontage, USkeletalMeshComponent* InSkeletalMesh, float InPlayRate, FName StartSectionName, float StartTimeSeconds);

	
};

template <class T>
inline T* UMSD_AbilitySystemComponent::GetAbilityOfClass()
{
	for (const FGameplayAbilitySpec& Spec : ActivatableAbilities.Items)
	{
		if (Spec.Ability->IsA(T::StaticClass()))
		{
			return Cast<T>(Spec.Ability);
		}
	}

	return nullptr;
}