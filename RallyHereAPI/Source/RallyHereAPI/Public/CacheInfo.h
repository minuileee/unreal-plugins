// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "CacheInfo.generated.h"

/** @defgroup RHAPI_CacheInfo RallyHere API Model CacheInfo
 *  @{
 */

/**
 * @brief Cache information for the resource it is attached to. The etag value can be used with the If-None-Match and If-Match headers
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_CacheInfo : public FRHAPI_Model
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

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Etag{  };
    /** @brief Gets the value of Etag */
    FString& GetEtag() { return Etag; }
    /** @brief Gets the value of Etag */
    const FString& GetEtag() const { return Etag; }
    /** @brief Sets the value of Etag */
    void SetEtag(FString NewValue) { Etag = NewValue;  }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString StrRep_Optional{  };
    /** @brief true if StrRep_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool StrRep_IsSet{ false };
    /** @brief Gets the value of StrRep_Optional, regardless of it having been set */
    FString& GetStrRep() { return StrRep_Optional; }
    /** @brief Gets the value of StrRep_Optional, regardless of it having been set */
    const FString& GetStrRep() const { return StrRep_Optional; }
    /** @brief Gets the value of StrRep_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetStrRep(const FString& DefaultValue) const { if (StrRep_IsSet) return StrRep_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of StrRep_Optional and returns true if it has been set, otherwise returns false */
    bool GetStrRep(FString& OutValue) const { if (StrRep_IsSet) OutValue = StrRep_Optional; return StrRep_IsSet; }
    /** @brief Returns a pointer to StrRep_Optional, if it has been set, otherwise returns nullptr */
    FString* GetStrRepOrNull() { if (StrRep_IsSet) return &StrRep_Optional; return nullptr; }
    /** @brief Returns a pointer to StrRep_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetStrRepOrNull() const { if (StrRep_IsSet) return &StrRep_Optional; return nullptr; }
    /** @brief Sets the value of StrRep_Optional and also sets StrRep_IsSet to true */
    void SetStrRep(FString NewValue) { StrRep_Optional = NewValue; StrRep_IsSet = true; }
     /** @brief Clears the value of StrRep_Optional and sets StrRep_IsSet to false */
    void ClearStrRep() { StrRep_IsSet = false; }
};

/** @} */
