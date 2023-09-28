// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/StiloWidgetSlateWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStiloWidgetSlateWidgetStyle() {}
// Cross Module References
	PVZ_USFX_LAB02_API UScriptStruct* Z_Construct_UScriptStruct_FStiloWidgetSlateStyle();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UStiloWidgetSlateWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
// End Cross Module References

static_assert(std::is_polymorphic<FStiloWidgetSlateStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FStiloWidgetSlateStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

class UScriptStruct* FStiloWidgetSlateStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PVZ_USFX_LAB02_API uint32 Get_Z_Construct_UScriptStruct_FStiloWidgetSlateStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStiloWidgetSlateStyle, Z_Construct_UPackage__Script_PVZ_USFX_LAB02(), TEXT("StiloWidgetSlateStyle"), sizeof(FStiloWidgetSlateStyle), Get_Z_Construct_UScriptStruct_FStiloWidgetSlateStyle_Hash());
	}
	return Singleton;
}
template<> PVZ_USFX_LAB02_API UScriptStruct* StaticStruct<FStiloWidgetSlateStyle>()
{
	return FStiloWidgetSlateStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStiloWidgetSlateStyle(FStiloWidgetSlateStyle::StaticStruct, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("StiloWidgetSlateStyle"), false, nullptr, nullptr);
static struct FScriptStruct_PVZ_USFX_LAB02_StaticRegisterNativesFStiloWidgetSlateStyle
{
	FScriptStruct_PVZ_USFX_LAB02_StaticRegisterNativesFStiloWidgetSlateStyle()
	{
		UScriptStruct::DeferCppStructOps<FStiloWidgetSlateStyle>(FName(TEXT("StiloWidgetSlateStyle")));
	}
} ScriptStruct_PVZ_USFX_LAB02_StaticRegisterNativesFStiloWidgetSlateStyle;
	struct Z_Construct_UScriptStruct_FStiloWidgetSlateStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStiloWidgetSlateStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "StiloWidgetSlateWidgetStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStiloWidgetSlateStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStiloWidgetSlateStyle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStiloWidgetSlateStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"StiloWidgetSlateStyle",
		sizeof(FStiloWidgetSlateStyle),
		alignof(FStiloWidgetSlateStyle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStiloWidgetSlateStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStiloWidgetSlateStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStiloWidgetSlateStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStiloWidgetSlateStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StiloWidgetSlateStyle"), sizeof(FStiloWidgetSlateStyle), Get_Z_Construct_UScriptStruct_FStiloWidgetSlateStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStiloWidgetSlateStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStiloWidgetSlateStyle_Hash() { return 2398064113U; }
	void UStiloWidgetSlateWidgetStyle::StaticRegisterNativesUStiloWidgetSlateWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_NoRegister()
	{
		return UStiloWidgetSlateWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "StiloWidgetSlateWidgetStyle.h" },
		{ "ModuleRelativePath", "StiloWidgetSlateWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the widget appearance. */" },
		{ "ModuleRelativePath", "StiloWidgetSlateWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the widget appearance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStiloWidgetSlateWidgetStyle, WidgetStyle), Z_Construct_UScriptStruct_FStiloWidgetSlateStyle, METADATA_PARAMS(Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_Statics::NewProp_WidgetStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_Statics::NewProp_WidgetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStiloWidgetSlateWidgetStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_Statics::ClassParams = {
		&UStiloWidgetSlateWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStiloWidgetSlateWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStiloWidgetSlateWidgetStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStiloWidgetSlateWidgetStyle, 3570272632);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<UStiloWidgetSlateWidgetStyle>()
	{
		return UStiloWidgetSlateWidgetStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStiloWidgetSlateWidgetStyle(Z_Construct_UClass_UStiloWidgetSlateWidgetStyle, &UStiloWidgetSlateWidgetStyle::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("UStiloWidgetSlateWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStiloWidgetSlateWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
