// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "MSDPlayerAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UMSDPlayerAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData CurrentHealth;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(CurrentHealth);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(CurrentHealth);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(CurrentHealth);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UMSDPlayerAttributeSet, CurrentHealth);

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData MaxHealth;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxHealth);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxHealth);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxHealth);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UMSDPlayerAttributeSet, MaxHealth);


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData CurrentMana;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(CurrentMana);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(CurrentMana);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(CurrentMana);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UMSDPlayerAttributeSet, CurrentMana);


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData MaxMana;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxMana);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxMana);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxMana);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UMSDPlayerAttributeSet, MaxMana);

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData RemainingRounds;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(RemainingRounds);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(RemainingRounds);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(RemainingRounds);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UMSDPlayerAttributeSet, RemainingRounds);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData MaxRounds;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxRounds);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxRounds);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxRounds);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UMSDPlayerAttributeSet, MaxRounds);


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData WalkSpeed;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(WalkSpeed);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UMSDPlayerAttributeSet, WalkSpeed);


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData SprintSpeed;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(SprintSpeed);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UMSDPlayerAttributeSet, SprintSpeed);
	

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData JumpHeight;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(JumpHeight);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UMSDPlayerAttributeSet, JumpHeight);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Weight;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Weight);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UMSDPlayerAttributeSet, Weight);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData CultivateMultiplier;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(CultivateMultiplier);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UMSDPlayerAttributeSet, CultivateMultiplier);

	
};
