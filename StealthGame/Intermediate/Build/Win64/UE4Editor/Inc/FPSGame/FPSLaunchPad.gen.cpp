// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/Challenges/FPSLaunchPad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSLaunchPad() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSLaunchPad_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSLaunchPad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFPSLaunchPad::StaticRegisterNativesAFPSLaunchPad()
	{
		UClass* Class = AFPSLaunchPad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OverlapLaunchPad", &AFPSLaunchPad::execOverlapLaunchPad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics
	{
		struct FPSLaunchPad_eventOverlapLaunchPad_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSLaunchPad_eventOverlapLaunchPad_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FPSLaunchPad_eventOverlapLaunchPad_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSLaunchPad_eventOverlapLaunchPad_Parms), &Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSLaunchPad_eventOverlapLaunchPad_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSLaunchPad_eventOverlapLaunchPad_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSLaunchPad_eventOverlapLaunchPad_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSLaunchPad_eventOverlapLaunchPad_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Challenges/FPSLaunchPad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSLaunchPad, nullptr, "OverlapLaunchPad", sizeof(FPSLaunchPad_eventOverlapLaunchPad_Parms), Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSLaunchPad_NoRegister()
	{
		return AFPSLaunchPad::StaticClass();
	}
	struct Z_Construct_UClass_AFPSLaunchPad_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchPadEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaunchPadEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchPitchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchPitchAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSLaunchPad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSLaunchPad_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSLaunchPad_OverlapLaunchPad, "OverlapLaunchPad" }, // 602023409
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSLaunchPad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Challenges/FPSLaunchPad.h" },
		{ "ModuleRelativePath", "Public/Challenges/FPSLaunchPad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchPadEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/Challenges/FPSLaunchPad.h" },
		{ "ToolTip", "Particle System Effect" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchPadEffect = { "LaunchPadEffect", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSLaunchPad, LaunchPadEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchPadEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchPadEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchPitchAngle_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "ModuleRelativePath", "Public/Challenges/FPSLaunchPad.h" },
		{ "ToolTip", "Angle added on top of actor rotation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchPitchAngle = { "LaunchPitchAngle", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSLaunchPad, LaunchPitchAngle), METADATA_PARAMS(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchPitchAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchPitchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchStrength_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "ModuleRelativePath", "Public/Challenges/FPSLaunchPad.h" },
		{ "ToolTip", "Total Impulse" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchStrength = { "LaunchStrength", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSLaunchPad, LaunchStrength), METADATA_PARAMS(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_OverlapComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Challenges/FPSLaunchPad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_OverlapComp = { "OverlapComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSLaunchPad, OverlapComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_OverlapComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_OverlapComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Challenges/FPSLaunchPad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSLaunchPad, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSLaunchPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchPadEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchPitchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_LaunchStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_OverlapComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSLaunchPad_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSLaunchPad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSLaunchPad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSLaunchPad_Statics::ClassParams = {
		&AFPSLaunchPad::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSLaunchPad_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFPSLaunchPad_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSLaunchPad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFPSLaunchPad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSLaunchPad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSLaunchPad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSLaunchPad, 2621510823);
	template<> FPSGAME_API UClass* StaticClass<AFPSLaunchPad>()
	{
		return AFPSLaunchPad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSLaunchPad(Z_Construct_UClass_AFPSLaunchPad, &AFPSLaunchPad::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSLaunchPad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSLaunchPad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
