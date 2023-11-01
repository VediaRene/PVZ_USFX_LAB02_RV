// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/CompositePlant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositePlant() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ACompositePlant_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ACompositePlant();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlant();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlant_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACompositePlant::execAddPlant)
	{
		P_GET_OBJECT(APlant,Z_Param_NewPlant);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPlant(Z_Param_NewPlant);
		P_NATIVE_END;
	}
	void ACompositePlant::StaticRegisterNativesACompositePlant()
	{
		UClass* Class = ACompositePlant::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPlant", &ACompositePlant::execAddPlant },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACompositePlant_AddPlant_Statics
	{
		struct CompositePlant_eventAddPlant_Parms
		{
			APlant* NewPlant;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositePlant_AddPlant_Statics::NewProp_NewPlant = { "NewPlant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CompositePlant_eventAddPlant_Parms, NewPlant), Z_Construct_UClass_APlant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositePlant_AddPlant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositePlant_AddPlant_Statics::NewProp_NewPlant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositePlant_AddPlant_Statics::Function_MetaDataParams[] = {
		{ "Category", "CompositePlant" },
		{ "ModuleRelativePath", "CompositePlant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositePlant_AddPlant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositePlant, nullptr, "AddPlant", nullptr, nullptr, sizeof(CompositePlant_eventAddPlant_Parms), Z_Construct_UFunction_ACompositePlant_AddPlant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositePlant_AddPlant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositePlant_AddPlant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositePlant_AddPlant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositePlant_AddPlant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACompositePlant_AddPlant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACompositePlant_NoRegister()
	{
		return ACompositePlant::StaticClass();
	}
	struct Z_Construct_UClass_ACompositePlant_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACompositePlant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlant,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACompositePlant_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACompositePlant_AddPlant, "AddPlant" }, // 3575520650
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositePlant_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CompositePlant.h" },
		{ "ModuleRelativePath", "CompositePlant.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACompositePlant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACompositePlant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACompositePlant_Statics::ClassParams = {
		&ACompositePlant::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACompositePlant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositePlant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACompositePlant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACompositePlant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACompositePlant, 1190925558);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<ACompositePlant>()
	{
		return ACompositePlant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACompositePlant(Z_Construct_UClass_ACompositePlant, &ACompositePlant::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("ACompositePlant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACompositePlant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
