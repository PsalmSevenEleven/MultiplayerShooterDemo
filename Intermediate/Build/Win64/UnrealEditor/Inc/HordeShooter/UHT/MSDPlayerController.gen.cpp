// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/Input/MSDPlayerController.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSDPlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDPlayerController();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDPlayerController_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDHud_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDUserWidget_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UPlayerInterface_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	DEFINE_FUNCTION(AMSDPlayerController::execClearCombo_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCombo_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMSDPlayerController::execAddStrikeToCombo_Implementation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Strike);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStrikeToCombo_Implementation(Z_Param_Strike);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMSDPlayerController::execGetComboStrikes_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetComboStrikes_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMSDPlayerController::execSetComboTimer_Implementation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimerHandle*)Z_Param__Result=P_THIS->SetComboTimer_Implementation(Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMSDPlayerController::execGetMouseDirection_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetMouseDirection_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMSDPlayerController::execSetHudVisibility_Implementation)
	{
		P_GET_ENUM(ESlateVisibility,Z_Param_Visibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHudVisibility_Implementation(ESlateVisibility(Z_Param_Visibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMSDPlayerController::execSetCurrentWidget_Implementation)
	{
		P_GET_OBJECT(UMSDUserWidget,Z_Param_NewWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentWidget_Implementation(Z_Param_NewWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMSDPlayerController::execGetCurrentWidget_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMSDUserWidget**)Z_Param__Result=P_THIS->GetCurrentWidget_Implementation();
		P_NATIVE_END;
	}
	void AMSDPlayerController::StaticRegisterNativesAMSDPlayerController()
	{
		UClass* Class = AMSDPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddStrikeToCombo_Implementation", &AMSDPlayerController::execAddStrikeToCombo_Implementation },
			{ "ClearCombo_Implementation", &AMSDPlayerController::execClearCombo_Implementation },
			{ "GetComboStrikes_Implementation", &AMSDPlayerController::execGetComboStrikes_Implementation },
			{ "GetCurrentWidget_Implementation", &AMSDPlayerController::execGetCurrentWidget_Implementation },
			{ "GetMouseDirection_Implementation", &AMSDPlayerController::execGetMouseDirection_Implementation },
			{ "SetComboTimer_Implementation", &AMSDPlayerController::execSetComboTimer_Implementation },
			{ "SetCurrentWidget_Implementation", &AMSDPlayerController::execSetCurrentWidget_Implementation },
			{ "SetHudVisibility_Implementation", &AMSDPlayerController::execSetHudVisibility_Implementation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMSDPlayerController_AddStrikeToCombo_Implementation_Statics
	{
		struct MSDPlayerController_eventAddStrikeToCombo_Implementation_Parms
		{
			int32 Strike;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Strike;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMSDPlayerController_AddStrikeToCombo_Implementation_Statics::NewProp_Strike = { "Strike", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDPlayerController_eventAddStrikeToCombo_Implementation_Parms, Strike), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDPlayerController_AddStrikeToCombo_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDPlayerController_AddStrikeToCombo_Implementation_Statics::NewProp_Strike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDPlayerController_AddStrikeToCombo_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDPlayerController_AddStrikeToCombo_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDPlayerController, nullptr, "AddStrikeToCombo_Implementation", nullptr, nullptr, Z_Construct_UFunction_AMSDPlayerController_AddStrikeToCombo_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_AddStrikeToCombo_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSDPlayerController_AddStrikeToCombo_Implementation_Statics::MSDPlayerController_eventAddStrikeToCombo_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_AddStrikeToCombo_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDPlayerController_AddStrikeToCombo_Implementation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_AddStrikeToCombo_Implementation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMSDPlayerController_AddStrikeToCombo_Implementation_Statics::MSDPlayerController_eventAddStrikeToCombo_Implementation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSDPlayerController_AddStrikeToCombo_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDPlayerController_AddStrikeToCombo_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMSDPlayerController_ClearCombo_Implementation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDPlayerController_ClearCombo_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDPlayerController_ClearCombo_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDPlayerController, nullptr, "ClearCombo_Implementation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_ClearCombo_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDPlayerController_ClearCombo_Implementation_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMSDPlayerController_ClearCombo_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDPlayerController_ClearCombo_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation_Statics
	{
		struct MSDPlayerController_eventGetComboStrikes_Implementation_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDPlayerController_eventGetComboStrikes_Implementation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDPlayerController, nullptr, "GetComboStrikes_Implementation", nullptr, nullptr, Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation_Statics::MSDPlayerController_eventGetComboStrikes_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation_Statics::MSDPlayerController_eventGetComboStrikes_Implementation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation_Statics
	{
		struct MSDPlayerController_eventGetCurrentWidget_Implementation_Parms
		{
			UMSDUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDPlayerController_eventGetCurrentWidget_Implementation_Parms, ReturnValue), Z_Construct_UClass_UMSDUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDPlayerController, nullptr, "GetCurrentWidget_Implementation", nullptr, nullptr, Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation_Statics::MSDPlayerController_eventGetCurrentWidget_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation_Statics::MSDPlayerController_eventGetCurrentWidget_Implementation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMSDPlayerController_GetMouseDirection_Implementation_Statics
	{
		struct MSDPlayerController_eventGetMouseDirection_Implementation_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMSDPlayerController_GetMouseDirection_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDPlayerController_eventGetMouseDirection_Implementation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDPlayerController_GetMouseDirection_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDPlayerController_GetMouseDirection_Implementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDPlayerController_GetMouseDirection_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDPlayerController_GetMouseDirection_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDPlayerController, nullptr, "GetMouseDirection_Implementation", nullptr, nullptr, Z_Construct_UFunction_AMSDPlayerController_GetMouseDirection_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_GetMouseDirection_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSDPlayerController_GetMouseDirection_Implementation_Statics::MSDPlayerController_eventGetMouseDirection_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_GetMouseDirection_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDPlayerController_GetMouseDirection_Implementation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_GetMouseDirection_Implementation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMSDPlayerController_GetMouseDirection_Implementation_Statics::MSDPlayerController_eventGetMouseDirection_Implementation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSDPlayerController_GetMouseDirection_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDPlayerController_GetMouseDirection_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation_Statics
	{
		struct MSDPlayerController_eventSetComboTimer_Implementation_Parms
		{
			float Duration;
			FTimerHandle ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDPlayerController_eventSetComboTimer_Implementation_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDPlayerController_eventSetComboTimer_Implementation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(0, nullptr) }; // 3999327403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDPlayerController, nullptr, "SetComboTimer_Implementation", nullptr, nullptr, Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation_Statics::MSDPlayerController_eventSetComboTimer_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation_Statics::MSDPlayerController_eventSetComboTimer_Implementation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation_Statics
	{
		struct MSDPlayerController_eventSetCurrentWidget_Implementation_Parms
		{
			UMSDUserWidget* NewWidget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation_Statics::NewProp_NewWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation_Statics::NewProp_NewWidget = { "NewWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDPlayerController_eventSetCurrentWidget_Implementation_Parms, NewWidget), Z_Construct_UClass_UMSDUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation_Statics::NewProp_NewWidget_MetaData), Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation_Statics::NewProp_NewWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation_Statics::NewProp_NewWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDPlayerController, nullptr, "SetCurrentWidget_Implementation", nullptr, nullptr, Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation_Statics::MSDPlayerController_eventSetCurrentWidget_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation_Statics::MSDPlayerController_eventSetCurrentWidget_Implementation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation_Statics
	{
		struct MSDPlayerController_eventSetHudVisibility_Implementation_Parms
		{
			ESlateVisibility Visibility;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDPlayerController_eventSetHudVisibility_Implementation_Parms, Visibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 1295612096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation_Statics::NewProp_Visibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation_Statics::NewProp_Visibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDPlayerController, nullptr, "SetHudVisibility_Implementation", nullptr, nullptr, Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation_Statics::MSDPlayerController_eventSetHudVisibility_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation_Statics::MSDPlayerController_eventSetHudVisibility_Implementation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMSDPlayerController);
	UClass* Z_Construct_UClass_AMSDPlayerController_NoRegister()
	{
		return AMSDPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMSDPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastMouseDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastMouseDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMSDPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMSDPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMSDPlayerController_AddStrikeToCombo_Implementation, "AddStrikeToCombo_Implementation" }, // 3109868680
		{ &Z_Construct_UFunction_AMSDPlayerController_ClearCombo_Implementation, "ClearCombo_Implementation" }, // 3551794802
		{ &Z_Construct_UFunction_AMSDPlayerController_GetComboStrikes_Implementation, "GetComboStrikes_Implementation" }, // 3057667883
		{ &Z_Construct_UFunction_AMSDPlayerController_GetCurrentWidget_Implementation, "GetCurrentWidget_Implementation" }, // 3689190978
		{ &Z_Construct_UFunction_AMSDPlayerController_GetMouseDirection_Implementation, "GetMouseDirection_Implementation" }, // 432645218
		{ &Z_Construct_UFunction_AMSDPlayerController_SetComboTimer_Implementation, "SetComboTimer_Implementation" }, // 4113494651
		{ &Z_Construct_UFunction_AMSDPlayerController_SetCurrentWidget_Implementation, "SetCurrentWidget_Implementation" }, // 3092330984
		{ &Z_Construct_UFunction_AMSDPlayerController_SetHudVisibility_Implementation, "SetHudVisibility_Implementation" }, // 1434036576
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUDClass_MetaData[] = {
		{ "Category", "MSDPlayerController" },
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDPlayerController, HUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMSDHud_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUDClass_MetaData), Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUDClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUD_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDPlayerController, HUD), Z_Construct_UClass_UMSDHud_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUD_MetaData), Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Category", "MSDPlayerController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is to allow the player to use the pause key to back out of any menu\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is to allow the player to use the pause key to back out of any menu" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDPlayerController, CurrentWidget), Z_Construct_UClass_UMSDUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_CurrentWidget_MetaData), Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_CurrentWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_LastMouseDirection_MetaData[] = {
		{ "Category", "MSDPlayerController" },
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_LastMouseDirection = { "LastMouseDirection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDPlayerController, LastMouseDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_LastMouseDirection_MetaData), Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_LastMouseDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_PlayerInputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_PlayerInputMappingContext = { "PlayerInputMappingContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDPlayerController, PlayerInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_PlayerInputMappingContext_MetaData), Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_PlayerInputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMSDPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUDClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_CurrentWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_LastMouseDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_PlayerInputMappingContext,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMSDPlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlayerInterface_NoRegister, (int32)VTABLE_OFFSET(AMSDPlayerController, IPlayerInterface), false },  // 3953767536
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AMSDPlayerController, IAbilitySystemInterface), false },  // 3195502011
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMSDPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMSDPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMSDPlayerController_Statics::ClassParams = {
		&AMSDPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMSDPlayerController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMSDPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMSDPlayerController()
	{
		if (!Z_Registration_Info_UClass_AMSDPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMSDPlayerController.OuterSingleton, Z_Construct_UClass_AMSDPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMSDPlayerController.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<AMSDPlayerController>()
	{
		return AMSDPlayerController::StaticClass();
	}
	AMSDPlayerController::AMSDPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMSDPlayerController);
	AMSDPlayerController::~AMSDPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Input_MSDPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Input_MSDPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMSDPlayerController, AMSDPlayerController::StaticClass, TEXT("AMSDPlayerController"), &Z_Registration_Info_UClass_AMSDPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMSDPlayerController), 374135161U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Input_MSDPlayerController_h_4212455580(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Input_MSDPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Input_MSDPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
