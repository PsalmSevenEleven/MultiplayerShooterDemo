// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/UI/MSDHud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSDHud() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UInteractPrompt_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDHud();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDHud_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	DEFINE_FUNCTION(UMSDHud::execUpdateDirectionIndicator)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdateDirectionIndicator_Implementation(Z_Param_Out_Direction);
		P_NATIVE_END;
	}
	struct MSDHud_eventUpdateDirectionIndicator_Parms
	{
		FVector2D Direction;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		MSDHud_eventUpdateDirectionIndicator_Parms()
			: ReturnValue(0)
		{
		}
	};
	static FName NAME_UMSDHud_UpdateDirectionIndicator = FName(TEXT("UpdateDirectionIndicator"));
	int32 UMSDHud::UpdateDirectionIndicator(FVector2D const& Direction)
	{
		MSDHud_eventUpdateDirectionIndicator_Parms Parms;
		Parms.Direction=Direction;
		ProcessEvent(FindFunctionChecked(NAME_UMSDHud_UpdateDirectionIndicator),&Parms);
		return Parms.ReturnValue;
	}
	void UMSDHud::StaticRegisterNativesUMSDHud()
	{
		UClass* Class = UMSDHud::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateDirectionIndicator", &UMSDHud::execUpdateDirectionIndicator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDHud_eventUpdateDirectionIndicator_Parms, Direction), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator_Statics::NewProp_Direction_MetaData), Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator_Statics::NewProp_Direction_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDHud_eventUpdateDirectionIndicator_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/UI/MSDHud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSDHud, nullptr, "UpdateDirectionIndicator", nullptr, nullptr, Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator_Statics::PropPointers), sizeof(MSDHud_eventUpdateDirectionIndicator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator_Statics::PropPointers) < 2048);
	static_assert(sizeof(MSDHud_eventUpdateDirectionIndicator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSDHud);
	UClass* Z_Construct_UClass_UMSDHud_NoRegister()
	{
		return UMSDHud::StaticClass();
	}
	struct Z_Construct_UClass_UMSDHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crosshair_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Crosshair;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionIndicator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectionIndicator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractPrompt_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractPrompt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothedDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothedDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSDHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDHud_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMSDHud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMSDHud_UpdateDirectionIndicator, "UpdateDirectionIndicator" }, // 2499249285
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDHud_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDHud_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/UI/MSDHud.h" },
		{ "ModuleRelativePath", "HordeShooter/UI/MSDHud.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDHud_Statics::NewProp_Crosshair_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/UI/MSDHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSDHud_Statics::NewProp_Crosshair = { "Crosshair", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDHud, Crosshair), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDHud_Statics::NewProp_Crosshair_MetaData), Z_Construct_UClass_UMSDHud_Statics::NewProp_Crosshair_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDHud_Statics::NewProp_DirectionIndicator_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/UI/MSDHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSDHud_Statics::NewProp_DirectionIndicator = { "DirectionIndicator", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDHud, DirectionIndicator), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDHud_Statics::NewProp_DirectionIndicator_MetaData), Z_Construct_UClass_UMSDHud_Statics::NewProp_DirectionIndicator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDHud_Statics::NewProp_InteractPrompt_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/UI/MSDHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSDHud_Statics::NewProp_InteractPrompt = { "InteractPrompt", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDHud, InteractPrompt), Z_Construct_UClass_UInteractPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDHud_Statics::NewProp_InteractPrompt_MetaData), Z_Construct_UClass_UMSDHud_Statics::NewProp_InteractPrompt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSDHud_Statics::NewProp_SmoothedDirection_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/UI/MSDHud.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSDHud_Statics::NewProp_SmoothedDirection = { "SmoothedDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSDHud, SmoothedDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDHud_Statics::NewProp_SmoothedDirection_MetaData), Z_Construct_UClass_UMSDHud_Statics::NewProp_SmoothedDirection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSDHud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDHud_Statics::NewProp_Crosshair,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDHud_Statics::NewProp_DirectionIndicator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDHud_Statics::NewProp_InteractPrompt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSDHud_Statics::NewProp_SmoothedDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSDHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSDHud>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSDHud_Statics::ClassParams = {
		&UMSDHud::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMSDHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSDHud_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDHud_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSDHud_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSDHud_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMSDHud()
	{
		if (!Z_Registration_Info_UClass_UMSDHud.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSDHud.OuterSingleton, Z_Construct_UClass_UMSDHud_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSDHud.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSDHud>()
	{
		return UMSDHud::StaticClass();
	}
	UMSDHud::UMSDHud(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSDHud);
	UMSDHud::~UMSDHud() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDHud_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDHud_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSDHud, UMSDHud::StaticClass, TEXT("UMSDHud"), &Z_Registration_Info_UClass_UMSDHud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSDHud), 2930329849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDHud_h_1290781035(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDHud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDHud_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
