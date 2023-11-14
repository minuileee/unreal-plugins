// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "NotificationCreateResult.generated.h"

/** @defgroup RHAPI_NotificationCreateResult RallyHere API Model NotificationCreateResult
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_NotificationCreateResult : public FRHAPI_Model
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

    /** @brief Unique Identifier for the last notification created.  You cannot depend on the format of this string, and it must be considered opaque */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString NotificationId{  };
    /** @brief Gets the value of NotificationId */
    FString& GetNotificationId() { return NotificationId; }
    /** @brief Gets the value of NotificationId */
    const FString& GetNotificationId() const { return NotificationId; }
    /** @brief Sets the value of NotificationId */
    void SetNotificationId(FString NewValue) { NotificationId = NewValue;  }
};

/** @} */
