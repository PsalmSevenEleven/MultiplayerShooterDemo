// Fill out your copyright notice in the Description page of Project Settings.


#include "MSDPlayerState.h"

#include "AbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"

AMSDPlayerState::AMSDPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	NetUpdateFrequency = 50.0f;
}

void AMSDPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const 
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMSDPlayerState, CharacterClass);
}


UAbilitySystemComponent* AMSDPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AMSDPlayerState::CopyProperties(APlayerState* PlayerState)
{
	Super::CopyProperties(PlayerState);

	AMSDPlayerState* NewPlayerState = Cast<AMSDPlayerState>(PlayerState);
	if(NewPlayerState)
	{
		NewPlayerState->CharacterClass = CharacterClass;
	}
}

void AMSDPlayerState::OverrideWith(APlayerState* PlayerState)
{
	Super::OverrideWith(PlayerState);

	AMSDPlayerState* OldPlayerState = Cast<AMSDPlayerState>(PlayerState);
	if(OldPlayerState)
	{
		 CharacterClass = OldPlayerState->CharacterClass;
	}
}

void AMSDPlayerState::SetCharacterClass(FString NewCharacterClass)
{
	CharacterClass = NewCharacterClass;
}
