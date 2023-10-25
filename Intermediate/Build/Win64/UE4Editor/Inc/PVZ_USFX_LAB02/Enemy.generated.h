// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PVZ_USFX_LAB02_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define PVZ_USFX_LAB02_Enemy_generated_h

#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_SPARSE_DATA
#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_RPC_WRAPPERS
#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PVZ_USFX_LAB02_API UEnemy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PVZ_USFX_LAB02_API, UEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PVZ_USFX_LAB02_API UEnemy(UEnemy&&); \
	PVZ_USFX_LAB02_API UEnemy(const UEnemy&); \
public:


#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PVZ_USFX_LAB02_API UEnemy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PVZ_USFX_LAB02_API UEnemy(UEnemy&&); \
	PVZ_USFX_LAB02_API UEnemy(const UEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PVZ_USFX_LAB02_API, UEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemy); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemy)


#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEnemy(); \
	friend struct Z_Construct_UClass_UEnemy_Statics; \
public: \
	DECLARE_CLASS(UEnemy, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PVZ_USFX_LAB02"), PVZ_USFX_LAB02_API) \
	DECLARE_SERIALIZER(UEnemy)


#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_GENERATED_UINTERFACE_BODY() \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_GENERATED_UINTERFACE_BODY() \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEnemy() {} \
public: \
	typedef UEnemy UClassType; \
	typedef IEnemy ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IEnemy() {} \
public: \
	typedef UEnemy UClassType; \
	typedef IEnemy ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_10_PROLOG
#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_SPARSE_DATA \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_RPC_WRAPPERS \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_SPARSE_DATA \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZ_USFX_LAB02_API UClass* StaticClass<class UEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
