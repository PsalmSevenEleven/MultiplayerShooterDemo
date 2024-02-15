// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/Classes/MSD_CharacterClassDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSD_CharacterClassDefinition() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_AbilitySet_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_CharacterClassDefinition();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_CharacterClassDefinition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void UMSD_CharacterClassDefinition::StaticRegisterNativesUMSD_CharacterClassDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSD_CharacterClassDefinition);
	UClass* Z_Construct_UClass_UMSD_CharacterClassDefinition_NoRegister()
	{
		return UMSD_CharacterClassDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HubBodyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HubBodyMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HubHandsMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HubHandsMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySet_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AbilitySet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Subclasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subclasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Subclasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleHalfHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CapsuleHalfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleRadius_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CapsuleRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CameraHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandMeshLocalPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandMeshLocalPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeedWalking_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MoveSpeedWalking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeedRunning_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MoveSpeedRunning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Character/Classes/MSD_CharacterClassDefinition.h" },
		{ "ModuleRelativePath", "Character/Classes/MSD_CharacterClassDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_HubBodyMesh_MetaData[] = {
		{ "AssetBundles", "HubOnly" },
		{ "Category", "Models" },
		{ "ModuleRelativePath", "Character/Classes/MSD_CharacterClassDefinition.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_HubBodyMesh = { "HubBodyMesh", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_CharacterClassDefinition, HubBodyMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_HubBodyMesh_MetaData), Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_HubBodyMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_HubHandsMesh_MetaData[] = {
		{ "AssetBundles", "HubOnly" },
		{ "Category", "Models" },
		{ "ModuleRelativePath", "Character/Classes/MSD_CharacterClassDefinition.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_HubHandsMesh = { "HubHandsMesh", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_CharacterClassDefinition, HubHandsMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_HubHandsMesh_MetaData), Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_HubHandsMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_AbilitySet_MetaData[] = {
		{ "AssetBundles", "MissionOnly" },
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/Classes/MSD_CharacterClassDefinition.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_AbilitySet = { "AbilitySet", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_CharacterClassDefinition, AbilitySet), Z_Construct_UClass_UMSD_AbilitySet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_AbilitySet_MetaData), Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_AbilitySet_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_Subclasses_Inner = { "Subclasses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_Subclasses_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//maybe eventually I'll swap these over to FStrings for a tiny memory optimization,\n//but at the moment the extra complexity isn't worth it\n" },
#endif
		{ "ModuleRelativePath", "Character/Classes/MSD_CharacterClassDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "maybe eventually I'll swap these over to FStrings for a tiny memory optimization,\nbut at the moment the extra complexity isn't worth it" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_Subclasses = { "Subclasses", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_CharacterClassDefinition, Subclasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_Subclasses_MetaData), Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_Subclasses_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_CapsuleHalfHeight_MetaData[] = {
		{ "Category", "Character Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//no need for bundle tags here, only soft pointers can make use of the bundling system\n" },
#endif
		{ "ModuleRelativePath", "Character/Classes/MSD_CharacterClassDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "no need for bundle tags here, only soft pointers can make use of the bundling system" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_CharacterClassDefinition, CapsuleHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_CapsuleHalfHeight_MetaData), Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_CapsuleHalfHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_CapsuleRadius_MetaData[] = {
		{ "Category", "Character Setup" },
		{ "ModuleRelativePath", "Character/Classes/MSD_CharacterClassDefinition.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_CharacterClassDefinition, CapsuleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_CapsuleRadius_MetaData), Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_CapsuleRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_CameraHeight_MetaData[] = {
		{ "Category", "Character Setup" },
		{ "ModuleRelativePath", "Character/Classes/MSD_CharacterClassDefinition.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_CameraHeight = { "CameraHeight", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_CharacterClassDefinition, CameraHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_CameraHeight_MetaData), Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_CameraHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_HandMeshLocalPosition_MetaData[] = {
		{ "Category", "Character Setup" },
		{ "ModuleRelativePath", "Character/Classes/MSD_CharacterClassDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_HandMeshLocalPosition = { "HandMeshLocalPosition", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_CharacterClassDefinition, HandMeshLocalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_HandMeshLocalPosition_MetaData), Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_HandMeshLocalPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_MoveSpeedWalking_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Character/Classes/MSD_CharacterClassDefinition.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_MoveSpeedWalking = { "MoveSpeedWalking", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_CharacterClassDefinition, MoveSpeedWalking), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_MoveSpeedWalking_MetaData), Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_MoveSpeedWalking_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_MoveSpeedRunning_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Character/Classes/MSD_CharacterClassDefinition.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_MoveSpeedRunning = { "MoveSpeedRunning", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_CharacterClassDefinition, MoveSpeedRunning), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_MoveSpeedRunning_MetaData), Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_MoveSpeedRunning_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_HubBodyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_HubHandsMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_AbilitySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_Subclasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_Subclasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_CapsuleHalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_CapsuleRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_CameraHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_HandMeshLocalPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_MoveSpeedWalking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::NewProp_MoveSpeedRunning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSD_CharacterClassDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::ClassParams = {
		&UMSD_CharacterClassDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMSD_CharacterClassDefinition()
	{
		if (!Z_Registration_Info_UClass_UMSD_CharacterClassDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSD_CharacterClassDefinition.OuterSingleton, Z_Construct_UClass_UMSD_CharacterClassDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSD_CharacterClassDefinition.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSD_CharacterClassDefinition>()
	{
		return UMSD_CharacterClassDefinition::StaticClass();
	}
	UMSD_CharacterClassDefinition::UMSD_CharacterClassDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSD_CharacterClassDefinition);
	UMSD_CharacterClassDefinition::~UMSD_CharacterClassDefinition() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_CharacterClassDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_CharacterClassDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSD_CharacterClassDefinition, UMSD_CharacterClassDefinition::StaticClass, TEXT("UMSD_CharacterClassDefinition"), &Z_Registration_Info_UClass_UMSD_CharacterClassDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSD_CharacterClassDefinition), 3648946568U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_CharacterClassDefinition_h_1772039614(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_CharacterClassDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Classes_MSD_CharacterClassDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
