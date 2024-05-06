// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/AbilitySystem/MSDPlayerAttributeSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSDPlayerAttributeSet() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDPlayerAttributeSet();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDPlayerAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void UMSDPlayerAttributeSet::StaticRegisterNativesUMSDPlayerAttributeSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSDPlayerAttributeSet);
	UClass* Z_Construct_UClass_UMSDPlayerAttributeSet_NoRegister()
	{
		return UMSDPlayerAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UMSDPlayerAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainingRounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemainingRounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpHeight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JumpHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CultivateMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CultivateMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/Character/AbilitySystem/MSDPlayerAttributeSet.h" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSDPlayerAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSDPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDPlayerAttributeSet, CurrentHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_CurrentHealth_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSDPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDPlayerAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_MaxHealth_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_CurrentMana_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSDPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDPlayerAttributeSet, CurrentMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_CurrentMana_MetaData), Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_CurrentMana_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSDPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDPlayerAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_MaxMana_MetaData), Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_MaxMana_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_RemainingRounds_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSDPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_RemainingRounds = { "RemainingRounds", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDPlayerAttributeSet, RemainingRounds), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_RemainingRounds_MetaData), Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_RemainingRounds_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_MaxRounds_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSDPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_MaxRounds = { "MaxRounds", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDPlayerAttributeSet, MaxRounds), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_MaxRounds_MetaData), Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_MaxRounds_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSDPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDPlayerAttributeSet, WalkSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_WalkSpeed_MetaData), Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_WalkSpeed_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSDPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDPlayerAttributeSet, SprintSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_SprintSpeed_MetaData), Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_SprintSpeed_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_JumpHeight_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSDPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_JumpHeight = { "JumpHeight", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDPlayerAttributeSet, JumpHeight), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_JumpHeight_MetaData), Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_JumpHeight_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSDPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDPlayerAttributeSet, Weight), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_Weight_MetaData), Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_Weight_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_CultivateMultiplier_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSDPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_CultivateMultiplier = { "CultivateMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDPlayerAttributeSet, CultivateMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_CultivateMultiplier_MetaData), Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_CultivateMultiplier_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_CurrentMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_MaxMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_RemainingRounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_MaxRounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_WalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_SprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_JumpHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::NewProp_CultivateMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSDPlayerAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::ClassParams = {
		&UMSDPlayerAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMSDPlayerAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UMSDPlayerAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSDPlayerAttributeSet.OuterSingleton, Z_Construct_UClass_UMSDPlayerAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSDPlayerAttributeSet.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSDPlayerAttributeSet>()
	{
		return UMSDPlayerAttributeSet::StaticClass();
	}
	UMSDPlayerAttributeSet::UMSDPlayerAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSDPlayerAttributeSet);
	UMSDPlayerAttributeSet::~UMSDPlayerAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDPlayerAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDPlayerAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSDPlayerAttributeSet, UMSDPlayerAttributeSet::StaticClass, TEXT("UMSDPlayerAttributeSet"), &Z_Registration_Info_UClass_UMSDPlayerAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSDPlayerAttributeSet), 3337963875U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDPlayerAttributeSet_h_1564657449(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDPlayerAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDPlayerAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
