// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dismemberment/Public/LimbData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLimbData() {}

// Begin Cross Module References
DISMEMBERMENT_API UClass* Z_Construct_UClass_ULimbData();
DISMEMBERMENT_API UClass* Z_Construct_UClass_ULimbData_NoRegister();
DISMEMBERMENT_API UEnum* Z_Construct_UEnum_Dismemberment_EBodyPart();
DISMEMBERMENT_API UScriptStruct* Z_Construct_UScriptStruct_FBodyPartData();
DISMEMBERMENT_API UScriptStruct* Z_Construct_UScriptStruct_FDismembermentLimbData();
DISMEMBERMENT_API UScriptStruct* Z_Construct_UScriptStruct_FSeverableBone();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_Dismemberment();
// End Cross Module References

// Begin Enum EBodyPart
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBodyPart;
static UEnum* EBodyPart_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBodyPart.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBodyPart.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Dismemberment_EBodyPart, (UObject*)Z_Construct_UPackage__Script_Dismemberment(), TEXT("EBodyPart"));
	}
	return Z_Registration_Info_UEnum_EBodyPart.OuterSingleton;
}
template<> DISMEMBERMENT_API UEnum* StaticEnum<EBodyPart>()
{
	return EBodyPart_StaticEnum();
}
struct Z_Construct_UEnum_Dismemberment_EBodyPart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Head.Name", "EBodyPart::Head" },
		{ "LeftArm.Name", "EBodyPart::LeftArm" },
		{ "LeftLeg.Name", "EBodyPart::LeftLeg" },
		{ "LowerTorso.Name", "EBodyPart::LowerTorso" },
		{ "ModuleRelativePath", "Public/LimbData.h" },
		{ "RightArm.Name", "EBodyPart::RightArm" },
		{ "RightLeg.Name", "EBodyPart::RightLeg" },
		{ "UpperTorso.Name", "EBodyPart::UpperTorso" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBodyPart::LeftArm", (int64)EBodyPart::LeftArm },
		{ "EBodyPart::RightArm", (int64)EBodyPart::RightArm },
		{ "EBodyPart::LeftLeg", (int64)EBodyPart::LeftLeg },
		{ "EBodyPart::RightLeg", (int64)EBodyPart::RightLeg },
		{ "EBodyPart::Head", (int64)EBodyPart::Head },
		{ "EBodyPart::UpperTorso", (int64)EBodyPart::UpperTorso },
		{ "EBodyPart::LowerTorso", (int64)EBodyPart::LowerTorso },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Dismemberment_EBodyPart_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Dismemberment,
	nullptr,
	"EBodyPart",
	"EBodyPart",
	Z_Construct_UEnum_Dismemberment_EBodyPart_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Dismemberment_EBodyPart_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Dismemberment_EBodyPart_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Dismemberment_EBodyPart_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Dismemberment_EBodyPart()
{
	if (!Z_Registration_Info_UEnum_EBodyPart.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBodyPart.InnerSingleton, Z_Construct_UEnum_Dismemberment_EBodyPart_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBodyPart.InnerSingleton;
}
// End Enum EBodyPart

// Begin ScriptStruct FDismembermentLimbData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DismembermentLimbData;
class UScriptStruct* FDismembermentLimbData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DismembermentLimbData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DismembermentLimbData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDismembermentLimbData, (UObject*)Z_Construct_UPackage__Script_Dismemberment(), TEXT("DismembermentLimbData"));
	}
	return Z_Registration_Info_UScriptStruct_DismembermentLimbData.OuterSingleton;
}
template<> DISMEMBERMENT_API UScriptStruct* StaticStruct<FDismembermentLimbData>()
{
	return FDismembermentLimbData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDismembermentLimbData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LimbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimbMesh_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/LimbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisablePhysicsDelay_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/LimbData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LimbMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisablePhysicsDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDismembermentLimbData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDismembermentLimbData_Statics::NewProp_LimbMesh = { "LimbMesh", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDismembermentLimbData, LimbMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimbMesh_MetaData), NewProp_LimbMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDismembermentLimbData_Statics::NewProp_DisablePhysicsDelay = { "DisablePhysicsDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDismembermentLimbData, DisablePhysicsDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisablePhysicsDelay_MetaData), NewProp_DisablePhysicsDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDismembermentLimbData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismembermentLimbData_Statics::NewProp_LimbMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismembermentLimbData_Statics::NewProp_DisablePhysicsDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismembermentLimbData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDismembermentLimbData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Dismemberment,
	nullptr,
	&NewStructOps,
	"DismembermentLimbData",
	Z_Construct_UScriptStruct_FDismembermentLimbData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismembermentLimbData_Statics::PropPointers),
	sizeof(FDismembermentLimbData),
	alignof(FDismembermentLimbData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismembermentLimbData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDismembermentLimbData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDismembermentLimbData()
{
	if (!Z_Registration_Info_UScriptStruct_DismembermentLimbData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DismembermentLimbData.InnerSingleton, Z_Construct_UScriptStruct_FDismembermentLimbData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DismembermentLimbData.InnerSingleton;
}
// End ScriptStruct FDismembermentLimbData

// Begin ScriptStruct FBodyPartData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BodyPartData;
class UScriptStruct* FBodyPartData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BodyPartData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BodyPartData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyPartData, (UObject*)Z_Construct_UPackage__Script_Dismemberment(), TEXT("BodyPartData"));
	}
	return Z_Registration_Info_UScriptStruct_BodyPartData.OuterSingleton;
}
template<> DISMEMBERMENT_API UScriptStruct* StaticStruct<FBodyPartData>()
{
	return FBodyPartData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBodyPartData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LimbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedBones_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/LimbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimbData_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/LimbData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssociatedBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssociatedBones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LimbData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyPartData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBodyPartData_Statics::NewProp_AssociatedBones_Inner = { "AssociatedBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBodyPartData_Statics::NewProp_AssociatedBones = { "AssociatedBones", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyPartData, AssociatedBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssociatedBones_MetaData), NewProp_AssociatedBones_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyPartData_Statics::NewProp_LimbData = { "LimbData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyPartData, LimbData), Z_Construct_UScriptStruct_FDismembermentLimbData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimbData_MetaData), NewProp_LimbData_MetaData) }; // 3394473054
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyPartData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyPartData_Statics::NewProp_AssociatedBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyPartData_Statics::NewProp_AssociatedBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyPartData_Statics::NewProp_LimbData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyPartData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyPartData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Dismemberment,
	nullptr,
	&NewStructOps,
	"BodyPartData",
	Z_Construct_UScriptStruct_FBodyPartData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyPartData_Statics::PropPointers),
	sizeof(FBodyPartData),
	alignof(FBodyPartData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyPartData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBodyPartData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBodyPartData()
{
	if (!Z_Registration_Info_UScriptStruct_BodyPartData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BodyPartData.InnerSingleton, Z_Construct_UScriptStruct_FBodyPartData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BodyPartData.InnerSingleton;
}
// End ScriptStruct FBodyPartData

// Begin ScriptStruct FSeverableBone
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SeverableBone;
class UScriptStruct* FSeverableBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SeverableBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SeverableBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSeverableBone, (UObject*)Z_Construct_UPackage__Script_Dismemberment(), TEXT("SeverableBone"));
	}
	return Z_Registration_Info_UScriptStruct_SeverableBone.OuterSingleton;
}
template<> DISMEMBERMENT_API UScriptStruct* StaticStruct<FSeverableBone>()
{
	return FSeverableBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSeverableBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LimbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/LimbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperTorsoPart_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/LimbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerTorsoPart_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/LimbData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Bones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpperTorsoPart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LowerTorsoPart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSeverableBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSeverableBone_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSeverableBone_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSeverableBone, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bones_MetaData), NewProp_Bones_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSeverableBone_Statics::NewProp_UpperTorsoPart = { "UpperTorsoPart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSeverableBone, UpperTorsoPart), Z_Construct_UScriptStruct_FDismembermentLimbData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperTorsoPart_MetaData), NewProp_UpperTorsoPart_MetaData) }; // 3394473054
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSeverableBone_Statics::NewProp_LowerTorsoPart = { "LowerTorsoPart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSeverableBone, LowerTorsoPart), Z_Construct_UScriptStruct_FDismembermentLimbData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerTorsoPart_MetaData), NewProp_LowerTorsoPart_MetaData) }; // 3394473054
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSeverableBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeverableBone_Statics::NewProp_Bones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeverableBone_Statics::NewProp_Bones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeverableBone_Statics::NewProp_UpperTorsoPart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeverableBone_Statics::NewProp_LowerTorsoPart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeverableBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSeverableBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Dismemberment,
	nullptr,
	&NewStructOps,
	"SeverableBone",
	Z_Construct_UScriptStruct_FSeverableBone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeverableBone_Statics::PropPointers),
	sizeof(FSeverableBone),
	alignof(FSeverableBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeverableBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSeverableBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSeverableBone()
{
	if (!Z_Registration_Info_UScriptStruct_SeverableBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SeverableBone.InnerSingleton, Z_Construct_UScriptStruct_FSeverableBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SeverableBone.InnerSingleton;
}
// End ScriptStruct FSeverableBone

// Begin Class ULimbData
void ULimbData::StaticRegisterNativesULimbData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULimbData);
UClass* Z_Construct_UClass_ULimbData_NoRegister()
{
	return ULimbData::StaticClass();
}
struct Z_Construct_UClass_ULimbData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LimbData.h" },
		{ "ModuleRelativePath", "Public/LimbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyParts_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/LimbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeverableBones_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/LimbData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyParts_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BodyParts_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BodyParts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BodyParts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeverableBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SeverableBones;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULimbData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULimbData_Statics::NewProp_BodyParts_ValueProp = { "BodyParts", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBodyPartData, METADATA_PARAMS(0, nullptr) }; // 1090654667
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULimbData_Statics::NewProp_BodyParts_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULimbData_Statics::NewProp_BodyParts_Key_KeyProp = { "BodyParts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Dismemberment_EBodyPart, METADATA_PARAMS(0, nullptr) }; // 4090256206
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULimbData_Statics::NewProp_BodyParts = { "BodyParts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULimbData, BodyParts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyParts_MetaData), NewProp_BodyParts_MetaData) }; // 4090256206 1090654667
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULimbData_Statics::NewProp_SeverableBones_Inner = { "SeverableBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSeverableBone, METADATA_PARAMS(0, nullptr) }; // 3854789239
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULimbData_Statics::NewProp_SeverableBones = { "SeverableBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULimbData, SeverableBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeverableBones_MetaData), NewProp_SeverableBones_MetaData) }; // 3854789239
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULimbData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbData_Statics::NewProp_BodyParts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbData_Statics::NewProp_BodyParts_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbData_Statics::NewProp_BodyParts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbData_Statics::NewProp_BodyParts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbData_Statics::NewProp_SeverableBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbData_Statics::NewProp_SeverableBones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULimbData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULimbData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Dismemberment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULimbData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULimbData_Statics::ClassParams = {
	&ULimbData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULimbData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULimbData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULimbData_Statics::Class_MetaDataParams), Z_Construct_UClass_ULimbData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULimbData()
{
	if (!Z_Registration_Info_UClass_ULimbData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULimbData.OuterSingleton, Z_Construct_UClass_ULimbData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULimbData.OuterSingleton;
}
template<> DISMEMBERMENT_API UClass* StaticClass<ULimbData>()
{
	return ULimbData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULimbData);
ULimbData::~ULimbData() {}
// End Class ULimbData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBodyPart_StaticEnum, TEXT("EBodyPart"), &Z_Registration_Info_UEnum_EBodyPart, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4090256206U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDismembermentLimbData::StaticStruct, Z_Construct_UScriptStruct_FDismembermentLimbData_Statics::NewStructOps, TEXT("DismembermentLimbData"), &Z_Registration_Info_UScriptStruct_DismembermentLimbData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDismembermentLimbData), 3394473054U) },
		{ FBodyPartData::StaticStruct, Z_Construct_UScriptStruct_FBodyPartData_Statics::NewStructOps, TEXT("BodyPartData"), &Z_Registration_Info_UScriptStruct_BodyPartData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBodyPartData), 1090654667U) },
		{ FSeverableBone::StaticStruct, Z_Construct_UScriptStruct_FSeverableBone_Statics::NewStructOps, TEXT("SeverableBone"), &Z_Registration_Info_UScriptStruct_SeverableBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSeverableBone), 3854789239U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULimbData, ULimbData::StaticClass, TEXT("ULimbData"), &Z_Registration_Info_UClass_ULimbData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULimbData), 848638678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h_3188672807(TEXT("/Script/Dismemberment"),
	Z_CompiledInDeferFile_FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
