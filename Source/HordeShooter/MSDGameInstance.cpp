// Fill out your copyright notice in the Description page of Project Settings.


#include "MSDGameInstance.h"

#include "Engine/AssetManager.h"

void UMSDGameInstance::LoadCharacterClassesForEquipScreen()
{
	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		return;
	}

	TArray<FPrimaryAssetId> CharacterClassesToLoad;
	AssetManager->GetPrimaryAssetIdList( FPrimaryAssetType("CharacterClassDefinition"), CharacterClassesToLoad);

	TArray<FName> Bundles = TArray<FName>({"HubAndMission", "HubOnly"});
	AssetManager->LoadPrimaryAssets(CharacterClassesToLoad, Bundles, FStreamableDelegate::CreateUObject(this, &UMSDGameInstance::CharacterClassesForEquipLoadedCallback));
	
}

void UMSDGameInstance::CharacterClassesForEquipLoadedCallback()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("CharacterClassesForEquipLoadedCallback"));\

	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		return;
	}

	TArray<FPrimaryAssetId> CharacterClassesToUnload;
	AssetManager->GetPrimaryAssetIdList( FPrimaryAssetType("CharacterClassDefinition"), CharacterClassesToUnload);

	AssetManager->UnloadPrimaryAssets(CharacterClassesToUnload);
}
