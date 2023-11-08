// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevRank.h"
#include "DevAllRanksResponse.generated.h"

/** @defgroup RHAPI_DevAllRanksResponse RallyHere API Model DevAllRanksResponse
 *  @{
 */

/**
 * @brief
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevAllRanksResponse : public FRHAPI_DevModel
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

    /** @brief A list of Ranks */
    TArray<FRHAPI_DevRank> Ranks_Optional{  };
    /** @brief true if Ranks_Optional has been set to a value */
    bool Ranks_IsSet{ false };
    /** @brief Gets the value of Ranks_Optional, regardless of it having been set */
    TArray<FRHAPI_DevRank>& GetRanks() { return Ranks_Optional; }
    /** @brief Gets the value of Ranks_Optional, regardless of it having been set */
    const TArray<FRHAPI_DevRank>& GetRanks() const { return Ranks_Optional; }
    /** @brief Gets the value of Ranks_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_DevRank>& GetRanks(const TArray<FRHAPI_DevRank>& DefaultValue) const { if (Ranks_IsSet) return Ranks_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Ranks_Optional and returns true if it has been set, otherwise returns false */
    bool GetRanks(TArray<FRHAPI_DevRank>& OutValue) const { if (Ranks_IsSet) OutValue = Ranks_Optional; return Ranks_IsSet; }
    /** @brief Returns a pointer to Ranks_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_DevRank>* GetRanksOrNull() { if (Ranks_IsSet) return &Ranks_Optional; return nullptr; }
    /** @brief Returns a pointer to Ranks_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_DevRank>* GetRanksOrNull() const { if (Ranks_IsSet) return &Ranks_Optional; return nullptr; }
    /** @brief Sets the value of Ranks_Optional and also sets Ranks_IsSet to true */
    void SetRanks(TArray<FRHAPI_DevRank> NewValue) { Ranks_Optional = NewValue; Ranks_IsSet = true; }
     /** @brief Clears the value of Ranks_Optional and sets Ranks_IsSet to false */
    void ClearRanks() { Ranks_IsSet = false; }
};

/** @} */
