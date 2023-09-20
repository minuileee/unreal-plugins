// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevMatchMakingTemplate.h"
#include "DevAllMatchMakingTemplatesResponse.generated.h"

/** @defgroup RHAPI_DevAllMatchMakingTemplatesResponse RallyHere API Model DevAllMatchMakingTemplatesResponse
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevAllMatchMakingTemplatesResponse : public FRHAPI_DevModel
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

    /** @brief List of MatchMakingTemplates */
    TArray<FRHAPI_DevMatchMakingTemplate> MatchMakingTemplates_Optional{  };
    /** @brief true if MatchMakingTemplates_Optional has been set to a value */
    bool MatchMakingTemplates_IsSet{ false };
    /** @brief Gets the value of MatchMakingTemplates_Optional, regardless of it having been set */
    TArray<FRHAPI_DevMatchMakingTemplate>& GetMatchMakingTemplates() { return MatchMakingTemplates_Optional; }
    /** @brief Gets the value of MatchMakingTemplates_Optional, regardless of it having been set */
    const TArray<FRHAPI_DevMatchMakingTemplate>& GetMatchMakingTemplates() const { return MatchMakingTemplates_Optional; }
    /** @brief Gets the value of MatchMakingTemplates_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_DevMatchMakingTemplate>& GetMatchMakingTemplates(const TArray<FRHAPI_DevMatchMakingTemplate>& DefaultValue) const { if (MatchMakingTemplates_IsSet) return MatchMakingTemplates_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MatchMakingTemplates_Optional and returns true if it has been set, otherwise returns false */
    bool GetMatchMakingTemplates(TArray<FRHAPI_DevMatchMakingTemplate>& OutValue) const { if (MatchMakingTemplates_IsSet) OutValue = MatchMakingTemplates_Optional; return MatchMakingTemplates_IsSet; }
    /** @brief Returns a pointer to MatchMakingTemplates_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_DevMatchMakingTemplate>* GetMatchMakingTemplatesOrNull() { if (MatchMakingTemplates_IsSet) return &MatchMakingTemplates_Optional; return nullptr; }
    /** @brief Returns a pointer to MatchMakingTemplates_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_DevMatchMakingTemplate>* GetMatchMakingTemplatesOrNull() const { if (MatchMakingTemplates_IsSet) return &MatchMakingTemplates_Optional; return nullptr; }
    /** @brief Sets the value of MatchMakingTemplates_Optional and also sets MatchMakingTemplates_IsSet to true */
    void SetMatchMakingTemplates(TArray<FRHAPI_DevMatchMakingTemplate> NewValue) { MatchMakingTemplates_Optional = NewValue; MatchMakingTemplates_IsSet = true; }
     /** @brief Clears the value of MatchMakingTemplates_Optional and sets MatchMakingTemplates_IsSet to false */
    void ClearMatchMakingTemplates() { MatchMakingTemplates_IsSet = false; }
};

/** @} */
