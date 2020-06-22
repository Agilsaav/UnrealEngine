// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/FPSAIGuard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSAIGuard() {}
// Cross Module References
	FPSGAME_API UEnum* Z_Construct_UEnum_FPSGame_EAIState();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSAIGuard_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSAIGuard();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFPSAIGuard_OnStateChange();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFPSAIGuard_ResetOrientation();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
// End Cross Module References
	static UEnum* EAIState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSGame_EAIState, Z_Construct_UPackage__Script_FPSGame(), TEXT("EAIState"));
		}
		return Singleton;
	}
	template<> FPSGAME_API UEnum* StaticEnum<EAIState>()
	{
		return EAIState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIState(EAIState_StaticEnum, TEXT("/Script/FPSGame"), TEXT("EAIState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSGame_EAIState_Hash() { return 3733432682U; }
	UEnum* Z_Construct_UEnum_FPSGame_EAIState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIState"), 0, Get_Z_Construct_UEnum_FPSGame_EAIState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIState::Idle", (int64)EAIState::Idle },
				{ "EAIState::Suspicious", (int64)EAIState::Suspicious },
				{ "EAIState::Alerted", (int64)EAIState::Alerted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSGame,
				nullptr,
				"EAIState",
				"EAIState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AFPSAIGuard_OnStateChange = FName(TEXT("OnStateChange"));
	void AFPSAIGuard::OnStateChange(EAIState NewState)
	{
		FPSAIGuard_eventOnStateChange_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_AFPSAIGuard_OnStateChange),&Parms);
	}
	void AFPSAIGuard::StaticRegisterNativesAFPSAIGuard()
	{
		UClass* Class = AFPSAIGuard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNoiseHeard", &AFPSAIGuard::execOnNoiseHeard },
			{ "OnPawnSeen", &AFPSAIGuard::execOnPawnSeen },
			{ "OnRep_GuardState", &AFPSAIGuard::execOnRep_GuardState },
			{ "ResetOrientation", &AFPSAIGuard::execResetOrientation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics
	{
		struct FPSAIGuard_eventOnNoiseHeard_Parms
		{
			APawn* NoiseInstigator;
			FVector Location;
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventOnNoiseHeard_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventOnNoiseHeard_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics::NewProp_NoiseInstigator = { "NoiseInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventOnNoiseHeard_Parms, NoiseInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics::NewProp_NoiseInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "OnNoiseHeard", sizeof(FPSAIGuard_eventOnNoiseHeard_Parms), Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics
	{
		struct FPSAIGuard_eventOnPawnSeen_Parms
		{
			APawn* SeenPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeenPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::NewProp_SeenPawn = { "SeenPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventOnPawnSeen_Parms, SeenPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::NewProp_SeenPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
		{ "ToolTip", "Functions:" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "OnPawnSeen", sizeof(FPSAIGuard_eventOnPawnSeen_Parms), Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "OnRep_GuardState", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_OnStateChange_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFPSAIGuard_OnStateChange_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventOnStateChange_Parms, NewState), Z_Construct_UEnum_FPSGame_EAIState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSAIGuard_OnStateChange_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAIGuard_OnStateChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_OnStateChange_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_OnStateChange_Statics::NewProp_NewState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_OnStateChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_OnStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "OnStateChange", sizeof(FPSAIGuard_eventOnStateChange_Parms), Z_Construct_UFunction_AFPSAIGuard_OnStateChange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_OnStateChange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_OnStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_OnStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "ResetOrientation", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_ResetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSAIGuard_NoRegister()
	{
		return AFPSAIGuard::StaticClass();
	}
	struct Z_Construct_UClass_AFPSAIGuard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PatrolPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrolPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPatrol_MetaData[];
#endif
		static void NewProp_bPatrol_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPatrol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GuardState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GuardState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSAIGuard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSAIGuard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSAIGuard_OnNoiseHeard, "OnNoiseHeard" }, // 2632030750
		{ &Z_Construct_UFunction_AFPSAIGuard_OnPawnSeen, "OnPawnSeen" }, // 862712454
		{ &Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState, "OnRep_GuardState" }, // 1207424439
		{ &Z_Construct_UFunction_AFPSAIGuard_OnStateChange, "OnStateChange" }, // 2009080251
		{ &Z_Construct_UFunction_AFPSAIGuard_ResetOrientation, "ResetOrientation" }, // 2464938512
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSAIGuard.h" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PatrolPoints_MetaData[] = {
		{ "Category", "AI" },
		{ "EditCondition", "bPatrol" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PatrolPoints = { "PatrolPoints", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAIGuard, PatrolPoints), METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PatrolPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PatrolPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PatrolPoints_Inner = { "PatrolPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bPatrol_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
		{ "ToolTip", "Patrol variables:" },
	};
#endif
	void Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bPatrol_SetBit(void* Obj)
	{
		((AFPSAIGuard*)Obj)->bPatrol = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bPatrol = { "bPatrol", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSAIGuard), &Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bPatrol_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bPatrol_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bPatrol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState_MetaData[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState = { "GuardState", "OnRep_GuardState", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAIGuard, GuardState), Z_Construct_UEnum_FPSGame_EAIState, METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PawnSensingComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
		{ "ToolTip", "Variables:" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PawnSensingComp = { "PawnSensingComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAIGuard, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PawnSensingComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PawnSensingComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSAIGuard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PatrolPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PatrolPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_bPatrol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PawnSensingComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSAIGuard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSAIGuard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSAIGuard_Statics::ClassParams = {
		&AFPSAIGuard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSAIGuard_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSAIGuard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSAIGuard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSAIGuard, 1184531809);
	template<> FPSGAME_API UClass* StaticClass<AFPSAIGuard>()
	{
		return AFPSAIGuard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSAIGuard(Z_Construct_UClass_AFPSAIGuard, &AFPSAIGuard::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSAIGuard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSAIGuard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
