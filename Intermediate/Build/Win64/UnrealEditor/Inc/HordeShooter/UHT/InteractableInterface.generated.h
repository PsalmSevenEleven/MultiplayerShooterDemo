// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HordeShooter/Interfaces/InteractableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class APlayerState;
enum class EInteractionType : uint8;
#ifdef HORDESHOOTER_InteractableInterface_generated_h
#error "InteractableInterface.generated.h already included, missing '#pragma once' in InteractableInterface.h"
#endif
#define HORDESHOOTER_InteractableInterface_generated_h

#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_SPARSE_DATA
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetPercentComplete_Implementation() { return 0; }; \
	virtual bool CanInteract_Implementation() { return false; }; \
	virtual void RetrieveInteractInfo_Implementation(FString& InteractText, EInteractionType& InteractionType) {}; \
	virtual void StopInteract_Implementation(APlayerController* InteractorController, APlayerState* InteractorState) {}; \
	virtual void Interact_Implementation(APlayerController* InteractorController, APlayerState* InteractorState) {}; \
 \
	DECLARE_FUNCTION(execGetPercentComplete); \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execRetrieveInteractInfo); \
	DECLARE_FUNCTION(execStopInteract); \
	DECLARE_FUNCTION(execInteract);


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_CALLBACK_WRAPPERS
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HORDESHOOTER_API UInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HORDESHOOTER_API UInteractableInterface(UInteractableInterface&&); \
	HORDESHOOTER_API UInteractableInterface(const UInteractableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HORDESHOOTER_API, UInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableInterface) \
	HORDESHOOTER_API virtual ~UInteractableInterface();


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractableInterface(); \
	friend struct Z_Construct_UClass_UInteractableInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HordeShooter"), HORDESHOOTER_API) \
	DECLARE_SERIALIZER(UInteractableInterface)


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractableInterface() {} \
public: \
	typedef UInteractableInterface UClassType; \
	typedef IInteractableInterface ThisClass; \
	static bool Execute_CanInteract(UObject* O); \
	static float Execute_GetPercentComplete(UObject* O); \
	static void Execute_Interact(UObject* O, APlayerController* InteractorController, APlayerState* InteractorState); \
	static void Execute_RetrieveInteractInfo(UObject* O, FString& InteractText, EInteractionType& InteractionType); \
	static void Execute_StopInteract(UObject* O, APlayerController* InteractorController, APlayerState* InteractorState); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_19_PROLOG
#define FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_SPARSE_DATA \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_CALLBACK_WRAPPERS \
	FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORDESHOOTER_API UClass* StaticClass<class UInteractableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h


#define FOREACH_ENUM_EINTERACTIONTYPE(op) \
	op(EInteractionType::InteractionType_Press) \
	op(EInteractionType::InteractionType_Hold) 

enum class EInteractionType : uint8;
template<> struct TIsUEnumClass<EInteractionType> { enum { Value = true }; };
template<> HORDESHOOTER_API UEnum* StaticEnum<EInteractionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
