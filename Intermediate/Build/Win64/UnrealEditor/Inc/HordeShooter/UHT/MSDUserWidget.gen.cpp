// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/UI/MSDUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSDUserWidget() {}
// Cross Module References
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDUserWidget();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	DEFINE_FUNCTION(UMSDUserWidget::execBackOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BackOut();
		P_NATIVE_END;
	}
	void UMSDUserWidget::StaticRegisterNativesUMSDUserWidget()
	{
		UClass* Class = UMSDUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BackOut", &UMSDUserWidget::execBackOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMSDUserWidget_BackOut_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSDUserWidget_BackOut_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//At the moment, this function is the only reason for this class's existence\n//It just allows me to have any widget respond to the pause key being pressed\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/UI/MSDUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "At the moment, this function is the only reason for this class's existence\nIt just allows me to have any widget respond to the pause key being pressed" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSDUserWidget_BackOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSDUserWidget, nullptr, "BackOut", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSDUserWidget_BackOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSDUserWidget_BackOut_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMSDUserWidget_BackOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSDUserWidget_BackOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSDUserWidget);
	UClass* Z_Construct_UClass_UMSDUserWidget_NoRegister()
	{
		return UMSDUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMSDUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSDUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDUserWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMSDUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMSDUserWidget_BackOut, "BackOut" }, // 1912935465
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDUserWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDUserWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/UI/MSDUserWidget.h" },
		{ "ModuleRelativePath", "HordeShooter/UI/MSDUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDUserWidget_Statics::NewProp_ParentWidget_MetaData[] = {
		{ "Category", "MSDUserWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//A reference to the parent widget, typically for easy access when backing out of this one\n" },
#endif
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "HordeShooter/UI/MSDUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A reference to the parent widget, typically for easy access when backing out of this one" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSDUserWidget_Statics::NewProp_ParentWidget = { "ParentWidget", nullptr, (EPropertyFlags)0x001100000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDUserWidget, ParentWidget), Z_Construct_UClass_UMSDUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDUserWidget_Statics::NewProp_ParentWidget_MetaData), Z_Construct_UClass_UMSDUserWidget_Statics::NewProp_ParentWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSDUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDUserWidget_Statics::NewProp_ParentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSDUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSDUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSDUserWidget_Statics::ClassParams = {
		&UMSDUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMSDUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSDUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSDUserWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDUserWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMSDUserWidget()
	{
		if (!Z_Registration_Info_UClass_UMSDUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSDUserWidget.OuterSingleton, Z_Construct_UClass_UMSDUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSDUserWidget.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSDUserWidget>()
	{
		return UMSDUserWidget::StaticClass();
	}
	UMSDUserWidget::UMSDUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSDUserWidget);
	UMSDUserWidget::~UMSDUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSDUserWidget, UMSDUserWidget::StaticClass, TEXT("UMSDUserWidget"), &Z_Registration_Info_UClass_UMSDUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSDUserWidget), 2859841205U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDUserWidget_h_842943384(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
