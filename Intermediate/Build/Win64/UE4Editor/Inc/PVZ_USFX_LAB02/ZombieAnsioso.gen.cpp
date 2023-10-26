// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/ZombieAnsioso.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAnsioso() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombieAnsioso_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombieAnsioso();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombieAbanderado_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_USuscriptor_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UTrasformacion_NoRegister();
// End Cross Module References
	void AZombieAnsioso::StaticRegisterNativesAZombieAnsioso()
	{
	}
	UClass* Z_Construct_UClass_AZombieAnsioso_NoRegister()
	{
		return AZombieAnsioso::StaticClass();
	}
	struct Z_Construct_UClass_AZombieAnsioso_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieAbanderado_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombieAbanderado;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieAnsioso_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAnsioso_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieAnsioso.h" },
		{ "ModuleRelativePath", "ZombieAnsioso.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAnsioso_Statics::NewProp_ZombieAbanderado_MetaData[] = {
		{ "Comment", "//El zombie de este suscriptor\n" },
		{ "ModuleRelativePath", "ZombieAnsioso.h" },
		{ "ToolTip", "El zombie de este suscriptor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieAnsioso_Statics::NewProp_ZombieAbanderado = { "ZombieAbanderado", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAnsioso, ZombieAbanderado), Z_Construct_UClass_AZombieAbanderado_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieAnsioso_Statics::NewProp_ZombieAbanderado_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAnsioso_Statics::NewProp_ZombieAbanderado_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieAnsioso_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAnsioso_Statics::NewProp_ZombieAbanderado,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AZombieAnsioso_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USuscriptor_NoRegister, (int32)VTABLE_OFFSET(AZombieAnsioso, ISuscriptor), false },
			{ Z_Construct_UClass_UTrasformacion_NoRegister, (int32)VTABLE_OFFSET(AZombieAnsioso, ITrasformacion), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieAnsioso_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieAnsioso>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieAnsioso_Statics::ClassParams = {
		&AZombieAnsioso::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZombieAnsioso_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAnsioso_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieAnsioso_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAnsioso_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieAnsioso()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieAnsioso_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieAnsioso, 2454061086);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AZombieAnsioso>()
	{
		return AZombieAnsioso::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieAnsioso(Z_Construct_UClass_AZombieAnsioso, &AZombieAnsioso::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AZombieAnsioso"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieAnsioso);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
