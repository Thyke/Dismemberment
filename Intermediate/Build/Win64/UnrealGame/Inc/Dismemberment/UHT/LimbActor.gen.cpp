// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dismemberment/Public/LimbActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLimbActor() {}

// Begin Cross Module References
DISMEMBERMENT_API UClass* Z_Construct_UClass_ALimbActor();
DISMEMBERMENT_API UClass* Z_Construct_UClass_ALimbActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Dismemberment();
// End Cross Module References

// Begin Class ALimbActor
void ALimbActor::StaticRegisterNativesALimbActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALimbActor);
UClass* Z_Construct_UClass_ALimbActor_NoRegister()
{
	return ALimbActor::StaticClass();
}
struct Z_Construct_UClass_ALimbActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LimbActor.h" },
		{ "ModuleRelativePath", "Public/LimbActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LimbActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALimbActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALimbActor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALimbActor, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALimbActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALimbActor_Statics::NewProp_StaticMeshComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALimbActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALimbActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Dismemberment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALimbActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALimbActor_Statics::ClassParams = {
	&ALimbActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALimbActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALimbActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALimbActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALimbActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALimbActor()
{
	if (!Z_Registration_Info_UClass_ALimbActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALimbActor.OuterSingleton, Z_Construct_UClass_ALimbActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALimbActor.OuterSingleton;
}
template<> DISMEMBERMENT_API UClass* StaticClass<ALimbActor>()
{
	return ALimbActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALimbActor);
ALimbActor::~ALimbActor() {}
// End Class ALimbActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALimbActor, ALimbActor::StaticClass, TEXT("ALimbActor"), &Z_Registration_Info_UClass_ALimbActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALimbActor), 1083158899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbActor_h_3740982881(TEXT("/Script/Dismemberment"),
	Z_CompiledInDeferFile_FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
