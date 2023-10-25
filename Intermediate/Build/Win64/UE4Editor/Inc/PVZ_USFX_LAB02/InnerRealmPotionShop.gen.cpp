// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/InnerRealmPotionShop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInnerRealmPotionShop() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AInnerRealmPotionShop_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AInnerRealmPotionShop();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APotionShop();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AInnerRealmPotionShop::StaticRegisterNativesAInnerRealmPotionShop()
	{
	}
	UClass* Z_Construct_UClass_AInnerRealmPotionShop_NoRegister()
	{
		return AInnerRealmPotionShop::StaticClass();
	}
	struct Z_Construct_UClass_AInnerRealmPotionShop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInnerRealmPotionShop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APotionShop,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInnerRealmPotionShop_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InnerRealmPotionShop.h" },
		{ "ModuleRelativePath", "InnerRealmPotionShop.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInnerRealmPotionShop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInnerRealmPotionShop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInnerRealmPotionShop_Statics::ClassParams = {
		&AInnerRealmPotionShop::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AInnerRealmPotionShop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInnerRealmPotionShop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInnerRealmPotionShop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInnerRealmPotionShop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInnerRealmPotionShop, 2882901818);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AInnerRealmPotionShop>()
	{
		return AInnerRealmPotionShop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInnerRealmPotionShop(Z_Construct_UClass_AInnerRealmPotionShop, &AInnerRealmPotionShop::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AInnerRealmPotionShop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInnerRealmPotionShop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
