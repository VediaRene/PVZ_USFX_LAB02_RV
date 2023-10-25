// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/ProjectileEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileEnemy() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AProjectileEnemy_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AProjectileEnemy();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ADecorator();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AProjectileEnemy::StaticRegisterNativesAProjectileEnemy()
	{
	}
	UClass* Z_Construct_UClass_AProjectileEnemy_NoRegister()
	{
		return AProjectileEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProjectileEnemy.h" },
		{ "ModuleRelativePath", "ProjectileEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectileEnemy_Statics::ClassParams = {
		&AProjectileEnemy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProjectileEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectileEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectileEnemy, 4194625273);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AProjectileEnemy>()
	{
		return AProjectileEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectileEnemy(Z_Construct_UClass_AProjectileEnemy, &AProjectileEnemy::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AProjectileEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
