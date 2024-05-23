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
#include "InventoryBucketUseRuleSets.h"
#include "Items.h"
#include "Loots.h"
#include "PlatformSKUs.h"
#include "PortalUseRulesets.h"
#include "PricePoints.h"
#include "TimeFrames.h"
#include "Vendors.h"
#include "XpTables.h"
#include "Catalog.generated.h"

/** @defgroup RHAPI_Catalog RallyHere API Model Catalog
 *  @{
 */

/**
 * @brief Full list of all loaded objects for the catalog.  Organized in a normalized model
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_Catalog : public FRHAPI_Model
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

	/** @brief The XP Tables. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_XpTables XpTables_Optional{  };
	/** @brief true if XpTables_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool XpTables_IsSet{ false };
	/** @brief Gets the value of XpTables_Optional, regardless of it having been set */
	FRHAPI_XpTables& GetXpTables() { return XpTables_Optional; }
	/** @brief Gets the value of XpTables_Optional, regardless of it having been set */
	const FRHAPI_XpTables& GetXpTables() const { return XpTables_Optional; }
	/** @brief Gets the value of XpTables_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_XpTables& GetXpTables(const FRHAPI_XpTables& DefaultValue) const { if (XpTables_IsSet) return XpTables_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of XpTables_Optional and returns true if it has been set, otherwise returns false */
	bool GetXpTables(FRHAPI_XpTables& OutValue) const { if (XpTables_IsSet) OutValue = XpTables_Optional; return XpTables_IsSet; }
	/** @brief Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_XpTables* GetXpTablesOrNull() { if (XpTables_IsSet) return &XpTables_Optional; return nullptr; }
	/** @brief Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_XpTables* GetXpTablesOrNull() const { if (XpTables_IsSet) return &XpTables_Optional; return nullptr; }
	/** @brief Sets the value of XpTables_Optional and also sets XpTables_IsSet to true */
	void SetXpTables(const FRHAPI_XpTables& NewValue) { XpTables_Optional = NewValue; XpTables_IsSet = true; }
	/** @brief Sets the value of XpTables_Optional and also sets XpTables_IsSet to true using move semantics */
	void SetXpTables(FRHAPI_XpTables&& NewValue) { XpTables_Optional = NewValue; XpTables_IsSet = true; }
	 /** @brief Clears the value of XpTables_Optional and sets XpTables_IsSet to false */
	void ClearXpTables() { XpTables_IsSet = false; }

	/** @brief The Portal Use Rulesets. Use Inventory Bucket Use Rule Sets instead. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_PortalUseRulesets PortalUseRulesets_Optional{  };
	/** @brief true if PortalUseRulesets_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool PortalUseRulesets_IsSet{ false };
	/** @brief Gets the value of PortalUseRulesets_Optional, regardless of it having been set */
	FRHAPI_PortalUseRulesets& GetPortalUseRulesets() { return PortalUseRulesets_Optional; }
	/** @brief Gets the value of PortalUseRulesets_Optional, regardless of it having been set */
	const FRHAPI_PortalUseRulesets& GetPortalUseRulesets() const { return PortalUseRulesets_Optional; }
	/** @brief Gets the value of PortalUseRulesets_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_PortalUseRulesets& GetPortalUseRulesets(const FRHAPI_PortalUseRulesets& DefaultValue) const { if (PortalUseRulesets_IsSet) return PortalUseRulesets_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of PortalUseRulesets_Optional and returns true if it has been set, otherwise returns false */
	bool GetPortalUseRulesets(FRHAPI_PortalUseRulesets& OutValue) const { if (PortalUseRulesets_IsSet) OutValue = PortalUseRulesets_Optional; return PortalUseRulesets_IsSet; }
	/** @brief Returns a pointer to PortalUseRulesets_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_PortalUseRulesets* GetPortalUseRulesetsOrNull() { if (PortalUseRulesets_IsSet) return &PortalUseRulesets_Optional; return nullptr; }
	/** @brief Returns a pointer to PortalUseRulesets_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_PortalUseRulesets* GetPortalUseRulesetsOrNull() const { if (PortalUseRulesets_IsSet) return &PortalUseRulesets_Optional; return nullptr; }
	/** @brief Sets the value of PortalUseRulesets_Optional and also sets PortalUseRulesets_IsSet to true */
	void SetPortalUseRulesets(const FRHAPI_PortalUseRulesets& NewValue) { PortalUseRulesets_Optional = NewValue; PortalUseRulesets_IsSet = true; }
	/** @brief Sets the value of PortalUseRulesets_Optional and also sets PortalUseRulesets_IsSet to true using move semantics */
	void SetPortalUseRulesets(FRHAPI_PortalUseRulesets&& NewValue) { PortalUseRulesets_Optional = NewValue; PortalUseRulesets_IsSet = true; }
	 /** @brief Clears the value of PortalUseRulesets_Optional and sets PortalUseRulesets_IsSet to false */
	void ClearPortalUseRulesets() { PortalUseRulesets_IsSet = false; }

	/** @brief The rules on how to use Inventory Buckets. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_InventoryBucketUseRuleSets InventoryBucketUseRuleSets_Optional{  };
	/** @brief true if InventoryBucketUseRuleSets_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool InventoryBucketUseRuleSets_IsSet{ false };
	/** @brief Gets the value of InventoryBucketUseRuleSets_Optional, regardless of it having been set */
	FRHAPI_InventoryBucketUseRuleSets& GetInventoryBucketUseRuleSets() { return InventoryBucketUseRuleSets_Optional; }
	/** @brief Gets the value of InventoryBucketUseRuleSets_Optional, regardless of it having been set */
	const FRHAPI_InventoryBucketUseRuleSets& GetInventoryBucketUseRuleSets() const { return InventoryBucketUseRuleSets_Optional; }
	/** @brief Gets the value of InventoryBucketUseRuleSets_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_InventoryBucketUseRuleSets& GetInventoryBucketUseRuleSets(const FRHAPI_InventoryBucketUseRuleSets& DefaultValue) const { if (InventoryBucketUseRuleSets_IsSet) return InventoryBucketUseRuleSets_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of InventoryBucketUseRuleSets_Optional and returns true if it has been set, otherwise returns false */
	bool GetInventoryBucketUseRuleSets(FRHAPI_InventoryBucketUseRuleSets& OutValue) const { if (InventoryBucketUseRuleSets_IsSet) OutValue = InventoryBucketUseRuleSets_Optional; return InventoryBucketUseRuleSets_IsSet; }
	/** @brief Returns a pointer to InventoryBucketUseRuleSets_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_InventoryBucketUseRuleSets* GetInventoryBucketUseRuleSetsOrNull() { if (InventoryBucketUseRuleSets_IsSet) return &InventoryBucketUseRuleSets_Optional; return nullptr; }
	/** @brief Returns a pointer to InventoryBucketUseRuleSets_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_InventoryBucketUseRuleSets* GetInventoryBucketUseRuleSetsOrNull() const { if (InventoryBucketUseRuleSets_IsSet) return &InventoryBucketUseRuleSets_Optional; return nullptr; }
	/** @brief Sets the value of InventoryBucketUseRuleSets_Optional and also sets InventoryBucketUseRuleSets_IsSet to true */
	void SetInventoryBucketUseRuleSets(const FRHAPI_InventoryBucketUseRuleSets& NewValue) { InventoryBucketUseRuleSets_Optional = NewValue; InventoryBucketUseRuleSets_IsSet = true; }
	/** @brief Sets the value of InventoryBucketUseRuleSets_Optional and also sets InventoryBucketUseRuleSets_IsSet to true using move semantics */
	void SetInventoryBucketUseRuleSets(FRHAPI_InventoryBucketUseRuleSets&& NewValue) { InventoryBucketUseRuleSets_Optional = NewValue; InventoryBucketUseRuleSets_IsSet = true; }
	 /** @brief Clears the value of InventoryBucketUseRuleSets_Optional and sets InventoryBucketUseRuleSets_IsSet to false */
	void ClearInventoryBucketUseRuleSets() { InventoryBucketUseRuleSets_IsSet = false; }

	/** @brief The Vendors. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_Vendors Vendors_Optional{  };
	/** @brief true if Vendors_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Vendors_IsSet{ false };
	/** @brief Gets the value of Vendors_Optional, regardless of it having been set */
	FRHAPI_Vendors& GetVendors() { return Vendors_Optional; }
	/** @brief Gets the value of Vendors_Optional, regardless of it having been set */
	const FRHAPI_Vendors& GetVendors() const { return Vendors_Optional; }
	/** @brief Gets the value of Vendors_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_Vendors& GetVendors(const FRHAPI_Vendors& DefaultValue) const { if (Vendors_IsSet) return Vendors_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Vendors_Optional and returns true if it has been set, otherwise returns false */
	bool GetVendors(FRHAPI_Vendors& OutValue) const { if (Vendors_IsSet) OutValue = Vendors_Optional; return Vendors_IsSet; }
	/** @brief Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_Vendors* GetVendorsOrNull() { if (Vendors_IsSet) return &Vendors_Optional; return nullptr; }
	/** @brief Returns a pointer to Vendors_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_Vendors* GetVendorsOrNull() const { if (Vendors_IsSet) return &Vendors_Optional; return nullptr; }
	/** @brief Sets the value of Vendors_Optional and also sets Vendors_IsSet to true */
	void SetVendors(const FRHAPI_Vendors& NewValue) { Vendors_Optional = NewValue; Vendors_IsSet = true; }
	/** @brief Sets the value of Vendors_Optional and also sets Vendors_IsSet to true using move semantics */
	void SetVendors(FRHAPI_Vendors&& NewValue) { Vendors_Optional = NewValue; Vendors_IsSet = true; }
	 /** @brief Clears the value of Vendors_Optional and sets Vendors_IsSet to false */
	void ClearVendors() { Vendors_IsSet = false; }

	/** @brief The Loots. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_Loots Loot_Optional{  };
	/** @brief true if Loot_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Loot_IsSet{ false };
	/** @brief Gets the value of Loot_Optional, regardless of it having been set */
	FRHAPI_Loots& GetLoot() { return Loot_Optional; }
	/** @brief Gets the value of Loot_Optional, regardless of it having been set */
	const FRHAPI_Loots& GetLoot() const { return Loot_Optional; }
	/** @brief Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_Loots& GetLoot(const FRHAPI_Loots& DefaultValue) const { if (Loot_IsSet) return Loot_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false */
	bool GetLoot(FRHAPI_Loots& OutValue) const { if (Loot_IsSet) OutValue = Loot_Optional; return Loot_IsSet; }
	/** @brief Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_Loots* GetLootOrNull() { if (Loot_IsSet) return &Loot_Optional; return nullptr; }
	/** @brief Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_Loots* GetLootOrNull() const { if (Loot_IsSet) return &Loot_Optional; return nullptr; }
	/** @brief Sets the value of Loot_Optional and also sets Loot_IsSet to true */
	void SetLoot(const FRHAPI_Loots& NewValue) { Loot_Optional = NewValue; Loot_IsSet = true; }
	/** @brief Sets the value of Loot_Optional and also sets Loot_IsSet to true using move semantics */
	void SetLoot(FRHAPI_Loots&& NewValue) { Loot_Optional = NewValue; Loot_IsSet = true; }
	 /** @brief Clears the value of Loot_Optional and sets Loot_IsSet to false */
	void ClearLoot() { Loot_IsSet = false; }

	/** @brief The Items. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_Items Items_Optional{  };
	/** @brief true if Items_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Items_IsSet{ false };
	/** @brief Gets the value of Items_Optional, regardless of it having been set */
	FRHAPI_Items& GetItems() { return Items_Optional; }
	/** @brief Gets the value of Items_Optional, regardless of it having been set */
	const FRHAPI_Items& GetItems() const { return Items_Optional; }
	/** @brief Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_Items& GetItems(const FRHAPI_Items& DefaultValue) const { if (Items_IsSet) return Items_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false */
	bool GetItems(FRHAPI_Items& OutValue) const { if (Items_IsSet) OutValue = Items_Optional; return Items_IsSet; }
	/** @brief Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_Items* GetItemsOrNull() { if (Items_IsSet) return &Items_Optional; return nullptr; }
	/** @brief Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_Items* GetItemsOrNull() const { if (Items_IsSet) return &Items_Optional; return nullptr; }
	/** @brief Sets the value of Items_Optional and also sets Items_IsSet to true */
	void SetItems(const FRHAPI_Items& NewValue) { Items_Optional = NewValue; Items_IsSet = true; }
	/** @brief Sets the value of Items_Optional and also sets Items_IsSet to true using move semantics */
	void SetItems(FRHAPI_Items&& NewValue) { Items_Optional = NewValue; Items_IsSet = true; }
	 /** @brief Clears the value of Items_Optional and sets Items_IsSet to false */
	void ClearItems() { Items_IsSet = false; }

	/** @brief The Price Points. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_PricePoints PricePoints_Optional{  };
	/** @brief true if PricePoints_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool PricePoints_IsSet{ false };
	/** @brief Gets the value of PricePoints_Optional, regardless of it having been set */
	FRHAPI_PricePoints& GetPricePoints() { return PricePoints_Optional; }
	/** @brief Gets the value of PricePoints_Optional, regardless of it having been set */
	const FRHAPI_PricePoints& GetPricePoints() const { return PricePoints_Optional; }
	/** @brief Gets the value of PricePoints_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_PricePoints& GetPricePoints(const FRHAPI_PricePoints& DefaultValue) const { if (PricePoints_IsSet) return PricePoints_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of PricePoints_Optional and returns true if it has been set, otherwise returns false */
	bool GetPricePoints(FRHAPI_PricePoints& OutValue) const { if (PricePoints_IsSet) OutValue = PricePoints_Optional; return PricePoints_IsSet; }
	/** @brief Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_PricePoints* GetPricePointsOrNull() { if (PricePoints_IsSet) return &PricePoints_Optional; return nullptr; }
	/** @brief Returns a pointer to PricePoints_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_PricePoints* GetPricePointsOrNull() const { if (PricePoints_IsSet) return &PricePoints_Optional; return nullptr; }
	/** @brief Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true */
	void SetPricePoints(const FRHAPI_PricePoints& NewValue) { PricePoints_Optional = NewValue; PricePoints_IsSet = true; }
	/** @brief Sets the value of PricePoints_Optional and also sets PricePoints_IsSet to true using move semantics */
	void SetPricePoints(FRHAPI_PricePoints&& NewValue) { PricePoints_Optional = NewValue; PricePoints_IsSet = true; }
	 /** @brief Clears the value of PricePoints_Optional and sets PricePoints_IsSet to false */
	void ClearPricePoints() { PricePoints_IsSet = false; }

	/** @brief The Time Frames. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_TimeFrames TimeFrames_Optional{  };
	/** @brief true if TimeFrames_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool TimeFrames_IsSet{ false };
	/** @brief Gets the value of TimeFrames_Optional, regardless of it having been set */
	FRHAPI_TimeFrames& GetTimeFrames() { return TimeFrames_Optional; }
	/** @brief Gets the value of TimeFrames_Optional, regardless of it having been set */
	const FRHAPI_TimeFrames& GetTimeFrames() const { return TimeFrames_Optional; }
	/** @brief Gets the value of TimeFrames_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_TimeFrames& GetTimeFrames(const FRHAPI_TimeFrames& DefaultValue) const { if (TimeFrames_IsSet) return TimeFrames_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of TimeFrames_Optional and returns true if it has been set, otherwise returns false */
	bool GetTimeFrames(FRHAPI_TimeFrames& OutValue) const { if (TimeFrames_IsSet) OutValue = TimeFrames_Optional; return TimeFrames_IsSet; }
	/** @brief Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_TimeFrames* GetTimeFramesOrNull() { if (TimeFrames_IsSet) return &TimeFrames_Optional; return nullptr; }
	/** @brief Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_TimeFrames* GetTimeFramesOrNull() const { if (TimeFrames_IsSet) return &TimeFrames_Optional; return nullptr; }
	/** @brief Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true */
	void SetTimeFrames(const FRHAPI_TimeFrames& NewValue) { TimeFrames_Optional = NewValue; TimeFrames_IsSet = true; }
	/** @brief Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true using move semantics */
	void SetTimeFrames(FRHAPI_TimeFrames&& NewValue) { TimeFrames_Optional = NewValue; TimeFrames_IsSet = true; }
	 /** @brief Clears the value of TimeFrames_Optional and sets TimeFrames_IsSet to false */
	void ClearTimeFrames() { TimeFrames_IsSet = false; }

	/** @brief The Platform SKUs. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_PlatformSKUs Skus_Optional{  };
	/** @brief true if Skus_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Skus_IsSet{ false };
	/** @brief Gets the value of Skus_Optional, regardless of it having been set */
	FRHAPI_PlatformSKUs& GetSkus() { return Skus_Optional; }
	/** @brief Gets the value of Skus_Optional, regardless of it having been set */
	const FRHAPI_PlatformSKUs& GetSkus() const { return Skus_Optional; }
	/** @brief Gets the value of Skus_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_PlatformSKUs& GetSkus(const FRHAPI_PlatformSKUs& DefaultValue) const { if (Skus_IsSet) return Skus_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Skus_Optional and returns true if it has been set, otherwise returns false */
	bool GetSkus(FRHAPI_PlatformSKUs& OutValue) const { if (Skus_IsSet) OutValue = Skus_Optional; return Skus_IsSet; }
	/** @brief Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_PlatformSKUs* GetSkusOrNull() { if (Skus_IsSet) return &Skus_Optional; return nullptr; }
	/** @brief Returns a pointer to Skus_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_PlatformSKUs* GetSkusOrNull() const { if (Skus_IsSet) return &Skus_Optional; return nullptr; }
	/** @brief Sets the value of Skus_Optional and also sets Skus_IsSet to true */
	void SetSkus(const FRHAPI_PlatformSKUs& NewValue) { Skus_Optional = NewValue; Skus_IsSet = true; }
	/** @brief Sets the value of Skus_Optional and also sets Skus_IsSet to true using move semantics */
	void SetSkus(FRHAPI_PlatformSKUs&& NewValue) { Skus_Optional = NewValue; Skus_IsSet = true; }
	 /** @brief Clears the value of Skus_Optional and sets Skus_IsSet to false */
	void ClearSkus() { Skus_IsSet = false; }

	/** @brief Cache info for the Catalog. */
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
	void SetCacheInfo(const FRHAPI_CacheInfo& NewValue) { CacheInfo_Optional = NewValue; CacheInfo_IsSet = true; }
	/** @brief Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics */
	void SetCacheInfo(FRHAPI_CacheInfo&& NewValue) { CacheInfo_Optional = NewValue; CacheInfo_IsSet = true; }
	 /** @brief Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false */
	void ClearCacheInfo() { CacheInfo_IsSet = false; }
};

/** @} */
