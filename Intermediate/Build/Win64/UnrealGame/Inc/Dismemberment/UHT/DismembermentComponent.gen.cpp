// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dismemberment/Public/DismembermentComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDismembermentComponent() {}

// Begin Cross Module References
DISMEMBERMENT_API UClass* Z_Construct_UClass_UDismembermentComponent();
DISMEMBERMENT_API UClass* Z_Construct_UClass_UDismembermentComponent_NoRegister();
DISMEMBERMENT_API UClass* Z_Construct_UClass_ULimbData_NoRegister();
DISMEMBERMENT_API UFunction* Z_Construct_UDelegateFunction_Dismemberment_OnDismembermentDelegate__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_Dismemberment();
// End Cross Module References

// Begin Delegate FOnDismembermentDelegate
struct Z_Construct_UDelegateFunction_Dismemberment_OnDismembermentDelegate__DelegateSignature_Statics
{
	struct _Script_Dismemberment_eventOnDismembermentDelegate_Parms
	{
		FName BrokenBone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BrokenBone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Dismemberment_OnDismembermentDelegate__DelegateSignature_Statics::NewProp_BrokenBone = { "BrokenBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Dismemberment_eventOnDismembermentDelegate_Parms, BrokenBone), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Dismemberment_OnDismembermentDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Dismemberment_OnDismembermentDelegate__DelegateSignature_Statics::NewProp_BrokenBone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Dismemberment_OnDismembermentDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Dismemberment_OnDismembermentDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Dismemberment, nullptr, "OnDismembermentDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Dismemberment_OnDismembermentDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Dismemberment_OnDismembermentDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Dismemberment_OnDismembermentDelegate__DelegateSignature_Statics::_Script_Dismemberment_eventOnDismembermentDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Dismemberment_OnDismembermentDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Dismemberment_OnDismembermentDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Dismemberment_OnDismembermentDelegate__DelegateSignature_Statics::_Script_Dismemberment_eventOnDismembermentDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Dismemberment_OnDismembermentDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Dismemberment_OnDismembermentDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDismembermentDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDismembermentDelegate, FName BrokenBone)
{
	struct _Script_Dismemberment_eventOnDismembermentDelegate_Parms
	{
		FName BrokenBone;
	};
	_Script_Dismemberment_eventOnDismembermentDelegate_Parms Parms;
	Parms.BrokenBone=BrokenBone;
	OnDismembermentDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDismembermentDelegate

// Begin Class UDismembermentComponent Function Dismember
struct Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics
{
	struct DismembermentComponent_eventDismember_Parms
	{
		FName BoneName;
		bool DropAllWeaponsFlag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dismemberment" },
		{ "Comment", "//void Dismember(FName BoneName, FVector SpawnLocation = FVector::ZeroVector, FRotator SpawnRotation = FRotator::ZeroRotator, bool UseBoneLocation = true);\n" },
		{ "CPP_Default_DropAllWeaponsFlag", "true" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
		{ "ToolTip", "void Dismember(FName BoneName, FVector SpawnLocation = FVector::ZeroVector, FRotator SpawnRotation = FRotator::ZeroRotator, bool UseBoneLocation = true);" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static void NewProp_DropAllWeaponsFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DropAllWeaponsFlag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventDismember_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::NewProp_DropAllWeaponsFlag_SetBit(void* Obj)
{
	((DismembermentComponent_eventDismember_Parms*)Obj)->DropAllWeaponsFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::NewProp_DropAllWeaponsFlag = { "DropAllWeaponsFlag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DismembermentComponent_eventDismember_Parms), &Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::NewProp_DropAllWeaponsFlag_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::NewProp_DropAllWeaponsFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "Dismember", nullptr, nullptr, Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::DismembermentComponent_eventDismember_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::DismembermentComponent_eventDismember_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismembermentComponent_Dismember()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_Dismember_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execDismember)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_UBOOL(Z_Param_DropAllWeaponsFlag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Dismember(Z_Param_BoneName,Z_Param_DropAllWeaponsFlag);
	P_NATIVE_END;
}
// End Class UDismembermentComponent Function Dismember

// Begin Class UDismembermentComponent
void UDismembermentComponent::StaticRegisterNativesUDismembermentComponent()
{
	UClass* Class = UDismembermentComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Dismember", &UDismembermentComponent::execDismember },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDismembermentComponent);
UClass* Z_Construct_UClass_UDismembermentComponent_NoRegister()
{
	return UDismembermentComponent::StaticClass();
}
struct Z_Construct_UClass_UDismembermentComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DismembermentComponent.h" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimbDataAsset_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPreDismemberment_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPostDismemberment_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponTag_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LimbDataAsset;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreDismemberment;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostDismemberment;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDismembermentComponent_Dismember, "Dismember" }, // 548599316
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDismembermentComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_LimbDataAsset = { "LimbDataAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, LimbDataAsset), Z_Construct_UClass_ULimbData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimbDataAsset_MetaData), NewProp_LimbDataAsset_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_OnPreDismemberment = { "OnPreDismemberment", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, OnPreDismemberment), Z_Construct_UDelegateFunction_Dismemberment_OnDismembermentDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPreDismemberment_MetaData), NewProp_OnPreDismemberment_MetaData) }; // 3612281039
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_OnPostDismemberment = { "OnPostDismemberment", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, OnPostDismemberment), Z_Construct_UDelegateFunction_Dismemberment_OnDismembermentDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPostDismemberment_MetaData), NewProp_OnPostDismemberment_MetaData) }; // 3612281039
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_WeaponTag = { "WeaponTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, WeaponTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponTag_MetaData), NewProp_WeaponTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDismembermentComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_LimbDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_OnPreDismemberment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_OnPostDismemberment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_WeaponTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDismembermentComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Dismemberment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDismembermentComponent_Statics::ClassParams = {
	&UDismembermentComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDismembermentComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDismembermentComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDismembermentComponent()
{
	if (!Z_Registration_Info_UClass_UDismembermentComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDismembermentComponent.OuterSingleton, Z_Construct_UClass_UDismembermentComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDismembermentComponent.OuterSingleton;
}
template<> DISMEMBERMENT_API UClass* StaticClass<UDismembermentComponent>()
{
	return UDismembermentComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDismembermentComponent);
UDismembermentComponent::~UDismembermentComponent() {}
// End Class UDismembermentComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDismembermentComponent, UDismembermentComponent::StaticClass, TEXT("UDismembermentComponent"), &Z_Registration_Info_UClass_UDismembermentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDismembermentComponent), 3735760160U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_1074927141(TEXT("/Script/Dismemberment"),
	Z_CompiledInDeferFile_FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
