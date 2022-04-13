// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCompletion;
struct FCompletionInfo;
enum class EOAEngineType : uint8;
struct FGPT3Settings;
class UOpenAICallGPT;
#ifdef OPENAIAPI_OpenAICallGPT_generated_h
#error "OpenAICallGPT.generated.h already included, missing '#pragma once' in OpenAICallGPT.h"
#endif
#define OPENAIAPI_OpenAICallGPT_generated_h

#define HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_11_DELEGATE \
struct _Script_OpenAIAPI_eventOnResponseRecievedPin_Parms \
{ \
	TArray<FCompletion> completions; \
	FString errorMessage; \
	FCompletionInfo completionInfo; \
	bool Success; \
}; \
static inline void FOnResponseRecievedPin_DelegateWrapper(const FMulticastScriptDelegate& OnResponseRecievedPin, TArray<FCompletion> const& completions, const FString& errorMessage, FCompletionInfo const& completionInfo, bool Success) \
{ \
	_Script_OpenAIAPI_eventOnResponseRecievedPin_Parms Parms; \
	Parms.completions=completions; \
	Parms.errorMessage=errorMessage; \
	Parms.completionInfo=completionInfo; \
	Parms.Success=Success ? true : false; \
	OnResponseRecievedPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_SPARSE_DATA
#define HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenAICallGPT3);


#define HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenAICallGPT3);


#define HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenAICallGPT(); \
	friend struct Z_Construct_UClass_UOpenAICallGPT_Statics; \
public: \
	DECLARE_CLASS(UOpenAICallGPT, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenAIAPI"), NO_API) \
	DECLARE_SERIALIZER(UOpenAICallGPT)


#define HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUOpenAICallGPT(); \
	friend struct Z_Construct_UClass_UOpenAICallGPT_Statics; \
public: \
	DECLARE_CLASS(UOpenAICallGPT, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenAIAPI"), NO_API) \
	DECLARE_SERIALIZER(UOpenAICallGPT)


#define HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenAICallGPT(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenAICallGPT) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenAICallGPT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenAICallGPT); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenAICallGPT(UOpenAICallGPT&&); \
	NO_API UOpenAICallGPT(const UOpenAICallGPT&); \
public:


#define HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenAICallGPT(UOpenAICallGPT&&); \
	NO_API UOpenAICallGPT(const UOpenAICallGPT&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenAICallGPT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenAICallGPT); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenAICallGPT)


#define HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_16_PROLOG
#define HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_SPARSE_DATA \
	HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_RPC_WRAPPERS \
	HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_INCLASS \
	HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_SPARSE_DATA \
	HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENAIAPI_API UClass* StaticClass<class UOpenAICallGPT>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallGPT_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
