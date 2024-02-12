// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/UI/MSDCharacterMenuViewer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSDCharacterMenuViewer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDCharacterMenuViewer();
	HORDESHOOTER_API UClass* Z_Construct_UClass_AMSDCharacterMenuViewer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	void AMSDCharacterMenuViewer::StaticRegisterNativesAMSDCharacterMenuViewer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMSDCharacterMenuViewer);
	UClass* Z_Construct_UClass_AMSDCharacterMenuViewer_NoRegister()
	{
		return AMSDCharacterMenuViewer::StaticClass();
	}
	struct Z_Construct_UClass_AMSDCharacterMenuViewer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MSDCharacterMenuViewer.h" },
		{ "ModuleRelativePath", "UI/MSDCharacterMenuViewer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "MSDCharacterMenuViewer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MSDCharacterMenuViewer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacterMenuViewer, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::NewProp_CharacterMesh_MetaData[] = {
		{ "Category", "MSDCharacterMenuViewer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MSDCharacterMenuViewer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::NewProp_CharacterMesh = { "CharacterMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSDCharacterMenuViewer, CharacterMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::NewProp_CharacterMesh_MetaData), Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::NewProp_CharacterMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::NewProp_CharacterMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMSDCharacterMenuViewer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::ClassParams = {
		&AMSDCharacterMenuViewer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::Class_MetaDataParams), Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMSDCharacterMenuViewer()
	{
		if (!Z_Registration_Info_UClass_AMSDCharacterMenuViewer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMSDCharacterMenuViewer.OuterSingleton, Z_Construct_UClass_AMSDCharacterMenuViewer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMSDCharacterMenuViewer.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<AMSDCharacterMenuViewer>()
	{
		return AMSDCharacterMenuViewer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMSDCharacterMenuViewer);
	AMSDCharacterMenuViewer::~AMSDCharacterMenuViewer() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDCharacterMenuViewer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDCharacterMenuViewer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMSDCharacterMenuViewer, AMSDCharacterMenuViewer::StaticClass, TEXT("AMSDCharacterMenuViewer"), &Z_Registration_Info_UClass_AMSDCharacterMenuViewer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMSDCharacterMenuViewer), 3357850268U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDCharacterMenuViewer_h_1260982817(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDCharacterMenuViewer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_UI_MSDCharacterMenuViewer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
