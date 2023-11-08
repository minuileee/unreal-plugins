// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "AdditionalJoinParams.generated.h"

/** @defgroup RHAPI_AdditionalJoinParams RallyHere API Model AdditionalJoinParams
 *  @{
 */

/**
 * @brief Additional parameters to apply to a matchmaking ticket
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_AdditionalJoinParams : public FRHAPI_Model
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

    /** @brief Additional double arguments to add to the matchmaking ticket */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TMap<FString, float> DoubleArgs_Optional{  };
    /** @brief true if DoubleArgs_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool DoubleArgs_IsSet{ false };
    /** @brief Gets the value of DoubleArgs_Optional, regardless of it having been set */
    TMap<FString, float>& GetDoubleArgs() { return DoubleArgs_Optional; }
    /** @brief Gets the value of DoubleArgs_Optional, regardless of it having been set */
    const TMap<FString, float>& GetDoubleArgs() const { return DoubleArgs_Optional; }
    /** @brief Gets the value of DoubleArgs_Optional, if it has been set, otherwise it returns DefaultValue */
    const TMap<FString, float>& GetDoubleArgs(const TMap<FString, float>& DefaultValue) const { if (DoubleArgs_IsSet) return DoubleArgs_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of DoubleArgs_Optional and returns true if it has been set, otherwise returns false */
    bool GetDoubleArgs(TMap<FString, float>& OutValue) const { if (DoubleArgs_IsSet) OutValue = DoubleArgs_Optional; return DoubleArgs_IsSet; }
    /** @brief Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr */
    TMap<FString, float>* GetDoubleArgsOrNull() { if (DoubleArgs_IsSet) return &DoubleArgs_Optional; return nullptr; }
    /** @brief Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr */
    const TMap<FString, float>* GetDoubleArgsOrNull() const { if (DoubleArgs_IsSet) return &DoubleArgs_Optional; return nullptr; }
    /** @brief Sets the value of DoubleArgs_Optional and also sets DoubleArgs_IsSet to true */
    void SetDoubleArgs(TMap<FString, float> NewValue) { DoubleArgs_Optional = NewValue; DoubleArgs_IsSet = true; }
     /** @brief Clears the value of DoubleArgs_Optional and sets DoubleArgs_IsSet to false */
    void ClearDoubleArgs() { DoubleArgs_IsSet = false; }

    /** @brief Additional string arguments to add to the matchmaking ticket */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TMap<FString, FString> StringArgs_Optional{  };
    /** @brief true if StringArgs_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool StringArgs_IsSet{ false };
    /** @brief Gets the value of StringArgs_Optional, regardless of it having been set */
    TMap<FString, FString>& GetStringArgs() { return StringArgs_Optional; }
    /** @brief Gets the value of StringArgs_Optional, regardless of it having been set */
    const TMap<FString, FString>& GetStringArgs() const { return StringArgs_Optional; }
    /** @brief Gets the value of StringArgs_Optional, if it has been set, otherwise it returns DefaultValue */
    const TMap<FString, FString>& GetStringArgs(const TMap<FString, FString>& DefaultValue) const { if (StringArgs_IsSet) return StringArgs_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of StringArgs_Optional and returns true if it has been set, otherwise returns false */
    bool GetStringArgs(TMap<FString, FString>& OutValue) const { if (StringArgs_IsSet) OutValue = StringArgs_Optional; return StringArgs_IsSet; }
    /** @brief Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr */
    TMap<FString, FString>* GetStringArgsOrNull() { if (StringArgs_IsSet) return &StringArgs_Optional; return nullptr; }
    /** @brief Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr */
    const TMap<FString, FString>* GetStringArgsOrNull() const { if (StringArgs_IsSet) return &StringArgs_Optional; return nullptr; }
    /** @brief Sets the value of StringArgs_Optional and also sets StringArgs_IsSet to true */
    void SetStringArgs(TMap<FString, FString> NewValue) { StringArgs_Optional = NewValue; StringArgs_IsSet = true; }
     /** @brief Clears the value of StringArgs_Optional and sets StringArgs_IsSet to false */
    void ClearStringArgs() { StringArgs_IsSet = false; }

    /** @brief Additional tags to add to the matchmaking ticket */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FString> Tags_Optional{  };
    /** @brief true if Tags_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Tags_IsSet{ false };
    /** @brief Gets the value of Tags_Optional, regardless of it having been set */
    TArray<FString>& GetTags() { return Tags_Optional; }
    /** @brief Gets the value of Tags_Optional, regardless of it having been set */
    const TArray<FString>& GetTags() const { return Tags_Optional; }
    /** @brief Gets the value of Tags_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FString>& GetTags(const TArray<FString>& DefaultValue) const { if (Tags_IsSet) return Tags_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Tags_Optional and returns true if it has been set, otherwise returns false */
    bool GetTags(TArray<FString>& OutValue) const { if (Tags_IsSet) OutValue = Tags_Optional; return Tags_IsSet; }
    /** @brief Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr */
    TArray<FString>* GetTagsOrNull() { if (Tags_IsSet) return &Tags_Optional; return nullptr; }
    /** @brief Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FString>* GetTagsOrNull() const { if (Tags_IsSet) return &Tags_Optional; return nullptr; }
    /** @brief Sets the value of Tags_Optional and also sets Tags_IsSet to true */
    void SetTags(TArray<FString> NewValue) { Tags_Optional = NewValue; Tags_IsSet = true; }
     /** @brief Clears the value of Tags_Optional and sets Tags_IsSet to false */
    void ClearTags() { Tags_IsSet = false; }

    /** @brief Additional extensions to add to the matchmaking ticket. Value is a base64 string representation of the protobuf binary data. The data will be converted back to binary before being put on the ticket */
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
};

/** @} */
