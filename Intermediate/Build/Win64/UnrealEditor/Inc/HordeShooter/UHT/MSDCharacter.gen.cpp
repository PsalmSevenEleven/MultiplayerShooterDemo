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
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDCharacter();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDCharacter_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_AbilitySet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
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
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ChangeClass_Validate(Z_Param_NewClass))
		{
			RPC_ValidateFailed(TEXT("ChangeClass_Validate"));
			return;
		}
		P_THIS->ChangeClass_Implementation(Z_Param_NewClass);
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
	};
	static FName NAME_AMSDCharacter_ChangeClass = FName(TEXT("ChangeClass"));
	void AMSDCharacter::ChangeClass(const FString& NewClass)
	{
		MSDCharacter_eventChangeClass_Parms Parms;
		Parms.NewClass=NewClass;
		ProcessEvent(FindFunctionChecked(NAME_AMSDCharacter_ChangeClass),&Parms);
	}
	void AMSDCharacter::StaticRegisterNativesAMSDCharacter()
	{
		UClass* Class = AMSDCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateGASAbility", &AMSDCharacter::execActivateGASAbility },
			{ "ChangeClass", &AMSDCharacter::execChangeClass },
			{ "GetEnhancedInputActionValue", &AMSDCharacter::execGetEnhancedInputActionValue },
			{ "OnRep_CharacterClass", &AMSDCharacter::execOnRep_CharacterClass },
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
		{ "ModuleRelativePath", "Character/MSDCharacter.h" },
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
	struct Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewClass_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewClass;
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::NewProp_NewClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDCharacter_ChangeClass_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//probably also this\n" },
#endif
		{ "ModuleRelativePath", "Character/MSDCharacter.h" },
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
		{ "ModuleRelativePath", "Character/MSDCharacter.h" },
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
	struct Z_Construct_UFunction_AMSDCharacter_OnRep_CharacterClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDCharacter_OnRep_CharacterClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MSDCharacter.h" },
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultAbilities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMSDCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMSDCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMSDCharacter_ActivateGASAbility, "ActivateGASAbility" }, // 145749321
		{ &Z_Construct_UFunction_AMSDCharacter_ChangeClass, "ChangeClass" }, // 3713953884
		{ &Z_Construct_UFunction_AMSDCharacter_GetEnhancedInputActionValue, "GetEnhancedInputActionValue" }, // 1660070177
		{ &Z_Construct_UFunction_AMSDCharacter_OnRep_CharacterClass, "OnRep_CharacterClass" }, // 225875781
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is the character class for use in an actual match; at some point i'll need a lobby character class\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/MSDCharacter.h" },
		{ "ModuleRelativePath", "Character/MSDCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the character class for use in an actual match; at some point i'll need a lobby character class" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MSDCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MSDCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_HandsMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_HandsMesh = { "HandsMesh", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, HandsMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_HandsMesh_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_HandsMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Character/MSDCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Character/MSDCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Character/MSDCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "MSDCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultAbilities_MetaData[] = {
		{ "Category", "MSDCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//change this to edit all characters' base abilities\n" },
#endif
		{ "ModuleRelativePath", "Character/MSDCharacter.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "change this to edit all characters' base abilities" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultAbilities = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, DefaultAbilities), Z_Construct_UClass_UMSD_AbilitySet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultAbilities_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultAbilities_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CharacterClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MSDCharacter" },
		{ "ModuleRelativePath", "Character/MSDCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CharacterClass = { "CharacterClass", "OnRep_CharacterClass", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacter, CharacterClass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CharacterClass_MetaData), Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CharacterClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMSDCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_HandsMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_DefaultAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacter_Statics::NewProp_CharacterClass,
	};
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
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacter_Statics::PropPointers),
		0,
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

		const bool bIsValid = true
			&& Name_CharacterClass == ClassReps[(int32)ENetFields_Private::CharacterClass].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMSDCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMSDCharacter);
	AMSDCharacter::~AMSDCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMSDCharacter, AMSDCharacter::StaticClass, TEXT("AMSDCharacter"), &Z_Registration_Info_UClass_AMSDCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMSDCharacter), 2084107859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_987232265(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
