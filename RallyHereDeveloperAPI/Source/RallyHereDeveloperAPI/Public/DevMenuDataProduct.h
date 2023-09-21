// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevMenuDataSandbox.h"
#include "DevMenuDataProduct.generated.h"

/** @defgroup RHAPI_DevMenuDataProduct RallyHere API Model DevMenuDataProduct
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevMenuDataProduct : public FRHAPI_DevModel
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

    FGuid ProductId{  };
    /** @brief Gets the value of ProductId */
    FGuid& GetProductId() { return ProductId; }
    /** @brief Gets the value of ProductId */
    const FGuid& GetProductId() const { return ProductId; }
    /** @brief Sets the value of ProductId */
    void SetProductId(FGuid NewValue) { ProductId = NewValue;  }

    FString ProductName{  };
    /** @brief Gets the value of ProductName */
    FString& GetProductName() { return ProductName; }
    /** @brief Gets the value of ProductName */
    const FString& GetProductName() const { return ProductName; }
    /** @brief Sets the value of ProductName */
    void SetProductName(FString NewValue) { ProductName = NewValue;  }

    FString ShortName{  };
    /** @brief Gets the value of ShortName */
    FString& GetShortName() { return ShortName; }
    /** @brief Gets the value of ShortName */
    const FString& GetShortName() const { return ShortName; }
    /** @brief Sets the value of ShortName */
    void SetShortName(FString NewValue) { ShortName = NewValue;  }

    TArray<FRHAPI_DevMenuDataSandbox> Sandboxes{  };
    /** @brief Gets the value of Sandboxes */
    TArray<FRHAPI_DevMenuDataSandbox>& GetSandboxes() { return Sandboxes; }
    /** @brief Gets the value of Sandboxes */
    const TArray<FRHAPI_DevMenuDataSandbox>& GetSandboxes() const { return Sandboxes; }
    /** @brief Sets the value of Sandboxes */
    void SetSandboxes(TArray<FRHAPI_DevMenuDataSandbox> NewValue) { Sandboxes = NewValue;  }
};

/** @} */