// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/AHUDPlantas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAHUDPlantas() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AAHUDPlantas_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AAHUDPlantas();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AAHUDPlantas::StaticRegisterNativesAAHUDPlantas()
	{
	}
	UClass* Z_Construct_UClass_AAHUDPlantas_NoRegister()
	{
		return AAHUDPlantas::StaticClass();
	}
	struct Z_Construct_UClass_AAHUDPlantas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAHUDPlantas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAHUDPlantas_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "AHUDPlantas.h" },
		{ "ModuleRelativePath", "AHUDPlantas.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAHUDPlantas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAHUDPlantas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAHUDPlantas_Statics::ClassParams = {
		&AAHUDPlantas::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAHUDPlantas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAHUDPlantas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAHUDPlantas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAHUDPlantas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAHUDPlantas, 1266168701);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AAHUDPlantas>()
	{
		return AAHUDPlantas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAHUDPlantas(Z_Construct_UClass_AAHUDPlantas, &AAHUDPlantas::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AAHUDPlantas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAHUDPlantas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
