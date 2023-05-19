// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "SettingData.generated.h"

/**
 * @brief Setting version/value data from a specific setting type/key for a player
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_SettingData : public FRHAPI_Model
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

    /** @brief Setting Version */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 V{ 0 };
    /** @brief Gets the value of V */
    int32& GetV() { return V; }
    /** @brief Gets the value of V */
    const int32& GetV() const { return V; }
    /** @brief Sets the value of V */
    void SetV(int32 NewValue) { V = NewValue;  }
    /** @brief Returns true if V matches the default value */
    bool IsVDefaultValue() const { return V == 0; }
    /** @brief Sets the value of V to its default  */
    void SetVToDefault() { V = 0;  }

    /** @brief Setting Value document */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_JsonValue Value_Optional{  };
    /** @brief true if Value_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Value_IsSet{ false };
    /** @brief Gets the value of Value_Optional, regardless of it having been set */
    FRHAPI_JsonValue& GetValue() { return Value_Optional; }
    /** @brief Gets the value of Value_Optional, regardless of it having been set */
    const FRHAPI_JsonValue& GetValue() const { return Value_Optional; }
    /** @brief Gets the value of Value_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_JsonValue& GetValue(const FRHAPI_JsonValue& DefaultValue) const { if (Value_IsSet) return Value_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Value_Optional and returns true if it has been set, otherwise returns false */
    bool GetValue(FRHAPI_JsonValue& OutValue) const { if (Value_IsSet) OutValue = Value_Optional; return Value_IsSet; }
    /** @brief Returns a pointer to Value_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_JsonValue* GetValueOrNull() { if (Value_IsSet) return &Value_Optional; return nullptr; }
    /** @brief Returns a pointer to Value_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_JsonValue* GetValueOrNull() const { if (Value_IsSet) return &Value_Optional; return nullptr; }
    /** @brief Sets the value of Value_Optional and also sets Value_IsSet to true */
    void SetValue(FRHAPI_JsonValue NewValue) { Value_Optional = NewValue; Value_IsSet = true; }
     /** @brief Clears the value of Value_Optional and sets Value_IsSet to false */
    void ClearValue() { Value_IsSet = false; }
};
