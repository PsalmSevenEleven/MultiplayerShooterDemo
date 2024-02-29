// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/AbilitySystem/MSDGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSDGameplayAbility() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDGameplayAbility();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDGameplayAbility_NoRegister();
	HORDESHOOTER_API UEnum* Z_Construct_UEnum_HordeShooter_EPlayerAbilityInputID();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void UMSDGameplayAbility::StaticRegisterNativesUMSDGameplayAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSDGameplayAbility);
	UClass* Z_Construct_UClass_UMSDGameplayAbility_NoRegister()
	{
		return UMSDGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UMSDGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityInputID_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputID_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityInputID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSDGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDGameplayAbility_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDGameplayAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/Character/AbilitySystem/MSDGameplayAbility.h" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSDGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMSDGameplayAbility_Statics::NewProp_AbilityInputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDGameplayAbility_Statics::NewProp_AbilityInputID_MetaData[] = {
		{ "Category", "MSDGameplayAbility" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSDGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMSDGameplayAbility_Statics::NewProp_AbilityInputID = { "AbilityInputID", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDGameplayAbility, AbilityInputID), Z_Construct_UEnum_HordeShooter_EPlayerAbilityInputID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDGameplayAbility_Statics::NewProp_AbilityInputID_MetaData), Z_Construct_UClass_UMSDGameplayAbility_Statics::NewProp_AbilityInputID_MetaData) }; // 1194567754
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSDGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDGameplayAbility_Statics::NewProp_AbilityInputID_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDGameplayAbility_Statics::NewProp_AbilityInputID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSDGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSDGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSDGameplayAbility_Statics::ClassParams = {
		&UMSDGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMSDGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSDGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSDGameplayAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDGameplayAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMSDGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UMSDGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSDGameplayAbility.OuterSingleton, Z_Construct_UClass_UMSDGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSDGameplayAbility.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSDGameplayAbility>()
	{
		return UMSDGameplayAbility::StaticClass();
	}
	UMSDGameplayAbility::UMSDGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSDGameplayAbility);
	UMSDGameplayAbility::~UMSDGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSDGameplayAbility, UMSDGameplayAbility::StaticClass, TEXT("UMSDGameplayAbility"), &Z_Registration_Info_UClass_UMSDGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSDGameplayAbility), 1428394896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_3586179757(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSDGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
