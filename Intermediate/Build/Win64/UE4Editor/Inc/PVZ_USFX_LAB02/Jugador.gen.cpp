// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Jugador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJugador() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AJugador_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AJugador();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AGrilla_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ASol_NoRegister();
// End Cross Module References
	void AJugador::StaticRegisterNativesAJugador()
	{
	}
	UClass* Z_Construct_UClass_AJugador_NoRegister()
	{
		return AJugador::StaticClass();
	}
	struct Z_Construct_UClass_AJugador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrillaActual_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrillaActual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolActual_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SolActual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJugador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJugador_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Jugador.h" },
		{ "ModuleRelativePath", "Jugador.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJugador_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** The camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jugador.h" },
		{ "ToolTip", "The camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJugador_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJugador, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJugador_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJugador_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJugador_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jugador.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJugador_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJugador, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJugador_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJugador_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJugador_Statics::NewProp_GrillaActual_MetaData[] = {
		{ "Category", "Jugador" },
		{ "ModuleRelativePath", "Jugador.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJugador_Statics::NewProp_GrillaActual = { "GrillaActual", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJugador, GrillaActual), Z_Construct_UClass_AGrilla_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJugador_Statics::NewProp_GrillaActual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJugador_Statics::NewProp_GrillaActual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJugador_Statics::NewProp_SolActual_MetaData[] = {
		{ "Category", "Jugador" },
		{ "ModuleRelativePath", "Jugador.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJugador_Statics::NewProp_SolActual = { "SolActual", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJugador, SolActual), Z_Construct_UClass_ASol_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJugador_Statics::NewProp_SolActual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJugador_Statics::NewProp_SolActual_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJugador_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJugador_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJugador_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJugador_Statics::NewProp_GrillaActual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJugador_Statics::NewProp_SolActual,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJugador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJugador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJugador_Statics::ClassParams = {
		&AJugador::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AJugador_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AJugador_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJugador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJugador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJugador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJugador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJugador, 1322461414);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AJugador>()
	{
		return AJugador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJugador(Z_Construct_UClass_AJugador, &AJugador::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AJugador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJugador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
