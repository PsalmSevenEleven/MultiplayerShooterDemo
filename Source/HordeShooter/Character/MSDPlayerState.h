// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "MSDPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API AMSDPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

	AMSDPlayerState();

public:
	UFUNCTION(BlueprintCallable)
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	virtual void CopyProperties(APlayerState* PlayerState) override;

	virtual void OverrideWith(APlayerState* PlayerState) override;

	void SetCharacterClass(FString NewCharacterClass);

	UFUNCTION(BlueprintCallable)
	FString GetCharacterClass() const { return CharacterClass; }

	void SetSubclassIndex(int32 NewSubclassIndex);
	
	UFUNCTION(BlueprintCallable)
	int32 GetSubclassIndex() const {return SubclassIndex; };

	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
protected:
	UPROPERTY()
	UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	class UMSDPlayerAttributeSet* AttributeSet;

	UPROPERTY(Replicated)
	FString CharacterClass = "none";

	UPROPERTY(Replicated)
	int32 SubclassIndex = 0;


	
};
