// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/AbilitySystem/MSD_AbilitySet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSD_AbilitySet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_AbilitySet();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_AbilitySet_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDGameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void UMSD_AbilitySet::StaticRegisterNativesUMSD_AbilitySet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSD_AbilitySet);
	UClass* Z_Construct_UClass_UMSD_AbilitySet_NoRegister()
	{
		return UMSD_AbilitySet::StaticClass();
	}
	struct Z_Construct_UClass_UMSD_AbilitySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Abilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSD_AbilitySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_AbilitySet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_AbilitySet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/Character/AbilitySystem/MSD_AbilitySet.h" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSD_AbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMSD_AbilitySet_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UMSDGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_AbilitySet_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "MSD_AbilitySet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TODO - maybe add specific variables for primary fire ability, melee ability, etc.\n//might make getting the abilities we want easier when referring to them later\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSD_AbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO - maybe add specific variables for primary fire ability, melee ability, etc.\nmight make getting the abilities we want easier when referring to them later" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSD_AbilitySet_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_AbilitySet, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_AbilitySet_Statics::NewProp_Abilities_MetaData), Z_Construct_UClass_UMSD_AbilitySet_Statics::NewProp_Abilities_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSD_AbilitySet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_AbilitySet_Statics::NewProp_Abilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_AbilitySet_Statics::NewProp_Abilities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSD_AbilitySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSD_AbilitySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSD_AbilitySet_Statics::ClassParams = {
		&UMSD_AbilitySet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMSD_AbilitySet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_AbilitySet_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_AbilitySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSD_AbilitySet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_AbilitySet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMSD_AbilitySet()
	{
		if (!Z_Registration_Info_UClass_UMSD_AbilitySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSD_AbilitySet.OuterSingleton, Z_Construct_UClass_UMSD_AbilitySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSD_AbilitySet.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSD_AbilitySet>()
	{
		return UMSD_AbilitySet::StaticClass();
	}
	UMSD_AbilitySet::UMSD_AbilitySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSD_AbilitySet);
	UMSD_AbilitySet::~UMSD_AbilitySet() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSD_AbilitySet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSD_AbilitySet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSD_AbilitySet, UMSD_AbilitySet::StaticClass, TEXT("UMSD_AbilitySet"), &Z_Registration_Info_UClass_UMSD_AbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSD_AbilitySet), 257195700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSD_AbilitySet_h_1830899610(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSD_AbilitySet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSD_AbilitySet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
