// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "ClaimKeyRequest.generated.h"

/** @defgroup RHAPI_ClaimKeyRequest RallyHere API Model ClaimKeyRequest
 *  @{
 */

/**
 * @brief Attempt to claim a Key Claim from a Marketing Campaign.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_ClaimKeyRequest : public FRHAPI_Model
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
    FString ExternalKeyType_Optional{  };
    /** @brief true if ExternalKeyType_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool ExternalKeyType_IsSet{ false };
    /** @brief Gets the value of ExternalKeyType_Optional, regardless of it having been set */
    FString& GetExternalKeyType() { return ExternalKeyType_Optional; }
    /** @brief Gets the value of ExternalKeyType_Optional, regardless of it having been set */
    const FString& GetExternalKeyType() const { return ExternalKeyType_Optional; }
    /** @brief Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetExternalKeyType(const FString& DefaultValue) const { if (ExternalKeyType_IsSet) return ExternalKeyType_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false */
    bool GetExternalKeyType(FString& OutValue) const { if (ExternalKeyType_IsSet) OutValue = ExternalKeyType_Optional; return ExternalKeyType_IsSet; }
    /** @brief Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr */
    FString* GetExternalKeyTypeOrNull() { if (ExternalKeyType_IsSet) return &ExternalKeyType_Optional; return nullptr; }
    /** @brief Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetExternalKeyTypeOrNull() const { if (ExternalKeyType_IsSet) return &ExternalKeyType_Optional; return nullptr; }
    /** @brief Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true */
    void SetExternalKeyType(FString NewValue) { ExternalKeyType_Optional = NewValue; ExternalKeyType_IsSet = true; }
     /** @brief Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false */
    void ClearExternalKeyType() { ExternalKeyType_Optional = TEXT("Type of the External Key"); ExternalKeyType_IsSet = false; }
    /** @brief Returns true if ExternalKeyType_Optional is set and matches the default value */
    bool IsExternalKeyTypeDefaultValue() const { return ExternalKeyType_IsSet && ExternalKeyType_Optional == TEXT("Type of the External Key"); }
    /** @brief Sets the value of ExternalKeyType_Optional to its default and also sets ExternalKeyType_IsSet to true */
    void SetExternalKeyTypeToDefault() { ExternalKeyType_Optional = TEXT("Type of the External Key"); ExternalKeyType_IsSet = true; }
};

/** @} */
