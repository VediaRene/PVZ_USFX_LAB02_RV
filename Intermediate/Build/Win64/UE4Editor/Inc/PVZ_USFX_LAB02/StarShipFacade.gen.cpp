// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/StarShipFacade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarShipFacade() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AStarShipFacade_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AStarShipFacade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AStarShipFacade::StaticRegisterNativesAStarShipFacade()
	{
	}
	UClass* Z_Construct_UClass_AStarShipFacade_NoRegister()
	{
		return AStarShipFacade::StaticClass();
	}
	struct Z_Construct_UClass_AStarShipFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tasks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStarShipFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarShipFacade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StarShipFacade.h" },
		{ "ModuleRelativePath", "StarShipFacade.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AStarShipFacade_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarShipFacade_Statics::NewProp_Tasks_MetaData[] = {
		{ "Comment", "//The Tasks to execute\n" },
		{ "ModuleRelativePath", "StarShipFacade.h" },
		{ "ToolTip", "The Tasks to execute" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStarShipFacade_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarShipFacade, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AStarShipFacade_Statics::NewProp_Tasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarShipFacade_Statics::NewProp_Tasks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStarShipFacade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarShipFacade_Statics::NewProp_Tasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarShipFacade_Statics::NewProp_Tasks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarShipFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarShipFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStarShipFacade_Statics::ClassParams = {
		&AStarShipFacade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStarShipFacade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStarShipFacade_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStarShipFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStarShipFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStarShipFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStarShipFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStarShipFacade, 230871247);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AStarShipFacade>()
	{
		return AStarShipFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStarShipFacade(Z_Construct_UClass_AStarShipFacade, &AStarShipFacade::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AStarShipFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStarShipFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
