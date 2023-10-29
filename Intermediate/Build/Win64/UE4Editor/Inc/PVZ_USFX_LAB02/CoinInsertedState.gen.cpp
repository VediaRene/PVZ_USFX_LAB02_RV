// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/CoinInsertedState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinInsertedState() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ACoinInsertedState_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ACoinInsertedState();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AOldSchoolSlotMachine_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UState_NoRegister();
// End Cross Module References
	void ACoinInsertedState::StaticRegisterNativesACoinInsertedState()
	{
	}
	UClass* Z_Construct_UClass_ACoinInsertedState_NoRegister()
	{
		return ACoinInsertedState::StaticClass();
	}
	struct Z_Construct_UClass_ACoinInsertedState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldSchoolSlotMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldSchoolSlotMachine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoinInsertedState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinInsertedState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoinInsertedState.h" },
		{ "ModuleRelativePath", "CoinInsertedState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinInsertedState_Statics::NewProp_OldSchoolSlotMachine_MetaData[] = {
		{ "Comment", "//The Slot Machine of this State\n" },
		{ "ModuleRelativePath", "CoinInsertedState.h" },
		{ "ToolTip", "The Slot Machine of this State" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinInsertedState_Statics::NewProp_OldSchoolSlotMachine = { "OldSchoolSlotMachine", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinInsertedState, OldSchoolSlotMachine), Z_Construct_UClass_AOldSchoolSlotMachine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoinInsertedState_Statics::NewProp_OldSchoolSlotMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinInsertedState_Statics::NewProp_OldSchoolSlotMachine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoinInsertedState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinInsertedState_Statics::NewProp_OldSchoolSlotMachine,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACoinInsertedState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UState_NoRegister, (int32)VTABLE_OFFSET(ACoinInsertedState, IState), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoinInsertedState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinInsertedState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACoinInsertedState_Statics::ClassParams = {
		&ACoinInsertedState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACoinInsertedState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoinInsertedState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoinInsertedState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinInsertedState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoinInsertedState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACoinInsertedState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACoinInsertedState, 3009725101);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<ACoinInsertedState>()
	{
		return ACoinInsertedState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACoinInsertedState(Z_Construct_UClass_ACoinInsertedState, &ACoinInsertedState::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("ACoinInsertedState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinInsertedState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
