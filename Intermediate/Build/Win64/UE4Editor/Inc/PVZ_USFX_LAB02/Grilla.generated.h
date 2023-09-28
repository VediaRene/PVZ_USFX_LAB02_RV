// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PVZ_USFX_LAB02_Grilla_generated_h
#error "Grilla.generated.h already included, missing '#pragma once' in Grilla.h"
#endif
#define PVZ_USFX_LAB02_Grilla_generated_h

#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_SPARSE_DATA
#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_RPC_WRAPPERS
#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrilla(); \
	friend struct Z_Construct_UClass_AGrilla_Statics; \
public: \
	DECLARE_CLASS(AGrilla, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVZ_USFX_LAB02"), NO_API) \
	DECLARE_SERIALIZER(AGrilla)


#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAGrilla(); \
	friend struct Z_Construct_UClass_AGrilla_Statics; \
public: \
	DECLARE_CLASS(AGrilla, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVZ_USFX_LAB02"), NO_API) \
	DECLARE_SERIALIZER(AGrilla)


#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrilla(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrilla) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrilla); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrilla); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrilla(AGrilla&&); \
	NO_API AGrilla(const AGrilla&); \
public:


#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrilla(AGrilla&&); \
	NO_API AGrilla(const AGrilla&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrilla); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrilla); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrilla)


#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TipoGrilla() { return STRUCT_OFFSET(AGrilla, TipoGrilla); } \
	FORCEINLINE static uint32 __PPO__MeshGrilla() { return STRUCT_OFFSET(AGrilla, MeshGrilla); }


#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_22_PROLOG
#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_PRIVATE_PROPERTY_OFFSET \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_SPARSE_DATA \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_RPC_WRAPPERS \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_INCLASS \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_PRIVATE_PROPERTY_OFFSET \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_SPARSE_DATA \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_INCLASS_NO_PURE_DECLS \
	PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZ_USFX_LAB02_API UClass* StaticClass<class AGrilla>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PVZ_USFX_LAB02_RV_Source_PVZ_USFX_LAB02_Grilla_h


#define FOREACH_ENUM_EHEXTILETYPE(op) \
	op(EHexTileType::INVALIDO) \
	op(EHexTileType::PASTO) \
	op(EHexTileType::AGUA) 

enum class EHexTileType : uint8;
template<> PVZ_USFX_LAB02_API UEnum* StaticEnum<EHexTileType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
