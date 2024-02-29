// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/UI/MSDHud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSDHud() {}
// Cross Module References
	HORDESHOOTER_API UClass* Z_Construct_UClass_UInteractPrompt_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDHud();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDHud_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void UMSDHud::StaticRegisterNativesUMSDHud()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSDHud);
	UClass* Z_Construct_UClass_UMSDHud_NoRegister()
	{
		return UMSDHud::StaticClass();
	}
	struct Z_Construct_UClass_UMSDHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crosshair_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Crosshair;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractPrompt_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractPrompt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSDHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDHud_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDHud_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/UI/MSDHud.h" },
		{ "ModuleRelativePath", "HordeShooter/UI/MSDHud.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDHud_Statics::NewProp_Crosshair_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/UI/MSDHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSDHud_Statics::NewProp_Crosshair = { "Crosshair", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDHud, Crosshair), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDHud_Statics::NewProp_Crosshair_MetaData), Z_Construct_UClass_UMSDHud_Statics::NewProp_Crosshair_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDHud_Statics::NewProp_InteractPrompt_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/UI/MSDHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSDHud_Statics::NewProp_InteractPrompt = { "InteractPrompt", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDHud, InteractPrompt), Z_Construct_UClass_UInteractPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDHud_Statics::NewProp_InteractPrompt_MetaData), Z_Construct_UClass_UMSDHud_Statics::NewProp_InteractPrompt_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSDHud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDHud_Statics::NewProp_Crosshair,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDHud_Statics::NewProp_InteractPrompt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSDHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSDHud>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSDHud_Statics::ClassParams = {
		&UMSDHud::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMSDHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSDHud_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDHud_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSDHud_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDHud_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMSDHud()
	{
		if (!Z_Registration_Info_UClass_UMSDHud.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSDHud.OuterSingleton, Z_Construct_UClass_UMSDHud_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSDHud.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSDHud>()
	{
		return UMSDHud::StaticClass();
	}
	UMSDHud::UMSDHud(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSDHud);
	UMSDHud::~UMSDHud() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDHud_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDHud_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSDHud, UMSDHud::StaticClass, TEXT("UMSDHud"), &Z_Registration_Info_UClass_UMSDHud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSDHud), 2732651171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDHud_h_1971468628(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDHud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDHud_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
