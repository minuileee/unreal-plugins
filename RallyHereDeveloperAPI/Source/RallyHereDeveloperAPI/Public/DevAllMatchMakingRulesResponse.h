// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevMatchMakingRule.h"
#include "DevAllMatchMakingRulesResponse.generated.h"

/** @defgroup RHAPI_DevAllMatchMakingRulesResponse RallyHere API Model DevAllMatchMakingRulesResponse
 *  @{
 */

/**
 * @brief
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevAllMatchMakingRulesResponse : public FRHAPI_DevModel
{
    GENERATED_BODY()

    /**
    * @brief Fills this object with data from the passed in JSON
    *
    * @param [in] JsonValue Data from the API call.
    *
    * @return true if parsing of the JSON data was successful.
    */
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;

    /**
    * @brief Writes the data from this object into the specified JSON Writer stream
    *
    * @param [in] Writer JSON Writer stream to push .
    */
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    /** @brief Cursor to designate where you are in iterating through values. Start with '0', and pass this on subsequent calls to continue iteration */
    FString Cursor{  };
    /** @brief Gets the value of Cursor */
    FString& GetCursor() { return Cursor; }
    /** @brief Gets the value of Cursor */
    const FString& GetCursor() const { return Cursor; }
    /** @brief Sets the value of Cursor */
    void SetCursor(FString NewValue) { Cursor = NewValue;  }

    /** @brief List of MatchMakingRules */
    TArray<FRHAPI_DevMatchMakingRule> Rules_Optional{  };
    /** @brief true if Rules_Optional has been set to a value */
    bool Rules_IsSet{ false };
    /** @brief Gets the value of Rules_Optional, regardless of it having been set */
    TArray<FRHAPI_DevMatchMakingRule>& GetRules() { return Rules_Optional; }
    /** @brief Gets the value of Rules_Optional, regardless of it having been set */
    const TArray<FRHAPI_DevMatchMakingRule>& GetRules() const { return Rules_Optional; }
    /** @brief Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_DevMatchMakingRule>& GetRules(const TArray<FRHAPI_DevMatchMakingRule>& DefaultValue) const { if (Rules_IsSet) return Rules_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false */
    bool GetRules(TArray<FRHAPI_DevMatchMakingRule>& OutValue) const { if (Rules_IsSet) OutValue = Rules_Optional; return Rules_IsSet; }
    /** @brief Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_DevMatchMakingRule>* GetRulesOrNull() { if (Rules_IsSet) return &Rules_Optional; return nullptr; }
    /** @brief Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_DevMatchMakingRule>* GetRulesOrNull() const { if (Rules_IsSet) return &Rules_Optional; return nullptr; }
    /** @brief Sets the value of Rules_Optional and also sets Rules_IsSet to true */
    void SetRules(TArray<FRHAPI_DevMatchMakingRule> NewValue) { Rules_Optional = NewValue; Rules_IsSet = true; }
     /** @brief Clears the value of Rules_Optional and sets Rules_IsSet to false */
    void ClearRules() { Rules_IsSet = false; }
};

/** @} */
