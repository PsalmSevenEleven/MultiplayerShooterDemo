// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/UI/ClassSelectWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassSelectWidget() {}
// Cross Module References
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDCharacterMenuViewer_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UClassSelectWidget();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UClassSelectWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	DEFINE_FUNCTION(UClassSelectWidget::execInitMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitMenu();
		P_NATIVE_END;
	}
	void UClassSelectWidget::StaticRegisterNativesUClassSelectWidget()
	{
		UClass* Class = UClassSelectWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitMenu", &UClassSelectWidget::execInitMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClassSelectWidget_InitMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClassSelectWidget_InitMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClassSelectWidget_InitMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClassSelectWidget, nullptr, "InitMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClassSelectWidget_InitMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClassSelectWidget_InitMenu_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UClassSelectWidget_InitMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClassSelectWidget_InitMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClassSelectWidget);
	UClass* Z_Construct_UClass_UClassSelectWidget_NoRegister()
	{
		return UClassSelectWidget::StaticClass();
	}
	struct Z_Construct_UClass_UClassSelectWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NextButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectClassButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectClassButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMenuViewer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMenuViewer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClassSelectWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UClassSelectWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClassSelectWidget_InitMenu, "InitMenu" }, // 1067036157
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassSelectWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/ClassSelectWidget.h" },
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_NextButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_NextButton = { "NextButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClassSelectWidget, NextButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_NextButton_MetaData), Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_NextButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_PreviousButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_PreviousButton = { "PreviousButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClassSelectWidget, PreviousButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_PreviousButton_MetaData), Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_PreviousButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectClassButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectClassButton = { "SelectClassButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClassSelectWidget, SelectClassButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectClassButton_MetaData), Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectClassButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_CharacterMenuViewer_MetaData[] = {
		{ "Category", "ClassSelectWidget" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_CharacterMenuViewer = { "CharacterMenuViewer", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClassSelectWidget, CharacterMenuViewer), Z_Construct_UClass_AMSDCharacterMenuViewer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_CharacterMenuViewer_MetaData), Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_CharacterMenuViewer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClassSelectWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_NextButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_PreviousButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectClassButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_CharacterMenuViewer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClassSelectWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassSelectWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClassSelectWidget_Statics::ClassParams = {
		&UClassSelectWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UClassSelectWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UClassSelectWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UClassSelectWidget()
	{
		if (!Z_Registration_Info_UClass_UClassSelectWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClassSelectWidget.OuterSingleton, Z_Construct_UClass_UClassSelectWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClassSelectWidget.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UClassSelectWidget>()
	{
		return UClassSelectWidget::StaticClass();
	}
	UClassSelectWidget::UClassSelectWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClassSelectWidget);
	UClassSelectWidget::~UClassSelectWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_ClassSelectWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_ClassSelectWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClassSelectWidget, UClassSelectWidget::StaticClass, TEXT("UClassSelectWidget"), &Z_Registration_Info_UClass_UClassSelectWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClassSelectWidget), 1381037842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_ClassSelectWidget_h_1730456873(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_ClassSelectWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_ClassSelectWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
