// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevMatchMakingProfileListEntry.h"
#include "DevAllMatchMakingProfileListEntriesResponse.generated.h"

/** @defgroup RHAPI_DevAllMatchMakingProfileListEntriesResponse RallyHere API Model DevAllMatchMakingProfileListEntriesResponse
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevAllMatchMakingProfileListEntriesResponse : public FRHAPI_DevModel
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

    /** @brief List of MatchMakingProfileListEntries */
    TArray<FRHAPI_DevMatchMakingProfileListEntry> Entries_Optional{  };
    /** @brief true if Entries_Optional has been set to a value */
    bool Entries_IsSet{ false };
    /** @brief Gets the value of Entries_Optional, regardless of it having been set */
    TArray<FRHAPI_DevMatchMakingProfileListEntry>& GetEntries() { return Entries_Optional; }
    /** @brief Gets the value of Entries_Optional, regardless of it having been set */
    const TArray<FRHAPI_DevMatchMakingProfileListEntry>& GetEntries() const { return Entries_Optional; }
    /** @brief Gets the value of Entries_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_DevMatchMakingProfileListEntry>& GetEntries(const TArray<FRHAPI_DevMatchMakingProfileListEntry>& DefaultValue) const { if (Entries_IsSet) return Entries_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Entries_Optional and returns true if it has been set, otherwise returns false */
    bool GetEntries(TArray<FRHAPI_DevMatchMakingProfileListEntry>& OutValue) const { if (Entries_IsSet) OutValue = Entries_Optional; return Entries_IsSet; }
    /** @brief Returns a pointer to Entries_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_DevMatchMakingProfileListEntry>* GetEntriesOrNull() { if (Entries_IsSet) return &Entries_Optional; return nullptr; }
    /** @brief Returns a pointer to Entries_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_DevMatchMakingProfileListEntry>* GetEntriesOrNull() const { if (Entries_IsSet) return &Entries_Optional; return nullptr; }
    /** @brief Sets the value of Entries_Optional and also sets Entries_IsSet to true */
    void SetEntries(TArray<FRHAPI_DevMatchMakingProfileListEntry> NewValue) { Entries_Optional = NewValue; Entries_IsSet = true; }
     /** @brief Clears the value of Entries_Optional and sets Entries_IsSet to false */
    void ClearEntries() { Entries_IsSet = false; }
};

/** @} */