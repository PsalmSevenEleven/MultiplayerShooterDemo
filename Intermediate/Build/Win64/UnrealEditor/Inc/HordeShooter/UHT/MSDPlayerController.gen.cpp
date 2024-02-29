// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/Input/MSDPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSDPlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDPlayerController();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDPlayerController_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDHud_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void AMSDPlayerController::StaticRegisterNativesAMSDPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMSDPlayerController);
	UClass* Z_Construct_UClass_AMSDPlayerController_NoRegister()
	{
		return AMSDPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMSDPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMSDPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUDClass_MetaData[] = {
		{ "Category", "MSDPlayerController" },
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDPlayerController, HUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMSDHud_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUDClass_MetaData), Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUDClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUD_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDPlayerController, HUD), Z_Construct_UClass_UMSDHud_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUD_MetaData), Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Category", "MSDPlayerController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is to allow the player to use the pause key to back out of any menu\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is to allow the player to use the pause key to back out of any menu" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDPlayerController, CurrentWidget), Z_Construct_UClass_UMSDUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_CurrentWidget_MetaData), Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_CurrentWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_PlayerInputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "HordeShooter/Character/Input/MSDPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_PlayerInputMappingContext = { "PlayerInputMappingContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDPlayerController, PlayerInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_PlayerInputMappingContext_MetaData), Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_PlayerInputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMSDPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUDClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_HUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_CurrentWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDPlayerController_Statics::NewProp_PlayerInputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMSDPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMSDPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMSDPlayerController_Statics::ClassParams = {
		&AMSDPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMSDPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMSDPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMSDPlayerController()
	{
		if (!Z_Registration_Info_UClass_AMSDPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMSDPlayerController.OuterSingleton, Z_Construct_UClass_AMSDPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMSDPlayerController.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<AMSDPlayerController>()
	{
		return AMSDPlayerController::StaticClass();
	}
	AMSDPlayerController::AMSDPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMSDPlayerController);
	AMSDPlayerController::~AMSDPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Input_MSDPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Input_MSDPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMSDPlayerController, AMSDPlayerController::StaticClass, TEXT("AMSDPlayerController"), &Z_Registration_Info_UClass_AMSDPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMSDPlayerController), 221649720U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Input_MSDPlayerController_h_2436868237(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Input_MSDPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_Input_MSDPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
