// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "MatchCreateResponse.generated.h"

/** @defgroup RHAPI_MatchCreateResponse RallyHere API Model MatchCreateResponse
 *  @{
 */

/**
 * @brief The response to successfully creating a match on a session
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_MatchCreateResponse : public FRHAPI_Model
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

    /** @brief Unique ID */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString MatchId{  };
    /** @brief Gets the value of MatchId */
    FString& GetMatchId() { return MatchId; }
    /** @brief Gets the value of MatchId */
    const FString& GetMatchId() const { return MatchId; }
    /** @brief Sets the value of MatchId */
    void SetMatchId(FString NewValue) { MatchId = NewValue;  }
};

/** @} */
