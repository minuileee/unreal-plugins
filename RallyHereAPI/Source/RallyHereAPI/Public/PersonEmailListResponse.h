// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PersonEmailListResponse.generated.h"

/** @defgroup RHAPI_PersonEmailListResponse RallyHere API Model PersonEmailListResponse
 *  @{
 */

/**
 * @brief Response for updating a person&#39;s email list subscriptions
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PersonEmailListResponse : public FRHAPI_Model
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

    /** @brief List of all email list ids the user is subscribed to */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<int32> EmailListIds{  };
    /** @brief Gets the value of EmailListIds */
    TArray<int32>& GetEmailListIds() { return EmailListIds; }
    /** @brief Gets the value of EmailListIds */
    const TArray<int32>& GetEmailListIds() const { return EmailListIds; }
    /** @brief Sets the value of EmailListIds */
    void SetEmailListIds(TArray<int32> NewValue) { EmailListIds = NewValue;  }
};

/** @} */