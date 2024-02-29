// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/UI/SubclassButtonWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubclassButtonWidget() {}
// Cross Module References
	HORDESHOOTER_API UClass* Z_Construct_UClass_UClassSelectWidget_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_USubclassButtonWidget();
	HORDESHOOTER_API UClass* Z_Construct_UClass_USubclassButtonWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	DEFINE_FUNCTION(USubclassButtonWidget::execInitSubclassButton)
	{
		P_GET_OBJECT(UClassSelectWidget,Z_Param_Parent);
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitSubclassButton(Z_Param_Parent,Z_Param_InIndex,Z_Param_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubclassButtonWidget::execButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ButtonPressed();
		P_NATIVE_END;
	}
	void USubclassButtonWidget::StaticRegisterNativesUSubclassButtonWidget()
	{
		UClass* Class = USubclassButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ButtonPressed", &USubclassButtonWidget::execButtonPressed },
			{ "InitSubclassButton", &USubclassButtonWidget::execInitSubclassButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubclassButtonWidget_ButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubclassButtonWidget_ButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/UI/SubclassButtonWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassButtonWidget_ButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubclassButtonWidget, nullptr, "ButtonPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassButtonWidget_ButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassButtonWidget_ButtonPressed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USubclassButtonWidget_ButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassButtonWidget_ButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics
	{
		struct SubclassButtonWidget_eventInitSubclassButton_Parms
		{
			UClassSelectWidget* Parent;
			int32 InIndex;
			FString InName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassButtonWidget_eventInitSubclassButton_Parms, Parent), Z_Construct_UClass_UClassSelectWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::NewProp_Parent_MetaData), Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::NewProp_Parent_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassButtonWidget_eventInitSubclassButton_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassButtonWidget_eventInitSubclassButton_Parms, InName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::NewProp_InIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/UI/SubclassButtonWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubclassButtonWidget, nullptr, "InitSubclassButton", nullptr, nullptr, Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::SubclassButtonWidget_eventInitSubclassButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::SubclassButtonWidget_eventInitSubclassButton_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubclassButtonWidget);
	UClass* Z_Construct_UClass_USubclassButtonWidget_NoRegister()
	{
		return USubclassButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_USubclassButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubclassButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubclassButtonWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USubclassButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubclassButtonWidget_ButtonPressed, "ButtonPressed" }, // 2109588405
		{ &Z_Construct_UFunction_USubclassButtonWidget_InitSubclassButton, "InitSubclassButton" }, // 3742224597
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubclassButtonWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubclassButtonWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/UI/SubclassButtonWidget.h" },
		{ "ModuleRelativePath", "HordeShooter/UI/SubclassButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubclassButtonWidget_Statics::NewProp_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/UI/SubclassButtonWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubclassButtonWidget_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubclassButtonWidget, Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubclassButtonWidget_Statics::NewProp_Button_MetaData), Z_Construct_UClass_USubclassButtonWidget_Statics::NewProp_Button_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubclassButtonWidget_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "SubclassButtonWidget" },
		{ "ModuleRelativePath", "HordeShooter/UI/SubclassButtonWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubclassButtonWidget_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubclassButtonWidget, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubclassButtonWidget_Statics::NewProp_Name_MetaData), Z_Construct_UClass_USubclassButtonWidget_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubclassButtonWidget_Statics::NewProp_ParentWidget_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/UI/SubclassButtonWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubclassButtonWidget_Statics::NewProp_ParentWidget = { "ParentWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubclassButtonWidget, ParentWidget), Z_Construct_UClass_UClassSelectWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubclassButtonWidget_Statics::NewProp_ParentWidget_MetaData), Z_Construct_UClass_USubclassButtonWidget_Statics::NewProp_ParentWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubclassButtonWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubclassButtonWidget_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubclassButtonWidget_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubclassButtonWidget_Statics::NewProp_ParentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubclassButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubclassButtonWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubclassButtonWidget_Statics::ClassParams = {
		&USubclassButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubclassButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubclassButtonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubclassButtonWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USubclassButtonWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubclassButtonWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USubclassButtonWidget()
	{
		if (!Z_Registration_Info_UClass_USubclassButtonWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubclassButtonWidget.OuterSingleton, Z_Construct_UClass_USubclassButtonWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubclassButtonWidget.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<USubclassButtonWidget>()
	{
		return USubclassButtonWidget::StaticClass();
	}
	USubclassButtonWidget::USubclassButtonWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubclassButtonWidget);
	USubclassButtonWidget::~USubclassButtonWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_SubclassButtonWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_SubclassButtonWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubclassButtonWidget, USubclassButtonWidget::StaticClass, TEXT("USubclassButtonWidget"), &Z_Registration_Info_UClass_USubclassButtonWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubclassButtonWidget), 268479991U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_SubclassButtonWidget_h_3956640449(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_SubclassButtonWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_SubclassButtonWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
