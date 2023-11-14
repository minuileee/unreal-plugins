// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "ValidationError.h"
#include "HTTPValidationError.generated.h"

/** @defgroup RHAPI_HTTPValidationError RallyHere API Model HTTPValidationError
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_HTTPValidationError : public FRHAPI_Model
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
    TArray<FRHAPI_ValidationError> Detail_Optional{  };
    /** @brief true if Detail_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Detail_IsSet{ false };
    /** @brief Gets the value of Detail_Optional, regardless of it having been set */
    TArray<FRHAPI_ValidationError>& GetDetail() { return Detail_Optional; }
    /** @brief Gets the value of Detail_Optional, regardless of it having been set */
    const TArray<FRHAPI_ValidationError>& GetDetail() const { return Detail_Optional; }
    /** @brief Gets the value of Detail_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_ValidationError>& GetDetail(const TArray<FRHAPI_ValidationError>& DefaultValue) const { if (Detail_IsSet) return Detail_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Detail_Optional and returns true if it has been set, otherwise returns false */
    bool GetDetail(TArray<FRHAPI_ValidationError>& OutValue) const { if (Detail_IsSet) OutValue = Detail_Optional; return Detail_IsSet; }
    /** @brief Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_ValidationError>* GetDetailOrNull() { if (Detail_IsSet) return &Detail_Optional; return nullptr; }
    /** @brief Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_ValidationError>* GetDetailOrNull() const { if (Detail_IsSet) return &Detail_Optional; return nullptr; }
    /** @brief Sets the value of Detail_Optional and also sets Detail_IsSet to true */
    void SetDetail(TArray<FRHAPI_ValidationError> NewValue) { Detail_Optional = NewValue; Detail_IsSet = true; }
     /** @brief Clears the value of Detail_Optional and sets Detail_IsSet to false */
    void ClearDetail() { Detail_IsSet = false; }
};

/** @} */
