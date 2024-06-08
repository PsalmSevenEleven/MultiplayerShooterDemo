// Fill out your copyright notice in the Description page of Project Settings.


#include "MSDGameplayTags.h"



UE_DEFINE_GAMEPLAY_TAG(TAG_Player, "Player")
#pragma region Player Status

UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Status, "Player.Status")

UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Status_Dead, "Player.Status.Dead")
UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Status_Downed, "Player.Status.Downed")
UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Status_Menu, "Player.Status.Menu")

#pragma endregion

UE_DEFINE_GAMEPLAY_TAG(TAG_Effect, "Effect")
#pragma region Effects

UE_DEFINE_GAMEPLAY_TAG(TAG_Effect_Damage, "Effect.Damage")
UE_DEFINE_GAMEPLAY_TAG(TAG_Effect_Heal, "Effect.Heal")
UE_DEFINE_GAMEPLAY_TAG(TAG_Effect_Stun, "Effect.Stun")
UE_DEFINE_GAMEPLAY_TAG(TAG_Effect_Slow, "Effect.Slow")
UE_DEFINE_GAMEPLAY_TAG(TAG_Effect_Charm, "Effect.Charm")
UE_DEFINE_GAMEPLAY_TAG(TAG_Effect_Fear, "Effect.Fear")
UE_DEFINE_GAMEPLAY_TAG(TAG_Effect_Taunt, "Effect.Taunt")

#pragma endregion

UE_DEFINE_GAMEPLAY_TAG(TAG_Ability, "Ability")
#pragma region Ability Tags

UE_DEFINE_GAMEPLAY_TAG(TAG_Ability_Firing, "Ability.Firing")
UE_DEFINE_GAMEPLAY_TAG(TAG_Ability_Reload, "Ability.Reload")
UE_DEFINE_GAMEPLAY_TAG(TAG_Ability_MeleeStrike, "Ability.MeleeStrike")

#pragma endregion