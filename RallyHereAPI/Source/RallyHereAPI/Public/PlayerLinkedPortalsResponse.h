// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PlayerPersonResponse.h"
#include "PortalUserResponse.h"
#include "PlayerLinkedPortalsResponse.generated.h"

/** @defgroup RHAPI_PlayerLinkedPortalsResponse RallyHere API Model PlayerLinkedPortalsResponse
 *  @{
 */

/**
 * @brief Response for getting a player&#39;s linked portals
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlayerLinkedPortalsResponse : public FRHAPI_Model
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

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_PlayerPersonResponse Player{  };
    /** @brief Gets the value of Player */
    FRHAPI_PlayerPersonResponse& GetPlayer() { return Player; }
    /** @brief Gets the value of Player */
    const FRHAPI_PlayerPersonResponse& GetPlayer() const { return Player; }
    /** @brief Sets the value of Player */
    void SetPlayer(FRHAPI_PlayerPersonResponse NewValue) { Player = NewValue;  }

    /** @brief List of linked portals */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FRHAPI_PortalUserResponse> LinkedPortals{  };
    /** @brief Gets the value of LinkedPortals */
    TArray<FRHAPI_PortalUserResponse>& GetLinkedPortals() { return LinkedPortals; }
    /** @brief Gets the value of LinkedPortals */
    const TArray<FRHAPI_PortalUserResponse>& GetLinkedPortals() const { return LinkedPortals; }
    /** @brief Sets the value of LinkedPortals */
    void SetLinkedPortals(TArray<FRHAPI_PortalUserResponse> NewValue) { LinkedPortals = NewValue;  }
};

/** @} */