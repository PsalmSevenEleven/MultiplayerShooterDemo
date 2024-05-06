// Fill out your copyright notice in the Description page of Project Settings.


#include "HordeShooter/Character/AbilitySystem/Abilities/MSDReloadAbility.h"

#include "AbilitySystemComponent.h"
#include "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h"
#include "HordeShooter/Character/AbilitySystem/MSDPlayerAttributeSet.h"
#include "MSD_PrimaryFireAbility.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "HordeShooter/Background_Infrastructure/MSDGameplayTags.h"
#include "HordeShooter/Character/MSDCharacter.h"
#include "HordeShooter/Character/AbilitySystem/MSD_AbilitySystemComponent.h"

void UMSDReloadAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                        const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                        const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	int Cost = 0;
	//Since there shouldn't ever be more than one primary fire ability, we can just grab the first one we find
	for (auto Ability : ActorInfo->AbilitySystemComponent->GetActivatableAbilities())
	{
		UMSD_PrimaryFireAbility* PFA = Cast<UMSD_PrimaryFireAbility>(Ability.Ability);
		if(PFA)
		{
			Cost = PFA->ReloadCost;
			break;
		}
	}

	
	const UMSDPlayerAttributeSet* PlayerAttributeSet = Cast<UMSDPlayerAttributeSet>(ActorInfo->AbilitySystemComponent->GetAttributeSet(UMSDPlayerAttributeSet::StaticClass()));

	if(PlayerAttributeSet
		&& PlayerAttributeSet->RemainingRounds.GetCurrentValue() == PlayerAttributeSet->MaxRounds.GetCurrentValue())
	{
		K2_EndAbility();
		return;
	}

	
	int Budget = 0;
	if(PlayerAttributeSet)
	{
		Budget = PlayerAttributeSet->CurrentMana.GetCurrentValue();
	}

	USkeletalMeshComponent* Hands = Cast<AMSDCharacter>(ActorInfo->AvatarActor)->GetHandsMesh();

	UAnimMontage* Montage = Cast<UMSD_AbilitySystemComponent>(ActorInfo->AbilitySystemComponent)->GetAbilityOfClass<UMSD_PrimaryFireAbility>()->Montage;

	if(!Montage)
	{
		K2_EndAbility();
		return;
	}
	
	if(Budget < Cost)
	{
		UAbilityTask_PlayMontageOnSM* Task = UAbilityTask_PlayMontageOnSM::CreatePlayMontageOnSMProxy(this, "Reload", Montage, Hands,1.0f, FName("FailedReload"));
		Task->OnCancelled.AddDynamic(this, &UMSDReloadAbility::K2_EndAbility);
		Task->OnCompleted.AddDynamic(this, &UMSDReloadAbility::K2_EndAbility);
		Task->OnBlendOut.AddDynamic(this, &UMSDReloadAbility::K2_EndAbility);
		Task->OnInterrupted.AddDynamic(this, &UMSDReloadAbility::K2_EndAbility);
		Task->ReadyForActivation();
	}
	else
	{
	
		GetActorInfo().AbilitySystemComponent->AddLooseGameplayTag(TAG_Ability_Reload);
	
		UAbilityTask_PlayMontageOnSM* Task = UAbilityTask_PlayMontageOnSM::CreatePlayMontageOnSMProxy(this, "FailedReload", Montage, Hands, 1.0f, FName("Reload") );
		Task->OnCancelled.AddDynamic(this, &UMSDReloadAbility::CancelledCallback);
		Task->OnCompleted.AddDynamic(this, &UMSDReloadAbility::CompletedCallback);
		Task->OnBlendOut.AddDynamic(this, &UMSDReloadAbility::BlendOutCallback);
		Task->OnInterrupted.AddDynamic(this, &UMSDReloadAbility::InterruptedCallback);
		
		Task->ReadyForActivation();
	}
	
}

void UMSDReloadAbility::CompletedCallback()
{

	FGameplayEffectContextHandle EffectContext = GetActorInfo().AbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	FGameplayEffectSpecHandle EffectSpec = GetActorInfo().AbilitySystemComponent->MakeOutgoingSpec(ReloadEffect, 1.0f, GetActorInfo().AbilitySystemComponent->MakeEffectContext());
	
	if (EffectSpec.IsValid())
	{
		GetActorInfo().AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*EffectSpec.Data.Get(), GetActorInfo().AbilitySystemComponent.Get());
	}
	
	
	CancelledCallback();
}

void UMSDReloadAbility::CancelledCallback()
{
	GetActorInfo().AbilitySystemComponent->RemoveLooseGameplayTag(TAG_Ability_Reload);
	K2_EndAbility();
}

void UMSDReloadAbility::InterruptedCallback()
{
	CancelledCallback();
}

void UMSDReloadAbility::BlendOutCallback()
{
	CompletedCallback();
}
