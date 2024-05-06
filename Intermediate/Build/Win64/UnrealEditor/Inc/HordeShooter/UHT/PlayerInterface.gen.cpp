// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Interfaces/PlayerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSDUserWidget_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UPlayerInterface();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UPlayerInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	DEFINE_FUNCTION(IPlayerInterface::execSetCurrentWidget)
	{
		P_GET_OBJECT(UMSDUserWidget,Z_Param_NewWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentWidget_Implementation(Z_Param_NewWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execGetCurrentWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMSDUserWidget**)Z_Param__Result=P_THIS->GetCurrentWidget_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execRetrieveBodyMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->RetrieveBodyMesh_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execRetrieveHandsMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->RetrieveHandsMesh_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execGetCameraComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetCameraComponent_Implementation();
		P_NATIVE_END;
	}
	struct PlayerInterface_eventGetCameraComponent_Parms
	{
		UCameraComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerInterface_eventGetCameraComponent_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct PlayerInterface_eventGetCurrentWidget_Parms
	{
		UMSDUserWidget* ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerInterface_eventGetCurrentWidget_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct PlayerInterface_eventRetrieveBodyMesh_Parms
	{
		USkeletalMeshComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerInterface_eventRetrieveBodyMesh_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct PlayerInterface_eventRetrieveHandsMesh_Parms
	{
		USkeletalMeshComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerInterface_eventRetrieveHandsMesh_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct PlayerInterface_eventSetCurrentWidget_Parms
	{
		UMSDUserWidget* NewWidget;
	};
	UCameraComponent* IPlayerInterface::GetCameraComponent() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCameraComponent instead.");
		PlayerInterface_eventGetCameraComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	UMSDUserWidget* IPlayerInterface::GetCurrentWidget() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurrentWidget instead.");
		PlayerInterface_eventGetCurrentWidget_Parms Parms;
		return Parms.ReturnValue;
	}
	USkeletalMeshComponent* IPlayerInterface::RetrieveBodyMesh() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RetrieveBodyMesh instead.");
		PlayerInterface_eventRetrieveBodyMesh_Parms Parms;
		return Parms.ReturnValue;
	}
	USkeletalMeshComponent* IPlayerInterface::RetrieveHandsMesh() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RetrieveHandsMesh instead.");
		PlayerInterface_eventRetrieveHandsMesh_Parms Parms;
		return Parms.ReturnValue;
	}
	void IPlayerInterface::SetCurrentWidget(UMSDUserWidget* NewWidget)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCurrentWidget instead.");
	}
	void UPlayerInterface::StaticRegisterNativesUPlayerInterface()
	{
		UClass* Class = UPlayerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCameraComponent", &IPlayerInterface::execGetCameraComponent },
			{ "GetCurrentWidget", &IPlayerInterface::execGetCurrentWidget },
			{ "RetrieveBodyMesh", &IPlayerInterface::execRetrieveBodyMesh },
			{ "RetrieveHandsMesh", &IPlayerInterface::execRetrieveHandsMesh },
			{ "SetCurrentWidget", &IPlayerInterface::execSetCurrentWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerInterface_GetCameraComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_GetCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInterface_GetCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventGetCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetCameraComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UPlayerInterface_GetCameraComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_GetCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_GetCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_GetCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Interfaces/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_GetCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "GetCameraComponent", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_GetCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetCameraComponent_Statics::PropPointers), sizeof(PlayerInterface_eventGetCameraComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetCameraComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_GetCameraComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetCameraComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventGetCameraComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_GetCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_GetCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_GetCurrentWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_GetCurrentWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInterface_GetCurrentWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventGetCurrentWidget_Parms, ReturnValue), Z_Construct_UClass_UMSDUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetCurrentWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UPlayerInterface_GetCurrentWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_GetCurrentWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_GetCurrentWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_GetCurrentWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Interfaces/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_GetCurrentWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "GetCurrentWidget", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_GetCurrentWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetCurrentWidget_Statics::PropPointers), sizeof(PlayerInterface_eventGetCurrentWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetCurrentWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_GetCurrentWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetCurrentWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventGetCurrentWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_GetCurrentWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_GetCurrentWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_RetrieveBodyMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_RetrieveBodyMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInterface_RetrieveBodyMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventRetrieveBodyMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_RetrieveBodyMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UPlayerInterface_RetrieveBodyMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_RetrieveBodyMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_RetrieveBodyMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_RetrieveBodyMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Interfaces/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_RetrieveBodyMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "RetrieveBodyMesh", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_RetrieveBodyMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_RetrieveBodyMesh_Statics::PropPointers), sizeof(PlayerInterface_eventRetrieveBodyMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_RetrieveBodyMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_RetrieveBodyMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_RetrieveBodyMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventRetrieveBodyMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_RetrieveBodyMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_RetrieveBodyMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_RetrieveHandsMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_RetrieveHandsMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInterface_RetrieveHandsMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventRetrieveHandsMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_RetrieveHandsMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UPlayerInterface_RetrieveHandsMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_RetrieveHandsMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_RetrieveHandsMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_RetrieveHandsMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Interfaces/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_RetrieveHandsMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "RetrieveHandsMesh", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_RetrieveHandsMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_RetrieveHandsMesh_Statics::PropPointers), sizeof(PlayerInterface_eventRetrieveHandsMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_RetrieveHandsMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_RetrieveHandsMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_RetrieveHandsMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventRetrieveHandsMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_RetrieveHandsMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_RetrieveHandsMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_SetCurrentWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_SetCurrentWidget_Statics::NewProp_NewWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInterface_SetCurrentWidget_Statics::NewProp_NewWidget = { "NewWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventSetCurrentWidget_Parms, NewWidget), Z_Construct_UClass_UMSDUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_SetCurrentWidget_Statics::NewProp_NewWidget_MetaData), Z_Construct_UFunction_UPlayerInterface_SetCurrentWidget_Statics::NewProp_NewWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_SetCurrentWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_SetCurrentWidget_Statics::NewProp_NewWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_SetCurrentWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Interfaces/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_SetCurrentWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "SetCurrentWidget", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_SetCurrentWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_SetCurrentWidget_Statics::PropPointers), sizeof(PlayerInterface_eventSetCurrentWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_SetCurrentWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_SetCurrentWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_SetCurrentWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventSetCurrentWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_SetCurrentWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_SetCurrentWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInterface);
	UClass* Z_Construct_UClass_UPlayerInterface_NoRegister()
	{
		return UPlayerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInterface_GetCameraComponent, "GetCameraComponent" }, // 429846494
		{ &Z_Construct_UFunction_UPlayerInterface_GetCurrentWidget, "GetCurrentWidget" }, // 3221646278
		{ &Z_Construct_UFunction_UPlayerInterface_RetrieveBodyMesh, "RetrieveBodyMesh" }, // 2190333942
		{ &Z_Construct_UFunction_UPlayerInterface_RetrieveHandsMesh, "RetrieveHandsMesh" }, // 926375034
		{ &Z_Construct_UFunction_UPlayerInterface_SetCurrentWidget, "SetCurrentWidget" }, // 3158008896
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Interfaces/PlayerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInterface_Statics::ClassParams = {
		&UPlayerInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPlayerInterface()
	{
		if (!Z_Registration_Info_UClass_UPlayerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInterface.OuterSingleton, Z_Construct_UClass_UPlayerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerInterface.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UPlayerInterface>()
	{
		return UPlayerInterface::StaticClass();
	}
	UPlayerInterface::UPlayerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInterface);
	UPlayerInterface::~UPlayerInterface() {}
	static FName NAME_UPlayerInterface_GetCameraComponent = FName(TEXT("GetCameraComponent"));
	UCameraComponent* IPlayerInterface::Execute_GetCameraComponent(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventGetCameraComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_GetCameraComponent);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCameraComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerInterface_GetCurrentWidget = FName(TEXT("GetCurrentWidget"));
	UMSDUserWidget* IPlayerInterface::Execute_GetCurrentWidget(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventGetCurrentWidget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_GetCurrentWidget);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCurrentWidget_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerInterface_RetrieveBodyMesh = FName(TEXT("RetrieveBodyMesh"));
	USkeletalMeshComponent* IPlayerInterface::Execute_RetrieveBodyMesh(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventRetrieveBodyMesh_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_RetrieveBodyMesh);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->RetrieveBodyMesh_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerInterface_RetrieveHandsMesh = FName(TEXT("RetrieveHandsMesh"));
	USkeletalMeshComponent* IPlayerInterface::Execute_RetrieveHandsMesh(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventRetrieveHandsMesh_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_RetrieveHandsMesh);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->RetrieveHandsMesh_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerInterface_SetCurrentWidget = FName(TEXT("SetCurrentWidget"));
	void IPlayerInterface::Execute_SetCurrentWidget(UObject* O, UMSDUserWidget* NewWidget)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventSetCurrentWidget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_SetCurrentWidget);
		if (Func)
		{
			Parms.NewWidget=NewWidget;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			I->SetCurrentWidget_Implementation(NewWidget);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInterface, UPlayerInterface::StaticClass, TEXT("UPlayerInterface"), &Z_Registration_Info_UClass_UPlayerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInterface), 1379622954U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_3701717851(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_PlayerInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
