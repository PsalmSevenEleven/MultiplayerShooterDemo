// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/ANS_MeleeTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANS_MeleeTrace() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UANS_MeleeTrace();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UANS_MeleeTrace_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void UANS_MeleeTrace::StaticRegisterNativesUANS_MeleeTrace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANS_MeleeTrace);
	UClass* Z_Construct_UClass_UANS_MeleeTrace_NoRegister()
	{
		return UANS_MeleeTrace::StaticClass();
	}
	struct Z_Construct_UClass_UANS_MeleeTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxHalfSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxHalfSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneToTrace_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneToTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseCleaveValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaseCleaveValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMontage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UANS_MeleeTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_MeleeTrace_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_MeleeTrace_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "HordeShooter/ANS_MeleeTrace.h" },
		{ "ModuleRelativePath", "HordeShooter/ANS_MeleeTrace.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_BoxHalfSize_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "HordeShooter/ANS_MeleeTrace.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_BoxHalfSize = { "BoxHalfSize", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UANS_MeleeTrace, BoxHalfSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_BoxHalfSize_MetaData), Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_BoxHalfSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "HordeShooter/ANS_MeleeTrace.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UANS_MeleeTrace, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_Offset_MetaData), Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_Offset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_BoneToTrace_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "HordeShooter/ANS_MeleeTrace.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_BoneToTrace = { "BoneToTrace", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UANS_MeleeTrace, BoneToTrace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_BoneToTrace_MetaData), Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_BoneToTrace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_DrawDebugType_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "HordeShooter/ANS_MeleeTrace.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UANS_MeleeTrace, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_DrawDebugType_MetaData), Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_DrawDebugType_MetaData) }; // 739760662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_DrawTime_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "HordeShooter/ANS_MeleeTrace.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UANS_MeleeTrace, DrawTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_DrawTime_MetaData), Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_DrawTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_BaseCleaveValue_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "HordeShooter/ANS_MeleeTrace.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_BaseCleaveValue = { "BaseCleaveValue", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UANS_MeleeTrace, BaseCleaveValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_BaseCleaveValue_MetaData), Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_BaseCleaveValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_CurrentMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "HordeShooter/ANS_MeleeTrace.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_CurrentMontage = { "CurrentMontage", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UANS_MeleeTrace, CurrentMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_CurrentMontage_MetaData), Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_CurrentMontage_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_HitActors_Inner = { "HitActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_HitActors_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/ANS_MeleeTrace.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_HitActors = { "HitActors", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UANS_MeleeTrace, HitActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_HitActors_MetaData), Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_HitActors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UANS_MeleeTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_BoxHalfSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_BoneToTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_DrawDebugType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_DrawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_BaseCleaveValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_CurrentMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_HitActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_MeleeTrace_Statics::NewProp_HitActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UANS_MeleeTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANS_MeleeTrace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UANS_MeleeTrace_Statics::ClassParams = {
		&UANS_MeleeTrace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UANS_MeleeTrace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UANS_MeleeTrace_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_MeleeTrace_Statics::Class_MetaDataParams), Z_Construct_UClass_UANS_MeleeTrace_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_MeleeTrace_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UANS_MeleeTrace()
	{
		if (!Z_Registration_Info_UClass_UANS_MeleeTrace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANS_MeleeTrace.OuterSingleton, Z_Construct_UClass_UANS_MeleeTrace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UANS_MeleeTrace.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UANS_MeleeTrace>()
	{
		return UANS_MeleeTrace::StaticClass();
	}
	UANS_MeleeTrace::UANS_MeleeTrace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UANS_MeleeTrace);
	UANS_MeleeTrace::~UANS_MeleeTrace() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_ANS_MeleeTrace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_ANS_MeleeTrace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UANS_MeleeTrace, UANS_MeleeTrace::StaticClass, TEXT("UANS_MeleeTrace"), &Z_Registration_Info_UClass_UANS_MeleeTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANS_MeleeTrace), 3360137955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_ANS_MeleeTrace_h_1262518058(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_ANS_MeleeTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_ANS_MeleeTrace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
