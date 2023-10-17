// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/PVZ_USFX_LAB02GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePVZ_USFX_LAB02GameMode() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APVZ_USFX_LAB02GameMode_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APVZ_USFX_LAB02GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AShooter_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AHotelLodgingBuilder_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AArchitecturalEngineer_NoRegister();
// End Cross Module References
	void APVZ_USFX_LAB02GameMode::StaticRegisterNativesAPVZ_USFX_LAB02GameMode()
	{
	}
	UClass* Z_Construct_UClass_APVZ_USFX_LAB02GameMode_NoRegister()
	{
		return APVZ_USFX_LAB02GameMode::StaticClass();
	}
	struct Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shooter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Shooter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HotelBuilder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HotelBuilder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Engineer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Engineer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PVZ_USFX_LAB02GameMode.h" },
		{ "ModuleRelativePath", "PVZ_USFX_LAB02GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::NewProp_Shooter_MetaData[] = {
		{ "Comment", "//The Shooter Actor that holds the Gun Adapter \n" },
		{ "ModuleRelativePath", "PVZ_USFX_LAB02GameMode.h" },
		{ "ToolTip", "The Shooter Actor that holds the Gun Adapter" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::NewProp_Shooter = { "Shooter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APVZ_USFX_LAB02GameMode, Shooter), Z_Construct_UClass_AShooter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::NewProp_Shooter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::NewProp_Shooter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::NewProp_HotelBuilder_MetaData[] = {
		{ "Category", "Main" },
		{ "Comment", "//The Builder Actor\n" },
		{ "ModuleRelativePath", "PVZ_USFX_LAB02GameMode.h" },
		{ "ToolTip", "The Builder Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::NewProp_HotelBuilder = { "HotelBuilder", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APVZ_USFX_LAB02GameMode, HotelBuilder), Z_Construct_UClass_AHotelLodgingBuilder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::NewProp_HotelBuilder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::NewProp_HotelBuilder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::NewProp_Engineer_MetaData[] = {
		{ "Category", "Main" },
		{ "Comment", "//The Engineer Actor\n" },
		{ "ModuleRelativePath", "PVZ_USFX_LAB02GameMode.h" },
		{ "ToolTip", "The Engineer Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::NewProp_Engineer = { "Engineer", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APVZ_USFX_LAB02GameMode, Engineer), Z_Construct_UClass_AArchitecturalEngineer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::NewProp_Engineer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::NewProp_Engineer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::NewProp_Shooter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::NewProp_HotelBuilder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::NewProp_Engineer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APVZ_USFX_LAB02GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::ClassParams = {
		&APVZ_USFX_LAB02GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APVZ_USFX_LAB02GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APVZ_USFX_LAB02GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APVZ_USFX_LAB02GameMode, 3484530750);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APVZ_USFX_LAB02GameMode>()
	{
		return APVZ_USFX_LAB02GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APVZ_USFX_LAB02GameMode(Z_Construct_UClass_APVZ_USFX_LAB02GameMode, &APVZ_USFX_LAB02GameMode::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APVZ_USFX_LAB02GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APVZ_USFX_LAB02GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
