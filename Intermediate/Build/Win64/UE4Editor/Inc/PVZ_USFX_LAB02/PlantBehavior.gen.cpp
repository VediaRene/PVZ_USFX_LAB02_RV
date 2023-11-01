// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/PlantBehavior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlantBehavior() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UPlantBehavior_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UPlantBehavior();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void UPlantBehavior::StaticRegisterNativesUPlantBehavior()
	{
	}
	UClass* Z_Construct_UClass_UPlantBehavior_NoRegister()
	{
		return UPlantBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UPlantBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlantBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlantBehavior_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlantBehavior.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlantBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlantBehavior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlantBehavior_Statics::ClassParams = {
		&UPlantBehavior::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlantBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlantBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlantBehavior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlantBehavior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlantBehavior, 1650336074);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<UPlantBehavior>()
	{
		return UPlantBehavior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlantBehavior(Z_Construct_UClass_UPlantBehavior, &UPlantBehavior::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("UPlantBehavior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlantBehavior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
