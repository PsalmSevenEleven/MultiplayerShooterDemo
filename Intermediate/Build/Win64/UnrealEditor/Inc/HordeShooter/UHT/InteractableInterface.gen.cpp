// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeShooter/Interfaces/InteractableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UInteractableInterface();
	HORDESHOOTER_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();
	HORDESHOOTER_API UEnum* Z_Construct_UEnum_HordeShooter_EInteractionType();
	UPackage* Z_Construct_UPackage__Script_HordeShooter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInteractionType;
	static UEnum* EInteractionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInteractionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInteractionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HordeShooter_EInteractionType, (UObject*)Z_Construct_UPackage__Script_HordeShooter(), TEXT("EInteractionType"));
		}
		return Z_Registration_Info_UEnum_EInteractionType.OuterSingleton;
	}
	template<> HORDESHOOTER_API UEnum* StaticEnum<EInteractionType>()
	{
		return EInteractionType_StaticEnum();
	}
	struct Z_Construct_UEnum_HordeShooter_EInteractionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HordeShooter_EInteractionType_Statics::Enumerators[] = {
		{ "EInteractionType::InteractionType_Press", (int64)EInteractionType::InteractionType_Press },
		{ "EInteractionType::InteractionType_Hold", (int64)EInteractionType::InteractionType_Hold },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HordeShooter_EInteractionType_Statics::Enum_MetaDataParams[] = {
		{ "InteractionType_Hold.Name", "EInteractionType::InteractionType_Hold" },
		{ "InteractionType_Press.Name", "EInteractionType::InteractionType_Press" },
		{ "ModuleRelativePath", "HordeShooter/Interfaces/InteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HordeShooter_EInteractionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HordeShooter,
		nullptr,
		"EInteractionType",
		"EInteractionType",
		Z_Construct_UEnum_HordeShooter_EInteractionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HordeShooter_EInteractionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HordeShooter_EInteractionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HordeShooter_EInteractionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HordeShooter_EInteractionType()
	{
		if (!Z_Registration_Info_UEnum_EInteractionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInteractionType.InnerSingleton, Z_Construct_UEnum_HordeShooter_EInteractionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInteractionType.InnerSingleton;
	}
	DEFINE_FUNCTION(IInteractableInterface::execGetPercentComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPercentComplete_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractableInterface::execCanInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInteract_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractableInterface::execRetrieveInteractInfo)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_InteractText);
		P_GET_ENUM_REF(EInteractionType,Z_Param_Out_InteractionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RetrieveInteractInfo_Implementation(Z_Param_Out_InteractText,(EInteractionType&)(Z_Param_Out_InteractionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractableInterface::execStopInteract)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InteractorController);
		P_GET_OBJECT(APlayerState,Z_Param_InteractorState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopInteract_Implementation(Z_Param_InteractorController,Z_Param_InteractorState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractableInterface::execInteract)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InteractorController);
		P_GET_OBJECT(APlayerState,Z_Param_InteractorState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation(Z_Param_InteractorController,Z_Param_InteractorState);
		P_NATIVE_END;
	}
	struct InteractableInterface_eventCanInteract_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		InteractableInterface_eventCanInteract_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct InteractableInterface_eventGetPercentComplete_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		InteractableInterface_eventGetPercentComplete_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct InteractableInterface_eventInteract_Parms
	{
		APlayerController* InteractorController;
		APlayerState* InteractorState;
	};
	struct InteractableInterface_eventRetrieveInteractInfo_Parms
	{
		FString InteractText;
		EInteractionType InteractionType;
	};
	struct InteractableInterface_eventStopInteract_Parms
	{
		APlayerController* InteractorController;
		APlayerState* InteractorState;
	};
	bool IInteractableInterface::CanInteract()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanInteract instead.");
		InteractableInterface_eventCanInteract_Parms Parms;
		return Parms.ReturnValue;
	}
	float IInteractableInterface::GetPercentComplete()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPercentComplete instead.");
		InteractableInterface_eventGetPercentComplete_Parms Parms;
		return Parms.ReturnValue;
	}
	void IInteractableInterface::Interact(APlayerController* InteractorController, APlayerState* InteractorState)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
	}
	void IInteractableInterface::RetrieveInteractInfo(FString& InteractText, EInteractionType& InteractionType)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RetrieveInteractInfo instead.");
	}
	void IInteractableInterface::StopInteract(APlayerController* InteractorController, APlayerState* InteractorState)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StopInteract instead.");
	}
	void UInteractableInterface::StaticRegisterNativesUInteractableInterface()
	{
		UClass* Class = UInteractableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanInteract", &IInteractableInterface::execCanInteract },
			{ "GetPercentComplete", &IInteractableInterface::execGetPercentComplete },
			{ "Interact", &IInteractableInterface::execInteract },
			{ "RetrieveInteractInfo", &IInteractableInterface::execRetrieveInteractInfo },
			{ "StopInteract", &IInteractableInterface::execStopInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractableInterface_CanInteract_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInteractableInterface_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractableInterface_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractableInterface_CanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractableInterface_eventCanInteract_Parms), &Z_Construct_UFunction_UInteractableInterface_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableInterface_CanInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableInterface_CanInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableInterface_CanInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Interfaces/InteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableInterface_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableInterface, nullptr, "CanInteract", nullptr, nullptr, Z_Construct_UFunction_UInteractableInterface_CanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_CanInteract_Statics::PropPointers), sizeof(InteractableInterface_eventCanInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_CanInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractableInterface_CanInteract_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_CanInteract_Statics::PropPointers) < 2048);
	static_assert(sizeof(InteractableInterface_eventCanInteract_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractableInterface_CanInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractableInterface_CanInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableInterface_GetPercentComplete_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractableInterface_GetPercentComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableInterface_eventGetPercentComplete_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableInterface_GetPercentComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableInterface_GetPercentComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableInterface_GetPercentComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Interfaces/InteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableInterface_GetPercentComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableInterface, nullptr, "GetPercentComplete", nullptr, nullptr, Z_Construct_UFunction_UInteractableInterface_GetPercentComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_GetPercentComplete_Statics::PropPointers), sizeof(InteractableInterface_eventGetPercentComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_GetPercentComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractableInterface_GetPercentComplete_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_GetPercentComplete_Statics::PropPointers) < 2048);
	static_assert(sizeof(InteractableInterface_eventGetPercentComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractableInterface_GetPercentComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractableInterface_GetPercentComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableInterface_Interact_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableInterface_Interact_Statics::NewProp_InteractorController = { "InteractorController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableInterface_eventInteract_Parms, InteractorController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableInterface_Interact_Statics::NewProp_InteractorState = { "InteractorState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableInterface_eventInteract_Parms, InteractorState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableInterface_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableInterface_Interact_Statics::NewProp_InteractorController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableInterface_Interact_Statics::NewProp_InteractorState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableInterface_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Interfaces/InteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableInterface, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_UInteractableInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_Interact_Statics::PropPointers), sizeof(InteractableInterface_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractableInterface_Interact_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_Interact_Statics::PropPointers) < 2048);
	static_assert(sizeof(InteractableInterface_eventInteract_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractableInterface_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractableInterface_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_InteractText;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo_Statics::NewProp_InteractText = { "InteractText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableInterface_eventRetrieveInteractInfo_Parms, InteractText), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableInterface_eventRetrieveInteractInfo_Parms, InteractionType), Z_Construct_UEnum_HordeShooter_EInteractionType, METADATA_PARAMS(0, nullptr) }; // 1306913732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo_Statics::NewProp_InteractText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo_Statics::NewProp_InteractionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo_Statics::NewProp_InteractionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Interfaces/InteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableInterface, nullptr, "RetrieveInteractInfo", nullptr, nullptr, Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo_Statics::PropPointers), sizeof(InteractableInterface_eventRetrieveInteractInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(InteractableInterface_eventRetrieveInteractInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableInterface_StopInteract_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableInterface_StopInteract_Statics::NewProp_InteractorController = { "InteractorController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableInterface_eventStopInteract_Parms, InteractorController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableInterface_StopInteract_Statics::NewProp_InteractorState = { "InteractorState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableInterface_eventStopInteract_Parms, InteractorState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableInterface_StopInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableInterface_StopInteract_Statics::NewProp_InteractorController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableInterface_StopInteract_Statics::NewProp_InteractorState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableInterface_StopInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HordeShooter/Interfaces/InteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableInterface_StopInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableInterface, nullptr, "StopInteract", nullptr, nullptr, Z_Construct_UFunction_UInteractableInterface_StopInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_StopInteract_Statics::PropPointers), sizeof(InteractableInterface_eventStopInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_StopInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractableInterface_StopInteract_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_StopInteract_Statics::PropPointers) < 2048);
	static_assert(sizeof(InteractableInterface_eventStopInteract_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractableInterface_StopInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractableInterface_StopInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractableInterface);
	UClass* Z_Construct_UClass_UInteractableInterface_NoRegister()
	{
		return UInteractableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractableInterface_CanInteract, "CanInteract" }, // 3024608278
		{ &Z_Construct_UFunction_UInteractableInterface_GetPercentComplete, "GetPercentComplete" }, // 1014670009
		{ &Z_Construct_UFunction_UInteractableInterface_Interact, "Interact" }, // 2685970266
		{ &Z_Construct_UFunction_UInteractableInterface_RetrieveInteractInfo, "RetrieveInteractInfo" }, // 1133511812
		{ &Z_Construct_UFunction_UInteractableInterface_StopInteract, "StopInteract" }, // 1097541854
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "HordeShooter/Interfaces/InteractableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractableInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractableInterface_Statics::ClassParams = {
		&UInteractableInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractableInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInteractableInterface()
	{
		if (!Z_Registration_Info_UClass_UInteractableInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableInterface.OuterSingleton, Z_Construct_UClass_UInteractableInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractableInterface.OuterSingleton;
	}
	template<> HORDESHOOTER_API UClass* StaticClass<UInteractableInterface>()
	{
		return UInteractableInterface::StaticClass();
	}
	UInteractableInterface::UInteractableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableInterface);
	UInteractableInterface::~UInteractableInterface() {}
	static FName NAME_UInteractableInterface_CanInteract = FName(TEXT("CanInteract"));
	bool IInteractableInterface::Execute_CanInteract(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()));
		InteractableInterface_eventCanInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractableInterface_CanInteract);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractableInterface*)(O->GetNativeInterfaceAddress(UInteractableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->CanInteract_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UInteractableInterface_GetPercentComplete = FName(TEXT("GetPercentComplete"));
	float IInteractableInterface::Execute_GetPercentComplete(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()));
		InteractableInterface_eventGetPercentComplete_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractableInterface_GetPercentComplete);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractableInterface*)(O->GetNativeInterfaceAddress(UInteractableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetPercentComplete_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UInteractableInterface_Interact = FName(TEXT("Interact"));
	void IInteractableInterface::Execute_Interact(UObject* O, APlayerController* InteractorController, APlayerState* InteractorState)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()));
		InteractableInterface_eventInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractableInterface_Interact);
		if (Func)
		{
			Parms.InteractorController=InteractorController;
			Parms.InteractorState=InteractorState;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractableInterface*)(O->GetNativeInterfaceAddress(UInteractableInterface::StaticClass())))
		{
			I->Interact_Implementation(InteractorController,InteractorState);
		}
	}
	static FName NAME_UInteractableInterface_RetrieveInteractInfo = FName(TEXT("RetrieveInteractInfo"));
	void IInteractableInterface::Execute_RetrieveInteractInfo(UObject* O, FString& InteractText, EInteractionType& InteractionType)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()));
		InteractableInterface_eventRetrieveInteractInfo_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractableInterface_RetrieveInteractInfo);
		if (Func)
		{
			Parms.InteractText=InteractText;
			Parms.InteractionType=InteractionType;
			O->ProcessEvent(Func, &Parms);
			InteractText=Parms.InteractText;
			InteractionType=Parms.InteractionType;
		}
		else if (auto I = (IInteractableInterface*)(O->GetNativeInterfaceAddress(UInteractableInterface::StaticClass())))
		{
			I->RetrieveInteractInfo_Implementation(InteractText,InteractionType);
		}
	}
	static FName NAME_UInteractableInterface_StopInteract = FName(TEXT("StopInteract"));
	void IInteractableInterface::Execute_StopInteract(UObject* O, APlayerController* InteractorController, APlayerState* InteractorState)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()));
		InteractableInterface_eventStopInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractableInterface_StopInteract);
		if (Func)
		{
			Parms.InteractorController=InteractorController;
			Parms.InteractorState=InteractorState;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractableInterface*)(O->GetNativeInterfaceAddress(UInteractableInterface::StaticClass())))
		{
			I->StopInteract_Implementation(InteractorController,InteractorState);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_Statics::EnumInfo[] = {
		{ EInteractionType_StaticEnum, TEXT("EInteractionType"), &Z_Registration_Info_UEnum_EInteractionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1306913732U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableInterface, UInteractableInterface::StaticClass, TEXT("UInteractableInterface"), &Z_Registration_Info_UClass_UInteractableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableInterface), 1417254257U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_167669984(TEXT("/Script/HordeShooter"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_HordeShooterRepo_HordeShooter_Source_HordeShooter_Interfaces_InteractableInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
