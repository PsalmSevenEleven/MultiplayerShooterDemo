// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

UENUM(Blueprintable)
enum class EPlayerAbilityInputID: uint8
{
	Confirm UMETA(DisplayName = "Confirm"),
	Cancel UMETA(DisplayName = "Cancel"),
	Move UMETA(DisplayName = "Move"),
	Look UMETA(DisplayName = "Look"),
	Jump UMETA(DisplayName = "Jump"),
	Pause UMETA(DisplayName = "Pause"),
	Interact UMETA(DisplayName = "Interact"),
	PrimaryFire UMETA(DisplayName = "PrimaryFire"),
	// SecondaryFire UMETA(DisplayName = "SecondaryFire"),
	// SupportAbility UMETA(DisplayName = "SupportAbility"),
	// MovementAbility UMETA(DisplayName = "MovementAbility"),
	// Ping UMETA(DisplayName = "Ping"),
	// PlantSeed1 UMETA(DisplayName = "PlantSeed"),
	// PlantSeed2 UMETA(DisplayName = "PlantSeed2"),
};