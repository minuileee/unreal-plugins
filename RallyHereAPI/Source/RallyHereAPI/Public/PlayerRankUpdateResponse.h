// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PlayerRankResponse.h"
#include "PlayerRankUpdateResponse.generated.h"

/** @defgroup RHAPI_PlayerRankUpdateResponse RallyHere API Model PlayerRankUpdateResponse
 *  @{
 */

/**
 * @brief DEPRECATED Response to successfully updating players&#39; ranks
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlayerRankUpdateResponse : public FRHAPI_Model
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

    /** @brief List of players and their updated ranks */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    TArray<FRHAPI_PlayerRankResponse> UpdatedPlayers{  };
    /** @brief Gets the value of UpdatedPlayers */
    TArray<FRHAPI_PlayerRankResponse>& GetUpdatedPlayers() { return UpdatedPlayers; }
    /** @brief Gets the value of UpdatedPlayers */
    const TArray<FRHAPI_PlayerRankResponse>& GetUpdatedPlayers() const { return UpdatedPlayers; }
    /** @brief Sets the value of UpdatedPlayers */
    void SetUpdatedPlayers(TArray<FRHAPI_PlayerRankResponse> NewValue) { UpdatedPlayers = NewValue;  }
};

/** @} */
