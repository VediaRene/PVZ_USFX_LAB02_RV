// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Trasformacion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrasformacion() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UTrasformacion_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UTrasformacion();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void UTrasformacion::StaticRegisterNativesUTrasformacion()
	{
	}
	UClass* Z_Construct_UClass_UTrasformacion_NoRegister()
	{
		return UTrasformacion::StaticClass();
	}
	struct Z_Construct_UClass_UTrasformacion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrasformacion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrasformacion_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Trasformacion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrasformacion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITrasformacion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTrasformacion_Statics::ClassParams = {
		&UTrasformacion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTrasformacion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTrasformacion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrasformacion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTrasformacion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTrasformacion, 111190028);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<UTrasformacion>()
	{
		return UTrasformacion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTrasformacion(Z_Construct_UClass_UTrasformacion, &UTrasformacion::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("UTrasformacion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrasformacion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
