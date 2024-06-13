// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HordeShooter/Character/MSDPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
struct FTimerHandle;
#ifdef HORDESHOOTER_MSDPlayerState_generated_h
#error "MSDPlayerState.generated.h already included, missing '#pragma once' in MSDPlayerState.h"
#endif
#define HORDESHOOTER_MSDPlayerState_generated_h

#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_18_SPARSE_DATA
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetComboTimer_Implementation); \
	DECLARE_FUNCTION(execClearCombo_Implementation); \
	DECLARE_FUNCTION(execAddStrikeToCombo_Implementation); \
	DECLARE_FUNCTION(execGetComboStrikes_Implementation); \
	DECLARE_FUNCTION(execEndCombo); \
	DECLARE_FUNCTION(execGetSubclassIndex); \
	DECLARE_FUNCTION(execGetCharacterClass); \
	DECLARE_FUNCTION(execGetAbilitySystemComponent);


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_18_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMSDPlayerState(); \
	friend struct Z_Construct_UClass_AMSDPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMSDPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HordeShooter"), NO_API) \
	DECLARE_SERIALIZER(AMSDPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AMSDPlayerState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterClass=NETFIELD_REP_START, \
		SubclassIndex, \
		NETFIELD_REP_END=SubclassIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMSDPlayerState(AMSDPlayerState&&); \
	NO_API AMSDPlayerState(const AMSDPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMSDPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMSDPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMSDPlayerState) \
	NO_API virtual ~AMSDPlayerState();


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_15_PROLOG
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_18_SPARSE_DATA \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_18_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORDESHOOTER_API UClass* StaticClass<class AMSDPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
