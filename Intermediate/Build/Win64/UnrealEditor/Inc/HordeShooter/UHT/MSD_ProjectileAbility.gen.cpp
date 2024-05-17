// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/AbilitySystem/Abilities/MSD_ProjectileAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSD_ProjectileAbility() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSD_PooledObject_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_ObjectPoolComponent_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_ProjectileAbility();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_ProjectileAbility_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void UMSD_ProjectileAbility::StaticRegisterNativesUMSD_ProjectileAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSD_ProjectileAbility);
	UClass* Z_Construct_UClass_UMSD_ProjectileAbility_NoRegister()
	{
		return UMSD_ProjectileAbility::StaticClass();
	}
	struct Z_Construct_UClass_UMSD_ProjectileAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DecalClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectilePoolSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProjectilePoolSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectilePool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectilePool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalPool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalPool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSD_ProjectileAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMSDGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ProjectileAbility_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_ProjectileAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/Character/AbilitySystem/Abilities/MSD_ProjectileAbility.h" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/Abilities/MSD_ProjectileAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/Abilities/MSD_ProjectileAbility.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_ProjectileAbility, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMSD_PooledObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_ProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_DecalClass_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Decals for environmental hits\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/Abilities/MSD_ProjectileAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decals for environmental hits" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_DecalClass = { "DecalClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_ProjectileAbility, DecalClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMSD_PooledObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_DecalClass_MetaData), Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_DecalClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_ProjectilePoolSize_MetaData[] = {
		{ "Category", "Object Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This will be the pool size for both the projectiles and the hit decals, no need to split those values\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/Abilities/MSD_ProjectileAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will be the pool size for both the projectiles and the hit decals, no need to split those values" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_ProjectilePoolSize = { "ProjectilePoolSize", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_ProjectileAbility, ProjectilePoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_ProjectilePoolSize_MetaData), Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_ProjectilePoolSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_ProjectilePool_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Object Pooling" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/Abilities/MSD_ProjectileAbility.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_ProjectilePool = { "ProjectilePool", nullptr, (EPropertyFlags)0x004000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_ProjectileAbility, ProjectilePool), Z_Construct_UClass_UMSD_ObjectPoolComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_ProjectilePool_MetaData), Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_ProjectilePool_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_DecalPool_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Object Pooling" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/Abilities/MSD_ProjectileAbility.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_DecalPool = { "DecalPool", nullptr, (EPropertyFlags)0x004000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_ProjectileAbility, DecalPool), Z_Construct_UClass_UMSD_ObjectPoolComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_DecalPool_MetaData), Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_DecalPool_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSD_ProjectileAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_DecalClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_ProjectilePoolSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_ProjectilePool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_ProjectileAbility_Statics::NewProp_DecalPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSD_ProjectileAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSD_ProjectileAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSD_ProjectileAbility_Statics::ClassParams = {
		&UMSD_ProjectileAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMSD_ProjectileAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ProjectileAbility_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ProjectileAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSD_ProjectileAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ProjectileAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMSD_ProjectileAbility()
	{
		if (!Z_Registration_Info_UClass_UMSD_ProjectileAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSD_ProjectileAbility.OuterSingleton, Z_Construct_UClass_UMSD_ProjectileAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSD_ProjectileAbility.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSD_ProjectileAbility>()
	{
		return UMSD_ProjectileAbility::StaticClass();
	}
	UMSD_ProjectileAbility::UMSD_ProjectileAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSD_ProjectileAbility);
	UMSD_ProjectileAbility::~UMSD_ProjectileAbility() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_Abilities_MSD_ProjectileAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_Abilities_MSD_ProjectileAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSD_ProjectileAbility, UMSD_ProjectileAbility::StaticClass, TEXT("UMSD_ProjectileAbility"), &Z_Registration_Info_UClass_UMSD_ProjectileAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSD_ProjectileAbility), 1184306449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_Abilities_MSD_ProjectileAbility_h_2043672972(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_Abilities_MSD_ProjectileAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_Abilities_MSD_ProjectileAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
