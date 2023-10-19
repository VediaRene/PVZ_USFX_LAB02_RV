// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/StarShipNavigationOfficer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarShipNavigationOfficer() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AStarShipNavigationOfficer_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AStarShipNavigationOfficer();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AStarShipCrewMember();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AStarShipNavigationOfficer::StaticRegisterNativesAStarShipNavigationOfficer()
	{
	}
	UClass* Z_Construct_UClass_AStarShipNavigationOfficer_NoRegister()
	{
		return AStarShipNavigationOfficer::StaticClass();
	}
	struct Z_Construct_UClass_AStarShipNavigationOfficer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStarShipNavigationOfficer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStarShipCrewMember,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarShipNavigationOfficer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StarShipNavigationOfficer.h" },
		{ "ModuleRelativePath", "StarShipNavigationOfficer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarShipNavigationOfficer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarShipNavigationOfficer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStarShipNavigationOfficer_Statics::ClassParams = {
		&AStarShipNavigationOfficer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStarShipNavigationOfficer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStarShipNavigationOfficer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStarShipNavigationOfficer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStarShipNavigationOfficer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStarShipNavigationOfficer, 1564478373);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AStarShipNavigationOfficer>()
	{
		return AStarShipNavigationOfficer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStarShipNavigationOfficer(Z_Construct_UClass_AStarShipNavigationOfficer, &AStarShipNavigationOfficer::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AStarShipNavigationOfficer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStarShipNavigationOfficer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
