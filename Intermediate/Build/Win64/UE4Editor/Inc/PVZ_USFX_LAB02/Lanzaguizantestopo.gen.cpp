// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Lanzaguizantestopo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLanzaguizantestopo() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ALanzaguizantestopo_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ALanzaguizantestopo();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlant();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void ALanzaguizantestopo::StaticRegisterNativesALanzaguizantestopo()
	{
	}
	UClass* Z_Construct_UClass_ALanzaguizantestopo_NoRegister()
	{
		return ALanzaguizantestopo::StaticClass();
	}
	struct Z_Construct_UClass_ALanzaguizantestopo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShootInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALanzaguizantestopo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlant,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALanzaguizantestopo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Lanzaguizantestopo.h" },
		{ "ModuleRelativePath", "Lanzaguizantestopo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALanzaguizantestopo_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Lanzaguizantestopo" },
		{ "ModuleRelativePath", "Lanzaguizantestopo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALanzaguizantestopo_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALanzaguizantestopo, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_ALanzaguizantestopo_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALanzaguizantestopo_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALanzaguizantestopo_Statics::NewProp_ShootInterval_MetaData[] = {
		{ "Category", "Lanzaguizantestopo" },
		{ "ModuleRelativePath", "Lanzaguizantestopo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALanzaguizantestopo_Statics::NewProp_ShootInterval = { "ShootInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALanzaguizantestopo, ShootInterval), METADATA_PARAMS(Z_Construct_UClass_ALanzaguizantestopo_Statics::NewProp_ShootInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALanzaguizantestopo_Statics::NewProp_ShootInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALanzaguizantestopo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALanzaguizantestopo_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALanzaguizantestopo_Statics::NewProp_ShootInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALanzaguizantestopo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALanzaguizantestopo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALanzaguizantestopo_Statics::ClassParams = {
		&ALanzaguizantestopo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALanzaguizantestopo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALanzaguizantestopo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALanzaguizantestopo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALanzaguizantestopo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALanzaguizantestopo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALanzaguizantestopo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALanzaguizantestopo, 3636139159);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<ALanzaguizantestopo>()
	{
		return ALanzaguizantestopo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALanzaguizantestopo(Z_Construct_UClass_ALanzaguizantestopo, &ALanzaguizantestopo::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("ALanzaguizantestopo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALanzaguizantestopo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
