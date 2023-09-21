// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "OAuthGrantType.h"
#include "TokenRequest.generated.h"

/** @defgroup RHAPI_TokenRequest RallyHere API Model TokenRequest
 *  @{
 */

/**
 * @brief OAuth2 Token Request
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_TokenRequest : public FRHAPI_Model
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

    /** @brief OAuth2 grant type */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_OAuthGrantType GrantType{  };
    /** @brief Gets the value of GrantType */
    ERHAPI_OAuthGrantType& GetGrantType() { return GrantType; }
    /** @brief Gets the value of GrantType */
    const ERHAPI_OAuthGrantType& GetGrantType() const { return GrantType; }
    /** @brief Sets the value of GrantType */
    void SetGrantType(ERHAPI_OAuthGrantType NewValue) { GrantType = NewValue;  }
};

/** @} */