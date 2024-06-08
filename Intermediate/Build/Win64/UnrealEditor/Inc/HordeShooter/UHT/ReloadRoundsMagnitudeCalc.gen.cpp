// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/AbilitySystem/MMCs/ReloadRoundsMagnitudeCalc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReloadRoundsMagnitudeCalc() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UReloadRoundsMagnitudeCalc();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UReloadRoundsMagnitudeCalc_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void UReloadRoundsMagnitudeCalc::StaticRegisterNativesUReloadRoundsMagnitudeCalc()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReloadRoundsMagnitudeCalc);
	UClass* Z_Construct_UClass_UReloadRoundsMagnitudeCalc_NoRegister()
	{
		return UReloadRoundsMagnitudeCalc::StaticClass();
	}
	struct Z_Construct_UClass_UReloadRoundsMagnitudeCalc_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReloadRoundsMagnitudeCalc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReloadRoundsMagnitudeCalc_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadRoundsMagnitudeCalc_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/Character/AbilitySystem/MMCs/ReloadRoundsMagnitudeCalc.h" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MMCs/ReloadRoundsMagnitudeCalc.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReloadRoundsMagnitudeCalc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReloadRoundsMagnitudeCalc>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReloadRoundsMagnitudeCalc_Statics::ClassParams = {
		&UReloadRoundsMagnitudeCalc::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReloadRoundsMagnitudeCalc_Statics::Class_MetaDataParams), Z_Construct_UClass_UReloadRoundsMagnitudeCalc_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UReloadRoundsMagnitudeCalc()
	{
		if (!Z_Registration_Info_UClass_UReloadRoundsMagnitudeCalc.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReloadRoundsMagnitudeCalc.OuterSingleton, Z_Construct_UClass_UReloadRoundsMagnitudeCalc_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReloadRoundsMagnitudeCalc.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UReloadRoundsMagnitudeCalc>()
	{
		return UReloadRoundsMagnitudeCalc::StaticClass();
	}
	UReloadRoundsMagnitudeCalc::UReloadRoundsMagnitudeCalc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReloadRoundsMagnitudeCalc);
	UReloadRoundsMagnitudeCalc::~UReloadRoundsMagnitudeCalc() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MMCs_ReloadRoundsMagnitudeCalc_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MMCs_ReloadRoundsMagnitudeCalc_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReloadRoundsMagnitudeCalc, UReloadRoundsMagnitudeCalc::StaticClass, TEXT("UReloadRoundsMagnitudeCalc"), &Z_Registration_Info_UClass_UReloadRoundsMagnitudeCalc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReloadRoundsMagnitudeCalc), 3907441433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MMCs_ReloadRoundsMagnitudeCalc_h_3770234806(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MMCs_ReloadRoundsMagnitudeCalc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MMCs_ReloadRoundsMagnitudeCalc_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
