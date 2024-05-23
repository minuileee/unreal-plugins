// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PriceBreakPointCurrency.generated.h"

/** @defgroup RHAPI_PriceBreakPointCurrency RallyHere API Model PriceBreakPointCurrency
 *  @{
 */

/**
 * @brief The currencies of a Price Breakpoint.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PriceBreakPointCurrency : public FRHAPI_Model
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

	/** @brief The Item used as the currency for the purchase. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 PriceItemId{ 0 };
	/** @brief Gets the value of PriceItemId */
	int32& GetPriceItemId() { return PriceItemId; }
	/** @brief Gets the value of PriceItemId */
	const int32& GetPriceItemId() const { return PriceItemId; }
	/** @brief Sets the value of PriceItemId */
	void SetPriceItemId(const int32& NewValue) { PriceItemId = NewValue;  }
	/** @brief Sets the value of PriceItemId using move semantics */
	void SetPriceItemId(int32&& NewValue) { PriceItemId = NewValue;  }
	/** @brief Returns true if PriceItemId matches the default value */
	bool IsPriceItemIdDefaultValue() const { return PriceItemId == 0; }
	/** @brief Sets the value of PriceItemId to its default  */
	void SetPriceItemIdToDefault() { PriceItemId = 0;  }

	/** @brief The price of the Item. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 Price{ 0 };
	/** @brief Gets the value of Price */
	int32& GetPrice() { return Price; }
	/** @brief Gets the value of Price */
	const int32& GetPrice() const { return Price; }
	/** @brief Sets the value of Price */
	void SetPrice(const int32& NewValue) { Price = NewValue;  }
	/** @brief Sets the value of Price using move semantics */
	void SetPrice(int32&& NewValue) { Price = NewValue;  }
	/** @brief Returns true if Price matches the default value */
	bool IsPriceDefaultValue() const { return Price == 0; }
	/** @brief Sets the value of Price to its default  */
	void SetPriceToDefault() { Price = 0;  }
};

/** @} */
