// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Pooled_Objects/MSD_ObjectPoolComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSD_ObjectPoolComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSD_PooledObject_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_ObjectPoolComponent();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_ObjectPoolComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	DEFINE_FUNCTION(UMSD_ObjectPoolComponent::execOnPooledObjectDespawned)
	{
		P_GET_OBJECT(AMSD_PooledObject,Z_Param_PooledObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPooledObjectDespawned(Z_Param_PooledObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMSD_ObjectPoolComponent::execSpawnPooledObject)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMSD_PooledObject**)Z_Param__Result=P_THIS->SpawnPooledObject(Z_Param_Out_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMSD_ObjectPoolComponent::execInitializePool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializePool();
		P_NATIVE_END;
	}
	void UMSD_ObjectPoolComponent::StaticRegisterNativesUMSD_ObjectPoolComponent()
	{
		UClass* Class = UMSD_ObjectPoolComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializePool", &UMSD_ObjectPoolComponent::execInitializePool },
			{ "OnPooledObjectDespawned", &UMSD_ObjectPoolComponent::execOnPooledObjectDespawned },
			{ "SpawnPooledObject", &UMSD_ObjectPoolComponent::execSpawnPooledObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool_Statics
	{
		struct MSD_ObjectPoolComponent_eventInitializePool_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MSD_ObjectPoolComponent_eventInitializePool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MSD_ObjectPoolComponent_eventInitializePool_Parms), &Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_ObjectPoolComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSD_ObjectPoolComponent, nullptr, "InitializePool", nullptr, nullptr, Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool_Statics::MSD_ObjectPoolComponent_eventInitializePool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool_Statics::MSD_ObjectPoolComponent_eventInitializePool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMSD_ObjectPoolComponent_OnPooledObjectDespawned_Statics
	{
		struct MSD_ObjectPoolComponent_eventOnPooledObjectDespawned_Parms
		{
			AMSD_PooledObject* PooledObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PooledObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSD_ObjectPoolComponent_OnPooledObjectDespawned_Statics::NewProp_PooledObject = { "PooledObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSD_ObjectPoolComponent_eventOnPooledObjectDespawned_Parms, PooledObject), Z_Construct_UClass_AMSD_PooledObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSD_ObjectPoolComponent_OnPooledObjectDespawned_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSD_ObjectPoolComponent_OnPooledObjectDespawned_Statics::NewProp_PooledObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSD_ObjectPoolComponent_OnPooledObjectDespawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_ObjectPoolComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSD_ObjectPoolComponent_OnPooledObjectDespawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSD_ObjectPoolComponent, nullptr, "OnPooledObjectDespawned", nullptr, nullptr, Z_Construct_UFunction_UMSD_ObjectPoolComponent_OnPooledObjectDespawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSD_ObjectPoolComponent_OnPooledObjectDespawned_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSD_ObjectPoolComponent_OnPooledObjectDespawned_Statics::MSD_ObjectPoolComponent_eventOnPooledObjectDespawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSD_ObjectPoolComponent_OnPooledObjectDespawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSD_ObjectPoolComponent_OnPooledObjectDespawned_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSD_ObjectPoolComponent_OnPooledObjectDespawned_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMSD_ObjectPoolComponent_OnPooledObjectDespawned_Statics::MSD_ObjectPoolComponent_eventOnPooledObjectDespawned_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMSD_ObjectPoolComponent_OnPooledObjectDespawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSD_ObjectPoolComponent_OnPooledObjectDespawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics
	{
		struct MSD_ObjectPoolComponent_eventSpawnPooledObject_Parms
		{
			FTransform Transform;
			AMSD_PooledObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSD_ObjectPoolComponent_eventSpawnPooledObject_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::NewProp_Transform_MetaData), Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::NewProp_Transform_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSD_ObjectPoolComponent_eventSpawnPooledObject_Parms, ReturnValue), Z_Construct_UClass_AMSD_PooledObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_ObjectPoolComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSD_ObjectPoolComponent, nullptr, "SpawnPooledObject", nullptr, nullptr, Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::MSD_ObjectPoolComponent_eventSpawnPooledObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::MSD_ObjectPoolComponent_eventSpawnPooledObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSD_ObjectPoolComponent);
	UClass* Z_Construct_UClass_UMSD_ObjectPoolComponent_NoRegister()
	{
		return UMSD_ObjectPoolComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PooledObjectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PooledObjectClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPool_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPool_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectPool;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnedObjectIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedObjectIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedObjectIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMSD_ObjectPoolComponent_InitializePool, "InitializePool" }, // 3243217203
		{ &Z_Construct_UFunction_UMSD_ObjectPoolComponent_OnPooledObjectDespawned, "OnPooledObjectDespawned" }, // 3130408728
		{ &Z_Construct_UFunction_UMSD_ObjectPoolComponent_SpawnPooledObject, "SpawnPooledObject" }, // 3049420123
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HordeShooter/Pooled_Objects/MSD_ObjectPoolComponent.h" },
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_ObjectPoolComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_PooledObjectClass_MetaData[] = {
		{ "Category", "MSD_ObjectPoolComponent" },
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_ObjectPoolComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_PooledObjectClass = { "PooledObjectClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_ObjectPoolComponent, PooledObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMSD_PooledObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_PooledObjectClass_MetaData), Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_PooledObjectClass_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_ObjectPool_Inner = { "ObjectPool", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMSD_PooledObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_ObjectPool_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_ObjectPoolComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_ObjectPool = { "ObjectPool", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_ObjectPoolComponent, ObjectPool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_ObjectPool_MetaData), Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_ObjectPool_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_SpawnedObjectIndices_Inner = { "SpawnedObjectIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_SpawnedObjectIndices_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_ObjectPoolComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_SpawnedObjectIndices = { "SpawnedObjectIndices", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_ObjectPoolComponent, SpawnedObjectIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_SpawnedObjectIndices_MetaData), Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_SpawnedObjectIndices_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_PooledObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_ObjectPool_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_ObjectPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_SpawnedObjectIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::NewProp_SpawnedObjectIndices,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSD_ObjectPoolComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::ClassParams = {
		&UMSD_ObjectPoolComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMSD_ObjectPoolComponent()
	{
		if (!Z_Registration_Info_UClass_UMSD_ObjectPoolComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSD_ObjectPoolComponent.OuterSingleton, Z_Construct_UClass_UMSD_ObjectPoolComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSD_ObjectPoolComponent.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSD_ObjectPoolComponent>()
	{
		return UMSD_ObjectPoolComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSD_ObjectPoolComponent);
	UMSD_ObjectPoolComponent::~UMSD_ObjectPoolComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Pooled_Objects_MSD_ObjectPoolComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Pooled_Objects_MSD_ObjectPoolComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSD_ObjectPoolComponent, UMSD_ObjectPoolComponent::StaticClass, TEXT("UMSD_ObjectPoolComponent"), &Z_Registration_Info_UClass_UMSD_ObjectPoolComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSD_ObjectPoolComponent), 1564697744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Pooled_Objects_MSD_ObjectPoolComponent_h_3255272026(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Pooled_Objects_MSD_ObjectPoolComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Pooled_Objects_MSD_ObjectPoolComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
