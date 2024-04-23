// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/AbilitySystem/MSD_AbilitySystemComponent.h"
#include "GameplayAbilitySpecHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSD_AbilitySystemComponent() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_AbilitySystemComponent();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UMSD_AbilitySystemComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void UMSD_AbilitySystemComponent::StaticRegisterNativesUMSD_AbilitySystemComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSD_AbilitySystemComponent);
	UClass* Z_Construct_UClass_UMSD_AbilitySystemComponent_NoRegister()
	{
		return UMSD_AbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeldAbilityHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeldAbilityHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HeldAbilityHandles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PressedAbilityHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedAbilityHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PressedAbilityHandles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReleasedAbilityHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleasedAbilityHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReleasedAbilityHandles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "HordeShooter/Character/AbilitySystem/MSD_AbilitySystemComponent.h" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSD_AbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_HeldAbilityHandles_Inner = { "HeldAbilityHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 839298412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_HeldAbilityHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ability activation batching\x09\n" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSD_AbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability activation batching" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_HeldAbilityHandles = { "HeldAbilityHandles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_AbilitySystemComponent, HeldAbilityHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_HeldAbilityHandles_MetaData), Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_HeldAbilityHandles_MetaData) }; // 839298412
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_PressedAbilityHandles_Inner = { "PressedAbilityHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 839298412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_PressedAbilityHandles_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSD_AbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_PressedAbilityHandles = { "PressedAbilityHandles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_AbilitySystemComponent, PressedAbilityHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_PressedAbilityHandles_MetaData), Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_PressedAbilityHandles_MetaData) }; // 839298412
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_ReleasedAbilityHandles_Inner = { "ReleasedAbilityHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 839298412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_ReleasedAbilityHandles_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/MSD_AbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_ReleasedAbilityHandles = { "ReleasedAbilityHandles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSD_AbilitySystemComponent, ReleasedAbilityHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_ReleasedAbilityHandles_MetaData), Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_ReleasedAbilityHandles_MetaData) }; // 839298412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_HeldAbilityHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_HeldAbilityHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_PressedAbilityHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_PressedAbilityHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_ReleasedAbilityHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::NewProp_ReleasedAbilityHandles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSD_AbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::ClassParams = {
		&UMSD_AbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMSD_AbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_UMSD_AbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSD_AbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UMSD_AbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMSD_AbilitySystemComponent.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UMSD_AbilitySystemComponent>()
	{
		return UMSD_AbilitySystemComponent::StaticClass();
	}
	UMSD_AbilitySystemComponent::UMSD_AbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSD_AbilitySystemComponent);
	UMSD_AbilitySystemComponent::~UMSD_AbilitySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSD_AbilitySystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSD_AbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMSD_AbilitySystemComponent, UMSD_AbilitySystemComponent::StaticClass, TEXT("UMSD_AbilitySystemComponent"), &Z_Registration_Info_UClass_UMSD_AbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSD_AbilitySystemComponent), 3902259299U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSD_AbilitySystemComponent_h_2284358341(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSD_AbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_MSD_AbilitySystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
