// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/GunAdapter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunAdapter() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AGunAdapter_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AGunAdapter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AGun_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_USlingShot_NoRegister();
// End Cross Module References
	void AGunAdapter::StaticRegisterNativesAGunAdapter()
	{
	}
	UClass* Z_Construct_UClass_AGunAdapter_NoRegister()
	{
		return AGunAdapter::StaticClass();
	}
	struct Z_Construct_UClass_AGunAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunAdapter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GunAdapter.h" },
		{ "ModuleRelativePath", "GunAdapter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunAdapter_Statics::NewProp_Weapon_MetaData[] = {
		{ "ModuleRelativePath", "GunAdapter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunAdapter_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunAdapter, Weapon), Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunAdapter_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunAdapter_Statics::NewProp_Weapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGunAdapter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunAdapter_Statics::NewProp_Weapon,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGunAdapter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USlingShot_NoRegister, (int32)VTABLE_OFFSET(AGunAdapter, ISlingShot), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGunAdapter_Statics::ClassParams = {
		&AGunAdapter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGunAdapter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGunAdapter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGunAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGunAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGunAdapter, 2836331998);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AGunAdapter>()
	{
		return AGunAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGunAdapter(Z_Construct_UClass_AGunAdapter, &AGunAdapter::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AGunAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunAdapter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
