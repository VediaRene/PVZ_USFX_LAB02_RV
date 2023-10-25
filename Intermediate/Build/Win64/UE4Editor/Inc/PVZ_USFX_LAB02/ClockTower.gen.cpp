// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/ClockTower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClockTower() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AClockTower_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AClockTower();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APublisher();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AClockTower::StaticRegisterNativesAClockTower()
	{
	}
	UClass* Z_Construct_UClass_AClockTower_NoRegister()
	{
		return AClockTower::StaticClass();
	}
	struct Z_Construct_UClass_AClockTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClockTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APublisher,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClockTower_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ClockTower.h" },
		{ "ModuleRelativePath", "ClockTower.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClockTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClockTower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClockTower_Statics::ClassParams = {
		&AClockTower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AClockTower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AClockTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClockTower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClockTower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClockTower, 3371251926);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AClockTower>()
	{
		return AClockTower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClockTower(Z_Construct_UClass_AClockTower, &AClockTower::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AClockTower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClockTower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
