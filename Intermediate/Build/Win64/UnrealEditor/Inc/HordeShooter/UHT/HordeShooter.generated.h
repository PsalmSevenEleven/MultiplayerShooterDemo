// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HordeShooter/HordeShooter.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HORDESHOOTER_HordeShooter_generated_h
#error "HordeShooter.generated.h already included, missing '#pragma once' in HordeShooter.h"
#endif
#define HORDESHOOTER_HordeShooter_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_HordeShooter_h


#define FOREACH_ENUM_EPLAYERABILITYINPUTID(op) \
	op(EPlayerAbilityInputID::Confirm) \
	op(EPlayerAbilityInputID::Cancel) \
	op(EPlayerAbilityInputID::Move) \
	op(EPlayerAbilityInputID::Look) \
	op(EPlayerAbilityInputID::Jump) \
	op(EPlayerAbilityInputID::Pause) \
	op(EPlayerAbilityInputID::Interact) \
	op(EPlayerAbilityInputID::PrimaryFire) 

enum class EPlayerAbilityInputID : uint8;
template<> struct TIsUEnumClass<EPlayerAbilityInputID> { enum { Value = true }; };
template<> HORDESHOOTER_API UEnum* StaticEnum<EPlayerAbilityInputID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
