// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/UI/InteractPrompt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractPrompt() {}
// Cross Module References
	HORDESHOOTER_API UClass* Z_Construct_UClass_UInteractPrompt();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UInteractPrompt_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void UInteractPrompt::StaticRegisterNativesUInteractPrompt()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractPrompt);
	UClass* Z_Construct_UClass_UInteractPrompt_NoRegister()
	{
		return UInteractPrompt::StaticClass();
	}
	struct Z_Construct_UClass_UInteractPrompt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PromptText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractPrompt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractPrompt_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractPrompt_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/UI/InteractPrompt.h" },
		{ "ModuleRelativePath", "HordeShooter/UI/InteractPrompt.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractPrompt_Statics::NewProp_PromptText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/UI/InteractPrompt.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractPrompt_Statics::NewProp_PromptText = { "PromptText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractPrompt, PromptText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractPrompt_Statics::NewProp_PromptText_MetaData), Z_Construct_UClass_UInteractPrompt_Statics::NewProp_PromptText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractPrompt_Statics::NewProp_ProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/UI/InteractPrompt.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractPrompt_Statics::NewProp_ProgressBar = { "ProgressBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractPrompt, ProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractPrompt_Statics::NewProp_ProgressBar_MetaData), Z_Construct_UClass_UInteractPrompt_Statics::NewProp_ProgressBar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractPrompt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractPrompt_Statics::NewProp_PromptText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractPrompt_Statics::NewProp_ProgressBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractPrompt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractPrompt>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractPrompt_Statics::ClassParams = {
		&UInteractPrompt::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractPrompt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractPrompt_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractPrompt_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractPrompt_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractPrompt_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInteractPrompt()
	{
		if (!Z_Registration_Info_UClass_UInteractPrompt.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractPrompt.OuterSingleton, Z_Construct_UClass_UInteractPrompt_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractPrompt.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UInteractPrompt>()
	{
		return UInteractPrompt::StaticClass();
	}
	UInteractPrompt::UInteractPrompt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractPrompt);
	UInteractPrompt::~UInteractPrompt() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_InteractPrompt_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_InteractPrompt_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractPrompt, UInteractPrompt::StaticClass, TEXT("UInteractPrompt"), &Z_Registration_Info_UClass_UInteractPrompt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractPrompt), 2062400524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_InteractPrompt_h_20428828(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_InteractPrompt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_InteractPrompt_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
