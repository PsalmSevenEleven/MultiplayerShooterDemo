// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/MSDCharacter.h"
#include "InputActionValue.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSDCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDCharacter();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDCharacter_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDPlayerController_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDPlayerState_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_AbilitySet_NoRegister();
	HORDESHOOTER_API UEnum* Z_Construct_UEnum_HordeShooter_EInteractionType();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	DEFINE_FUNCTION(AMSDCharacter::execCanInteract_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInteract_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMSDCharacter::execRetrieveInteractInfo_Implementation)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_InteractText);
		P_GET_ENUM_REF(EInteractionType,Z_Param_Out_InteractionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RetrieveInteractInfo_Implementation(Z_Param_Out_InteractText,(EInteractionType&)(Z_Param_Out_InteractionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMSDCharacter::execStopInteract_Implementation)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InteractorController);
		P_GET_OBJECT(APlayerState,Z_Param_InteractorState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopInteract_Implementation(Z_Param_InteractorController,Z_Param_InteractorState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMSDCharacter::execInteract_Implementation)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InteractorController);
		P_GET_OBJECT(APlayerState,Z_Param_InteractorState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation(Z_Param_InteractorController,Z_Param_InteractorState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMSDCharacter::execOnRep_CharacterClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CharacterClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMSDCharacter::execActivateGASAbility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_bOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateGASAbility(Z_Param_Index,Z_Param_bOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMSDCharacter::execChangeClass)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewSubclass);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ChangeClass_Validate(Z_Param_NewClass,Z_Param_NewSubclass))
		{
			RPC_ValidateFailed(TEXT("ChangeClass_Validate"));
			return;
		}
		P_THIS->ChangeClass_Implementation(Z_Param_NewClass,Z_Param_NewSubclass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMSDCharacter::execGetEnhancedInputActionValue)
	{
		P_GET_OBJECT(UInputAction,Z_Param_InAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputActionValue*)Z_Param__Result=P_THIS->GetEnhancedInputActionValue(Z_Param_InAction);
		P_NATIVE_END;
	}
	struct MSDCharacter_eventChangeClass_Parms
	{
		FString NewClass;
		int32 NewSubclass;
	};
	static FName NAME_AMSDCharacter_ChangeClass = FName(TEXT("ChangeClass"));
	void AMSDCharacter::ChangeClass(const FString& NewClass, int32 NewSubclass)
	{
		MSDCharacter_eventChangeClass_Parms Parms;
		Parms.NewClass=NewClass;
		Parms.NewSubclass=NewSubclass;
		ProcessEvent(FindFunctionChecked(NAME_AMSDCharacter_ChangeClass),&Parms);
	}
	void AMSDCharacter::StaticRegisterNativesAMSDCharacter()
	{
		UClass* Class = AMSDCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateGASAbility", &AMSDCharacter::execActivateGASAbility },
			{ "CanInteract_Implementation", &AMSDCharacter::execCanInteract_Implementation },
			{ "ChangeClass", &AMSDCharacter::execChangeClass },
			{ "GetEnhancedInputActionValue", &AMSDCharacter::execGetEnhancedInputActionValue },
			{ "Interact_Implementation", &AMSDCharacter::execInteract_Implementation },
			{ "OnRep_CharacterClass", &AMSDCharacter::execOnRep_CharacterClass },
			{ "RetrieveInteractInfo_Implementation", &AMSDCharacter::execRetrieveInteractInfo_Implementation },
			{ "StopInteract_Implementation", &AMSDCharacter::execStopInteract_Implementation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics
	{
		struct MSDCharacter_eventActivateGASAbility_Parms
		{
			int32 Index;
			bool bOn;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_bOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDCharacter_eventActivateGASAbility_Parms, Index), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics::NewProp_bOn_SetBit(void* Obj)
	{
		((MSDCharacter_eventActivateGASAbility_Parms*)Obj)->bOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics::NewProp_bOn = { "bOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MSDCharacter_eventActivateGASAbility_Parms), &Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics::NewProp_bOn_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics::NewProp_bOn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDCharacter, nullptr, "ActivateGASAbility", nullptr, nullptr, Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics::MSDCharacter_eventActivateGASAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics::MSDCharacter_eventActivateGASAbility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation_Statics
	{
		struct MSDCharacter_eventCanInteract_Implementation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MSDCharacter_eventCanInteract_Implementation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MSDCharacter_eventCanInteract_Implementation_Parms), &Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDCharacter, nullptr, "CanInteract_Implementation", nullptr, nullptr, Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation_Statics::MSDCharacter_eventCanInteract_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation_Statics::MSDCharacter_eventCanInteract_Implementation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewClass_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewSubclass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::NewProp_NewClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::NewProp_NewClass = { "NewClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDCharacter_eventChangeClass_Parms, NewClass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::NewProp_NewClass_MetaData), Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::NewProp_NewClass_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::NewProp_NewSubclass = { "NewSubclass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDCharacter_eventChangeClass_Parms, NewSubclass), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::NewProp_NewClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::NewProp_NewSubclass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//probably also this\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "probably also this" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDCharacter, nullptr, "ChangeClass", nullptr, nullptr, Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::PropPointers), sizeof(MSDCharacter_eventChangeClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(MSDCharacter_eventChangeClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSDCharacter_ChangeClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue_Statics
	{
		struct MSDCharacter_eventGetEnhancedInputActionValue_Parms
		{
			UInputAction* InAction;
			FInputActionValue ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue_Statics::NewProp_InAction = { "InAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDCharacter_eventGetEnhancedInputActionValue_Parms, InAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDCharacter_eventGetEnhancedInputActionValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue_Statics::NewProp_InAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TODO - move this to an interface\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO - move this to an interface" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDCharacter, nullptr, "GetEnhancedInputActionValue", nullptr, nullptr, Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue_Statics::MSDCharacter_eventGetEnhancedInputActionValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue_Statics::MSDCharacter_eventGetEnhancedInputActionValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMSDCharacter_Interact_Implementation_Statics
	{
		struct MSDCharacter_eventInteract_Implementation_Parms
		{
			APlayerController* InteractorController;
			APlayerState* InteractorState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMSDCharacter_Interact_Implementation_Statics::NewProp_InteractorController = { "InteractorController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDCharacter_eventInteract_Implementation_Parms, InteractorController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMSDCharacter_Interact_Implementation_Statics::NewProp_InteractorState = { "InteractorState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDCharacter_eventInteract_Implementation_Parms, InteractorState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDCharacter_Interact_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDCharacter_Interact_Implementation_Statics::NewProp_InteractorController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDCharacter_Interact_Implementation_Statics::NewProp_InteractorState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDCharacter_Interact_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDCharacter_Interact_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDCharacter, nullptr, "Interact_Implementation", nullptr, nullptr, Z_Construct_UFunction_AMSDCharacter_Interact_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_Interact_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSDCharacter_Interact_Implementation_Statics::MSDCharacter_eventInteract_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_Interact_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDCharacter_Interact_Implementation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_Interact_Implementation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMSDCharacter_Interact_Implementation_Statics::MSDCharacter_eventInteract_Implementation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSDCharacter_Interact_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDCharacter_Interact_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMSDCharacter_OnRep_CharacterClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDCharacter_OnRep_CharacterClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDCharacter_OnRep_CharacterClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDCharacter, nullptr, "OnRep_CharacterClass", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_OnRep_CharacterClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDCharacter_OnRep_CharacterClass_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMSDCharacter_OnRep_CharacterClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDCharacter_OnRep_CharacterClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics
	{
		struct MSDCharacter_eventRetrieveInteractInfo_Implementation_Parms
		{
			FString InteractText;
			EInteractionType InteractionType;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InteractText;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics::NewProp_InteractText = { "InteractText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDCharacter_eventRetrieveInteractInfo_Implementation_Parms, InteractText), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDCharacter_eventRetrieveInteractInfo_Implementation_Parms, InteractionType), Z_Construct_UEnum_HordeShooter_EInteractionType, METADATA_PARAMS(0, nullptr) }; // 1306913732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics::NewProp_InteractText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics::NewProp_InteractionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics::NewProp_InteractionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDCharacter, nullptr, "RetrieveInteractInfo_Implementation", nullptr, nullptr, Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics::MSDCharacter_eventRetrieveInteractInfo_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics::MSDCharacter_eventRetrieveInteractInfo_Implementation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation_Statics
	{
		struct MSDCharacter_eventStopInteract_Implementation_Parms
		{
			APlayerController* InteractorController;
			APlayerState* InteractorState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation_Statics::NewProp_InteractorController = { "InteractorController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDCharacter_eventStopInteract_Implementation_Parms, InteractorController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation_Statics::NewProp_InteractorState = { "InteractorState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDCharacter_eventStopInteract_Implementation_Parms, InteractorState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation_Statics::NewProp_InteractorController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation_Statics::NewProp_InteractorState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDCharacter, nullptr, "StopInteract_Implementation", nullptr, nullptr, Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation_Statics::MSDCharacter_eventStopInteract_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation_Statics::MSDCharacter_eventStopInteract_Implementation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMSDCharacter);
	UClass* Z_Construct_UClass_AMSDCharacter_NoRegister()
	{
		return AMSDCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMSDCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandsMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandsMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InteractionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterSubclass_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterSubclass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MSDPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MSDPlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MSDPlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MSDPlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMSDCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMSDCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility, "ActivateGASAbility" }, // 3028325636
		{ &Z_Construct_UFunction_AMSDCharacter_CanInteract_Implementation, "CanInteract_Implementation" }, // 4240704365
		{ &Z_Construct_UFunction_AMSDCharacter_ChangeClass, "ChangeClass" }, // 2516042370
		{ &Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue, "GetEnhancedInputActionValue" }, // 3030841535
		{ &Z_Construct_UFunction_AMSDCharacter_Interact_Implementation, "Interact_Implementation" }, // 101733048
		{ &Z_Construct_UFunction_AMSDCharacter_OnRep_CharacterClass, "OnRep_CharacterClass" }, // 639952702
		{ &Z_Construct_UFunction_AMSDCharacter_RetrieveInteractInfo_Implementation, "RetrieveInteractInfo_Implementation" }, // 2596121046
		{ &Z_Construct_UFunction_AMSDCharacter_StopInteract_Implementation, "StopInteract_Implementation" }, // 998568718
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HordeShooter/Character/MSDCharacter.h" },
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_HandsMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_HandsMesh = { "HandsMesh", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, HandsMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_HandsMesh_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_HandsMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Input actions for stuff that is defined in this class (not GAS)\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input actions for stuff that is defined in this class (not GAS)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_InteractAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_InteractAction_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_InteractAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "MSDCharacter" },
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, InteractionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_InteractionDistance_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_InteractionDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CurrentInteractable_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CurrentInteractable = { "CurrentInteractable", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, CurrentInteractable), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CurrentInteractable_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CurrentInteractable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CharacterClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MSDCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This was originally an FPrimaryAssetId, but in the interest of saving bandwidth, I've changed it to a string\n//The process for using the variable is slightly more convoluted now,\n//but it shouldn't be noticeably worse in terms of perf\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This was originally an FPrimaryAssetId, but in the interest of saving bandwidth, I've changed it to a string\nThe process for using the variable is slightly more convoluted now,\nbut it shouldn't be noticeably worse in terms of perf" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CharacterClass = { "CharacterClass", "OnRep_CharacterClass", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, CharacterClass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CharacterClass_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CharacterClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CharacterSubclass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MSDCharacter" },
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CharacterSubclass = { "CharacterSubclass", "OnRep_CharacterClass", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, CharacterSubclass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CharacterSubclass_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CharacterSubclass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MSDPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MSDPlayerState = { "MSDPlayerState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, MSDPlayerState), Z_Construct_UClass_AMSDPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MSDPlayerState_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MSDPlayerState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "MSDCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MSDPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MSDPlayerController = { "MSDPlayerController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, MSDPlayerController), Z_Construct_UClass_AMSDPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MSDPlayerController_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MSDPlayerController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultAbilities_MetaData[] = {
		{ "Category", "MSDCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//change this to edit all characters' non-class-specific abilities\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Character/MSDCharacter.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "change this to edit all characters' non-class-specific abilities" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultAbilities = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, DefaultAbilities), Z_Construct_UClass_UMSD_AbilitySet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultAbilities_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultAbilities_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMSDCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_HandsMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_InteractAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_InteractionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CurrentInteractable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CharacterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CharacterSubclass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MSDPlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MSDPlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultAbilities,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMSDCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(AMSDCharacter, IInteractableInterface), false },  // 1417254257
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMSDCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMSDCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMSDCharacter_Statics::ClassParams = {
		&AMSDCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMSDCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMSDCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMSDCharacter()
	{
		if (!Z_Registration_Info_UClass_AMSDCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMSDCharacter.OuterSingleton, Z_Construct_UClass_AMSDCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMSDCharacter.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<AMSDCharacter>()
	{
		return AMSDCharacter::StaticClass();
	}

	void AMSDCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CharacterClass(TEXT("CharacterClass"));
		static const FName Name_CharacterSubclass(TEXT("CharacterSubclass"));

		const bool bIsValid = true
			&& Name_CharacterClass == ClassReps[(int32)ENetFields_Private::CharacterClass].Property->GetFName()
			&& Name_CharacterSubclass == ClassReps[(int32)ENetFields_Private::CharacterSubclass].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMSDCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMSDCharacter);
	AMSDCharacter::~AMSDCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMSDCharacter, AMSDCharacter::StaticClass, TEXT("AMSDCharacter"), &Z_Registration_Info_UClass_AMSDCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMSDCharacter), 4113061712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_743501797(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
