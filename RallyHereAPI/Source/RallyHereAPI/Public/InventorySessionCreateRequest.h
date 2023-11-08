// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "Platform.h"
#include "InventorySessionCreateRequest.generated.h"

/** @defgroup RHAPI_InventorySessionCreateRequest RallyHere API Model InventorySessionCreateRequest
 *  @{
 */

/**
 * @brief Request body for creating a new Inventory Session.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_InventorySessionCreateRequest : public FRHAPI_Model
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

    /** @brief The platform for the session. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_Platform SessionPlatform_Optional{  };
    /** @brief true if SessionPlatform_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool SessionPlatform_IsSet{ false };
    /** @brief Gets the value of SessionPlatform_Optional, regardless of it having been set */
    ERHAPI_Platform& GetSessionPlatform() { return SessionPlatform_Optional; }
    /** @brief Gets the value of SessionPlatform_Optional, regardless of it having been set */
    const ERHAPI_Platform& GetSessionPlatform() const { return SessionPlatform_Optional; }
    /** @brief Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_Platform& GetSessionPlatform(const ERHAPI_Platform& DefaultValue) const { if (SessionPlatform_IsSet) return SessionPlatform_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false */
    bool GetSessionPlatform(ERHAPI_Platform& OutValue) const { if (SessionPlatform_IsSet) OutValue = SessionPlatform_Optional; return SessionPlatform_IsSet; }
    /** @brief Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_Platform* GetSessionPlatformOrNull() { if (SessionPlatform_IsSet) return &SessionPlatform_Optional; return nullptr; }
    /** @brief Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_Platform* GetSessionPlatformOrNull() const { if (SessionPlatform_IsSet) return &SessionPlatform_Optional; return nullptr; }
    /** @brief Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true */
    void SetSessionPlatform(ERHAPI_Platform NewValue) { SessionPlatform_Optional = NewValue; SessionPlatform_IsSet = true; }
     /** @brief Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false */
    void ClearSessionPlatform() { SessionPlatform_IsSet = false; }
};

/** @} */
