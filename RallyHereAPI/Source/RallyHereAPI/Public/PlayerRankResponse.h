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
#include "PlayerRankResponse.generated.h"

/** @defgroup RHAPI_PlayerRankResponse RallyHere API Model PlayerRankResponse
 *  @{
 */

/**
 * @brief DEPRECATED Response to successfully requesting a player&#39;s rank
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlayerRankResponse : public FRHAPI_Model
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

    /** @brief UUID for this specific player */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FGuid PlayerUuid{  };
    /** @brief Gets the value of PlayerUuid */
    FGuid& GetPlayerUuid() { return PlayerUuid; }
    /** @brief Gets the value of PlayerUuid */
    const FGuid& GetPlayerUuid() const { return PlayerUuid; }
    /** @brief Sets the value of PlayerUuid */
    void SetPlayerUuid(FGuid NewValue) { PlayerUuid = NewValue;  }

    /** @brief Current rank info about player */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FRHAPI_RankData Rank{  };
    /** @brief Gets the value of Rank */
    FRHAPI_RankData& GetRank() { return Rank; }
    /** @brief Gets the value of Rank */
    const FRHAPI_RankData& GetRank() const { return Rank; }
    /** @brief Sets the value of Rank */
    void SetRank(FRHAPI_RankData NewValue) { Rank = NewValue;  }

    /** @brief ID for this rank */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    int32 RankId{ 0 };
    /** @brief Gets the value of RankId */
    int32& GetRankId() { return RankId; }
    /** @brief Gets the value of RankId */
    const int32& GetRankId() const { return RankId; }
    /** @brief Sets the value of RankId */
    void SetRankId(int32 NewValue) { RankId = NewValue;  }
    /** @brief Returns true if RankId matches the default value */
    bool IsRankIdDefaultValue() const { return RankId == 0; }
    /** @brief Sets the value of RankId to its default  */
    void SetRankIdToDefault() { RankId = 0;  }
};

/** @} */
