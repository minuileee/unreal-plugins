// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "AppSetting.generated.h"

/** @defgroup RHAPI_AppSetting RallyHere API Model AppSetting
 *  @{
 */

/**
 * @brief A key/value pair that represents a setting to be used by the client.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_AppSetting : public FRHAPI_Model
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

    /** @brief The key for the setting */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Key{  };
    /** @brief Gets the value of Key */
    FString& GetKey() { return Key; }
    /** @brief Gets the value of Key */
    const FString& GetKey() const { return Key; }
    /** @brief Sets the value of Key */
    void SetKey(FString NewValue) { Key = NewValue;  }

    /** @brief The value for the setting */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Value{  };
    /** @brief Gets the value of Value */
    FString& GetValue() { return Value; }
    /** @brief Gets the value of Value */
    const FString& GetValue() const { return Value; }
    /** @brief Sets the value of Value */
    void SetValue(FString NewValue) { Value = NewValue;  }

    /** @brief Notes to describe the key value pair */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Notes_Optional{  };
    /** @brief true if Notes_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Notes_IsSet{ false };
    /** @brief Gets the value of Notes_Optional, regardless of it having been set */
    FString& GetNotes() { return Notes_Optional; }
    /** @brief Gets the value of Notes_Optional, regardless of it having been set */
    const FString& GetNotes() const { return Notes_Optional; }
    /** @brief Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetNotes(const FString& DefaultValue) const { if (Notes_IsSet) return Notes_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false */
    bool GetNotes(FString& OutValue) const { if (Notes_IsSet) OutValue = Notes_Optional; return Notes_IsSet; }
    /** @brief Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr */
    FString* GetNotesOrNull() { if (Notes_IsSet) return &Notes_Optional; return nullptr; }
    /** @brief Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetNotesOrNull() const { if (Notes_IsSet) return &Notes_Optional; return nullptr; }
    /** @brief Sets the value of Notes_Optional and also sets Notes_IsSet to true */
    void SetNotes(FString NewValue) { Notes_Optional = NewValue; Notes_IsSet = true; }
     /** @brief Clears the value of Notes_Optional and sets Notes_IsSet to false */
    void ClearNotes() { Notes_IsSet = false; }
};

/** @} */
