// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "TeamUpdate.generated.h"

/** @defgroup RHAPI_TeamUpdate RallyHere API Model TeamUpdate
 *  @{
 */

/**
 * @brief An update to a specific team&#39;s number of max players
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_TeamUpdate : public FRHAPI_Model
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

	/** @brief Maximum number of players for this team */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 MaxSize{ 0 };
	/** @brief Gets the value of MaxSize */
	int32& GetMaxSize() { return MaxSize; }
	/** @brief Gets the value of MaxSize */
	const int32& GetMaxSize() const { return MaxSize; }
	/** @brief Sets the value of MaxSize */
	void SetMaxSize(const int32& NewValue) { MaxSize = NewValue;  }
	/** @brief Sets the value of MaxSize using move semantics */
	void SetMaxSize(int32&& NewValue) { MaxSize = NewValue;  }
	/** @brief Returns true if MaxSize matches the default value */
	bool IsMaxSizeDefaultValue() const { return MaxSize == 0; }
	/** @brief Sets the value of MaxSize to its default  */
	void SetMaxSizeToDefault() { MaxSize = 0;  }
};

/** @} */
