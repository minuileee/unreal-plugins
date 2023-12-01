// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevRHEventSchema.h"
#include "DevAllRHEventSchemas.generated.h"

/** @defgroup RHAPI_DevAllRHEventSchemas RallyHere API Model DevAllRHEventSchemas
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevAllRHEventSchemas : public FRHAPI_DevModel
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

    /** @brief A list of standard event schemas */
    TArray<FRHAPI_DevRHEventSchema> RhEventSchemas{  };
    /** @brief Gets the value of RhEventSchemas */
    TArray<FRHAPI_DevRHEventSchema>& GetRhEventSchemas() { return RhEventSchemas; }
    /** @brief Gets the value of RhEventSchemas */
    const TArray<FRHAPI_DevRHEventSchema>& GetRhEventSchemas() const { return RhEventSchemas; }
    /** @brief Sets the value of RhEventSchemas */
    void SetRhEventSchemas(TArray<FRHAPI_DevRHEventSchema> NewValue) { RhEventSchemas = NewValue;  }

    /** @brief Cursor to designate where you are in iterating through values. Start with '0', and pass this on subsequent calls to continue iteration */
    FString Cursor{  };
    /** @brief Gets the value of Cursor */
    FString& GetCursor() { return Cursor; }
    /** @brief Gets the value of Cursor */
    const FString& GetCursor() const { return Cursor; }
    /** @brief Sets the value of Cursor */
    void SetCursor(FString NewValue) { Cursor = NewValue;  }
};

/** @} */
