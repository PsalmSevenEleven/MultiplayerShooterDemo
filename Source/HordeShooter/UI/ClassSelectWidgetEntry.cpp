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
	RemoveFromParent();
}
