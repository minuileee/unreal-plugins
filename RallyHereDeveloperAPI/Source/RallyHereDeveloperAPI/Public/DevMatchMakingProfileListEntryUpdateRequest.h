// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevMatchMakingProfileListEntryUpdateRequest.generated.h"

/** @defgroup RHAPI_DevMatchMakingProfileListEntryUpdateRequest RallyHere API Model DevMatchMakingProfileListEntryUpdateRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevMatchMakingProfileListEntryUpdateRequest : public FRHAPI_DevModel
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

    /** @brief Which MatchMakingProfile this entry refers to */
    FGuid MatchMakingProfileId_Optional{  };
    /** @brief true if MatchMakingProfileId_Optional has been set to a value */
    bool MatchMakingProfileId_IsSet{ false };
    /** @brief Gets the value of MatchMakingProfileId_Optional, regardless of it having been set */
    FGuid& GetMatchMakingProfileId() { return MatchMakingProfileId_Optional; }
    /** @brief Gets the value of MatchMakingProfileId_Optional, regardless of it having been set */
    const FGuid& GetMatchMakingProfileId() const { return MatchMakingProfileId_Optional; }
    /** @brief Gets the value of MatchMakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetMatchMakingProfileId(const FGuid& DefaultValue) const { if (MatchMakingProfileId_IsSet) return MatchMakingProfileId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MatchMakingProfileId_Optional and returns true if it has been set, otherwise returns false */
    bool GetMatchMakingProfileId(FGuid& OutValue) const { if (MatchMakingProfileId_IsSet) OutValue = MatchMakingProfileId_Optional; return MatchMakingProfileId_IsSet; }
    /** @brief Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetMatchMakingProfileIdOrNull() { if (MatchMakingProfileId_IsSet) return &MatchMakingProfileId_Optional; return nullptr; }
    /** @brief Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetMatchMakingProfileIdOrNull() const { if (MatchMakingProfileId_IsSet) return &MatchMakingProfileId_Optional; return nullptr; }
    /** @brief Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true */
    void SetMatchMakingProfileId(FGuid NewValue) { MatchMakingProfileId_Optional = NewValue; MatchMakingProfileId_IsSet = true; }
     /** @brief Clears the value of MatchMakingProfileId_Optional and sets MatchMakingProfileId_IsSet to false */
    void ClearMatchMakingProfileId() { MatchMakingProfileId_IsSet = false; }
};

/** @} */
