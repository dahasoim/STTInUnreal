// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPENAIAPI_OpenAIDefinitions_generated_h
#error "OpenAIDefinitions.generated.h already included, missing '#pragma once' in OpenAIDefinitions.h"
#endif
#define OPENAIAPI_OpenAIDefinitions_generated_h

#define HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGPT3Settings_Statics; \
	OPENAIAPI_API static class UScriptStruct* StaticStruct();


template<> OPENAIAPI_API UScriptStruct* StaticStruct<struct FGPT3Settings>();

#define HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompletion_Statics; \
	OPENAIAPI_API static class UScriptStruct* StaticStruct();


template<> OPENAIAPI_API UScriptStruct* StaticStruct<struct FCompletion>();

#define HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLogProbs_Statics; \
	OPENAIAPI_API static class UScriptStruct* StaticStruct();


template<> OPENAIAPI_API UScriptStruct* StaticStruct<struct FLogProbs>();

#define HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompletionInfo_Statics; \
	OPENAIAPI_API static class UScriptStruct* StaticStruct();


template<> OPENAIAPI_API UScriptStruct* StaticStruct<struct FCompletionInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h


#define FOREACH_ENUM_EOAENGINETYPE(op) \
	op(EOAEngineType::DAVINCI) \
	op(EOAEngineType::CURIE) \
	op(EOAEngineType::BABBAGE) \
	op(EOAEngineType::ADA) \
	op(EOAEngineType::DAVINCI_INSTRUCT_BETA) \
	op(EOAEngineType::CURIE_INSTRUCT_BETA) 

enum class EOAEngineType : uint8;
template<> OPENAIAPI_API UEnum* StaticEnum<EOAEngineType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
