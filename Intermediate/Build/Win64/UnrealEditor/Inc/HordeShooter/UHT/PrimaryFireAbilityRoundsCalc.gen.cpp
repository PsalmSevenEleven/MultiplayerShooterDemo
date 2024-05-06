// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/AbilitySystem/MMCs/PrimaryFireAbilityRoundsCalc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimaryFireAbilityRoundsCalc() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UPrimaryFireAbilityRoundsCalc();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UPrimaryFireAbilityRoundsCalc_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void UPrimaryFireAbilityRoundsCalc::StaticRegisterNativesUPrimaryFireAbilityRoundsCalc()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPrimaryFireAbilityRoundsCalc);
	UClass* Z_Construct_UClass_UPrimaryFireAbilityRoundsCalc_NoRegister()
	{
		return UPrimaryFireAbilityRoundsCalc::StaticClass();
	}
	struct Z_Construct_UClass_UPrimaryFireAbilityRoundsCalc_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrimaryFireAbilityRoundsCalc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryFireAbilityRoundsCalc_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryFireAbilityRoundsCalc_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/Character/AbilitySystem/MMCs/PrimaryFireAbilityRoundsCalc.h" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MMCs/PrimaryFireAbilityRoundsCalc.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrimaryFireAbilityRoundsCalc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrimaryFireAbilityRoundsCalc>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPrimaryFireAbilityRoundsCalc_Statics::ClassParams = {
		&UPrimaryFireAbilityRoundsCalc::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryFireAbilityRoundsCalc_Statics::Class_MetaDataParams), Z_Construct_UClass_UPrimaryFireAbilityRoundsCalc_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPrimaryFireAbilityRoundsCalc()
	{
		if (!Z_Registration_Info_UClass_UPrimaryFireAbilityRoundsCalc.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPrimaryFireAbilityRoundsCalc.OuterSingleton, Z_Construct_UClass_UPrimaryFireAbilityRoundsCalc_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPrimaryFireAbilityRoundsCalc.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UPrimaryFireAbilityRoundsCalc>()
	{
		return UPrimaryFireAbilityRoundsCalc::StaticClass();
	}
	UPrimaryFireAbilityRoundsCalc::UPrimaryFireAbilityRoundsCalc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrimaryFireAbilityRoundsCalc);
	UPrimaryFireAbilityRoundsCalc::~UPrimaryFireAbilityRoundsCalc() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MMCs_PrimaryFireAbilityRoundsCalc_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MMCs_PrimaryFireAbilityRoundsCalc_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPrimaryFireAbilityRoundsCalc, UPrimaryFireAbilityRoundsCalc::StaticClass, TEXT("UPrimaryFireAbilityRoundsCalc"), &Z_Registration_Info_UClass_UPrimaryFireAbilityRoundsCalc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPrimaryFireAbilityRoundsCalc), 1042800960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MMCs_PrimaryFireAbilityRoundsCalc_h_3111570598(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MMCs_PrimaryFireAbilityRoundsCalc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MMCs_PrimaryFireAbilityRoundsCalc_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
