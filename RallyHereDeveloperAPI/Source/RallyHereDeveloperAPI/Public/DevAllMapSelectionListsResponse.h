// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevMapSelectionListFlattened.h"
#include "DevAllMapSelectionListsResponse.generated.h"

/** @defgroup RHAPI_DevAllMapSelectionListsResponse RallyHere API Model DevAllMapSelectionListsResponse
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevAllMapSelectionListsResponse : public FRHAPI_DevModel
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

    /** @brief List of MapSelectionLists */
    TArray<FRHAPI_DevMapSelectionListFlattened> MapSelectionLists{  };
    /** @brief Gets the value of MapSelectionLists */
    TArray<FRHAPI_DevMapSelectionListFlattened>& GetMapSelectionLists() { return MapSelectionLists; }
    /** @brief Gets the value of MapSelectionLists */
    const TArray<FRHAPI_DevMapSelectionListFlattened>& GetMapSelectionLists() const { return MapSelectionLists; }
    /** @brief Sets the value of MapSelectionLists */
    void SetMapSelectionLists(TArray<FRHAPI_DevMapSelectionListFlattened> NewValue) { MapSelectionLists = NewValue;  }
};

/** @} */
