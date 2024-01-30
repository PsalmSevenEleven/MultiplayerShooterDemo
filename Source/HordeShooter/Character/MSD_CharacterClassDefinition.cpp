// Fill out your copyright notice in the Description page of Project Settings.


#include "MSD_CharacterClassDefinition.h"

FPrimaryAssetId UMSD_CharacterClassDefinition::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(FPrimaryAssetType("CharacterClassDefinition"), GetFName());
}
