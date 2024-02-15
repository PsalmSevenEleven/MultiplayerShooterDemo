// Fill out your copyright notice in the Description page of Project Settings.


#include "ClassSelectWidgetHub.h"
#include "HordeShooter/Character/MSDCharacter.h"

void UClassSelectWidgetHub::NativeConstruct()
{
	Super::NativeConstruct();
	
	AMSDCharacter* Player = GetOwningPlayerPawn<AMSDCharacter>();

	for (int i = 0; i<ClassIds.Num(); i++)
	{
		if(ClassIds[i].PrimaryAssetName.ToString() == Player->CharacterClass)
		{
			SelectedClassIndex = i;
			LoadClass();
			break;
		}
	}
	
}

void UClassSelectWidgetHub::SelectButtonClicked()
{
	Super::SelectButtonClicked();
	
	AMSDCharacter* Player = GetOwningPlayerPawn<AMSDCharacter>();
	if(!Player)
	{
		return;
	}

	FString ClassId = ClassIds[SelectedClassIndex].PrimaryAssetName.ToString();

	Player->ChangeClass(ClassId);

	//TODO - save the player's class to the save game
}
