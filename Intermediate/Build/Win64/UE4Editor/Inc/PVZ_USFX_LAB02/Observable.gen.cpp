// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Observable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObservable() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UObservable_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UObservable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void UObservable::StaticRegisterNativesUObservable()
	{
	}
	UClass* Z_Construct_UClass_UObservable_NoRegister()
	{
		return UObservable::StaticClass();
	}
	struct Z_Construct_UClass_UObservable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObservable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObservable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Observable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObservable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IObservable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObservable_Statics::ClassParams = {
		&UObservable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UObservable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObservable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObservable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObservable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObservable, 2177069419);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<UObservable>()
	{
		return UObservable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObservable(Z_Construct_UClass_UObservable, &UObservable::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("UObservable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObservable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
