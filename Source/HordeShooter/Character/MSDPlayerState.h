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


protected:
	
	UPROPERTY()
	UAbilitySystemComponent* AbilitySystemComponent;
	
};
