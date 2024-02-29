// Fill out your copyright notice in the Description page of Project Settings.


#include "MSDSaveGame.h"

void UMSDSaveGame::SetClass(int32 Index, FString Name)
{
	SelectedClassIndex = Index;
	SelectedClassName = Name;
}

int32 UMSDSaveGame::GetClassIndex()
{
	return SelectedClassIndex;
}

FString UMSDSaveGame::GetClassName()
{
	return SelectedClassName;
}
