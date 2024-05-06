// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/HordeShooter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHordeShooter() {}
// Cross Module References
	HORDESHOOTER_API UEnum* Z_Construct_UEnum_HordeShooter_EPlayerAbilityInputID();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerAbilityInputID;
	static UEnum* EPlayerAbilityInputID_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerAbilityInputID.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerAbilityInputID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HordeShooter_EPlayerAbilityInputID, (UObject*)Z_Construct_UPackage__Script_HordeShooter(), TEXT("EPlayerAbilityInputID"));
		}
		return Z_Registration_Info_UEnum_EPlayerAbilityInputID.OuterSingleton;
	}
	template<> HORDESHOOTER_API UEnum* StaticEnum<EPlayerAbilityInputID>()
	{
		return EPlayerAbilityInputID_StaticEnum();
	}
	struct Z_Construct_UEnum_HordeShooter_EPlayerAbilityInputID_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HordeShooter_EPlayerAbilityInputID_Statics::Enumerators[] = {
		{ "EPlayerAbilityInputID::None", (int64)EPlayerAbilityInputID::None },
		{ "EPlayerAbilityInputID::Confirm", (int64)EPlayerAbilityInputID::Confirm },
		{ "EPlayerAbilityInputID::Cancel", (int64)EPlayerAbilityInputID::Cancel },
		{ "EPlayerAbilityInputID::Move", (int64)EPlayerAbilityInputID::Move },
		{ "EPlayerAbilityInputID::Look", (int64)EPlayerAbilityInputID::Look },
		{ "EPlayerAbilityInputID::Jump", (int64)EPlayerAbilityInputID::Jump },
		{ "EPlayerAbilityInputID::Pause", (int64)EPlayerAbilityInputID::Pause },
		{ "EPlayerAbilityInputID::Interact", (int64)EPlayerAbilityInputID::Interact },
		{ "EPlayerAbilityInputID::Reload", (int64)EPlayerAbilityInputID::Reload },
		{ "EPlayerAbilityInputID::PrimaryFire", (int64)EPlayerAbilityInputID::PrimaryFire },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HordeShooter_EPlayerAbilityInputID_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancel.DisplayName", "Cancel" },
		{ "Cancel.Name", "EPlayerAbilityInputID::Cancel" },
		{ "Confirm.DisplayName", "Confirm" },
		{ "Confirm.Name", "EPlayerAbilityInputID::Confirm" },
		{ "Interact.DisplayName", "Interact" },
		{ "Interact.Name", "EPlayerAbilityInputID::Interact" },
		{ "IsBlueprintBase", "true" },
		{ "Jump.DisplayName", "Jump" },
		{ "Jump.Name", "EPlayerAbilityInputID::Jump" },
		{ "Look.DisplayName", "Look" },
		{ "Look.Name", "EPlayerAbilityInputID::Look" },
		{ "ModuleRelativePath", "HordeShooter/HordeShooter.h" },
		{ "Move.DisplayName", "Move" },
		{ "Move.Name", "EPlayerAbilityInputID::Move" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPlayerAbilityInputID::None" },
		{ "Pause.DisplayName", "Pause" },
		{ "Pause.Name", "EPlayerAbilityInputID::Pause" },
		{ "PrimaryFire.DisplayName", "PrimaryFire" },
		{ "PrimaryFire.Name", "EPlayerAbilityInputID::PrimaryFire" },
		{ "Reload.DisplayName", "Reload" },
		{ "Reload.Name", "EPlayerAbilityInputID::Reload" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HordeShooter_EPlayerAbilityInputID_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HordeShooter,
		nullptr,
		"EPlayerAbilityInputID",
		"EPlayerAbilityInputID",
		Z_Construct_UEnum_HordeShooter_EPlayerAbilityInputID_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HordeShooter_EPlayerAbilityInputID_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HordeShooter_EPlayerAbilityInputID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HordeShooter_EPlayerAbilityInputID_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HordeShooter_EPlayerAbilityInputID()
	{
		if (!Z_Registration_Info_UEnum_EPlayerAbilityInputID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerAbilityInputID.InnerSingleton, Z_Construct_UEnum_HordeShooter_EPlayerAbilityInputID_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerAbilityInputID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_HordeShooter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_HordeShooter_h_Statics::EnumInfo[] = {
		{ EPlayerAbilityInputID_StaticEnum, TEXT("EPlayerAbilityInputID"), &Z_Registration_Info_UEnum_EPlayerAbilityInputID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3997389252U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_HordeShooter_h_1332750935(TEXT("/Script/HordeShooter"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_HordeShooter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_HordeShooter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
