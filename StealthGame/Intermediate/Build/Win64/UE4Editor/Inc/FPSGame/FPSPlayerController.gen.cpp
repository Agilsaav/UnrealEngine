// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/FPSPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSPlayerController() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSPlayerController_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	static FName NAME_AFPSPlayerController_OnMissionCompleted = FName(TEXT("OnMissionCompleted"));
	void AFPSPlayerController::OnMissionCompleted(APawn* InstigatorPawn, bool bMissionSuccess)
	{
		FPSPlayerController_eventOnMissionCompleted_Parms Parms;
		Parms.InstigatorPawn=InstigatorPawn;
		Parms.bMissionSuccess=bMissionSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSPlayerController_OnMissionCompleted),&Parms);
	}
	void AFPSPlayerController::StaticRegisterNativesAFPSPlayerController()
	{
	}
	struct Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted_Statics
	{
		static void NewProp_bMissionSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMissionSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted_Statics::NewProp_bMissionSuccess_SetBit(void* Obj)
	{
		((FPSPlayerController_eventOnMissionCompleted_Parms*)Obj)->bMissionSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted_Statics::NewProp_bMissionSuccess = { "bMissionSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSPlayerController_eventOnMissionCompleted_Parms), &Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted_Statics::NewProp_bMissionSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerController_eventOnMissionCompleted_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted_Statics::NewProp_bMissionSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted_Statics::NewProp_InstigatorPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "OnMissionCompleted", sizeof(FPSPlayerController_eventOnMissionCompleted_Parms), Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSPlayerController_NoRegister()
	{
		return AFPSPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFPSPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSPlayerController_OnMissionCompleted, "OnMissionCompleted" }, // 4169954457
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPSPlayerController.h" },
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSPlayerController_Statics::ClassParams = {
		&AFPSPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSPlayerController, 3723110662);
	template<> FPSGAME_API UClass* StaticClass<AFPSPlayerController>()
	{
		return AFPSPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSPlayerController(Z_Construct_UClass_AFPSPlayerController, &AFPSPlayerController::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
