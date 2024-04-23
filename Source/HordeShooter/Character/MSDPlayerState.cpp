// Fill out your copyright notice in the Description page of Project Settings.


#include "MSDPlayerState.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystem/MSDPlayerAttributeSet.h"
#include "AbilitySystem/MSD_AbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"

AMSDPlayerState::AMSDPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UMSD_AbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	//From what I know, this will automatically register itself with the AbilitySystemComponent
	//because this playerstate is the ASC's owner
	AttributeSet = CreateDefaultSubobject<UMSDPlayerAttributeSet>(TEXT("AttributeSet"));

	NetUpdateFrequency = 50.0f;
}

void AMSDPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const 
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMSDPlayerState, CharacterClass);
	DOREPLIFETIME(AMSDPlayerState, SubclassIndex);
}


void AMSDPlayerState::SetSubclassIndex(int32 NewSubclassIndex)
{
	this->SubclassIndex = NewSubclassIndex;
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
		NewPlayerState->SubclassIndex = SubclassIndex;
	}
}

void AMSDPlayerState::OverrideWith(APlayerState* PlayerState)
{
	Super::OverrideWith(PlayerState);

	AMSDPlayerState* OldPlayerState = Cast<AMSDPlayerState>(PlayerState);
	if(OldPlayerState)
	{
		CharacterClass = OldPlayerState->CharacterClass;
		SubclassIndex = OldPlayerState->SubclassIndex;
	}
}

void AMSDPlayerState::SetCharacterClass(FString NewCharacterClass)
{
	CharacterClass = NewCharacterClass;
}
