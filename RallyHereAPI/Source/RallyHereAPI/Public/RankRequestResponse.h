// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PlayerData.h"
#include "RankRequestResponse.generated.h"

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_RankRequestResponse : public FRHAPI_Model
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

    /** @brief List of player ranks */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FRHAPI_PlayerData> PlayerRanks{  };
    /** @brief Gets the value of PlayerRanks */
    TArray<FRHAPI_PlayerData>& GetPlayerRanks() { return PlayerRanks; }
    /** @brief Gets the value of PlayerRanks */
    const TArray<FRHAPI_PlayerData>& GetPlayerRanks() const { return PlayerRanks; }
    /** @brief Sets the value of PlayerRanks */
    void SetPlayerRanks(TArray<FRHAPI_PlayerData> NewValue) { PlayerRanks = NewValue;  }
};
