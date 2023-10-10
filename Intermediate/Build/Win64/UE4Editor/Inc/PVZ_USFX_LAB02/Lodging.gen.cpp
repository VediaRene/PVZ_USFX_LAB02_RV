// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Lodging.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLodging() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ALodging_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ALodging();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UFloorPlan_NoRegister();
// End Cross Module References
	void ALodging::StaticRegisterNativesALodging()
	{
	}
	UClass* Z_Construct_UClass_ALodging_NoRegister()
	{
		return ALodging::StaticClass();
	}
	struct Z_Construct_UClass_ALodging_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALodging_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALodging_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Lodging.h" },
		{ "ModuleRelativePath", "Lodging.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALodging_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFloorPlan_NoRegister, (int32)VTABLE_OFFSET(ALodging, IFloorPlan), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALodging_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALodging>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALodging_Statics::ClassParams = {
		&ALodging::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALodging_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALodging_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALodging()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALodging_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALodging, 4095304096);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<ALodging>()
	{
		return ALodging::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALodging(Z_Construct_UClass_ALodging, &ALodging::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("ALodging"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALodging);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
