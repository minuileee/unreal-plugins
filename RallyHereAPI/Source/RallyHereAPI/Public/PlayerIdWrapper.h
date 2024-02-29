// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PlayerIdWrapper.generated.h"

/** @defgroup RHAPI_PlayerIdWrapper RallyHere API Model PlayerIdWrapper
 *  @{
 */

/**
 * @brief Model for getting a player ID from a player UUID
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlayerIdWrapper : public FRHAPI_Model
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

    /** @brief Player ID */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    int32 PlayerId{ 0 };
    /** @brief Gets the value of PlayerId */
    int32& GetPlayerId() { return PlayerId; }
    /** @brief Gets the value of PlayerId */
    const int32& GetPlayerId() const { return PlayerId; }
    /** @brief Sets the value of PlayerId */
    void SetPlayerId(int32 NewValue) { PlayerId = NewValue;  }
    /** @brief Returns true if PlayerId matches the default value */
    bool IsPlayerIdDefaultValue() const { return PlayerId == 0; }
    /** @brief Sets the value of PlayerId to its default  */
    void SetPlayerIdToDefault() { PlayerId = 0;  }
};

/** @} */
