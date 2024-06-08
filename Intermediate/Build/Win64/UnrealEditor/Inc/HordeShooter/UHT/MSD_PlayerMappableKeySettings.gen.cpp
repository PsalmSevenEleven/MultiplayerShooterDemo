// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/Input/MSD_PlayerMappableKeySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSD_PlayerMappableKeySettings() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableKeySettings();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_PlayerMappableKeySettings();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_PlayerMappableKeySettings_NoRegister();
	HORDESHOOTER_API UEnum* Z_Construct_UEnum_HordeShooter_EPlayerAbilityInputID();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void UMSD_PlayerMappableKeySettings::StaticRegisterNativesUMSD_PlayerMappableKeySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSD_PlayerMappableKeySettings);
	UClass* Z_Construct_UClass_UMSD_PlayerMappableKeySettings_NoRegister()
	{
		return UMSD_PlayerMappableKeySettings::StaticClass();
	}
	struct Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputID_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputID_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGASAbility_MetaData[];
#endif
		static void NewProp_bIsGASAbility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGASAbility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerMappableKeySettings,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/Character/Input/MSD_PlayerMappableKeySettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSD_PlayerMappableKeySettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::NewProp_InputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::NewProp_InputID_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSD_PlayerMappableKeySettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_PlayerMappableKeySettings, InputID), Z_Construct_UEnum_HordeShooter_EPlayerAbilityInputID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::NewProp_InputID_MetaData), Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::NewProp_InputID_MetaData) }; // 4261161581
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::NewProp_bIsGASAbility_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSD_PlayerMappableKeySettings.h" },
	};
#endif
	void Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::NewProp_bIsGASAbility_SetBit(void* Obj)
	{
		((UMSD_PlayerMappableKeySettings*)Obj)->bIsGASAbility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::NewProp_bIsGASAbility = { "bIsGASAbility", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMSD_PlayerMappableKeySettings), &Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::NewProp_bIsGASAbility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::NewProp_bIsGASAbility_MetaData), Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::NewProp_bIsGASAbility_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::NewProp_InputID_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::NewProp_InputID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::NewProp_bIsGASAbility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSD_PlayerMappableKeySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::ClassParams = {
		&UMSD_PlayerMappableKeySettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMSD_PlayerMappableKeySettings()
	{
		if (!Z_Registration_Info_UClass_UMSD_PlayerMappableKeySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSD_PlayerMappableKeySettings.OuterSingleton, Z_Construct_UClass_UMSD_PlayerMappableKeySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSD_PlayerMappableKeySettings.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSD_PlayerMappableKeySettings>()
	{
		return UMSD_PlayerMappableKeySettings::StaticClass();
	}
	UMSD_PlayerMappableKeySettings::UMSD_PlayerMappableKeySettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSD_PlayerMappableKeySettings);
	UMSD_PlayerMappableKeySettings::~UMSD_PlayerMappableKeySettings() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Input_MSD_PlayerMappableKeySettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Input_MSD_PlayerMappableKeySettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSD_PlayerMappableKeySettings, UMSD_PlayerMappableKeySettings::StaticClass, TEXT("UMSD_PlayerMappableKeySettings"), &Z_Registration_Info_UClass_UMSD_PlayerMappableKeySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSD_PlayerMappableKeySettings), 1649762137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Input_MSD_PlayerMappableKeySettings_h_550733793(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Input_MSD_PlayerMappableKeySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Input_MSD_PlayerMappableKeySettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
