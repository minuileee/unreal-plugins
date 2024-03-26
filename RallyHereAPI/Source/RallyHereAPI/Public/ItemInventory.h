// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "CacheInfo.h"
#include "InventoryRecord.h"
#include "ItemInventory.generated.h"

/** @defgroup RHAPI_ItemInventory RallyHere API Model ItemInventory
 *  @{
 */

/**
 * @brief Inventory of a particular Item for a Player organized by Inventory ID.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_ItemInventory : public FRHAPI_Model
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

	/** @brief Inventory Records for this Item Inventory. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TMap<FString, FRHAPI_InventoryRecord> Records_Optional{  };
	/** @brief true if Records_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Records_IsSet{ false };
	/** @brief Gets the value of Records_Optional, regardless of it having been set */
	TMap<FString, FRHAPI_InventoryRecord>& GetRecords() { return Records_Optional; }
	/** @brief Gets the value of Records_Optional, regardless of it having been set */
	const TMap<FString, FRHAPI_InventoryRecord>& GetRecords() const { return Records_Optional; }
	/** @brief Gets the value of Records_Optional, if it has been set, otherwise it returns DefaultValue */
	const TMap<FString, FRHAPI_InventoryRecord>& GetRecords(const TMap<FString, FRHAPI_InventoryRecord>& DefaultValue) const { if (Records_IsSet) return Records_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Records_Optional and returns true if it has been set, otherwise returns false */
	bool GetRecords(TMap<FString, FRHAPI_InventoryRecord>& OutValue) const { if (Records_IsSet) OutValue = Records_Optional; return Records_IsSet; }
	/** @brief Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr */
	TMap<FString, FRHAPI_InventoryRecord>* GetRecordsOrNull() { if (Records_IsSet) return &Records_Optional; return nullptr; }
	/** @brief Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr */
	const TMap<FString, FRHAPI_InventoryRecord>* GetRecordsOrNull() const { if (Records_IsSet) return &Records_Optional; return nullptr; }
	/** @brief Sets the value of Records_Optional and also sets Records_IsSet to true */
	void SetRecords(TMap<FString, FRHAPI_InventoryRecord> NewValue) { Records_Optional = NewValue; Records_IsSet = true; }
	 /** @brief Clears the value of Records_Optional and sets Records_IsSet to false */
	void ClearRecords() { Records_IsSet = false; }

	/** @brief Cache Info for this Item Inventory. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_CacheInfo CacheInfo_Optional{  };
	/** @brief true if CacheInfo_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool CacheInfo_IsSet{ false };
	/** @brief Gets the value of CacheInfo_Optional, regardless of it having been set */
	FRHAPI_CacheInfo& GetCacheInfo() { return CacheInfo_Optional; }
	/** @brief Gets the value of CacheInfo_Optional, regardless of it having been set */
	const FRHAPI_CacheInfo& GetCacheInfo() const { return CacheInfo_Optional; }
	/** @brief Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_CacheInfo& GetCacheInfo(const FRHAPI_CacheInfo& DefaultValue) const { if (CacheInfo_IsSet) return CacheInfo_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false */
	bool GetCacheInfo(FRHAPI_CacheInfo& OutValue) const { if (CacheInfo_IsSet) OutValue = CacheInfo_Optional; return CacheInfo_IsSet; }
	/** @brief Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_CacheInfo* GetCacheInfoOrNull() { if (CacheInfo_IsSet) return &CacheInfo_Optional; return nullptr; }
	/** @brief Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_CacheInfo* GetCacheInfoOrNull() const { if (CacheInfo_IsSet) return &CacheInfo_Optional; return nullptr; }
	/** @brief Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true */
	void SetCacheInfo(FRHAPI_CacheInfo NewValue) { CacheInfo_Optional = NewValue; CacheInfo_IsSet = true; }
	 /** @brief Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false */
	void ClearCacheInfo() { CacheInfo_IsSet = false; }
};

/** @} */
