// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
#ifdef COOPGAME_SGameMode_generated_h
#error "SGameMode.generated.h already included, missing '#pragma once' in SGameMode.h"
#endif
#define COOPGAME_SGameMode_generated_h

#define CoopGame_Source_CoopGame_Public_SGameMode_h_11_DELEGATE \
struct _Script_CoopGame_eventOnActorKilled_Parms \
{ \
	AActor* VictimActor; \
	AActor* KillerActor; \
	AController* KillerController; \
}; \
static inline void FOnActorKilled_DelegateWrapper(const FMulticastScriptDelegate& OnActorKilled, AActor* VictimActor, AActor* KillerActor, AController* KillerController) \
{ \
	_Script_CoopGame_eventOnActorKilled_Parms Parms; \
	Parms.VictimActor=VictimActor; \
	Parms.KillerActor=KillerActor; \
	Parms.KillerController=KillerController; \
	OnActorKilled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CoopGame_Source_CoopGame_Public_SGameMode_h_19_RPC_WRAPPERS
#define CoopGame_Source_CoopGame_Public_SGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGame_Source_CoopGame_Public_SGameMode_h_19_EVENT_PARMS
#define CoopGame_Source_CoopGame_Public_SGameMode_h_19_CALLBACK_WRAPPERS
#define CoopGame_Source_CoopGame_Public_SGameMode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGameMode(); \
	friend struct Z_Construct_UClass_ASGameMode_Statics; \
public: \
	DECLARE_CLASS(ASGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASGameMode)


#define CoopGame_Source_CoopGame_Public_SGameMode_h_19_INCLASS \
private: \
	static void StaticRegisterNativesASGameMode(); \
	friend struct Z_Construct_UClass_ASGameMode_Statics; \
public: \
	DECLARE_CLASS(ASGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASGameMode)


#define CoopGame_Source_CoopGame_Public_SGameMode_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameMode(ASGameMode&&); \
	NO_API ASGameMode(const ASGameMode&); \
public:


#define CoopGame_Source_CoopGame_Public_SGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameMode(ASGameMode&&); \
	NO_API ASGameMode(const ASGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGameMode)


#define CoopGame_Source_CoopGame_Public_SGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimeBetweenWaves() { return STRUCT_OFFSET(ASGameMode, TimeBetweenWaves); }


#define CoopGame_Source_CoopGame_Public_SGameMode_h_16_PROLOG \
	CoopGame_Source_CoopGame_Public_SGameMode_h_19_EVENT_PARMS


#define CoopGame_Source_CoopGame_Public_SGameMode_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SGameMode_h_19_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SGameMode_h_19_CALLBACK_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SGameMode_h_19_INCLASS \
	CoopGame_Source_CoopGame_Public_SGameMode_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SGameMode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SGameMode_h_19_CALLBACK_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SGameMode_h_19_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
