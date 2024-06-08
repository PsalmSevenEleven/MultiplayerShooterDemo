// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Background_Infrastructure/MSDGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSDGameInstance() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDGameInstance();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	DEFINE_FUNCTION(UMSDGameInstance::execLoadCharacterClassesForEquipScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadCharacterClassesForEquipScreen();
		P_NATIVE_END;
	}
	void UMSDGameInstance::StaticRegisterNativesUMSDGameInstance()
	{
		UClass* Class = UMSDGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadCharacterClassesForEquipScreen", &UMSDGameInstance::execLoadCharacterClassesForEquipScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMSDGameInstance_LoadCharacterClassesForEquipScreen_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSDGameInstance_LoadCharacterClassesForEquipScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Background_Infrastructure/MSDGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSDGameInstance_LoadCharacterClassesForEquipScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSDGameInstance, nullptr, "LoadCharacterClassesForEquipScreen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSDGameInstance_LoadCharacterClassesForEquipScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSDGameInstance_LoadCharacterClassesForEquipScreen_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMSDGameInstance_LoadCharacterClassesForEquipScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSDGameInstance_LoadCharacterClassesForEquipScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSDGameInstance);
	UClass* Z_Construct_UClass_UMSDGameInstance_NoRegister()
	{
		return UMSDGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMSDGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSDGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvancedFriendsGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDGameInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMSDGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMSDGameInstance_LoadCharacterClassesForEquipScreen, "LoadCharacterClassesForEquipScreen" }, // 1247433527
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDGameInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDGameInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/Background_Infrastructure/MSDGameInstance.h" },
		{ "ModuleRelativePath", "HordeShooter/Background_Infrastructure/MSDGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSDGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSDGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSDGameInstance_Statics::ClassParams = {
		&UMSDGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSDGameInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMSDGameInstance()
	{
		if (!Z_Registration_Info_UClass_UMSDGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSDGameInstance.OuterSingleton, Z_Construct_UClass_UMSDGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSDGameInstance.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSDGameInstance>()
	{
		return UMSDGameInstance::StaticClass();
	}
	UMSDGameInstance::UMSDGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSDGameInstance);
	UMSDGameInstance::~UMSDGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Background_Infrastructure_MSDGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Background_Infrastructure_MSDGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSDGameInstance, UMSDGameInstance::StaticClass, TEXT("UMSDGameInstance"), &Z_Registration_Info_UClass_UMSDGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSDGameInstance), 1696156384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Background_Infrastructure_MSDGameInstance_h_1193106009(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Background_Infrastructure_MSDGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Background_Infrastructure_MSDGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
