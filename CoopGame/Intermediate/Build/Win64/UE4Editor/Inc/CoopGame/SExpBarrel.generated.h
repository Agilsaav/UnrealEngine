// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef COOPGAME_SExpBarrel_generated_h
#error "SExpBarrel.generated.h already included, missing '#pragma once' in SExpBarrel.h"
#endif
#define COOPGAME_SExpBarrel_generated_h

#define CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASExpBarrel(); \
	friend struct Z_Construct_UClass_ASExpBarrel_Statics; \
public: \
	DECLARE_CLASS(ASExpBarrel, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASExpBarrel)


#define CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASExpBarrel(); \
	friend struct Z_Construct_UClass_ASExpBarrel_Statics; \
public: \
	DECLARE_CLASS(ASExpBarrel, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASExpBarrel)


#define CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASExpBarrel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASExpBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExpBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExpBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASExpBarrel(ASExpBarrel&&); \
	NO_API ASExpBarrel(const ASExpBarrel&); \
public:


#define CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASExpBarrel(ASExpBarrel&&); \
	NO_API ASExpBarrel(const ASExpBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExpBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExpBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASExpBarrel)


#define CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ASExpBarrel, HealthComp); } \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASExpBarrel, MeshComp); } \
	FORCEINLINE static uint32 __PPO__RadialForceComp() { return STRUCT_OFFSET(ASExpBarrel, RadialForceComp); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(ASExpBarrel, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__ExplodedMaterial() { return STRUCT_OFFSET(ASExpBarrel, ExplodedMaterial); } \
	FORCEINLINE static uint32 __PPO__ExplosionImpulse() { return STRUCT_OFFSET(ASExpBarrel, ExplosionImpulse); }


#define CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_14_PROLOG
#define CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_17_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_17_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_17_INCLASS \
	CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_17_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_17_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASExpBarrel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_Challenges_SExpBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
