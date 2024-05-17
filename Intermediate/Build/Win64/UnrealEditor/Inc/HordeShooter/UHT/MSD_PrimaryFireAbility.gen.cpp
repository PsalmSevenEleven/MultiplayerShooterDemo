// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/AbilitySystem/Abilities/MSD_PrimaryFireAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSD_PrimaryFireAbility() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_PrimaryFireAbility();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_PrimaryFireAbility_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_ProjectileAbility();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void UMSD_PrimaryFireAbility::StaticRegisterNativesUMSD_PrimaryFireAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSD_PrimaryFireAbility);
	UClass* Z_Construct_UClass_UMSD_PrimaryFireAbility_NoRegister()
	{
		return UMSD_PrimaryFireAbility::StaticClass();
	}
	struct Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagazineSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGrantedEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OnGrantedEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMSD_ProjectileAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/Character/AbilitySystem/Abilities/MSD_PrimaryFireAbility.h" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/Abilities/MSD_PrimaryFireAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_MagazineSize_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Represents the number of times the ability can be used before 'reloading', not necessarily the number of projectiles being created\n//If this is 0 or less, it will continue to fire until the player either releases the fire key or runs out of mana\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/Abilities/MSD_PrimaryFireAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the number of times the ability can be used before 'reloading', not necessarily the number of projectiles being created\nIf this is 0 or less, it will continue to fire until the player either releases the fire key or runs out of mana" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_MagazineSize = { "MagazineSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_PrimaryFireAbility, MagazineSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_MagazineSize_MetaData), Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_MagazineSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_ReloadCost_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//How much Mana is required to reload a completely empty magazine\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/Abilities/MSD_PrimaryFireAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much Mana is required to reload a completely empty magazine" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_ReloadCost = { "ReloadCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_PrimaryFireAbility, ReloadCost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_ReloadCost_MetaData), Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_ReloadCost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This montage should include the firing and reload animations,\n//and we can just use different sections instead of storing two separate montages.\n//If we decide later that we should have animations for failed firing or reloading,\n//this montage should include those too\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/Abilities/MSD_PrimaryFireAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This montage should include the firing and reload animations,\nand we can just use different sections instead of storing two separate montages.\nIf we decide later that we should have animations for failed firing or reloading,\nthis montage should include those too" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_PrimaryFireAbility, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_Montage_MetaData), Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_Montage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_OnGrantedEffect_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Use this to set the player's current and max rounds.\n//Otherwise the player has to reload before they can fire for the first time in-game\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/Abilities/MSD_PrimaryFireAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this to set the player's current and max rounds.\nOtherwise the player has to reload before they can fire for the first time in-game" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_OnGrantedEffect = { "OnGrantedEffect", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_PrimaryFireAbility, OnGrantedEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_OnGrantedEffect_MetaData), Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_OnGrantedEffect_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_MagazineSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_ReloadCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::NewProp_OnGrantedEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSD_PrimaryFireAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::ClassParams = {
		&UMSD_PrimaryFireAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMSD_PrimaryFireAbility()
	{
		if (!Z_Registration_Info_UClass_UMSD_PrimaryFireAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSD_PrimaryFireAbility.OuterSingleton, Z_Construct_UClass_UMSD_PrimaryFireAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSD_PrimaryFireAbility.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSD_PrimaryFireAbility>()
	{
		return UMSD_PrimaryFireAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSD_PrimaryFireAbility);
	UMSD_PrimaryFireAbility::~UMSD_PrimaryFireAbility() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_Abilities_MSD_PrimaryFireAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_Abilities_MSD_PrimaryFireAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSD_PrimaryFireAbility, UMSD_PrimaryFireAbility::StaticClass, TEXT("UMSD_PrimaryFireAbility"), &Z_Registration_Info_UClass_UMSD_PrimaryFireAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSD_PrimaryFireAbility), 2014943931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_Abilities_MSD_PrimaryFireAbility_h_2014327482(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_Abilities_MSD_PrimaryFireAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_Abilities_MSD_PrimaryFireAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
