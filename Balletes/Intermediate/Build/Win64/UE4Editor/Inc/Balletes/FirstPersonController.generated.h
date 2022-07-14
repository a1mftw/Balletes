// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BALLETES_FirstPersonController_generated_h
#error "FirstPersonController.generated.h already included, missing '#pragma once' in FirstPersonController.h"
#endif
#define BALLETES_FirstPersonController_generated_h

#define Balletes_Source_Balletes_FirstPersonController_h_14_SPARSE_DATA
#define Balletes_Source_Balletes_FirstPersonController_h_14_RPC_WRAPPERS
#define Balletes_Source_Balletes_FirstPersonController_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Balletes_Source_Balletes_FirstPersonController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonController(); \
	friend struct Z_Construct_UClass_AFirstPersonController_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Balletes"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonController)


#define Balletes_Source_Balletes_FirstPersonController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFirstPersonController(); \
	friend struct Z_Construct_UClass_AFirstPersonController_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Balletes"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonController)


#define Balletes_Source_Balletes_FirstPersonController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstPersonController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPersonController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonController(AFirstPersonController&&); \
	NO_API AFirstPersonController(const AFirstPersonController&); \
public:


#define Balletes_Source_Balletes_FirstPersonController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonController(AFirstPersonController&&); \
	NO_API AFirstPersonController(const AFirstPersonController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPersonController)


#define Balletes_Source_Balletes_FirstPersonController_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ammo() { return STRUCT_OFFSET(AFirstPersonController, ammo); } \
	FORCEINLINE static uint32 __PPO__cam() { return STRUCT_OFFSET(AFirstPersonController, cam); }


#define Balletes_Source_Balletes_FirstPersonController_h_11_PROLOG
#define Balletes_Source_Balletes_FirstPersonController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Balletes_Source_Balletes_FirstPersonController_h_14_PRIVATE_PROPERTY_OFFSET \
	Balletes_Source_Balletes_FirstPersonController_h_14_SPARSE_DATA \
	Balletes_Source_Balletes_FirstPersonController_h_14_RPC_WRAPPERS \
	Balletes_Source_Balletes_FirstPersonController_h_14_INCLASS \
	Balletes_Source_Balletes_FirstPersonController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Balletes_Source_Balletes_FirstPersonController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Balletes_Source_Balletes_FirstPersonController_h_14_PRIVATE_PROPERTY_OFFSET \
	Balletes_Source_Balletes_FirstPersonController_h_14_SPARSE_DATA \
	Balletes_Source_Balletes_FirstPersonController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Balletes_Source_Balletes_FirstPersonController_h_14_INCLASS_NO_PURE_DECLS \
	Balletes_Source_Balletes_FirstPersonController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BALLETES_API UClass* StaticClass<class AFirstPersonController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Balletes_Source_Balletes_FirstPersonController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
