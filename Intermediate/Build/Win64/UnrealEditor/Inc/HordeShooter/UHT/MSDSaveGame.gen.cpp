// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Background_Infrastructure/MSDSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSDSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDSaveGame();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDSaveGame_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void UMSDSaveGame::StaticRegisterNativesUMSDSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSDSaveGame);
	UClass* Z_Construct_UClass_UMSDSaveGame_NoRegister()
	{
		return UMSDSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UMSDSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedClassIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedClassIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedClassName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedSubclassIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedSubclassIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedSubclassIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSDSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDSaveGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDSaveGame_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/Background_Infrastructure/MSDSaveGame.h" },
		{ "ModuleRelativePath", "HordeShooter/Background_Infrastructure/MSDSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDSaveGame_Statics::NewProp_SelectedClassIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Please use SetClass to set these values\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Background_Infrastructure/MSDSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please use SetClass to set these values" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMSDSaveGame_Statics::NewProp_SelectedClassIndex = { "SelectedClassIndex", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDSaveGame, SelectedClassIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDSaveGame_Statics::NewProp_SelectedClassIndex_MetaData), Z_Construct_UClass_UMSDSaveGame_Statics::NewProp_SelectedClassIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDSaveGame_Statics::NewProp_SelectedClassName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Please use SetClass to set these values\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Background_Infrastructure/MSDSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please use SetClass to set these values" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMSDSaveGame_Statics::NewProp_SelectedClassName = { "SelectedClassName", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDSaveGame, SelectedClassName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDSaveGame_Statics::NewProp_SelectedClassName_MetaData), Z_Construct_UClass_UMSDSaveGame_Statics::NewProp_SelectedClassName_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMSDSaveGame_Statics::NewProp_SelectedSubclassIndices_Inner = { "SelectedSubclassIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDSaveGame_Statics::NewProp_SelectedSubclassIndices_MetaData[] = {
		{ "Category", "MSDSaveGame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//WARNING - This will need to be updated to contain at least the same number of 0s as the number of classes in the game\n//When reading/writing to this array, maybe just include some checks to insure the index is valid and, if not,\n//add 0s to the array until it is.\n//Stuff to think about later\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Background_Infrastructure/MSDSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WARNING - This will need to be updated to contain at least the same number of 0s as the number of classes in the game\nWhen reading/writing to this array, maybe just include some checks to insure the index is valid and, if not,\nadd 0s to the array until it is.\nStuff to think about later" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSDSaveGame_Statics::NewProp_SelectedSubclassIndices = { "SelectedSubclassIndices", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDSaveGame, SelectedSubclassIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDSaveGame_Statics::NewProp_SelectedSubclassIndices_MetaData), Z_Construct_UClass_UMSDSaveGame_Statics::NewProp_SelectedSubclassIndices_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSDSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDSaveGame_Statics::NewProp_SelectedClassIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDSaveGame_Statics::NewProp_SelectedClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDSaveGame_Statics::NewProp_SelectedSubclassIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDSaveGame_Statics::NewProp_SelectedSubclassIndices,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSDSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSDSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSDSaveGame_Statics::ClassParams = {
		&UMSDSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMSDSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSDSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSDSaveGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDSaveGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMSDSaveGame()
	{
		if (!Z_Registration_Info_UClass_UMSDSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSDSaveGame.OuterSingleton, Z_Construct_UClass_UMSDSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSDSaveGame.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSDSaveGame>()
	{
		return UMSDSaveGame::StaticClass();
	}
	UMSDSaveGame::UMSDSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSDSaveGame);
	UMSDSaveGame::~UMSDSaveGame() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Background_Infrastructure_MSDSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Background_Infrastructure_MSDSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSDSaveGame, UMSDSaveGame::StaticClass, TEXT("UMSDSaveGame"), &Z_Registration_Info_UClass_UMSDSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSDSaveGame), 1755771934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Background_Infrastructure_MSDSaveGame_h_546716221(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Background_Infrastructure_MSDSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Background_Infrastructure_MSDSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
