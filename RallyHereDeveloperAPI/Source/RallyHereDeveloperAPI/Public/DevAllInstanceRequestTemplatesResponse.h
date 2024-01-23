// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevInstanceRequestTemplate.h"
#include "DevAllInstanceRequestTemplatesResponse.generated.h"

/** @defgroup RHAPI_DevAllInstanceRequestTemplatesResponse RallyHere API Model DevAllInstanceRequestTemplatesResponse
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevAllInstanceRequestTemplatesResponse : public FRHAPI_DevModel
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

    /** @brief Cursor to designate where you are in iterating through values. Start with '0', and pass this on subsequent calls to continue iteration */
    FString Cursor{  };
    /** @brief Gets the value of Cursor */
    FString& GetCursor() { return Cursor; }
    /** @brief Gets the value of Cursor */
    const FString& GetCursor() const { return Cursor; }
    /** @brief Sets the value of Cursor */
    void SetCursor(FString NewValue) { Cursor = NewValue;  }

    /** @brief List of InstanceRequestTemplates */
    TArray<FRHAPI_DevInstanceRequestTemplate> InstanceRequestTemplates_Optional{  };
    /** @brief true if InstanceRequestTemplates_Optional has been set to a value */
    bool InstanceRequestTemplates_IsSet{ false };
    /** @brief Gets the value of InstanceRequestTemplates_Optional, regardless of it having been set */
    TArray<FRHAPI_DevInstanceRequestTemplate>& GetInstanceRequestTemplates() { return InstanceRequestTemplates_Optional; }
    /** @brief Gets the value of InstanceRequestTemplates_Optional, regardless of it having been set */
    const TArray<FRHAPI_DevInstanceRequestTemplate>& GetInstanceRequestTemplates() const { return InstanceRequestTemplates_Optional; }
    /** @brief Gets the value of InstanceRequestTemplates_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_DevInstanceRequestTemplate>& GetInstanceRequestTemplates(const TArray<FRHAPI_DevInstanceRequestTemplate>& DefaultValue) const { if (InstanceRequestTemplates_IsSet) return InstanceRequestTemplates_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of InstanceRequestTemplates_Optional and returns true if it has been set, otherwise returns false */
    bool GetInstanceRequestTemplates(TArray<FRHAPI_DevInstanceRequestTemplate>& OutValue) const { if (InstanceRequestTemplates_IsSet) OutValue = InstanceRequestTemplates_Optional; return InstanceRequestTemplates_IsSet; }
    /** @brief Returns a pointer to InstanceRequestTemplates_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_DevInstanceRequestTemplate>* GetInstanceRequestTemplatesOrNull() { if (InstanceRequestTemplates_IsSet) return &InstanceRequestTemplates_Optional; return nullptr; }
    /** @brief Returns a pointer to InstanceRequestTemplates_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_DevInstanceRequestTemplate>* GetInstanceRequestTemplatesOrNull() const { if (InstanceRequestTemplates_IsSet) return &InstanceRequestTemplates_Optional; return nullptr; }
    /** @brief Sets the value of InstanceRequestTemplates_Optional and also sets InstanceRequestTemplates_IsSet to true */
    void SetInstanceRequestTemplates(TArray<FRHAPI_DevInstanceRequestTemplate> NewValue) { InstanceRequestTemplates_Optional = NewValue; InstanceRequestTemplates_IsSet = true; }
     /** @brief Clears the value of InstanceRequestTemplates_Optional and sets InstanceRequestTemplates_IsSet to false */
    void ClearInstanceRequestTemplates() { InstanceRequestTemplates_IsSet = false; }
};

/** @} */
