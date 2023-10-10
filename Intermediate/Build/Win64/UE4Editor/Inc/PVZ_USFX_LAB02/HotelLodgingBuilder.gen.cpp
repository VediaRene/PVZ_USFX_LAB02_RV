// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/HotelLodgingBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHotelLodgingBuilder() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AHotelLodgingBuilder_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AHotelLodgingBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ALodging_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ULodgingBuilder_NoRegister();
// End Cross Module References
	void AHotelLodgingBuilder::StaticRegisterNativesAHotelLodgingBuilder()
	{
	}
	UClass* Z_Construct_UClass_AHotelLodgingBuilder_NoRegister()
	{
		return AHotelLodgingBuilder::StaticClass();
	}
	struct Z_Construct_UClass_AHotelLodgingBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lodging_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Lodging;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHotelLodgingBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHotelLodgingBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HotelLodgingBuilder.h" },
		{ "ModuleRelativePath", "HotelLodgingBuilder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHotelLodgingBuilder_Statics::NewProp_Lodging_MetaData[] = {
		{ "Category", "Hotel Lodging" },
		{ "Comment", "//The Lodging Actor\n" },
		{ "ModuleRelativePath", "HotelLodgingBuilder.h" },
		{ "ToolTip", "The Lodging Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHotelLodgingBuilder_Statics::NewProp_Lodging = { "Lodging", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHotelLodgingBuilder, Lodging), Z_Construct_UClass_ALodging_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHotelLodgingBuilder_Statics::NewProp_Lodging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHotelLodgingBuilder_Statics::NewProp_Lodging_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHotelLodgingBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHotelLodgingBuilder_Statics::NewProp_Lodging,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHotelLodgingBuilder_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULodgingBuilder_NoRegister, (int32)VTABLE_OFFSET(AHotelLodgingBuilder, ILodgingBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHotelLodgingBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHotelLodgingBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHotelLodgingBuilder_Statics::ClassParams = {
		&AHotelLodgingBuilder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHotelLodgingBuilder_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHotelLodgingBuilder_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHotelLodgingBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHotelLodgingBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHotelLodgingBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHotelLodgingBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHotelLodgingBuilder, 573417110);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AHotelLodgingBuilder>()
	{
		return AHotelLodgingBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHotelLodgingBuilder(Z_Construct_UClass_AHotelLodgingBuilder, &AHotelLodgingBuilder::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AHotelLodgingBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHotelLodgingBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
