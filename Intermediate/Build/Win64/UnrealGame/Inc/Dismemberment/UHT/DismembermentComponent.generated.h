// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DismembermentComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISMEMBERMENT_DismembermentComponent_generated_h
#error "DismembermentComponent.generated.h already included, missing '#pragma once' in DismembermentComponent.h"
#endif
#define DISMEMBERMENT_DismembermentComponent_generated_h

#define FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_10_DELEGATE \
DISMEMBERMENT_API void FOnDismembermentDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDismembermentDelegate, FName BrokenBone);


#define FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDismember);


#define FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDismembermentComponent(); \
	friend struct Z_Construct_UClass_UDismembermentComponent_Statics; \
public: \
	DECLARE_CLASS(UDismembermentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dismemberment"), NO_API) \
	DECLARE_SERIALIZER(UDismembermentComponent)


#define FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDismembermentComponent(UDismembermentComponent&&); \
	UDismembermentComponent(const UDismembermentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDismembermentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDismembermentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDismembermentComponent) \
	NO_API virtual ~UDismembermentComponent();


#define FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_12_PROLOG
#define FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISMEMBERMENT_API UClass* StaticClass<class UDismembermentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_faruk_Desktop_5_4_Plugins_Dismemberment_HostProject_Plugins_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
