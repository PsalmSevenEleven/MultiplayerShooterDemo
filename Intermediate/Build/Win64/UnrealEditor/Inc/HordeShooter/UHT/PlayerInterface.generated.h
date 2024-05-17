// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HordeShooter/Interfaces/PlayerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;
class UInputAction;
class UMSDUserWidget;
class USkeletalMeshComponent;
enum class ESlateVisibility : uint8;
struct FInputActionValue;
#ifdef HORDESHOOTER_PlayerInterface_generated_h
#error "PlayerInterface.generated.h already included, missing '#pragma once' in PlayerInterface.h"
#endif
#define HORDESHOOTER_PlayerInterface_generated_h

#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_SPARSE_DATA
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector2D GetMouseDirection_Implementation() { return FVector2D(ForceInit); }; \
	virtual FInputActionValue GetInputActionValue_Implementation(UInputAction* InAction) { return FInputActionValue(); }; \
	virtual void SetHudVisibility_Implementation(ESlateVisibility Visibility) {}; \
	virtual void SetCurrentWidget_Implementation(UMSDUserWidget* NewWidget) {}; \
	virtual UMSDUserWidget* GetCurrentWidget_Implementation() const { return NULL; }; \
	virtual USkeletalMeshComponent* RetrieveBodyMesh_Implementation() const { return NULL; }; \
	virtual USkeletalMeshComponent* RetrieveHandsMesh_Implementation() const { return NULL; }; \
	virtual UCameraComponent* GetCameraComponent_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetMouseDirection); \
	DECLARE_FUNCTION(execGetInputActionValue); \
	DECLARE_FUNCTION(execSetHudVisibility); \
	DECLARE_FUNCTION(execSetCurrentWidget); \
	DECLARE_FUNCTION(execGetCurrentWidget); \
	DECLARE_FUNCTION(execRetrieveBodyMesh); \
	DECLARE_FUNCTION(execRetrieveHandsMesh); \
	DECLARE_FUNCTION(execGetCameraComponent);


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_CALLBACK_WRAPPERS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HORDESHOOTER_API UPlayerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HORDESHOOTER_API UPlayerInterface(UPlayerInterface&&); \
	HORDESHOOTER_API UPlayerInterface(const UPlayerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HORDESHOOTER_API, UPlayerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInterface) \
	HORDESHOOTER_API virtual ~UPlayerInterface();


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPlayerInterface(); \
	friend struct Z_Construct_UClass_UPlayerInterface_Statics; \
public: \
	DECLARE_CLASS(UPlayerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HordeShooter"), HORDESHOOTER_API) \
	DECLARE_SERIALIZER(UPlayerInterface)


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPlayerInterface() {} \
public: \
	typedef UPlayerInterface UClassType; \
	typedef IPlayerInterface ThisClass; \
	static UCameraComponent* Execute_GetCameraComponent(const UObject* O); \
	static UMSDUserWidget* Execute_GetCurrentWidget(const UObject* O); \
	static FInputActionValue Execute_GetInputActionValue(UObject* O, UInputAction* InAction); \
	static FVector2D Execute_GetMouseDirection(UObject* O); \
	static USkeletalMeshComponent* Execute_RetrieveBodyMesh(const UObject* O); \
	static USkeletalMeshComponent* Execute_RetrieveHandsMesh(const UObject* O); \
	static void Execute_SetCurrentWidget(UObject* O, UMSDUserWidget* NewWidget); \
	static void Execute_SetHudVisibility(UObject* O, ESlateVisibility Visibility); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_14_PROLOG
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_SPARSE_DATA \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_CALLBACK_WRAPPERS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORDESHOOTER_API UClass* StaticClass<class UPlayerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
