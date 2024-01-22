// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "NativeGameplayTags.h"

//Storing all the gameplay tags in one place

HORDESHOOTER_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Player);

#pragma region Player Status
HORDESHOOTER_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Player_Status);

HORDESHOOTER_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Player_Status_Dead);
HORDESHOOTER_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Player_Status_Downed);
HORDESHOOTER_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Player_Status_Menu);

#pragma endregion

