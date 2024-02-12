// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/MSDCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
struct FInputActionValue;
#ifdef HORDESHOOTER_MSDCharacter_generated_h
#error "MSDCharacter.generated.h already included, missing '#pragma once' in MSDCharacter.h"
#endif
#define HORDESHOOTER_MSDCharacter_generated_h

#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_25_SPARSE_DATA
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ChangeClass_Validate(const FString& ); \
	virtual void ChangeClass_Implementation(const FString& NewClass); \
 \
	DECLARE_FUNCTION(execOnRep_CharacterClass); \
	DECLARE_FUNCTION(execActivateGASAbility); \
	DECLARE_FUNCTION(execChangeClass); \
	DECLARE_FUNCTION(execGetEnhancedInputActionValue);


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_25_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_25_CALLBACK_WRAPPERS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMSDCharacter(); \
	friend struct Z_Construct_UClass_AMSDCharacter_Statics; \
public: \
	DECLARE_CLASS(AMSDCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HordeShooter"), NO_API) \
	DECLARE_SERIALIZER(AMSDCharacter) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterClass=NETFIELD_REP_START, \
		NETFIELD_REP_END=CharacterClass	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMSDCharacter(AMSDCharacter&&); \
	NO_API AMSDCharacter(const AMSDCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMSDCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMSDCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMSDCharacter) \
	NO_API virtual ~AMSDCharacter();


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_22_PROLOG
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_25_SPARSE_DATA \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_25_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_25_CALLBACK_WRAPPERS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORDESHOOTER_API UClass* StaticClass<class AMSDCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
