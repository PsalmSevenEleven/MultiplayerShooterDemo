// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/MSD_LobbyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSD_LobbyCharacter() {}
// Cross Module References
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSD_LobbyCharacter();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSD_LobbyCharacter_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDCharacter();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void AMSD_LobbyCharacter::StaticRegisterNativesAMSD_LobbyCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMSD_LobbyCharacter);
	UClass* Z_Construct_UClass_AMSD_LobbyCharacter_NoRegister()
	{
		return AMSD_LobbyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMSD_LobbyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMSD_LobbyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMSDCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_LobbyCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSD_LobbyCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HordeShooter/Character/MSD_LobbyCharacter.h" },
		{ "ModuleRelativePath", "HordeShooter/Character/MSD_LobbyCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMSD_LobbyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMSD_LobbyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMSD_LobbyCharacter_Statics::ClassParams = {
		&AMSD_LobbyCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_LobbyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMSD_LobbyCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMSD_LobbyCharacter()
	{
		if (!Z_Registration_Info_UClass_AMSD_LobbyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMSD_LobbyCharacter.OuterSingleton, Z_Construct_UClass_AMSD_LobbyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMSD_LobbyCharacter.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<AMSD_LobbyCharacter>()
	{
		return AMSD_LobbyCharacter::StaticClass();
	}
	AMSD_LobbyCharacter::AMSD_LobbyCharacter() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMSD_LobbyCharacter);
	AMSD_LobbyCharacter::~AMSD_LobbyCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSD_LobbyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSD_LobbyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMSD_LobbyCharacter, AMSD_LobbyCharacter::StaticClass, TEXT("AMSD_LobbyCharacter"), &Z_Registration_Info_UClass_AMSD_LobbyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMSD_LobbyCharacter), 930928773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSD_LobbyCharacter_h_605903168(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSD_LobbyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSD_LobbyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
