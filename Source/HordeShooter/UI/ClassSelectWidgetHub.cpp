// Fill out your copyright notice in the Description page of Project Settings.


#include "ClassSelectWidgetHub.h"
#include "HordeShooter/Character/MSDCharacter.h"

void UClassSelectWidgetHub::NativeConstruct()
{
	Super::NativeConstruct();
	
	if(!SaveGame)
	{
		SaveGame = Cast<UMSDSaveGame>(UGameplayStatics::CreateSaveGameObject(UMSDSaveGame::StaticClass()));
	}
	SelectedClassIndex = SaveGame->GetClassIndex();

	LoadClass();
}

void UClassSelectWidgetHub::SelectButtonClicked()
{
	
	AMSDCharacter* Player = GetOwningPlayerPawn<AMSDCharacter>();
	if(!Player)
	{
		return;
	}

	FString ClassId = ClassIds[SelectedClassIndex].PrimaryAssetName.ToString();
	Player->ChangeClass(ClassId, SelectedSubclassIndex);

	if(!SaveGame)
	{
		SaveGame = Cast<UMSDSaveGame>(UGameplayStatics::CreateSaveGameObject(UMSDSaveGame::StaticClass()));
	}

	SaveGame->SetClass(SelectedClassIndex, ClassIds[SelectedClassIndex].PrimaryAssetName.ToString());
	SaveGame->SelectedSubclassIndices[SelectedClassIndex] = SelectedSubclassIndex;

	UGameplayStatics::SaveGameToSlot(SaveGame, "SaveGame", 0);
}
