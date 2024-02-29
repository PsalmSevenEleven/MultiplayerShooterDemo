// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/MSDPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSDPlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDPlayerState();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDPlayerState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	DEFINE_FUNCTION(AMSDPlayerState::execGetSubclassIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSubclassIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMSDPlayerState::execGetCharacterClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCharacterClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMSDPlayerState::execGetAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent();
		P_NATIVE_END;
	}
	void AMSDPlayerState::StaticRegisterNativesAMSDPlayerState()
	{
		UClass* Class = AMSDPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAbilitySystemComponent", &AMSDPlayerState::execGetAbilitySystemComponent },
			{ "GetCharacterClass", &AMSDPlayerState::execGetCharacterClass },
			{ "GetSubclassIndex", &AMSDPlayerState::execGetSubclassIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent_Statics
	{
		struct MSDPlayerState_eventGetAbilitySystemComponent_Parms
		{
			UAbilitySystemComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDPlayerState_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/MSDPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDPlayerState, nullptr, "GetAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent_Statics::MSDPlayerState_eventGetAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent_Statics::MSDPlayerState_eventGetAbilitySystemComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMSDPlayerState_GetCharacterClass_Statics
	{
		struct MSDPlayerState_eventGetCharacterClass_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMSDPlayerState_GetCharacterClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDPlayerState_eventGetCharacterClass_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDPlayerState_GetCharacterClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDPlayerState_GetCharacterClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDPlayerState_GetCharacterClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/MSDPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDPlayerState_GetCharacterClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDPlayerState, nullptr, "GetCharacterClass", nullptr, nullptr, Z_Construct_UFunction_AMSDPlayerState_GetCharacterClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerState_GetCharacterClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSDPlayerState_GetCharacterClass_Statics::MSDPlayerState_eventGetCharacterClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerState_GetCharacterClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDPlayerState_GetCharacterClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerState_GetCharacterClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMSDPlayerState_GetCharacterClass_Statics::MSDPlayerState_eventGetCharacterClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSDPlayerState_GetCharacterClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDPlayerState_GetCharacterClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMSDPlayerState_GetSubclassIndex_Statics
	{
		struct MSDPlayerState_eventGetSubclassIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMSDPlayerState_GetSubclassIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDPlayerState_eventGetSubclassIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDPlayerState_GetSubclassIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDPlayerState_GetSubclassIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMSDPlayerState_GetSubclassIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/MSDPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDPlayerState_GetSubclassIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSDPlayerState, nullptr, "GetSubclassIndex", nullptr, nullptr, Z_Construct_UFunction_AMSDPlayerState_GetSubclassIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerState_GetSubclassIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSDPlayerState_GetSubclassIndex_Statics::MSDPlayerState_eventGetSubclassIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerState_GetSubclassIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDPlayerState_GetSubclassIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDPlayerState_GetSubclassIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMSDPlayerState_GetSubclassIndex_Statics::MSDPlayerState_eventGetSubclassIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMSDPlayerState_GetSubclassIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDPlayerState_GetSubclassIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMSDPlayerState);
	UClass* Z_Construct_UClass_AMSDPlayerState_NoRegister()
	{
		return AMSDPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AMSDPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubclassIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubclassIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMSDPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMSDPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMSDPlayerState_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 69249008
		{ &Z_Construct_UFunction_AMSDPlayerState_GetCharacterClass, "GetCharacterClass" }, // 1116740913
		{ &Z_Construct_UFunction_AMSDPlayerState_GetSubclassIndex, "GetSubclassIndex" }, // 1271730654
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDPlayerState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HordeShooter/Character/MSDPlayerState.h" },
		{ "ModuleRelativePath", "HordeShooter/Character/MSDPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/Character/MSDPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDPlayerState, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_AMSDPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDPlayerState_Statics::NewProp_CharacterClass_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/MSDPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMSDPlayerState_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDPlayerState, CharacterClass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerState_Statics::NewProp_CharacterClass_MetaData), Z_Construct_UClass_AMSDPlayerState_Statics::NewProp_CharacterClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDPlayerState_Statics::NewProp_SubclassIndex_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/MSDPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMSDPlayerState_Statics::NewProp_SubclassIndex = { "SubclassIndex", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDPlayerState, SubclassIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerState_Statics::NewProp_SubclassIndex_MetaData), Z_Construct_UClass_AMSDPlayerState_Statics::NewProp_SubclassIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMSDPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDPlayerState_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDPlayerState_Statics::NewProp_CharacterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDPlayerState_Statics::NewProp_SubclassIndex,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMSDPlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AMSDPlayerState, IAbilitySystemInterface), false },  // 3195502011
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerState_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMSDPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMSDPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMSDPlayerState_Statics::ClassParams = {
		&AMSDPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMSDPlayerState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMSDPlayerState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDPlayerState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMSDPlayerState()
	{
		if (!Z_Registration_Info_UClass_AMSDPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMSDPlayerState.OuterSingleton, Z_Construct_UClass_AMSDPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMSDPlayerState.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<AMSDPlayerState>()
	{
		return AMSDPlayerState::StaticClass();
	}

	void AMSDPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CharacterClass(TEXT("CharacterClass"));
		static const FName Name_SubclassIndex(TEXT("SubclassIndex"));

		const bool bIsValid = true
			&& Name_CharacterClass == ClassReps[(int32)ENetFields_Private::CharacterClass].Property->GetFName()
			&& Name_SubclassIndex == ClassReps[(int32)ENetFields_Private::SubclassIndex].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMSDPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMSDPlayerState);
	AMSDPlayerState::~AMSDPlayerState() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMSDPlayerState, AMSDPlayerState::StaticClass, TEXT("AMSDPlayerState"), &Z_Registration_Info_UClass_AMSDPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMSDPlayerState), 2270593197U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_2713645616(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_MSDPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
