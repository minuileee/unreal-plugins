// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "AcknowledgeBackfillRequest.generated.h"

/** @defgroup RHAPI_AcknowledgeBackfillRequest RallyHere API Model AcknowledgeBackfillRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_AcknowledgeBackfillRequest : public FRHAPI_Model
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

    /** @brief Additional extensions to add to the Assignment for the backfill resource associated with the session */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TMap<FString, FString> Extensions_Optional{  };
    /** @brief true if Extensions_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Extensions_IsSet{ false };
    /** @brief Gets the value of Extensions_Optional, regardless of it having been set */
    TMap<FString, FString>& GetExtensions() { return Extensions_Optional; }
    /** @brief Gets the value of Extensions_Optional, regardless of it having been set */
    const TMap<FString, FString>& GetExtensions() const { return Extensions_Optional; }
    /** @brief Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue */
    const TMap<FString, FString>& GetExtensions(const TMap<FString, FString>& DefaultValue) const { if (Extensions_IsSet) return Extensions_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false */
    bool GetExtensions(TMap<FString, FString>& OutValue) const { if (Extensions_IsSet) OutValue = Extensions_Optional; return Extensions_IsSet; }
    /** @brief Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr */
    TMap<FString, FString>* GetExtensionsOrNull() { if (Extensions_IsSet) return &Extensions_Optional; return nullptr; }
    /** @brief Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr */
    const TMap<FString, FString>* GetExtensionsOrNull() const { if (Extensions_IsSet) return &Extensions_Optional; return nullptr; }
    /** @brief Sets the value of Extensions_Optional and also sets Extensions_IsSet to true */
    void SetExtensions(TMap<FString, FString> NewValue) { Extensions_Optional = NewValue; Extensions_IsSet = true; }
     /** @brief Clears the value of Extensions_Optional and sets Extensions_IsSet to false */
    void ClearExtensions() { Extensions_IsSet = false; }

    /** @brief The instance ID for the instance acknowledging backfill. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString InstanceId{  };
    /** @brief Gets the value of InstanceId */
    FString& GetInstanceId() { return InstanceId; }
    /** @brief Gets the value of InstanceId */
    const FString& GetInstanceId() const { return InstanceId; }
    /** @brief Sets the value of InstanceId */
    void SetInstanceId(FString NewValue) { InstanceId = NewValue;  }
};

/** @} */
