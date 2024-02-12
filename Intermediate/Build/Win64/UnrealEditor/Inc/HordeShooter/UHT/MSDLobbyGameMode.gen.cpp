// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/GameModes/MSDLobbyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSDLobbyGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDLobbyGameMode();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDLobbyGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	DEFINE_FUNCTION(AMSDLobbyGameMode::execStartMission)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartMission();
		P_NATIVE_END;
	}
	void AMSDLobbyGameMode::StaticRegisterNativesAMSDLobbyGameMode()
	{
		UClass* Class = AMSDLobbyGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartMission", &AMSDLobbyGameMode::execStartMission },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMSDLobbyGameMode_StartMission_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDLobbyGameMode_StartMission_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/MSDLobbyGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDLobbyGameMode_StartMission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDLobbyGameMode, nullptr, "StartMission", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDLobbyGameMode_StartMission_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDLobbyGameMode_StartMission_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMSDLobbyGameMode_StartMission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDLobbyGameMode_StartMission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMSDLobbyGameMode);
	UClass* Z_Construct_UClass_AMSDLobbyGameMode_NoRegister()
	{
		return AMSDLobbyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMSDLobbyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMSDLobbyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDLobbyGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMSDLobbyGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMSDLobbyGameMode_StartMission, "StartMission" }, // 3972436637
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDLobbyGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDLobbyGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/MSDLobbyGameMode.h" },
		{ "ModuleRelativePath", "GameModes/MSDLobbyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMSDLobbyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMSDLobbyGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMSDLobbyGameMode_Statics::ClassParams = {
		&AMSDLobbyGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDLobbyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMSDLobbyGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMSDLobbyGameMode()
	{
		if (!Z_Registration_Info_UClass_AMSDLobbyGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMSDLobbyGameMode.OuterSingleton, Z_Construct_UClass_AMSDLobbyGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMSDLobbyGameMode.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<AMSDLobbyGameMode>()
	{
		return AMSDLobbyGameMode::StaticClass();
	}
	AMSDLobbyGameMode::AMSDLobbyGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMSDLobbyGameMode);
	AMSDLobbyGameMode::~AMSDLobbyGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_GameModes_MSDLobbyGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_GameModes_MSDLobbyGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMSDLobbyGameMode, AMSDLobbyGameMode::StaticClass, TEXT("AMSDLobbyGameMode"), &Z_Registration_Info_UClass_AMSDLobbyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMSDLobbyGameMode), 3811582094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_GameModes_MSDLobbyGameMode_h_310051240(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_GameModes_MSDLobbyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_GameModes_MSDLobbyGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
