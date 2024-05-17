// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHordeShooter_init() {}
	HORDESHOOTER_API UFunction* Z_Construct_UDelegateFunction_HordeShooter_MontageOnSMSimpleDelegate__DelegateSignature();
	HORDESHOOTER_API UFunction* Z_Construct_UDelegateFunction_HordeShooter_OnPooledObjectDeactivateDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HordeShooter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HordeShooter()
	{
		if (!Z_Registration_Info_UPackage__Script_HordeShooter.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HordeShooter_MontageOnSMSimpleDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HordeShooter_OnPooledObjectDeactivateDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HordeShooter",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9DE8F6C9,
				0x67F45649,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HordeShooter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HordeShooter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HordeShooter(Z_Construct_UPackage__Script_HordeShooter, TEXT("/Script/HordeShooter"), Z_Registration_Info_UPackage__Script_HordeShooter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9DE8F6C9, 0x67F45649));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
