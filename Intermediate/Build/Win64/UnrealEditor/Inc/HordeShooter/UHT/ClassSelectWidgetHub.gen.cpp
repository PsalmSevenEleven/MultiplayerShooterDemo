// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/UI/ClassSelectWidgetHub.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassSelectWidgetHub() {}
// Cross Module References
	HORDESHOOTER_API UClass* Z_Construct_UClass_UClassSelectWidget();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UClassSelectWidgetHub();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UClassSelectWidgetHub_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void UClassSelectWidgetHub::StaticRegisterNativesUClassSelectWidgetHub()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClassSelectWidgetHub);
	UClass* Z_Construct_UClass_UClassSelectWidgetHub_NoRegister()
	{
		return UClassSelectWidgetHub::StaticClass();
	}
	struct Z_Construct_UClass_UClassSelectWidgetHub_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClassSelectWidgetHub_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClassSelectWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidgetHub_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassSelectWidgetHub_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/ClassSelectWidgetHub.h" },
		{ "ModuleRelativePath", "UI/ClassSelectWidgetHub.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClassSelectWidgetHub_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassSelectWidgetHub>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClassSelectWidgetHub_Statics::ClassParams = {
		&UClassSelectWidgetHub::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidgetHub_Statics::Class_MetaDataParams), Z_Construct_UClass_UClassSelectWidgetHub_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UClassSelectWidgetHub()
	{
		if (!Z_Registration_Info_UClass_UClassSelectWidgetHub.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClassSelectWidgetHub.OuterSingleton, Z_Construct_UClass_UClassSelectWidgetHub_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClassSelectWidgetHub.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UClassSelectWidgetHub>()
	{
		return UClassSelectWidgetHub::StaticClass();
	}
	UClassSelectWidgetHub::UClassSelectWidgetHub(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClassSelectWidgetHub);
	UClassSelectWidgetHub::~UClassSelectWidgetHub() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_ClassSelectWidgetHub_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_ClassSelectWidgetHub_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClassSelectWidgetHub, UClassSelectWidgetHub::StaticClass, TEXT("UClassSelectWidgetHub"), &Z_Registration_Info_UClass_UClassSelectWidgetHub, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClassSelectWidgetHub), 109570123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_ClassSelectWidgetHub_h_171254404(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_ClassSelectWidgetHub_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_ClassSelectWidgetHub_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
