// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "RankData.h"
#include "PlayerRankUpdateRequest.generated.h"

/** @defgroup RHAPI_PlayerRankUpdateRequest RallyHere API Model PlayerRankUpdateRequest
 *  @{
 */

/**
 * @brief Request body to update generic rank data
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlayerRankUpdateRequest : public FRHAPI_Model
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

    /** @brief ID for the instance the match took place on */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString InstanceId_Optional{  };
    /** @brief true if InstanceId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool InstanceId_IsSet{ false };
    /** @brief Gets the value of InstanceId_Optional, regardless of it having been set */
    FString& GetInstanceId() { return InstanceId_Optional; }
    /** @brief Gets the value of InstanceId_Optional, regardless of it having been set */
    const FString& GetInstanceId() const { return InstanceId_Optional; }
    /** @brief Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetInstanceId(const FString& DefaultValue) const { if (InstanceId_IsSet) return InstanceId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false */
    bool GetInstanceId(FString& OutValue) const { if (InstanceId_IsSet) OutValue = InstanceId_Optional; return InstanceId_IsSet; }
    /** @brief Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr */
    FString* GetInstanceIdOrNull() { if (InstanceId_IsSet) return &InstanceId_Optional; return nullptr; }
    /** @brief Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetInstanceIdOrNull() const { if (InstanceId_IsSet) return &InstanceId_Optional; return nullptr; }
    /** @brief Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true */
    void SetInstanceId(FString NewValue) { InstanceId_Optional = NewValue; InstanceId_IsSet = true; }
     /** @brief Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false */
    void ClearInstanceId() { InstanceId_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_RankData Rank{  };
    /** @brief Gets the value of Rank */
    FRHAPI_RankData& GetRank() { return Rank; }
    /** @brief Gets the value of Rank */
    const FRHAPI_RankData& GetRank() const { return Rank; }
    /** @brief Sets the value of Rank */
    void SetRank(FRHAPI_RankData NewValue) { Rank = NewValue;  }
};

/** @} */
