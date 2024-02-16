// Fill out your copyright notice in the Description page of Project Settings.


#include "MSD_CharacterClassDefinition.h"

FMSDPrimaryAssetID::FMSDPrimaryAssetID()
{
	DisplayName = "None";
	PrimaryAssetId = FPrimaryAssetId();
}

FMSDPrimaryAssetID::FMSDPrimaryAssetID(FString InDisplayName, FPrimaryAssetId InPrimaryAssetId)
{
	DisplayName = InDisplayName;
	PrimaryAssetId = InPrimaryAssetId;
}

FPrimaryAssetId UMSD_CharacterClassDefinition::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(FPrimaryAssetType("CharacterClassDefinition"), GetFName());
}
