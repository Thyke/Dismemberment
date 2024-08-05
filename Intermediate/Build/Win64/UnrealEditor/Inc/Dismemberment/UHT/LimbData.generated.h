// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LimbData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISMEMBERMENT_LimbData_generated_h
#error "LimbData.generated.h already included, missing '#pragma once' in LimbData.h"
#endif
#define DISMEMBERMENT_LimbData_generated_h

#define FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDismembermentLimbData_Statics; \
	DISMEMBERMENT_API static class UScriptStruct* StaticStruct();


template<> DISMEMBERMENT_API UScriptStruct* StaticStruct<struct FDismembermentLimbData>();

#define FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBodyPartData_Statics; \
	DISMEMBERMENT_API static class UScriptStruct* StaticStruct();


template<> DISMEMBERMENT_API UScriptStruct* StaticStruct<struct FBodyPartData>();

#define FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSeverableBone_Statics; \
	DISMEMBERMENT_API static class UScriptStruct* StaticStruct();


template<> DISMEMBERMENT_API UScriptStruct* StaticStruct<struct FSeverableBone>();

#define FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULimbData(); \
	friend struct Z_Construct_UClass_ULimbData_Statics; \
public: \
	DECLARE_CLASS(ULimbData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dismemberment"), NO_API) \
	DECLARE_SERIALIZER(ULimbData)


#define FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULimbData(ULimbData&&); \
	ULimbData(const ULimbData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULimbData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULimbData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULimbData) \
	NO_API virtual ~ULimbData();


#define FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h_63_PROLOG
#define FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h_66_INCLASS_NO_PURE_DECLS \
	FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISMEMBERMENT_API UClass* StaticClass<class ULimbData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_LimbData_h


#define FOREACH_ENUM_EBODYPART(op) \
	op(EBodyPart::LeftArm) \
	op(EBodyPart::RightArm) \
	op(EBodyPart::LeftLeg) \
	op(EBodyPart::RightLeg) \
	op(EBodyPart::Head) \
	op(EBodyPart::UpperTorso) \
	op(EBodyPart::LowerTorso) 

enum class EBodyPart : uint8;
template<> struct TIsUEnumClass<EBodyPart> { enum { Value = true }; };
template<> DISMEMBERMENT_API UEnum* StaticEnum<EBodyPart>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
