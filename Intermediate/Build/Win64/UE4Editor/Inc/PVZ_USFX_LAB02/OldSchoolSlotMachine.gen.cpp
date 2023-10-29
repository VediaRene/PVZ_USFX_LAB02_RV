// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/OldSchoolSlotMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOldSchoolSlotMachine() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AOldSchoolSlotMachine_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AOldSchoolSlotMachine();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AOldSchoolSlotMachine::StaticRegisterNativesAOldSchoolSlotMachine()
	{
	}
	UClass* Z_Construct_UClass_AOldSchoolSlotMachine_NoRegister()
	{
		return AOldSchoolSlotMachine::StaticClass();
	}
	struct Z_Construct_UClass_AOldSchoolSlotMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOldSchoolSlotMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOldSchoolSlotMachine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OldSchoolSlotMachine.h" },
		{ "ModuleRelativePath", "OldSchoolSlotMachine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOldSchoolSlotMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOldSchoolSlotMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOldSchoolSlotMachine_Statics::ClassParams = {
		&AOldSchoolSlotMachine::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AOldSchoolSlotMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOldSchoolSlotMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOldSchoolSlotMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOldSchoolSlotMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOldSchoolSlotMachine, 709820552);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AOldSchoolSlotMachine>()
	{
		return AOldSchoolSlotMachine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOldSchoolSlotMachine(Z_Construct_UClass_AOldSchoolSlotMachine, &AOldSchoolSlotMachine::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AOldSchoolSlotMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOldSchoolSlotMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
