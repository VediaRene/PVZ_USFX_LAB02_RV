// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/ProyectilFuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectilFuego() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AProyectilFuego_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AProyectilFuego();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APVZ_USFX_LAB02Projectile();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AProyectilFuego::StaticRegisterNativesAProyectilFuego()
	{
	}
	UClass* Z_Construct_UClass_AProyectilFuego_NoRegister()
	{
		return AProyectilFuego::StaticClass();
	}
	struct Z_Construct_UClass_AProyectilFuego_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectilFuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APVZ_USFX_LAB02Projectile,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectilFuego_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProyectilFuego.h" },
		{ "ModuleRelativePath", "ProyectilFuego.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectilFuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectilFuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProyectilFuego_Statics::ClassParams = {
		&AProyectilFuego::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProyectilFuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilFuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectilFuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProyectilFuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProyectilFuego, 637635383);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AProyectilFuego>()
	{
		return AProyectilFuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProyectilFuego(Z_Construct_UClass_AProyectilFuego, &AProyectilFuego::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AProyectilFuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectilFuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
