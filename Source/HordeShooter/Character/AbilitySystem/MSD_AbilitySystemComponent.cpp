// Fill out your copyright notice in the Description page of Project Settings.


#include "HordeShooter/Character/AbilitySystem/MSD_AbilitySystemComponent.h"

#include "MSDGameplayAbility.h"
#include "HordeShooter/HordeShooter.h"

void UMSD_AbilitySystemComponent::QueueAbilityPressed(int32 Index)
{
	//normally I would check to see if the index is valid,
	//but due to the way that input is assigned via the InputAction itself
	//I know it will always at least be a valid enum value within EPlayerAbilityInputID

	//This was basically yoinked straight from Lyra, but with a ew key modifications
	for (const FGameplayAbilitySpec& AbilitySpec : ActivatableAbilities.Items)
	{
		//Make sure that the ability is a MSDGameplayAbility.
		//If it isn't, it won't have an AbilityInputID to compare against the input index
		const UMSDGameplayAbility* Ability = Cast<UMSDGameplayAbility>(AbilitySpec.Ability);
		if(!Ability)
		{
			continue;
		}

		//This is the same as in Lyra.
		//If this ability can be activated by the given input index,
		//add it to the list of pressed and held abilities and let HandleQueuedAbilities() take care of it
		if (static_cast<int32>(Ability->AbilityInputID) == Index)
		{
			//We use AddUnique here because it is theoretically possible to have the same ability
			//activate multiple times on the frame, however unlikely that may be
			PressedAbilityHandles.AddUnique(AbilitySpec.Handle);
			HeldAbilityHandles.AddUnique(AbilitySpec.Handle);
		}
	}
	
}

void UMSD_AbilitySystemComponent::QueueAbilityReleased(int32 Index)
{
	//If the index isn't valid, there's no ability to release anyway, so no validation check here either

	//Pretty much the same code as before, just with ReleasedAbilityHandles instead of PressedAbilityHandles and HeldAbilityHandles
	for (const FGameplayAbilitySpec& AbilitySpec : ActivatableAbilities.Items)
	{
		
		const UMSDGameplayAbility* Ability = Cast<UMSDGameplayAbility>(AbilitySpec.Ability);
		if(!Ability)
		{
			continue;
		}

		if (static_cast<int32>(Ability->AbilityInputID) == Index)
		{
			ReleasedAbilityHandles.AddUnique(AbilitySpec.Handle);
			
			//This is the only place where we remove the ability from HeldAbilityHandles
			HeldAbilityHandles.Remove(AbilitySpec.Handle);
		}
	}
}

void UMSD_AbilitySystemComponent::HandleQueuedAbilities()
{
	//Lyra has a section here that allows input to be disabled by a tag.
	//I may add something similar here in the future, but for now it isn't necessary

	//Initializing an array before hand and cleaning out any junk data that may have slipped in
	static TArray<FGameplayAbilitySpecHandle> AbilitiesToActivate;
	AbilitiesToActivate.Reset();

	//For each held ability,
	for (const FGameplayAbilitySpecHandle& SpecHandle : HeldAbilityHandles)
	{
		//find the ability spec, if any, 
		if (const FGameplayAbilitySpec* AbilitySpec = FindAbilitySpecFromHandle(SpecHandle))
		{
			//make sure there is an ability attached to the spec, and that it isn't already active,
			if (AbilitySpec->Ability && !AbilitySpec->IsActive())
			{

				//make sure it's an MSDGameplayAbility,
				const UMSDGameplayAbility* Ability = Cast<UMSDGameplayAbility>(AbilitySpec->Ability);
				if(!Ability)
				{
					continue;
				}

				if (Ability->GetActivationType() == EAbilityActivationType::ActivateWhileHeld)
				{
					//and if it is, add it to the list of abilities to activate
					AbilitiesToActivate.AddUnique(AbilitySpec->Handle);
				}
			}
		}
	}

	//
	// Process all abilities that had their input pressed this frame.
	//
	for (const FGameplayAbilitySpecHandle& SpecHandle : PressedAbilityHandles)
	{
		if (FGameplayAbilitySpec* AbilitySpec = FindAbilitySpecFromHandle(SpecHandle))
		{
			if (AbilitySpec->Ability)
			{
				//required for activation and replication
				AbilitySpec->InputPressed = true;

				if (AbilitySpec->IsActive())
				{
					//Activate the ability
					AbilitySpecInputPressed(*AbilitySpec);
				}
				else
				{
					const UMSDGameplayAbility* Ability = Cast<UMSDGameplayAbility>(AbilitySpec->Ability);

					if (Ability->GetActivationType() == EAbilityActivationType::ActivateOnPressed)
					{
						AbilitiesToActivate.AddUnique(AbilitySpec->Handle);
					}
				}
			}
		}
	}

	//Activate everything in the list.
	//Lyra's comments say that they are bundled together in this array to
	//prevent hold and press events from activating abilities more times that intended
	for (const FGameplayAbilitySpecHandle& AbilitySpecHandle : AbilitiesToActivate)
	{
		TryActivateAbility(AbilitySpecHandle);
	}

	//Now handle everything that was released
	for (const FGameplayAbilitySpecHandle& SpecHandle : ReleasedAbilityHandles)
	{
		if (FGameplayAbilitySpec* AbilitySpec = FindAbilitySpecFromHandle(SpecHandle))
		{
			if (AbilitySpec->Ability)
			{
				//Tell the ability that its input has been released
				AbilitySpec->InputPressed = false;

				//If the ability isn't active we don't need to deactivate it, so here's a quick check
				if (AbilitySpec->IsActive())
				{
					//Release the ability
					AbilitySpecInputReleased(*AbilitySpec);
				}
			}
		}
	}

	//Presses and releases only need to be handled on the frame that they occur,
	//so clean up those arrays for the next one
	PressedAbilityHandles.Reset();
	ReleasedAbilityHandles.Reset();

	//Held abilities do need to persist over multiple frames however, so we won't need to do anything with that array here
	//That's handled in QueueAbilityReleased()
}

void UMSD_AbilitySystemComponent::AbilitySpecInputPressed(FGameplayAbilitySpec& Spec)
{
	Super::AbilitySpecInputPressed(Spec);

	if (Spec.IsActive())
	{
		InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputPressed, Spec.Handle, Spec.ActivationInfo.GetActivationPredictionKey());
	}
}

void UMSD_AbilitySystemComponent::AbilitySpecInputReleased(FGameplayAbilitySpec& Spec)
{
	Super::AbilitySpecInputReleased(Spec);

	//This is required for the 'Wait Input Released' BP node to function correctly
	if (Spec.IsActive())
	{
		InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputReleased, Spec.Handle, Spec.ActivationInfo.GetActivationPredictionKey());
	}
}
