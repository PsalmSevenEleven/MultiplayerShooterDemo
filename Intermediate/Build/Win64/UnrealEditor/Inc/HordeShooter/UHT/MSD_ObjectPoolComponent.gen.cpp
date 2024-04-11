// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/MSD_ObjectPoolComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSD_ObjectPoolComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_ObjectPoolComponent();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_ObjectPoolComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void UMSD_ObjectPoolComponent::StaticRegisterNativesUMSD_ObjectPoolComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSD_ObjectPoolComponent);
	UClass* Z_Construct_UClass_UMSD_ObjectPoolComponent_NoRegister()
	{
		return UMSD_ObjectPoolComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HordeShooter/MSD_ObjectPoolComponent.h" },
		{ "ModuleRelativePath", "HordeShooter/MSD_ObjectPoolComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSD_ObjectPoolComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::ClassParams = {
		&UMSD_ObjectPoolComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMSD_ObjectPoolComponent()
	{
		if (!Z_Registration_Info_UClass_UMSD_ObjectPoolComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSD_ObjectPoolComponent.OuterSingleton, Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSD_ObjectPoolComponent.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSD_ObjectPoolComponent>()
	{
		return UMSD_ObjectPoolComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSD_ObjectPoolComponent);
	UMSD_ObjectPoolComponent::~UMSD_ObjectPoolComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_MSD_ObjectPoolComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_MSD_ObjectPoolComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSD_ObjectPoolComponent, UMSD_ObjectPoolComponent::StaticClass, TEXT("UMSD_ObjectPoolComponent"), &Z_Registration_Info_UClass_UMSD_ObjectPoolComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSD_ObjectPoolComponent), 1879359208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_MSD_ObjectPoolComponent_h_2582239411(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_MSD_ObjectPoolComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_MSD_ObjectPoolComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
