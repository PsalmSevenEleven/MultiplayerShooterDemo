// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/Classes/MSD_MeleeAttackProfile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSD_MeleeAttackProfile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_MeleeAttackProfile();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_MeleeAttackProfile_NoRegister();
	HORDESHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeCombo();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeleeCombo;
class UScriptStruct* FMeleeCombo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeleeCombo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeleeCombo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeleeCombo, (UObject*)Z_Construct_UPackage__Script_HordeShooter(), TEXT("MeleeCombo"));
	}
	return Z_Registration_Info_UScriptStruct_MeleeCombo.OuterSingleton;
}
template<> HORDESHOOTER_API UScriptStruct* StaticStruct<FMeleeCombo>()
{
	return FMeleeCombo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeleeCombo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_Sequence_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeCombo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "HordeShooter/Character/Classes/MSD_MeleeAttackProfile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeleeCombo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeleeCombo>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeleeCombo_Statics::NewProp_Sequence_Inner = { "Sequence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeCombo_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "MeleeCombo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//May eventually have other info that needs to be stored,\n//but for now this struct just exists to allow me to store an array of arrays\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Character/Classes/MSD_MeleeAttackProfile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "May eventually have other info that needs to be stored,\nbut for now this struct just exists to allow me to store an array of arrays" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeleeCombo_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeleeCombo, Sequence), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeCombo_Statics::NewProp_Sequence_MetaData), Z_Construct_UScriptStruct_FMeleeCombo_Statics::NewProp_Sequence_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeleeCombo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeCombo_Statics::NewProp_Sequence_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeCombo_Statics::NewProp_Sequence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeleeCombo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
		nullptr,
		&NewStructOps,
		"MeleeCombo",
		Z_Construct_UScriptStruct_FMeleeCombo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeCombo_Statics::PropPointers),
		sizeof(FMeleeCombo),
		alignof(FMeleeCombo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeCombo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeleeCombo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeCombo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMeleeCombo()
	{
		if (!Z_Registration_Info_UScriptStruct_MeleeCombo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeleeCombo.InnerSingleton, Z_Construct_UScriptStruct_FMeleeCombo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeleeCombo.InnerSingleton;
	}
	void UMSD_MeleeAttackProfile::StaticRegisterNativesUMSD_MeleeAttackProfile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSD_MeleeAttackProfile);
	UClass* Z_Construct_UClass_UMSD_MeleeAttackProfile_NoRegister()
	{
		return UMSD_MeleeAttackProfile::StaticClass();
	}
	struct Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Segments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Combos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Combos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Combos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/Character/Classes/MSD_MeleeAttackProfile.h" },
		{ "ModuleRelativePath", "HordeShooter/Character/Classes/MSD_MeleeAttackProfile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::NewProp_Segments_MetaData[] = {
		{ "Category", "MSD_MeleeAttackProfile" },
		{ "ModuleRelativePath", "HordeShooter/Character/Classes/MSD_MeleeAttackProfile.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_MeleeAttackProfile, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::NewProp_Segments_MetaData), Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::NewProp_Segments_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::NewProp_Combos_Inner = { "Combos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeleeCombo, METADATA_PARAMS(0, nullptr) }; // 3278632988
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::NewProp_Combos_MetaData[] = {
		{ "Category", "MSD_MeleeAttackProfile" },
		{ "ModuleRelativePath", "HordeShooter/Character/Classes/MSD_MeleeAttackProfile.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::NewProp_Combos = { "Combos", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_MeleeAttackProfile, Combos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::NewProp_Combos_MetaData), Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::NewProp_Combos_MetaData) }; // 3278632988
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::NewProp_Segments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::NewProp_Segments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::NewProp_Combos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::NewProp_Combos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSD_MeleeAttackProfile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::ClassParams = {
		&UMSD_MeleeAttackProfile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMSD_MeleeAttackProfile()
	{
		if (!Z_Registration_Info_UClass_UMSD_MeleeAttackProfile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSD_MeleeAttackProfile.OuterSingleton, Z_Construct_UClass_UMSD_MeleeAttackProfile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSD_MeleeAttackProfile.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSD_MeleeAttackProfile>()
	{
		return UMSD_MeleeAttackProfile::StaticClass();
	}
	UMSD_MeleeAttackProfile::UMSD_MeleeAttackProfile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSD_MeleeAttackProfile);
	UMSD_MeleeAttackProfile::~UMSD_MeleeAttackProfile() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_MeleeAttackProfile_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_MeleeAttackProfile_h_Statics::ScriptStructInfo[] = {
		{ FMeleeCombo::StaticStruct, Z_Construct_UScriptStruct_FMeleeCombo_Statics::NewStructOps, TEXT("MeleeCombo"), &Z_Registration_Info_UScriptStruct_MeleeCombo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeleeCombo), 3278632988U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_MeleeAttackProfile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSD_MeleeAttackProfile, UMSD_MeleeAttackProfile::StaticClass, TEXT("UMSD_MeleeAttackProfile"), &Z_Registration_Info_UClass_UMSD_MeleeAttackProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSD_MeleeAttackProfile), 116540601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_MeleeAttackProfile_h_2106865655(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_MeleeAttackProfile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_MeleeAttackProfile_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_MeleeAttackProfile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_MeleeAttackProfile_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
