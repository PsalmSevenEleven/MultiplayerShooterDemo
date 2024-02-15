// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/Classes/MSD_SubclassDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSD_SubclassDefinition() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_AbilitySet_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_SubclassDefinition();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_SubclassDefinition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void UMSD_SubclassDefinition::StaticRegisterNativesUMSD_SubclassDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSD_SubclassDefinition);
	UClass* Z_Construct_UClass_UMSD_SubclassDefinition_NoRegister()
	{
		return UMSD_SubclassDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UMSD_SubclassDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySet_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AbilitySet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BodyMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandsMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HandsMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassViewerAnimBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ClassViewerAnimBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyAnimBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BodyAnimBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandsAnimBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HandsAnimBlueprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSD_SubclassDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_SubclassDefinition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_SubclassDefinition_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Character/Classes/MSD_SubclassDefinition.h" },
		{ "ModuleRelativePath", "Character/Classes/MSD_SubclassDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_AbilitySet_MetaData[] = {
		{ "AssetBundles", "MissionOnly" },
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/Classes/MSD_SubclassDefinition.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_AbilitySet = { "AbilitySet", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_SubclassDefinition, AbilitySet), Z_Construct_UClass_UMSD_AbilitySet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_AbilitySet_MetaData), Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_AbilitySet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "AssetBundles", "HubAndMission" },
		{ "Category", "Models" },
		{ "ModuleRelativePath", "Character/Classes/MSD_SubclassDefinition.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_SubclassDefinition, BodyMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_BodyMesh_MetaData), Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_BodyMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_HandsMesh_MetaData[] = {
		{ "AssetBundles", "MissionOnly" },
		{ "Category", "Models" },
		{ "ModuleRelativePath", "Character/Classes/MSD_SubclassDefinition.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_HandsMesh = { "HandsMesh", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_SubclassDefinition, HandsMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_HandsMesh_MetaData), Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_HandsMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_ClassViewerAnimBlueprint_MetaData[] = {
		{ "AssetBundles", "HubOnly" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Character/Classes/MSD_SubclassDefinition.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_ClassViewerAnimBlueprint = { "ClassViewerAnimBlueprint", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_SubclassDefinition, ClassViewerAnimBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_ClassViewerAnimBlueprint_MetaData), Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_ClassViewerAnimBlueprint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_BodyAnimBlueprint_MetaData[] = {
		{ "AssetBundles", "MissionOnly" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Character/Classes/MSD_SubclassDefinition.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_BodyAnimBlueprint = { "BodyAnimBlueprint", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_SubclassDefinition, BodyAnimBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_BodyAnimBlueprint_MetaData), Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_BodyAnimBlueprint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_HandsAnimBlueprint_MetaData[] = {
		{ "AssetBundles", "MissionOnly" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Character/Classes/MSD_SubclassDefinition.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_HandsAnimBlueprint = { "HandsAnimBlueprint", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_SubclassDefinition, HandsAnimBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_HandsAnimBlueprint_MetaData), Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_HandsAnimBlueprint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSD_SubclassDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_AbilitySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_BodyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_HandsMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_ClassViewerAnimBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_BodyAnimBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_SubclassDefinition_Statics::NewProp_HandsAnimBlueprint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSD_SubclassDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSD_SubclassDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSD_SubclassDefinition_Statics::ClassParams = {
		&UMSD_SubclassDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMSD_SubclassDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_SubclassDefinition_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_SubclassDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSD_SubclassDefinition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_SubclassDefinition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMSD_SubclassDefinition()
	{
		if (!Z_Registration_Info_UClass_UMSD_SubclassDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSD_SubclassDefinition.OuterSingleton, Z_Construct_UClass_UMSD_SubclassDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSD_SubclassDefinition.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSD_SubclassDefinition>()
	{
		return UMSD_SubclassDefinition::StaticClass();
	}
	UMSD_SubclassDefinition::UMSD_SubclassDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSD_SubclassDefinition);
	UMSD_SubclassDefinition::~UMSD_SubclassDefinition() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_SubclassDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_SubclassDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSD_SubclassDefinition, UMSD_SubclassDefinition::StaticClass, TEXT("UMSD_SubclassDefinition"), &Z_Registration_Info_UClass_UMSD_SubclassDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSD_SubclassDefinition), 3973654389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_SubclassDefinition_h_2527853935(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_SubclassDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_SubclassDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
