// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_PlayMontageOnSM() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UAbilityTask_PlayMontageOnSM();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_NoRegister();
	HORDESHOOTER_API UFunction* Z_Construct_UDelegateFunction_HordeShooter_MontageOnSMSimpleDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HordeShooter_MontageOnSMSimpleDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HordeShooter_MontageOnSMSimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HordeShooter_MontageOnSMSimpleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HordeShooter, nullptr, "MontageOnSMSimpleDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HordeShooter_MontageOnSMSimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HordeShooter_MontageOnSMSimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_HordeShooter_MontageOnSMSimpleDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HordeShooter_MontageOnSMSimpleDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMontageOnSMSimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& MontageOnSMSimpleDelegate)
{
	MontageOnSMSimpleDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAbilityTask_PlayMontageOnSM::execCreatePlayMontageOnSMProxy)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InSkeletalMeshComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartSection);
		P_GET_UBOOL(Z_Param_bStopWhenAbilityEnds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AnimRootMotionTranslationScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTimeSeconds);
		P_GET_UBOOL(Z_Param_bAllowInterruptAfterBlendOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_PlayMontageOnSM**)Z_Param__Result=UAbilityTask_PlayMontageOnSM::CreatePlayMontageOnSMProxy(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_MontageToPlay,Z_Param_InSkeletalMeshComponent,Z_Param_Rate,Z_Param_StartSection,Z_Param_bStopWhenAbilityEnds,Z_Param_AnimRootMotionTranslationScale,Z_Param_StartTimeSeconds,Z_Param_bAllowInterruptAfterBlendOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_PlayMontageOnSM::execOnMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_PlayMontageOnSM::execOnGameplayAbilityCancelled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameplayAbilityCancelled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_PlayMontageOnSM::execOnMontageBlendingOut)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageBlendingOut(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	void UAbilityTask_PlayMontageOnSM::StaticRegisterNativesUAbilityTask_PlayMontageOnSM()
	{
		UClass* Class = UAbilityTask_PlayMontageOnSM::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePlayMontageOnSMProxy", &UAbilityTask_PlayMontageOnSM::execCreatePlayMontageOnSMProxy },
			{ "OnGameplayAbilityCancelled", &UAbilityTask_PlayMontageOnSM::execOnGameplayAbilityCancelled },
			{ "OnMontageBlendingOut", &UAbilityTask_PlayMontageOnSM::execOnMontageBlendingOut },
			{ "OnMontageEnded", &UAbilityTask_PlayMontageOnSM::execOnMontageEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics
	{
		struct AbilityTask_PlayMontageOnSM_eventCreatePlayMontageOnSMProxy_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			UAnimMontage* MontageToPlay;
			USkeletalMeshComponent* InSkeletalMeshComponent;
			float Rate;
			FName StartSection;
			bool bStopWhenAbilityEnds;
			float AnimRootMotionTranslationScale;
			float StartTimeSeconds;
			bool bAllowInterruptAfterBlendOut;
			UAbilityTask_PlayMontageOnSM* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMeshComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
		static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTimeSeconds;
		static void NewProp_bAllowInterruptAfterBlendOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInterruptAfterBlendOut;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayMontageOnSM_eventCreatePlayMontageOnSMProxy_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayMontageOnSM_eventCreatePlayMontageOnSMProxy_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayMontageOnSM_eventCreatePlayMontageOnSMProxy_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_InSkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_InSkeletalMeshComponent = { "InSkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayMontageOnSM_eventCreatePlayMontageOnSMProxy_Parms, InSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_InSkeletalMeshComponent_MetaData), Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_InSkeletalMeshComponent_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayMontageOnSM_eventCreatePlayMontageOnSMProxy_Parms, Rate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayMontageOnSM_eventCreatePlayMontageOnSMProxy_Parms, StartSection), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
	{
		((AbilityTask_PlayMontageOnSM_eventCreatePlayMontageOnSMProxy_Parms*)Obj)->bStopWhenAbilityEnds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_PlayMontageOnSM_eventCreatePlayMontageOnSMProxy_Parms), &Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayMontageOnSM_eventCreatePlayMontageOnSMProxy_Parms, AnimRootMotionTranslationScale), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_StartTimeSeconds = { "StartTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayMontageOnSM_eventCreatePlayMontageOnSMProxy_Parms, StartTimeSeconds), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_bAllowInterruptAfterBlendOut_SetBit(void* Obj)
	{
		((AbilityTask_PlayMontageOnSM_eventCreatePlayMontageOnSMProxy_Parms*)Obj)->bAllowInterruptAfterBlendOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_bAllowInterruptAfterBlendOut = { "bAllowInterruptAfterBlendOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_PlayMontageOnSM_eventCreatePlayMontageOnSMProxy_Parms), &Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_bAllowInterruptAfterBlendOut_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayMontageOnSM_eventCreatePlayMontageOnSMProxy_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_TaskInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_MontageToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_InSkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_StartSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_bStopWhenAbilityEnds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_AnimRootMotionTranslationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_StartTimeSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_bAllowInterruptAfterBlendOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Start playing an animation montage on a specific skeletal mesh and wait for it to finish\n\x09 * If StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.\n\x09 * On normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing\n\x09 * OnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled\n\x09 *\n\x09 * @param TaskInstanceName Set to override the name of this task, for later querying\n\x09 * @param MontageToPlay The montage to play on the character\n\x09 * @param InSkeletalMeshComponent The skeletal mesh component to play the montage on\n\x09 * @param Rate Change to play the montage faster or slower\n\x09 * @param StartSection If not empty, named montage section to start from\n\x09 * @param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled\n\x09 * @param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely\n\x09 * @param StartTimeSeconds Starting time offset in montage, this will be overridden by StartSection if that is also set\n\x09 * @param bAllowInterruptAfterBlendOut If true, you can receive OnInterrupted after an OnBlendOut started (otherwise OnInterrupted will not fire when interrupted, but you will not get OnComplete).\n\x09 */" },
#endif
		{ "CPP_Default_AnimRootMotionTranslationScale", "1.000000" },
		{ "CPP_Default_bAllowInterruptAfterBlendOut", "false" },
		{ "CPP_Default_bStopWhenAbilityEnds", "true" },
		{ "CPP_Default_Rate", "1.000000" },
		{ "CPP_Default_StartSection", "None" },
		{ "CPP_Default_StartTimeSeconds", "0.000000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "PlayMontageOnSkeletalMesh" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start playing an animation montage on a specific skeletal mesh and wait for it to finish\nIf StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.\nOn normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing\nOnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled\n\n@param TaskInstanceName Set to override the name of this task, for later querying\n@param MontageToPlay The montage to play on the character\n@param InSkeletalMeshComponent The skeletal mesh component to play the montage on\n@param Rate Change to play the montage faster or slower\n@param StartSection If not empty, named montage section to start from\n@param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled\n@param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely\n@param StartTimeSeconds Starting time offset in montage, this will be overridden by StartSection if that is also set\n@param bAllowInterruptAfterBlendOut If true, you can receive OnInterrupted after an OnBlendOut started (otherwise OnInterrupted will not fire when interrupted, but you will not get OnComplete)." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayMontageOnSM, nullptr, "CreatePlayMontageOnSMProxy", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::AbilityTask_PlayMontageOnSM_eventCreatePlayMontageOnSMProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::AbilityTask_PlayMontageOnSM_eventCreatePlayMontageOnSMProxy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnGameplayAbilityCancelled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnGameplayAbilityCancelled_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Callback function for when the owning Gameplay Ability is cancelled */" },
#endif
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback function for when the owning Gameplay Ability is cancelled" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnGameplayAbilityCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayMontageOnSM, nullptr, "OnGameplayAbilityCancelled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnGameplayAbilityCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnGameplayAbilityCancelled_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnGameplayAbilityCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnGameplayAbilityCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics
	{
		struct AbilityTask_PlayMontageOnSM_eventOnMontageBlendingOut_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayMontageOnSM_eventOnMontageBlendingOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((AbilityTask_PlayMontageOnSM_eventOnMontageBlendingOut_Parms*)Obj)->bInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_PlayMontageOnSM_eventOnMontageBlendingOut_Parms), &Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayMontageOnSM, nullptr, "OnMontageBlendingOut", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics::AbilityTask_PlayMontageOnSM_eventOnMontageBlendingOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics::AbilityTask_PlayMontageOnSM_eventOnMontageBlendingOut_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics
	{
		struct AbilityTask_PlayMontageOnSM_eventOnMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayMontageOnSM_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((AbilityTask_PlayMontageOnSM_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_PlayMontageOnSM_eventOnMontageEnded_Parms), &Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayMontageOnSM, nullptr, "OnMontageEnded", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics::AbilityTask_PlayMontageOnSM_eventOnMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics::AbilityTask_PlayMontageOnSM_eventOnMontageEnded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_PlayMontageOnSM);
	UClass* Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_NoRegister()
	{
		return UAbilityTask_PlayMontageOnSM::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBlendOut_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInterrupted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterrupted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MontageToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSection_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimRootMotionTranslationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTimeSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTimeSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenAbilityEnds_MetaData[];
#endif
		static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInterruptAfterBlendOut_MetaData[];
#endif
		static void NewProp_bAllowInterruptAfterBlendOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInterruptAfterBlendOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_CreatePlayMontageOnSMProxy, "CreatePlayMontageOnSMProxy" }, // 302892378
		{ &Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnGameplayAbilityCancelled, "OnGameplayAbilityCancelled" }, // 792600758
		{ &Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageBlendingOut, "OnMontageBlendingOut" }, // 3431328031
		{ &Z_Construct_UFunction_UAbilityTask_PlayMontageOnSM_OnMontageEnded, "OnMontageEnded" }, // 395365785
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n *///This is basically just a copy of the original PlayMontageAndWaitForEvent task,\n//but with the ability to play a montage on a specific skeletal mesh component\n" },
#endif
		{ "IncludePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "//This is basically just a copy of the original PlayMontageAndWaitForEvent task,\n//but with the ability to play a montage on a specific skeletal mesh component" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageOnSM, OnCompleted), Z_Construct_UDelegateFunction_HordeShooter_MontageOnSMSimpleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnCompleted_MetaData), Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnCompleted_MetaData) }; // 3908006577
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnBlendOut_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnBlendOut = { "OnBlendOut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageOnSM, OnBlendOut), Z_Construct_UDelegateFunction_HordeShooter_MontageOnSMSimpleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnBlendOut_MetaData), Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnBlendOut_MetaData) }; // 3908006577
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnInterrupted_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnInterrupted = { "OnInterrupted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageOnSM, OnInterrupted), Z_Construct_UDelegateFunction_HordeShooter_MontageOnSMSimpleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnInterrupted_MetaData), Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnInterrupted_MetaData) }; // 3908006577
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnCancelled_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageOnSM, OnCancelled), Z_Construct_UDelegateFunction_HordeShooter_MontageOnSMSimpleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnCancelled_MetaData), Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnCancelled_MetaData) }; // 3908006577
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_MontageToPlay_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageOnSM, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_MontageToPlay_MetaData), Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_MontageToPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_InSkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_InSkeletalMeshComponent = { "InSkeletalMeshComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageOnSM, InSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_InSkeletalMeshComponent_MetaData), Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_InSkeletalMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_Rate_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageOnSM, Rate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_Rate_MetaData), Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_Rate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_StartSection_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageOnSM, StartSection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_StartSection_MetaData), Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_StartSection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_AnimRootMotionTranslationScale_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageOnSM, AnimRootMotionTranslationScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_AnimRootMotionTranslationScale_MetaData), Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_AnimRootMotionTranslationScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_StartTimeSeconds_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_StartTimeSeconds = { "StartTimeSeconds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageOnSM, StartTimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_StartTimeSeconds_MetaData), Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_StartTimeSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_bStopWhenAbilityEnds_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
	};
#endif
	void Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
	{
		((UAbilityTask_PlayMontageOnSM*)Obj)->bStopWhenAbilityEnds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityTask_PlayMontageOnSM), &Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_bStopWhenAbilityEnds_MetaData), Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_bStopWhenAbilityEnds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_bAllowInterruptAfterBlendOut_MetaData[] = {
		{ "ModuleRelativePath", "HordeShooter/Character/AbilitySystem/AbilityTasks/AbilityTask_PlayMontageOnSM.h" },
	};
#endif
	void Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_bAllowInterruptAfterBlendOut_SetBit(void* Obj)
	{
		((UAbilityTask_PlayMontageOnSM*)Obj)->bAllowInterruptAfterBlendOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_bAllowInterruptAfterBlendOut = { "bAllowInterruptAfterBlendOut", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityTask_PlayMontageOnSM), &Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_bAllowInterruptAfterBlendOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_bAllowInterruptAfterBlendOut_MetaData), Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_bAllowInterruptAfterBlendOut_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnBlendOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnInterrupted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_OnCancelled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_MontageToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_InSkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_StartSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_AnimRootMotionTranslationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_StartTimeSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_bStopWhenAbilityEnds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::NewProp_bAllowInterruptAfterBlendOut,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_PlayMontageOnSM>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::ClassParams = {
		&UAbilityTask_PlayMontageOnSM::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAbilityTask_PlayMontageOnSM()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_PlayMontageOnSM.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_PlayMontageOnSM.OuterSingleton, Z_Construct_UClass_UAbilityTask_PlayMontageOnSM_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_PlayMontageOnSM.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UAbilityTask_PlayMontageOnSM>()
	{
		return UAbilityTask_PlayMontageOnSM::StaticClass();
	}
	UAbilityTask_PlayMontageOnSM::UAbilityTask_PlayMontageOnSM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_PlayMontageOnSM);
	UAbilityTask_PlayMontageOnSM::~UAbilityTask_PlayMontageOnSM() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_AbilityTasks_AbilityTask_PlayMontageOnSM_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_AbilityTasks_AbilityTask_PlayMontageOnSM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_PlayMontageOnSM, UAbilityTask_PlayMontageOnSM::StaticClass, TEXT("UAbilityTask_PlayMontageOnSM"), &Z_Registration_Info_UClass_UAbilityTask_PlayMontageOnSM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_PlayMontageOnSM), 1810399411U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_AbilityTasks_AbilityTask_PlayMontageOnSM_h_3162725597(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_AbilityTasks_AbilityTask_PlayMontageOnSM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Character_AbilitySystem_AbilityTasks_AbilityTask_PlayMontageOnSM_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
