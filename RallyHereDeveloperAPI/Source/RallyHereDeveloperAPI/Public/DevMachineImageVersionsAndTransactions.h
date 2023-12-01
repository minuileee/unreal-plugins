// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevMachineImage.h"
#include "DevTransaction.h"
#include "DevMachineImageVersionsAndTransactions.generated.h"

/** @defgroup RHAPI_DevMachineImageVersionsAndTransactions RallyHere API Model DevMachineImageVersionsAndTransactions
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevMachineImageVersionsAndTransactions : public FRHAPI_DevModel
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

    TArray<FRHAPI_DevMachineImage> Versions{  };
    /** @brief Gets the value of Versions */
    TArray<FRHAPI_DevMachineImage>& GetVersions() { return Versions; }
    /** @brief Gets the value of Versions */
    const TArray<FRHAPI_DevMachineImage>& GetVersions() const { return Versions; }
    /** @brief Sets the value of Versions */
    void SetVersions(TArray<FRHAPI_DevMachineImage> NewValue) { Versions = NewValue;  }

    TArray<FRHAPI_DevTransaction> Transactions{  };
    /** @brief Gets the value of Transactions */
    TArray<FRHAPI_DevTransaction>& GetTransactions() { return Transactions; }
    /** @brief Gets the value of Transactions */
    const TArray<FRHAPI_DevTransaction>& GetTransactions() const { return Transactions; }
    /** @brief Sets the value of Transactions */
    void SetTransactions(TArray<FRHAPI_DevTransaction> NewValue) { Transactions = NewValue;  }
};

/** @} */
