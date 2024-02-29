// Fill out your copyright notice in the Description page of Project Settings.


#include "MSDGameplayTags.h"


UE_DEFINE_GAMEPLAY_TAG(TAG_Player, "Player")

#pragma region Player Status

UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Status, "Player.Status")

UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Status_Dead, "Player.Status.Dead")
UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Status_Downed, "Player.Status.Downed")
UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Status_Menu, "Player.Status.Menu")

#pragma endregion