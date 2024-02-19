// Fill out your copyright notice in the Description page of Project Settings.


#include "ClassSelectWidgetEntry.h"

#include "HordeShooter/Character/MSDCharacter.h"

void UClassSelectWidgetEntry::NativeConstruct()
{
	Super::NativeConstruct();
	
	LoadClass();
}

void UClassSelectWidgetEntry::SelectButtonClicked()
{
	AMSDCharacter* Player = GetOwningPlayerPawn<AMSDCharacter>();
	if(!Player)
	{
		return;
	}

	FString ClassId = ClassIds[SelectedClassIndex].PrimaryAssetName.ToString();

	Player->ChangeClass(ClassId);
	
	APlayerController* PlayerController = GetOwningPlayer();
	if(!PlayerController)
	{
		return;
	}

	PlayerController->SetInputMode(FInputModeGameOnly());
	PlayerController->bShowMouseCursor = false;

	SaveGame = Cast<UMSDSaveGame>(UGameplayStatics::LoadGameFromSlot("SaveGame", 0));

	if(!SaveGame)
	{
		SaveGame = Cast<UMSDSaveGame>(UGameplayStatics::CreateSaveGameObject(UMSDSaveGame::StaticClass()));
	}

	SaveGame->SetClass(SelectedClassIndex, ClassIds[SelectedClassIndex].PrimaryAssetName.ToString());
	SaveGame->SelectedSubclassIndices[SelectedClassIndex] = SelectedSubclassIndex;

	UGameplayStatics::SaveGameToSlot(SaveGame, "SaveGame", 0);
	
	RemoveFromParent();
}
