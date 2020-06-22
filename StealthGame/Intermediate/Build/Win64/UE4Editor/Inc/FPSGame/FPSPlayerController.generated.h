// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef FPSGAME_FPSPlayerController_generated_h
#error "FPSPlayerController.generated.h already included, missing '#pragma once' in FPSPlayerController.h"
#endif
#define FPSGAME_FPSPlayerController_generated_h

#define StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_RPC_WRAPPERS
#define StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_EVENT_PARMS \
	struct FPSPlayerController_eventOnMissionCompleted_Parms \
	{ \
		APawn* InstigatorPawn; \
		bool bMissionSuccess; \
	};


#define StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_CALLBACK_WRAPPERS
#define StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSPlayerController(); \
	friend struct Z_Construct_UClass_AFPSPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerController)


#define StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFPSPlayerController(); \
	friend struct Z_Construct_UClass_AFPSPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerController)


#define StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayerController(AFPSPlayerController&&); \
	NO_API AFPSPlayerController(const AFPSPlayerController&); \
public:


#define StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayerController(AFPSPlayerController&&); \
	NO_API AFPSPlayerController(const AFPSPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSPlayerController)


#define StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_PRIVATE_PROPERTY_OFFSET
#define StealthGame_Source_FPSGame_Public_FPSPlayerController_h_10_PROLOG \
	StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_EVENT_PARMS


#define StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_CALLBACK_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_INCLASS \
	StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_CALLBACK_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_FPSPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
