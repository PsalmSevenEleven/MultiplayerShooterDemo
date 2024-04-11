// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/MSD_PooledObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSD_PooledObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSD_PooledObject();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSD_PooledObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void AMSD_PooledObject::StaticRegisterNativesAMSD_PooledObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMSD_PooledObject);
	UClass* Z_Construct_UClass_AMSD_PooledObject_NoRegister()
	{
		return AMSD_PooledObject::StaticClass();
	}
	struct Z_Construct_UClass_AMSD_PooledObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMSD_PooledObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_PooledObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSD_PooledObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HordeShooter/MSD_PooledObject.h" },
		{ "ModuleRelativePath", "HordeShooter/MSD_PooledObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMSD_PooledObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMSD_PooledObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMSD_PooledObject_Statics::ClassParams = {
		&AMSD_PooledObject::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_PooledObject_Statics::Class_MetaDataParams), Z_Construct_UClass_AMSD_PooledObject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMSD_PooledObject()
	{
		if (!Z_Registration_Info_UClass_AMSD_PooledObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMSD_PooledObject.OuterSingleton, Z_Construct_UClass_AMSD_PooledObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMSD_PooledObject.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<AMSD_PooledObject>()
	{
		return AMSD_PooledObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMSD_PooledObject);
	AMSD_PooledObject::~AMSD_PooledObject() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_MSD_PooledObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_MSD_PooledObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMSD_PooledObject, AMSD_PooledObject::StaticClass, TEXT("AMSD_PooledObject"), &Z_Registration_Info_UClass_AMSD_PooledObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMSD_PooledObject), 4216343943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_MSD_PooledObject_h_655915831(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_MSD_PooledObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_MSD_PooledObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
