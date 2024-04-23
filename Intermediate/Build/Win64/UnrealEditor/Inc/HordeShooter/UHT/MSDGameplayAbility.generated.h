// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HordeShooter/Character/AbilitySystem/MSDGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HORDESHOOTER_MSDGameplayAbility_generated_h
#error "MSDGameplayAbility.generated.h already included, missing '#pragma once' in MSDGameplayAbility.h"
#endif
#define HORDESHOOTER_MSDGameplayAbility_generated_h

#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_22_SPARSE_DATA
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_22_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMSDGameplayAbility(); \
	friend struct Z_Construct_UClass_UMSDGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UMSDGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HordeShooter"), NO_API) \
	DECLARE_SERIALIZER(UMSDGameplayAbility)


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMSDGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMSDGameplayAbility(UMSDGameplayAbility&&); \
	NO_API UMSDGameplayAbility(const UMSDGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMSDGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMSDGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMSDGameplayAbility) \
	NO_API virtual ~UMSDGameplayAbility();


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_19_PROLOG
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_22_SPARSE_DATA \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_22_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORDESHOOTER_API UClass* StaticClass<class UMSDGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h


#define FOREACH_ENUM_EABILITYACTIVATIONTYPE(op) \
	op(EAbilityActivationType::ActivateWhileHeld) \
	op(EAbilityActivationType::ActivateOnPressed) \
	op(EAbilityActivationType::ActivateOnGranted) 

enum class EAbilityActivationType;
template<> struct TIsUEnumClass<EAbilityActivationType> { enum { Value = true }; };
template<> HORDESHOOTER_API UEnum* StaticEnum<EAbilityActivationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
