// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "NotificationCreate.h"
#include "NotificationCreates.generated.h"

/** @defgroup RHAPI_NotificationCreates RallyHere API Model NotificationCreates
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_NotificationCreates : public FRHAPI_Model
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

    /** @brief List of notifications creation requests */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    TArray<FRHAPI_NotificationCreate> Notifications{  };
    /** @brief Gets the value of Notifications */
    TArray<FRHAPI_NotificationCreate>& GetNotifications() { return Notifications; }
    /** @brief Gets the value of Notifications */
    const TArray<FRHAPI_NotificationCreate>& GetNotifications() const { return Notifications; }
    /** @brief Sets the value of Notifications */
    void SetNotifications(TArray<FRHAPI_NotificationCreate> NewValue) { Notifications = NewValue;  }
};

/** @} */
