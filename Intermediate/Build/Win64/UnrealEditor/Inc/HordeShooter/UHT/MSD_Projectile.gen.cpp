// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Pooled_Objects/MSD_Projectile.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSD_Projectile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSD_PooledObject();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSD_Projectile();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSD_Projectile_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	DEFINE_FUNCTION(AMSD_Projectile::execCollisionCallback)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollisionCallback(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	struct MSD_Projectile_eventOnProjectileHit_Parms
	{
		AActor* OtherActor;
		FHitResult SweepResult;
	};
	static FName NAME_AMSD_Projectile_OnProjectileHit = FName(TEXT("OnProjectileHit"));
	void AMSD_Projectile::OnProjectileHit(AActor* OtherActor, FHitResult const& SweepResult)
	{
		MSD_Projectile_eventOnProjectileHit_Parms Parms;
		Parms.OtherActor=OtherActor;
		Parms.SweepResult=SweepResult;
		ProcessEvent(FindFunctionChecked(NAME_AMSD_Projectile_OnProjectileHit),&Parms);
	}
	void AMSD_Projectile::StaticRegisterNativesAMSD_Projectile()
	{
		UClass* Class = AMSD_Projectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollisionCallback", &AMSD_Projectile::execCollisionCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics
	{
		struct MSD_Projectile_eventCollisionCallback_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSD_Projectile_eventCollisionCallback_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSD_Projectile_eventCollisionCallback_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSD_Projectile_eventCollisionCallback_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSD_Projectile_eventCollisionCallback_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MSD_Projectile_eventCollisionCallback_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MSD_Projectile_eventCollisionCallback_Parms), &Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSD_Projectile_eventCollisionCallback_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_Projectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSD_Projectile, nullptr, "CollisionCallback", nullptr, nullptr, Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::MSD_Projectile_eventCollisionCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::MSD_Projectile_eventCollisionCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSD_Projectile_CollisionCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSD_Projectile_CollisionCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSD_Projectile_eventOnProjectileHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSD_Projectile_eventOnProjectileHit_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_Projectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSD_Projectile, nullptr, "OnProjectileHit", nullptr, nullptr, Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit_Statics::PropPointers), sizeof(MSD_Projectile_eventOnProjectileHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(MSD_Projectile_eventOnProjectileHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMSD_Projectile);
	UClass* Z_Construct_UClass_AMSD_Projectile_NoRegister()
	{
		return AMSD_Projectile::StaticClass();
	}
	struct Z_Construct_UClass_AMSD_Projectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Lifetime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMSD_Projectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMSD_PooledObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_Projectile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMSD_Projectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMSD_Projectile_CollisionCallback, "CollisionCallback" }, // 1853741266
		{ &Z_Construct_UFunction_AMSD_Projectile_OnProjectileHit, "OnProjectileHit" }, // 1564839074
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_Projectile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSD_Projectile_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HordeShooter/Pooled_Objects/MSD_Projectile.h" },
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_Projectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_Projectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSD_Projectile, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_SceneComponent_MetaData), Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_SceneComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Visuals" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_Projectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSD_Projectile, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_MeshComponent_MetaData), Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_MeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "Visuals" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_Projectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSD_Projectile, ParticleSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_ParticleSystem_MetaData), Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_ParticleSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_Projectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSD_Projectile, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_ProjectileMovementComponent_MetaData), Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_ProjectileMovementComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_Projectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSD_Projectile, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_CollisionComponent_MetaData), Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_CollisionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_Lifetime_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_Projectile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSD_Projectile, Lifetime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_Lifetime_MetaData), Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_Lifetime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_Projectile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSD_Projectile, Velocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_Velocity_MetaData), Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "HordeShooter/Pooled_Objects/MSD_Projectile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSD_Projectile, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_Damage_MetaData), Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_Damage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMSD_Projectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_ParticleSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_ProjectileMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_Lifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSD_Projectile_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMSD_Projectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMSD_Projectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMSD_Projectile_Statics::ClassParams = {
		&AMSD_Projectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMSD_Projectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_Projectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_Projectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AMSD_Projectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSD_Projectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMSD_Projectile()
	{
		if (!Z_Registration_Info_UClass_AMSD_Projectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMSD_Projectile.OuterSingleton, Z_Construct_UClass_AMSD_Projectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMSD_Projectile.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<AMSD_Projectile>()
	{
		return AMSD_Projectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMSD_Projectile);
	AMSD_Projectile::~AMSD_Projectile() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Pooled_Objects_MSD_Projectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Pooled_Objects_MSD_Projectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMSD_Projectile, AMSD_Projectile::StaticClass, TEXT("AMSD_Projectile"), &Z_Registration_Info_UClass_AMSD_Projectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMSD_Projectile), 3075048523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Pooled_Objects_MSD_Projectile_h_2743675515(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Pooled_Objects_MSD_Projectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Pooled_Objects_MSD_Projectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
