// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/FreakyAllen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFreakyAllen() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AFreakyAllen_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AFreakyAllen();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AClockTower_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_USubscriber_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UMorph_NoRegister();
// End Cross Module References
	void AFreakyAllen::StaticRegisterNativesAFreakyAllen()
	{
	}
	UClass* Z_Construct_UClass_AFreakyAllen_NoRegister()
	{
		return AFreakyAllen::StaticClass();
	}
	struct Z_Construct_UClass_AFreakyAllen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClockTower_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClockTower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFreakyAllen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFreakyAllen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FreakyAllen.h" },
		{ "ModuleRelativePath", "FreakyAllen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFreakyAllen_Statics::NewProp_ClockTower_MetaData[] = {
		{ "Comment", "//The Clock Tower of this Subscriber\n" },
		{ "ModuleRelativePath", "FreakyAllen.h" },
		{ "ToolTip", "The Clock Tower of this Subscriber" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFreakyAllen_Statics::NewProp_ClockTower = { "ClockTower", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFreakyAllen, ClockTower), Z_Construct_UClass_AClockTower_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFreakyAllen_Statics::NewProp_ClockTower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFreakyAllen_Statics::NewProp_ClockTower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFreakyAllen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreakyAllen_Statics::NewProp_ClockTower,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFreakyAllen_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USubscriber_NoRegister, (int32)VTABLE_OFFSET(AFreakyAllen, ISubscriber), false },
			{ Z_Construct_UClass_UMorph_NoRegister, (int32)VTABLE_OFFSET(AFreakyAllen, IMorph), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFreakyAllen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFreakyAllen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFreakyAllen_Statics::ClassParams = {
		&AFreakyAllen::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFreakyAllen_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFreakyAllen_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFreakyAllen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFreakyAllen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFreakyAllen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFreakyAllen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFreakyAllen, 1665456562);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AFreakyAllen>()
	{
		return AFreakyAllen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFreakyAllen(Z_Construct_UClass_AFreakyAllen, &AFreakyAllen::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AFreakyAllen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFreakyAllen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
