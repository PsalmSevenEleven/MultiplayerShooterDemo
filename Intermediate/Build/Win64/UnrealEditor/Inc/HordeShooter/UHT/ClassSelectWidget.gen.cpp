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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDCharacterMenuViewer_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UClassSelectWidget();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UClassSelectWidget_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_CharacterClassDefinition_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDSaveGame_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UThrobber_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	DEFINE_FUNCTION(UClassSelectWidget::execLoadSubclass)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SubclassIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSubclass(Z_Param_SubclassIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClassSelectWidget::execLoadClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClassSelectWidget::execInitMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClassSelectWidget::execSelectButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClassSelectWidget::execPreviousButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviousButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClassSelectWidget::execNextButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextButtonClicked();
		P_NATIVE_END;
	}
	void UClassSelectWidget::StaticRegisterNativesUClassSelectWidget()
	{
		UClass* Class = UClassSelectWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitMenu", &UClassSelectWidget::execInitMenu },
			{ "LoadClass", &UClassSelectWidget::execLoadClass },
			{ "LoadSubclass", &UClassSelectWidget::execLoadSubclass },
			{ "NextButtonClicked", &UClassSelectWidget::execNextButtonClicked },
			{ "PreviousButtonClicked", &UClassSelectWidget::execPreviousButtonClicked },
			{ "SelectButtonClicked", &UClassSelectWidget::execSelectButtonClicked },
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
	struct Z_Construct_UFunction_UClassSelectWidget_LoadClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClassSelectWidget_LoadClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClassSelectWidget_LoadClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClassSelectWidget, nullptr, "LoadClass", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClassSelectWidget_LoadClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClassSelectWidget_LoadClass_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UClassSelectWidget_LoadClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClassSelectWidget_LoadClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClassSelectWidget_LoadSubclass_Statics
	{
		struct ClassSelectWidget_eventLoadSubclass_Parms
		{
			int32 SubclassIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubclassIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClassSelectWidget_LoadSubclass_Statics::NewProp_SubclassIndex = { "SubclassIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassSelectWidget_eventLoadSubclass_Parms, SubclassIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClassSelectWidget_LoadSubclass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClassSelectWidget_LoadSubclass_Statics::NewProp_SubclassIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClassSelectWidget_LoadSubclass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClassSelectWidget_LoadSubclass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClassSelectWidget, nullptr, "LoadSubclass", nullptr, nullptr, Z_Construct_UFunction_UClassSelectWidget_LoadSubclass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClassSelectWidget_LoadSubclass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClassSelectWidget_LoadSubclass_Statics::ClassSelectWidget_eventLoadSubclass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClassSelectWidget_LoadSubclass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClassSelectWidget_LoadSubclass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClassSelectWidget_LoadSubclass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UClassSelectWidget_LoadSubclass_Statics::ClassSelectWidget_eventLoadSubclass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UClassSelectWidget_LoadSubclass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClassSelectWidget_LoadSubclass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClassSelectWidget_NextButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClassSelectWidget_NextButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClassSelectWidget_NextButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClassSelectWidget, nullptr, "NextButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClassSelectWidget_NextButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClassSelectWidget_NextButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UClassSelectWidget_NextButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClassSelectWidget_NextButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClassSelectWidget_PreviousButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClassSelectWidget_PreviousButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClassSelectWidget_PreviousButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClassSelectWidget, nullptr, "PreviousButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClassSelectWidget_PreviousButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClassSelectWidget_PreviousButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UClassSelectWidget_PreviousButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClassSelectWidget_PreviousButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClassSelectWidget_SelectButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClassSelectWidget_SelectButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClassSelectWidget_SelectButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClassSelectWidget, nullptr, "SelectButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClassSelectWidget_SelectButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClassSelectWidget_SelectButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UClassSelectWidget_SelectButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClassSelectWidget_SelectButtonClicked_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedClassIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedClassIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedClassDef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedClassDef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingThrobber_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadingThrobber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubclassScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubclassScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassIds;
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
		{ &Z_Construct_UFunction_UClassSelectWidget_LoadClass, "LoadClass" }, // 1875030908
		{ &Z_Construct_UFunction_UClassSelectWidget_LoadSubclass, "LoadSubclass" }, // 3870345309
		{ &Z_Construct_UFunction_UClassSelectWidget_NextButtonClicked, "NextButtonClicked" }, // 4062761210
		{ &Z_Construct_UFunction_UClassSelectWidget_PreviousButtonClicked, "PreviousButtonClicked" }, // 2032021358
		{ &Z_Construct_UFunction_UClassSelectWidget_SelectButtonClicked, "SelectButtonClicked" }, // 949854017
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_NextButton = { "NextButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClassSelectWidget, NextButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_NextButton_MetaData), Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_NextButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_PreviousButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_PreviousButton = { "PreviousButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClassSelectWidget, PreviousButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_PreviousButton_MetaData), Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_PreviousButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectClassButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectClassButton = { "SelectClassButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClassSelectWidget, SelectClassButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectClassButton_MetaData), Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectClassButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectedClassIndex_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ClassSelectWidget" },
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectedClassIndex = { "SelectedClassIndex", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClassSelectWidget, SelectedClassIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectedClassIndex_MetaData), Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectedClassIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectedClassDef_MetaData[] = {
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectedClassDef = { "SelectedClassDef", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClassSelectWidget, SelectedClassDef), Z_Construct_UClass_UMSD_CharacterClassDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectedClassDef_MetaData), Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectedClassDef_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_LoadingThrobber_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ClassSelectWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_LoadingThrobber = { "LoadingThrobber", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClassSelectWidget, LoadingThrobber), Z_Construct_UClass_UThrobber_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_LoadingThrobber_MetaData), Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_LoadingThrobber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SubclassScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ClassSelectWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SubclassScrollBox = { "SubclassScrollBox", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClassSelectWidget, SubclassScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SubclassScrollBox_MetaData), Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SubclassScrollBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SaveGame_MetaData[] = {
		{ "Category", "ClassSelectWidget" },
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClassSelectWidget, SaveGame), Z_Construct_UClass_UMSDSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SaveGame_MetaData), Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SaveGame_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_ClassIds_Inner = { "ClassIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_ClassIds_MetaData[] = {
		{ "Category", "ClassSelectWidget" },
		{ "ModuleRelativePath", "UI/ClassSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_ClassIds = { "ClassIds", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClassSelectWidget, ClassIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_ClassIds_MetaData), Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_ClassIds_MetaData) };
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectedClassIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SelectedClassDef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_LoadingThrobber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SubclassScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_SaveGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_ClassIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassSelectWidget_Statics::NewProp_ClassIds,
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
		{ Z_Construct_UClass_UClassSelectWidget, UClassSelectWidget::StaticClass, TEXT("UClassSelectWidget"), &Z_Registration_Info_UClass_UClassSelectWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClassSelectWidget), 2988970935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_ClassSelectWidget_h_659604596(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_ClassSelectWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_ClassSelectWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
