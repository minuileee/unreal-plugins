// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "InventoryPageMeta.h"
#include "PlayerOrder.h"
#include "PlayerOrdersResponse.generated.h"

/** @defgroup RHAPI_PlayerOrdersResponse RallyHere API Model PlayerOrdersResponse
 *  @{
 */

/**
 * @brief A collection of Player Orders.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlayerOrdersResponse : public FRHAPI_Model
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

    /** @brief A collection of Player Orders. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FRHAPI_PlayerOrder> Data_Optional{  };
    /** @brief true if Data_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Data_IsSet{ false };
    /** @brief Gets the value of Data_Optional, regardless of it having been set */
    TArray<FRHAPI_PlayerOrder>& GetData() { return Data_Optional; }
    /** @brief Gets the value of Data_Optional, regardless of it having been set */
    const TArray<FRHAPI_PlayerOrder>& GetData() const { return Data_Optional; }
    /** @brief Gets the value of Data_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_PlayerOrder>& GetData(const TArray<FRHAPI_PlayerOrder>& DefaultValue) const { if (Data_IsSet) return Data_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Data_Optional and returns true if it has been set, otherwise returns false */
    bool GetData(TArray<FRHAPI_PlayerOrder>& OutValue) const { if (Data_IsSet) OutValue = Data_Optional; return Data_IsSet; }
    /** @brief Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_PlayerOrder>* GetDataOrNull() { if (Data_IsSet) return &Data_Optional; return nullptr; }
    /** @brief Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_PlayerOrder>* GetDataOrNull() const { if (Data_IsSet) return &Data_Optional; return nullptr; }
    /** @brief Sets the value of Data_Optional and also sets Data_IsSet to true */
    void SetData(TArray<FRHAPI_PlayerOrder> NewValue) { Data_Optional = NewValue; Data_IsSet = true; }
     /** @brief Clears the value of Data_Optional and sets Data_IsSet to false */
    void ClearData() { Data_IsSet = false; }

    /** @brief Page metadata for the Player Orders. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_InventoryPageMeta Page{  };
    /** @brief Gets the value of Page */
    FRHAPI_InventoryPageMeta& GetPage() { return Page; }
    /** @brief Gets the value of Page */
    const FRHAPI_InventoryPageMeta& GetPage() const { return Page; }
    /** @brief Sets the value of Page */
    void SetPage(FRHAPI_InventoryPageMeta NewValue) { Page = NewValue;  }
};

/** @} */
