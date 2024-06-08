// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Interfaces/CombatInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UCombatInterface();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	DEFINE_FUNCTION(ICombatInterface::execTakeDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->TakeDamage_Implementation(Z_Param_DamageAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execGetCleaveResistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCleaveResistance_Implementation();
		P_NATIVE_END;
	}
	struct CombatInterface_eventGetCleaveResistance_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		CombatInterface_eventGetCleaveResistance_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct CombatInterface_eventTakeDamage_Parms
	{
		int32 DamageAmount;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		CombatInterface_eventTakeDamage_Parms()
			: ReturnValue(0)
		{
		}
	};
	int32 ICombatInterface::GetCleaveResistance() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCleaveResistance instead.");
		CombatInterface_eventGetCleaveResistance_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 ICombatInterface::TakeDamage(int32 DamageAmount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TakeDamage instead.");
		CombatInterface_eventTakeDamage_Parms Parms;
		return Parms.ReturnValue;
	}
	void UCombatInterface::StaticRegisterNativesUCombatInterface()
	{
		UClass* Class = UCombatInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCleaveResistance", &ICombatInterface::execGetCleaveResistance },
			{ "TakeDamage", &ICombatInterface::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatInterface_GetCleaveResistance_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCombatInterface_GetCleaveResistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetCleaveResistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetCleaveResistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetCleaveResistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetCleaveResistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Interfaces/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetCleaveResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetCleaveResistance", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetCleaveResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCleaveResistance_Statics::PropPointers), sizeof(CombatInterface_eventGetCleaveResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCleaveResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetCleaveResistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCleaveResistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventGetCleaveResistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_GetCleaveResistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetCleaveResistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_TakeDamage_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_DamageAmount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCombatInterface_TakeDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventTakeDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCombatInterface_TakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventTakeDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_TakeDamage_Statics::NewProp_DamageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_TakeDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Interfaces/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_TakeDamage_Statics::PropPointers), sizeof(CombatInterface_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_TakeDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_TakeDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventTakeDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatInterface);
	UClass* Z_Construct_UClass_UCombatInterface_NoRegister()
	{
		return UCombatInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCombatInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatInterface_GetCleaveResistance, "GetCleaveResistance" }, // 4048688766
		{ &Z_Construct_UFunction_UCombatInterface_TakeDamage, "TakeDamage" }, // 1268116264
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Interfaces/CombatInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatInterface_Statics::ClassParams = {
		&UCombatInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCombatInterface()
	{
		if (!Z_Registration_Info_UClass_UCombatInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatInterface.OuterSingleton, Z_Construct_UClass_UCombatInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatInterface.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UCombatInterface>()
	{
		return UCombatInterface::StaticClass();
	}
	UCombatInterface::UCombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatInterface);
	UCombatInterface::~UCombatInterface() {}
	static FName NAME_UCombatInterface_GetCleaveResistance = FName(TEXT("GetCleaveResistance"));
	int32 ICombatInterface::Execute_GetCleaveResistance(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventGetCleaveResistance_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetCleaveResistance);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCleaveResistance_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_TakeDamage = FName(TEXT("TakeDamage"));
	int32 ICombatInterface::Execute_TakeDamage(UObject* O, int32 DamageAmount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventTakeDamage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_TakeDamage);
		if (Func)
		{
			Parms.DamageAmount=DamageAmount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->TakeDamage_Implementation(DamageAmount);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_CombatInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_CombatInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatInterface, UCombatInterface::StaticClass, TEXT("UCombatInterface"), &Z_Registration_Info_UClass_UCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatInterface), 806183371U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_CombatInterface_h_3115514087(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_CombatInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_CombatInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
