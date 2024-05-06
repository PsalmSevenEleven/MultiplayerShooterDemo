// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/AbilitySystem/Abilities/MSDReloadAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSDReloadAbility() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDGameplayAbility();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDReloadAbility();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDReloadAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	DEFINE_FUNCTION(UMSDReloadAbility::execBlendOutCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlendOutCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMSDReloadAbility::execInterruptedCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InterruptedCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMSDReloadAbility::execCancelledCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelledCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMSDReloadAbility::execCompletedCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompletedCallback();
		P_NATIVE_END;
	}
	void UMSDReloadAbility::StaticRegisterNativesUMSDReloadAbility()
	{
		UClass* Class = UMSDReloadAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlendOutCallback", &UMSDReloadAbility::execBlendOutCallback },
			{ "CancelledCallback", &UMSDReloadAbility::execCancelledCallback },
			{ "CompletedCallback", &UMSDReloadAbility::execCompletedCallback },
			{ "InterruptedCallback", &UMSDReloadAbility::execInterruptedCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMSDReloadAbility_BlendOutCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSDReloadAbility_BlendOutCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/Abilities/MSDReloadAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSDReloadAbility_BlendOutCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSDReloadAbility, nullptr, "BlendOutCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSDReloadAbility_BlendOutCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSDReloadAbility_BlendOutCallback_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMSDReloadAbility_BlendOutCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSDReloadAbility_BlendOutCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMSDReloadAbility_CancelledCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSDReloadAbility_CancelledCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/Abilities/MSDReloadAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSDReloadAbility_CancelledCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSDReloadAbility, nullptr, "CancelledCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSDReloadAbility_CancelledCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSDReloadAbility_CancelledCallback_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMSDReloadAbility_CancelledCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSDReloadAbility_CancelledCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMSDReloadAbility_CompletedCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSDReloadAbility_CompletedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/Abilities/MSDReloadAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSDReloadAbility_CompletedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSDReloadAbility, nullptr, "CompletedCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSDReloadAbility_CompletedCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSDReloadAbility_CompletedCallback_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMSDReloadAbility_CompletedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSDReloadAbility_CompletedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMSDReloadAbility_InterruptedCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSDReloadAbility_InterruptedCallback_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//These two aren't technically necessary,\n//but if in the future I want there to be some distinction between the four delegates\n//I have the groundwork laid out\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/Abilities/MSDReloadAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These two aren't technically necessary,\nbut if in the future I want there to be some distinction between the four delegates\nI have the groundwork laid out" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSDReloadAbility_InterruptedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSDReloadAbility, nullptr, "InterruptedCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSDReloadAbility_InterruptedCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSDReloadAbility_InterruptedCallback_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMSDReloadAbility_InterruptedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSDReloadAbility_InterruptedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSDReloadAbility);
	UClass* Z_Construct_UClass_UMSDReloadAbility_NoRegister()
	{
		return UMSDReloadAbility::StaticClass();
	}
	struct Z_Construct_UClass_UMSDReloadAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReloadEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSDReloadAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMSDGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDReloadAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMSDReloadAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMSDReloadAbility_BlendOutCallback, "BlendOutCallback" }, // 2655050818
		{ &Z_Construct_UFunction_UMSDReloadAbility_CancelledCallback, "CancelledCallback" }, // 3837449704
		{ &Z_Construct_UFunction_UMSDReloadAbility_CompletedCallback, "CompletedCallback" }, // 3657677537
		{ &Z_Construct_UFunction_UMSDReloadAbility_InterruptedCallback, "InterruptedCallback" }, // 1617991387
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDReloadAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDReloadAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/Character/AbilitySystem/Abilities/MSDReloadAbility.h" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/Abilities/MSDReloadAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDReloadAbility_Statics::NewProp_ReloadEffect_MetaData[] = {
		{ "Category", "MSDReloadAbility" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/Abilities/MSDReloadAbility.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMSDReloadAbility_Statics::NewProp_ReloadEffect = { "ReloadEffect", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDReloadAbility, ReloadEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDReloadAbility_Statics::NewProp_ReloadEffect_MetaData), Z_Construct_UClass_UMSDReloadAbility_Statics::NewProp_ReloadEffect_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSDReloadAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDReloadAbility_Statics::NewProp_ReloadEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSDReloadAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSDReloadAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSDReloadAbility_Statics::ClassParams = {
		&UMSDReloadAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMSDReloadAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSDReloadAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDReloadAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSDReloadAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDReloadAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMSDReloadAbility()
	{
		if (!Z_Registration_Info_UClass_UMSDReloadAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSDReloadAbility.OuterSingleton, Z_Construct_UClass_UMSDReloadAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSDReloadAbility.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSDReloadAbility>()
	{
		return UMSDReloadAbility::StaticClass();
	}
	UMSDReloadAbility::UMSDReloadAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSDReloadAbility);
	UMSDReloadAbility::~UMSDReloadAbility() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_Abilities_MSDReloadAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_Abilities_MSDReloadAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSDReloadAbility, UMSDReloadAbility::StaticClass, TEXT("UMSDReloadAbility"), &Z_Registration_Info_UClass_UMSDReloadAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSDReloadAbility), 4008332280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_Abilities_MSDReloadAbility_h_3159535422(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_Abilities_MSDReloadAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_Abilities_MSDReloadAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
