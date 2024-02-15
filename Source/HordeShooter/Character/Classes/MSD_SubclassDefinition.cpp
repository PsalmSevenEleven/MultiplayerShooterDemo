// Fill out your copyright notice in the Description page of Project Settings.


#include "MSD_SubclassDefinition.h"

FPrimaryAssetId UMSD_SubclassDefinition::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(FPrimaryAssetType("CharacterSubclassDefinition"), GetFName());

}