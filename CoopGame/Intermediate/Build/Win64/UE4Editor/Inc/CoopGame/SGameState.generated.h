// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWaveState : uint8;
#ifdef COOPGAME_SGameState_generated_h
#error "SGameState.generated.h already included, missing '#pragma once' in SGameState.h"
#endif
#define COOPGAME_SGameState_generated_h

#define CoopGame_Source_CoopGame_Public_SGameState_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_WaveState) \
	{ \
		P_GET_ENUM(EWaveState,Z_Param_OldState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WaveState(EWaveState(Z_Param_OldState)); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SGameState_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_WaveState) \
	{ \
		P_GET_ENUM(EWaveState,Z_Param_OldState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WaveState(EWaveState(Z_Param_OldState)); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SGameState_h_23_EVENT_PARMS \
	struct SGameState_eventWaveStateChanged_Parms \
	{ \
		EWaveState NewState; \
		EWaveState OldState; \
	};


#define CoopGame_Source_CoopGame_Public_SGameState_h_23_CALLBACK_WRAPPERS
#define CoopGame_Source_CoopGame_Public_SGameState_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGameState(); \
	friend struct Z_Construct_UClass_ASGameState_Statics; \
public: \
	DECLARE_CLASS(ASGameState, AGameStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGame_Source_CoopGame_Public_SGameState_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASGameState(); \
	friend struct Z_Construct_UClass_ASGameState_Statics; \
public: \
	DECLARE_CLASS(ASGameState, AGameStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGame_Source_CoopGame_Public_SGameState_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameState(ASGameState&&); \
	NO_API ASGameState(const ASGameState&); \
public:


#define CoopGame_Source_CoopGame_Public_SGameState_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameState(ASGameState&&); \
	NO_API ASGameState(const ASGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGameState)


#define CoopGame_Source_CoopGame_Public_SGameState_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WaveState() { return STRUCT_OFFSET(ASGameState, WaveState); }


#define CoopGame_Source_CoopGame_Public_SGameState_h_20_PROLOG \
	CoopGame_Source_CoopGame_Public_SGameState_h_23_EVENT_PARMS


#define CoopGame_Source_CoopGame_Public_SGameState_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SGameState_h_23_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SGameState_h_23_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SGameState_h_23_CALLBACK_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SGameState_h_23_INCLASS \
	CoopGame_Source_CoopGame_Public_SGameState_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SGameState_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SGameState_h_23_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SGameState_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SGameState_h_23_CALLBACK_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SGameState_h_23_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SGameState_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SGameState_h


#define FOREACH_ENUM_EWAVESTATE(op) \
	op(EWaveState::WaitingToStart) \
	op(EWaveState::WaveInProgress) \
	op(EWaveState::WaitingToComplete) \
	op(EWaveState::WaveComplete) \
	op(EWaveState::GameOver) 

enum class EWaveState : uint8;
template<> COOPGAME_API UEnum* StaticEnum<EWaveState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
