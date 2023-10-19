// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/StarShipCrewMember.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarShipCrewMember() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AStarShipCrewMember_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AStarShipCrewMember();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AStarShipCrewMember::StaticRegisterNativesAStarShipCrewMember()
	{
	}
	UClass* Z_Construct_UClass_AStarShipCrewMember_NoRegister()
	{
		return AStarShipCrewMember::StaticClass();
	}
	struct Z_Construct_UClass_AStarShipCrewMember_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStarShipCrewMember_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarShipCrewMember_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StarShipCrewMember.h" },
		{ "ModuleRelativePath", "StarShipCrewMember.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarShipCrewMember_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarShipCrewMember>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStarShipCrewMember_Statics::ClassParams = {
		&AStarShipCrewMember::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStarShipCrewMember_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStarShipCrewMember_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStarShipCrewMember()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStarShipCrewMember_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStarShipCrewMember, 1526509749);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AStarShipCrewMember>()
	{
		return AStarShipCrewMember::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStarShipCrewMember(Z_Construct_UClass_AStarShipCrewMember, &AStarShipCrewMember::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AStarShipCrewMember"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStarShipCrewMember);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
