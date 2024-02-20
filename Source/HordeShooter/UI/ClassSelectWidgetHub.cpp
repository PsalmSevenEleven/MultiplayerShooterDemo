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
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("SelectedClassIndex: %d"), SelectedClassIndex));

	LoadClass();
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

	Player->ChangeClass(ClassId, SelectedSubclassIndex);

	//TODO - save the player's class to the save game

	if(!SaveGame)
	{
		SaveGame = Cast<UMSDSaveGame>(UGameplayStatics::CreateSaveGameObject(UMSDSaveGame::StaticClass()));
	}

	SaveGame->SetClass(SelectedClassIndex, ClassIds[SelectedClassIndex].PrimaryAssetName.ToString());
	
	SaveGame->SelectedSubclassIndices[SelectedClassIndex] = SelectedSubclassIndex;

	UGameplayStatics::SaveGameToSlot(SaveGame, "SaveGame", 0);
}
