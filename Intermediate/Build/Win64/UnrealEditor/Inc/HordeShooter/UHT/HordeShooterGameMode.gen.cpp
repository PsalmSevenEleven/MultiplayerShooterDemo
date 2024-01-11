// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/HordeShooterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHordeShooterGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AHordeShooterGameMode();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AHordeShooterGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void AHordeShooterGameMode::StaticRegisterNativesAHordeShooterGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHordeShooterGameMode);
	UClass* Z_Construct_UClass_AHordeShooterGameMode_NoRegister()
	{
		return AHordeShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHordeShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHordeShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHordeShooterGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HordeShooterGameMode.h" },
		{ "ModuleRelativePath", "HordeShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHordeShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHordeShooterGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHordeShooterGameMode_Statics::ClassParams = {
		&AHordeShooterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHordeShooterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHordeShooterGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AHordeShooterGameMode()
	{
		if (!Z_Registration_Info_UClass_AHordeShooterGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHordeShooterGameMode.OuterSingleton, Z_Construct_UClass_AHordeShooterGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHordeShooterGameMode.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<AHordeShooterGameMode>()
	{
		return AHordeShooterGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHordeShooterGameMode);
	AHordeShooterGameMode::~AHordeShooterGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_HordeShooterGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_HordeShooterGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHordeShooterGameMode, AHordeShooterGameMode::StaticClass, TEXT("AHordeShooterGameMode"), &Z_Registration_Info_UClass_AHordeShooterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHordeShooterGameMode), 1930350860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_HordeShooterGameMode_h_3679059749(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_HordeShooterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_HordeShooterGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
