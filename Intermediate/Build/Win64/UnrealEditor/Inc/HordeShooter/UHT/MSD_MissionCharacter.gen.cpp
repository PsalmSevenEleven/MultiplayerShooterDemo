// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/MSD_MissionCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSD_MissionCharacter() {}
// Cross Module References
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSD_MissionCharacter();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSD_MissionCharacter_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDCharacter();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDCharacterMenuViewer_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void AMSD_MissionCharacter::StaticRegisterNativesAMSD_MissionCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMSD_MissionCharacter);
	UClass* Z_Construct_UClass_AMSD_MissionCharacter_NoRegister()
	{
		return AMSD_MissionCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMSD_MissionCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassSelectWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ClassSelectWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassViewerClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ClassViewerClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMSD_MissionCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMSDCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_MissionCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSD_MissionCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HordeShooter/Character/MSD_MissionCharacter.h" },
		{ "ModuleRelativePath", "HordeShooter/Character/MSD_MissionCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSD_MissionCharacter_Statics::NewProp_ClassSelectWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "HordeShooter/Character/MSD_MissionCharacter.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AMSD_MissionCharacter_Statics::NewProp_ClassSelectWidgetClass = { "ClassSelectWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSD_MissionCharacter, ClassSelectWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_MissionCharacter_Statics::NewProp_ClassSelectWidgetClass_MetaData), Z_Construct_UClass_AMSD_MissionCharacter_Statics::NewProp_ClassSelectWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSD_MissionCharacter_Statics::NewProp_ClassViewerClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "HordeShooter/Character/MSD_MissionCharacter.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AMSD_MissionCharacter_Statics::NewProp_ClassViewerClass = { "ClassViewerClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSD_MissionCharacter, ClassViewerClass), Z_Construct_UClass_AMSDCharacterMenuViewer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_MissionCharacter_Statics::NewProp_ClassViewerClass_MetaData), Z_Construct_UClass_AMSD_MissionCharacter_Statics::NewProp_ClassViewerClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMSD_MissionCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSD_MissionCharacter_Statics::NewProp_ClassSelectWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSD_MissionCharacter_Statics::NewProp_ClassViewerClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMSD_MissionCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMSD_MissionCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMSD_MissionCharacter_Statics::ClassParams = {
		&AMSD_MissionCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMSD_MissionCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_MissionCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_MissionCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMSD_MissionCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_MissionCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMSD_MissionCharacter()
	{
		if (!Z_Registration_Info_UClass_AMSD_MissionCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMSD_MissionCharacter.OuterSingleton, Z_Construct_UClass_AMSD_MissionCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMSD_MissionCharacter.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<AMSD_MissionCharacter>()
	{
		return AMSD_MissionCharacter::StaticClass();
	}
	AMSD_MissionCharacter::AMSD_MissionCharacter() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMSD_MissionCharacter);
	AMSD_MissionCharacter::~AMSD_MissionCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSD_MissionCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSD_MissionCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMSD_MissionCharacter, AMSD_MissionCharacter::StaticClass, TEXT("AMSD_MissionCharacter"), &Z_Registration_Info_UClass_AMSD_MissionCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMSD_MissionCharacter), 353051045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSD_MissionCharacter_h_3244325372(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSD_MissionCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSD_MissionCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
