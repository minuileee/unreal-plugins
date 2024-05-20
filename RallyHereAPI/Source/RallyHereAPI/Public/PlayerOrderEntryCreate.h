// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "InventoryBucket.h"
#include "PlayerOrderEntryType.h"
#include "PurchasePrice.h"
#include "PlayerOrderEntryCreate.generated.h"

/** @defgroup RHAPI_PlayerOrderEntryCreate RallyHere API Model PlayerOrderEntryCreate
 *  @{
 */

/**
 * @brief Request to create a Player Order Entry.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlayerOrderEntryCreate : public FRHAPI_Model
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

	/** @brief The type of entry. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_PlayerOrderEntryType Type{  };
	/** @brief Gets the value of Type */
	ERHAPI_PlayerOrderEntryType& GetType() { return Type; }
	/** @brief Gets the value of Type */
	const ERHAPI_PlayerOrderEntryType& GetType() const { return Type; }
	/** @brief Sets the value of Type */
	void SetType(ERHAPI_PlayerOrderEntryType NewValue) { Type = NewValue;  }

	/** @brief Unique Identifier for the Loot */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 LootId_Optional{  };
	/** @brief true if LootId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool LootId_IsSet{ false };
	/** @brief Gets the value of LootId_Optional, regardless of it having been set */
	int32& GetLootId() { return LootId_Optional; }
	/** @brief Gets the value of LootId_Optional, regardless of it having been set */
	const int32& GetLootId() const { return LootId_Optional; }
	/** @brief Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue */
	const int32& GetLootId(const int32& DefaultValue) const { if (LootId_IsSet) return LootId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false */
	bool GetLootId(int32& OutValue) const { if (LootId_IsSet) OutValue = LootId_Optional; return LootId_IsSet; }
	/** @brief Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr */
	int32* GetLootIdOrNull() { if (LootId_IsSet) return &LootId_Optional; return nullptr; }
	/** @brief Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr */
	const int32* GetLootIdOrNull() const { if (LootId_IsSet) return &LootId_Optional; return nullptr; }
	/** @brief Sets the value of LootId_Optional and also sets LootId_IsSet to true */
	void SetLootId(int32 NewValue) { LootId_Optional = NewValue; LootId_IsSet = true; }
	 /** @brief Clears the value of LootId_Optional and sets LootId_IsSet to false */
	void ClearLootId() { LootId_Optional = 0; LootId_IsSet = false; }
	/** @brief Returns true if LootId_Optional is set and matches the default value */
	bool IsLootIdDefaultValue() const { return LootId_IsSet && LootId_Optional == 0; }
	/** @brief Sets the value of LootId_Optional to its default and also sets LootId_IsSet to true */
	void SetLootIdToDefault() { LootId_Optional = 0; LootId_IsSet = true; }

	/** @brief Quantity of Inventory */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 Quantity{ 0 };
	/** @brief Gets the value of Quantity */
	int32& GetQuantity() { return Quantity; }
	/** @brief Gets the value of Quantity */
	const int32& GetQuantity() const { return Quantity; }
	/** @brief Sets the value of Quantity */
	void SetQuantity(int32 NewValue) { Quantity = NewValue;  }
	/** @brief Returns true if Quantity matches the default value */
	bool IsQuantityDefaultValue() const { return Quantity == 0; }
	/** @brief Sets the value of Quantity to its default  */
	void SetQuantityToDefault() { Quantity = 0;  }

	/** @brief Legacy version for the vendor owning the loot_id.  Use `vendor_etag` instead. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int64 VendorVersion_Optional{  };
	/** @brief true if VendorVersion_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool VendorVersion_IsSet{ false };
	/** @brief Gets the value of VendorVersion_Optional, regardless of it having been set */
	int64& GetVendorVersion() { return VendorVersion_Optional; }
	/** @brief Gets the value of VendorVersion_Optional, regardless of it having been set */
	const int64& GetVendorVersion() const { return VendorVersion_Optional; }
	/** @brief Gets the value of VendorVersion_Optional, if it has been set, otherwise it returns DefaultValue */
	const int64& GetVendorVersion(const int64& DefaultValue) const { if (VendorVersion_IsSet) return VendorVersion_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of VendorVersion_Optional and returns true if it has been set, otherwise returns false */
	bool GetVendorVersion(int64& OutValue) const { if (VendorVersion_IsSet) OutValue = VendorVersion_Optional; return VendorVersion_IsSet; }
	/** @brief Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr */
	int64* GetVendorVersionOrNull() { if (VendorVersion_IsSet) return &VendorVersion_Optional; return nullptr; }
	/** @brief Returns a pointer to VendorVersion_Optional, if it has been set, otherwise returns nullptr */
	const int64* GetVendorVersionOrNull() const { if (VendorVersion_IsSet) return &VendorVersion_Optional; return nullptr; }
	/** @brief Sets the value of VendorVersion_Optional and also sets VendorVersion_IsSet to true */
	void SetVendorVersion(int64 NewValue) { VendorVersion_Optional = NewValue; VendorVersion_IsSet = true; }
	 /** @brief Clears the value of VendorVersion_Optional and sets VendorVersion_IsSet to false */
	void ClearVendorVersion() { VendorVersion_Optional = 0; VendorVersion_IsSet = false; }
	/** @brief Returns true if VendorVersion_Optional is set and matches the default value */
	bool IsVendorVersionDefaultValue() const { return VendorVersion_IsSet && VendorVersion_Optional == 0; }
	/** @brief Sets the value of VendorVersion_Optional to its default and also sets VendorVersion_IsSet to true */
	void SetVendorVersionToDefault() { VendorVersion_Optional = 0; VendorVersion_IsSet = true; }

	/** @brief etag for the vendor owning the loot_id.  Will fail the fulfillment if they do not match */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString VendorEtag_Optional{  };
	/** @brief true if VendorEtag_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool VendorEtag_IsSet{ false };
	/** @brief Gets the value of VendorEtag_Optional, regardless of it having been set */
	FString& GetVendorEtag() { return VendorEtag_Optional; }
	/** @brief Gets the value of VendorEtag_Optional, regardless of it having been set */
	const FString& GetVendorEtag() const { return VendorEtag_Optional; }
	/** @brief Gets the value of VendorEtag_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetVendorEtag(const FString& DefaultValue) const { if (VendorEtag_IsSet) return VendorEtag_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of VendorEtag_Optional and returns true if it has been set, otherwise returns false */
	bool GetVendorEtag(FString& OutValue) const { if (VendorEtag_IsSet) OutValue = VendorEtag_Optional; return VendorEtag_IsSet; }
	/** @brief Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr */
	FString* GetVendorEtagOrNull() { if (VendorEtag_IsSet) return &VendorEtag_Optional; return nullptr; }
	/** @brief Returns a pointer to VendorEtag_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetVendorEtagOrNull() const { if (VendorEtag_IsSet) return &VendorEtag_Optional; return nullptr; }
	/** @brief Sets the value of VendorEtag_Optional and also sets VendorEtag_IsSet to true */
	void SetVendorEtag(FString NewValue) { VendorEtag_Optional = NewValue; VendorEtag_IsSet = true; }
	 /** @brief Clears the value of VendorEtag_Optional and sets VendorEtag_IsSet to false */
	void ClearVendorEtag() { VendorEtag_IsSet = false; }

	/** @brief List of Loot IDs for the dynamic bundle. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<int32> DynamicBundleLootIds_Optional{  };
	/** @brief true if DynamicBundleLootIds_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool DynamicBundleLootIds_IsSet{ false };
	/** @brief Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set */
	TArray<int32>& GetDynamicBundleLootIds() { return DynamicBundleLootIds_Optional; }
	/** @brief Gets the value of DynamicBundleLootIds_Optional, regardless of it having been set */
	const TArray<int32>& GetDynamicBundleLootIds() const { return DynamicBundleLootIds_Optional; }
	/** @brief Gets the value of DynamicBundleLootIds_Optional, if it has been set, otherwise it returns DefaultValue */
	const TArray<int32>& GetDynamicBundleLootIds(const TArray<int32>& DefaultValue) const { if (DynamicBundleLootIds_IsSet) return DynamicBundleLootIds_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of DynamicBundleLootIds_Optional and returns true if it has been set, otherwise returns false */
	bool GetDynamicBundleLootIds(TArray<int32>& OutValue) const { if (DynamicBundleLootIds_IsSet) OutValue = DynamicBundleLootIds_Optional; return DynamicBundleLootIds_IsSet; }
	/** @brief Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr */
	TArray<int32>* GetDynamicBundleLootIdsOrNull() { if (DynamicBundleLootIds_IsSet) return &DynamicBundleLootIds_Optional; return nullptr; }
	/** @brief Returns a pointer to DynamicBundleLootIds_Optional, if it has been set, otherwise returns nullptr */
	const TArray<int32>* GetDynamicBundleLootIdsOrNull() const { if (DynamicBundleLootIds_IsSet) return &DynamicBundleLootIds_Optional; return nullptr; }
	/** @brief Sets the value of DynamicBundleLootIds_Optional and also sets DynamicBundleLootIds_IsSet to true */
	void SetDynamicBundleLootIds(TArray<int32> NewValue) { DynamicBundleLootIds_Optional = NewValue; DynamicBundleLootIds_IsSet = true; }
	 /** @brief Clears the value of DynamicBundleLootIds_Optional and sets DynamicBundleLootIds_IsSet to false */
	void ClearDynamicBundleLootIds() { DynamicBundleLootIds_IsSet = false; }

	/** @brief The purchase price of the Loot. Deprecated. Use the purchase_prices field instead */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_PurchasePrice PurchasePrice_Optional{  };
	/** @brief true if PurchasePrice_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool PurchasePrice_IsSet{ false };
	/** @brief Gets the value of PurchasePrice_Optional, regardless of it having been set */
	FRHAPI_PurchasePrice& GetPurchasePrice() { return PurchasePrice_Optional; }
	/** @brief Gets the value of PurchasePrice_Optional, regardless of it having been set */
	const FRHAPI_PurchasePrice& GetPurchasePrice() const { return PurchasePrice_Optional; }
	/** @brief Gets the value of PurchasePrice_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_PurchasePrice& GetPurchasePrice(const FRHAPI_PurchasePrice& DefaultValue) const { if (PurchasePrice_IsSet) return PurchasePrice_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of PurchasePrice_Optional and returns true if it has been set, otherwise returns false */
	bool GetPurchasePrice(FRHAPI_PurchasePrice& OutValue) const { if (PurchasePrice_IsSet) OutValue = PurchasePrice_Optional; return PurchasePrice_IsSet; }
	/** @brief Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_PurchasePrice* GetPurchasePriceOrNull() { if (PurchasePrice_IsSet) return &PurchasePrice_Optional; return nullptr; }
	/** @brief Returns a pointer to PurchasePrice_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_PurchasePrice* GetPurchasePriceOrNull() const { if (PurchasePrice_IsSet) return &PurchasePrice_Optional; return nullptr; }
	/** @brief Sets the value of PurchasePrice_Optional and also sets PurchasePrice_IsSet to true */
	void SetPurchasePrice(FRHAPI_PurchasePrice NewValue) { PurchasePrice_Optional = NewValue; PurchasePrice_IsSet = true; }
	 /** @brief Clears the value of PurchasePrice_Optional and sets PurchasePrice_IsSet to false */
	void ClearPurchasePrice() { PurchasePrice_IsSet = false; }

	/** @brief External Transaction Id for source of the acquisition or a promotion code to claim. Required for [PROMOTION_CODE] types */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString ExternalTranId_Optional{  };
	/** @brief true if ExternalTranId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool ExternalTranId_IsSet{ false };
	/** @brief Gets the value of ExternalTranId_Optional, regardless of it having been set */
	FString& GetExternalTranId() { return ExternalTranId_Optional; }
	/** @brief Gets the value of ExternalTranId_Optional, regardless of it having been set */
	const FString& GetExternalTranId() const { return ExternalTranId_Optional; }
	/** @brief Gets the value of ExternalTranId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetExternalTranId(const FString& DefaultValue) const { if (ExternalTranId_IsSet) return ExternalTranId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of ExternalTranId_Optional and returns true if it has been set, otherwise returns false */
	bool GetExternalTranId(FString& OutValue) const { if (ExternalTranId_IsSet) OutValue = ExternalTranId_Optional; return ExternalTranId_IsSet; }
	/** @brief Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr */
	FString* GetExternalTranIdOrNull() { if (ExternalTranId_IsSet) return &ExternalTranId_Optional; return nullptr; }
	/** @brief Returns a pointer to ExternalTranId_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetExternalTranIdOrNull() const { if (ExternalTranId_IsSet) return &ExternalTranId_Optional; return nullptr; }
	/** @brief Sets the value of ExternalTranId_Optional and also sets ExternalTranId_IsSet to true */
	void SetExternalTranId(FString NewValue) { ExternalTranId_Optional = NewValue; ExternalTranId_IsSet = true; }
	 /** @brief Clears the value of ExternalTranId_Optional and sets ExternalTranId_IsSet to false */
	void ClearExternalTranId() { ExternalTranId_IsSet = false; }

	/** @brief External item SKU for the Order Entry. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString ExternalItemSku_Optional{  };
	/** @brief true if ExternalItemSku_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool ExternalItemSku_IsSet{ false };
	/** @brief Gets the value of ExternalItemSku_Optional, regardless of it having been set */
	FString& GetExternalItemSku() { return ExternalItemSku_Optional; }
	/** @brief Gets the value of ExternalItemSku_Optional, regardless of it having been set */
	const FString& GetExternalItemSku() const { return ExternalItemSku_Optional; }
	/** @brief Gets the value of ExternalItemSku_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetExternalItemSku(const FString& DefaultValue) const { if (ExternalItemSku_IsSet) return ExternalItemSku_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of ExternalItemSku_Optional and returns true if it has been set, otherwise returns false */
	bool GetExternalItemSku(FString& OutValue) const { if (ExternalItemSku_IsSet) OutValue = ExternalItemSku_Optional; return ExternalItemSku_IsSet; }
	/** @brief Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr */
	FString* GetExternalItemSkuOrNull() { if (ExternalItemSku_IsSet) return &ExternalItemSku_Optional; return nullptr; }
	/** @brief Returns a pointer to ExternalItemSku_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetExternalItemSkuOrNull() const { if (ExternalItemSku_IsSet) return &ExternalItemSku_Optional; return nullptr; }
	/** @brief Sets the value of ExternalItemSku_Optional and also sets ExternalItemSku_IsSet to true */
	void SetExternalItemSku(FString NewValue) { ExternalItemSku_Optional = NewValue; ExternalItemSku_IsSet = true; }
	 /** @brief Clears the value of ExternalItemSku_Optional and sets ExternalItemSku_IsSet to false */
	void ClearExternalItemSku() { ExternalItemSku_IsSet = false; }

	/** @brief Inventory Bucket to use for the Order Entry. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_InventoryBucket UseInventoryBucket_Optional{  };
	/** @brief true if UseInventoryBucket_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool UseInventoryBucket_IsSet{ false };
	/** @brief Gets the value of UseInventoryBucket_Optional, regardless of it having been set */
	ERHAPI_InventoryBucket& GetUseInventoryBucket() { return UseInventoryBucket_Optional; }
	/** @brief Gets the value of UseInventoryBucket_Optional, regardless of it having been set */
	const ERHAPI_InventoryBucket& GetUseInventoryBucket() const { return UseInventoryBucket_Optional; }
	/** @brief Gets the value of UseInventoryBucket_Optional, if it has been set, otherwise it returns DefaultValue */
	const ERHAPI_InventoryBucket& GetUseInventoryBucket(const ERHAPI_InventoryBucket& DefaultValue) const { if (UseInventoryBucket_IsSet) return UseInventoryBucket_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of UseInventoryBucket_Optional and returns true if it has been set, otherwise returns false */
	bool GetUseInventoryBucket(ERHAPI_InventoryBucket& OutValue) const { if (UseInventoryBucket_IsSet) OutValue = UseInventoryBucket_Optional; return UseInventoryBucket_IsSet; }
	/** @brief Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr */
	ERHAPI_InventoryBucket* GetUseInventoryBucketOrNull() { if (UseInventoryBucket_IsSet) return &UseInventoryBucket_Optional; return nullptr; }
	/** @brief Returns a pointer to UseInventoryBucket_Optional, if it has been set, otherwise returns nullptr */
	const ERHAPI_InventoryBucket* GetUseInventoryBucketOrNull() const { if (UseInventoryBucket_IsSet) return &UseInventoryBucket_Optional; return nullptr; }
	/** @brief Sets the value of UseInventoryBucket_Optional and also sets UseInventoryBucket_IsSet to true */
	void SetUseInventoryBucket(ERHAPI_InventoryBucket NewValue) { UseInventoryBucket_Optional = NewValue; UseInventoryBucket_IsSet = true; }
	 /** @brief Clears the value of UseInventoryBucket_Optional and sets UseInventoryBucket_IsSet to false */
	void ClearUseInventoryBucket() { UseInventoryBucket_IsSet = false; }

	/** @brief Player Portal Event Id for the Order Entry. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int64 PlayerPortalEventId_Optional{  };
	/** @brief true if PlayerPortalEventId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool PlayerPortalEventId_IsSet{ false };
	/** @brief Gets the value of PlayerPortalEventId_Optional, regardless of it having been set */
	int64& GetPlayerPortalEventId() { return PlayerPortalEventId_Optional; }
	/** @brief Gets the value of PlayerPortalEventId_Optional, regardless of it having been set */
	const int64& GetPlayerPortalEventId() const { return PlayerPortalEventId_Optional; }
	/** @brief Gets the value of PlayerPortalEventId_Optional, if it has been set, otherwise it returns DefaultValue */
	const int64& GetPlayerPortalEventId(const int64& DefaultValue) const { if (PlayerPortalEventId_IsSet) return PlayerPortalEventId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of PlayerPortalEventId_Optional and returns true if it has been set, otherwise returns false */
	bool GetPlayerPortalEventId(int64& OutValue) const { if (PlayerPortalEventId_IsSet) OutValue = PlayerPortalEventId_Optional; return PlayerPortalEventId_IsSet; }
	/** @brief Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr */
	int64* GetPlayerPortalEventIdOrNull() { if (PlayerPortalEventId_IsSet) return &PlayerPortalEventId_Optional; return nullptr; }
	/** @brief Returns a pointer to PlayerPortalEventId_Optional, if it has been set, otherwise returns nullptr */
	const int64* GetPlayerPortalEventIdOrNull() const { if (PlayerPortalEventId_IsSet) return &PlayerPortalEventId_Optional; return nullptr; }
	/** @brief Sets the value of PlayerPortalEventId_Optional and also sets PlayerPortalEventId_IsSet to true */
	void SetPlayerPortalEventId(int64 NewValue) { PlayerPortalEventId_Optional = NewValue; PlayerPortalEventId_IsSet = true; }
	 /** @brief Clears the value of PlayerPortalEventId_Optional and sets PlayerPortalEventId_IsSet to false */
	void ClearPlayerPortalEventId() { PlayerPortalEventId_Optional = 0; PlayerPortalEventId_IsSet = false; }
	/** @brief Returns true if PlayerPortalEventId_Optional is set and matches the default value */
	bool IsPlayerPortalEventIdDefaultValue() const { return PlayerPortalEventId_IsSet && PlayerPortalEventId_Optional == 0; }
	/** @brief Sets the value of PlayerPortalEventId_Optional to its default and also sets PlayerPortalEventId_IsSet to true */
	void SetPlayerPortalEventIdToDefault() { PlayerPortalEventId_Optional = 0; PlayerPortalEventId_IsSet = true; }

	/** @brief Unique Identifier for the Inventory */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid InventoryId_Optional{  };
	/** @brief true if InventoryId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool InventoryId_IsSet{ false };
	/** @brief Gets the value of InventoryId_Optional, regardless of it having been set */
	FGuid& GetInventoryId() { return InventoryId_Optional; }
	/** @brief Gets the value of InventoryId_Optional, regardless of it having been set */
	const FGuid& GetInventoryId() const { return InventoryId_Optional; }
	/** @brief Gets the value of InventoryId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FGuid& GetInventoryId(const FGuid& DefaultValue) const { if (InventoryId_IsSet) return InventoryId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of InventoryId_Optional and returns true if it has been set, otherwise returns false */
	bool GetInventoryId(FGuid& OutValue) const { if (InventoryId_IsSet) OutValue = InventoryId_Optional; return InventoryId_IsSet; }
	/** @brief Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr */
	FGuid* GetInventoryIdOrNull() { if (InventoryId_IsSet) return &InventoryId_Optional; return nullptr; }
	/** @brief Returns a pointer to InventoryId_Optional, if it has been set, otherwise returns nullptr */
	const FGuid* GetInventoryIdOrNull() const { if (InventoryId_IsSet) return &InventoryId_Optional; return nullptr; }
	/** @brief Sets the value of InventoryId_Optional and also sets InventoryId_IsSet to true */
	void SetInventoryId(FGuid NewValue) { InventoryId_Optional = NewValue; InventoryId_IsSet = true; }
	 /** @brief Clears the value of InventoryId_Optional and sets InventoryId_IsSet to false */
	void ClearInventoryId() { InventoryId_IsSet = false; }

	/** @brief Legacy Inventory Id. This is only used when type equals [UPDATE_EXISTING_PERSISTENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY] */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int64 LegacyInventoryId_Optional{  };
	/** @brief true if LegacyInventoryId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool LegacyInventoryId_IsSet{ false };
	/** @brief Gets the value of LegacyInventoryId_Optional, regardless of it having been set */
	int64& GetLegacyInventoryId() { return LegacyInventoryId_Optional; }
	/** @brief Gets the value of LegacyInventoryId_Optional, regardless of it having been set */
	const int64& GetLegacyInventoryId() const { return LegacyInventoryId_Optional; }
	/** @brief Gets the value of LegacyInventoryId_Optional, if it has been set, otherwise it returns DefaultValue */
	const int64& GetLegacyInventoryId(const int64& DefaultValue) const { if (LegacyInventoryId_IsSet) return LegacyInventoryId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of LegacyInventoryId_Optional and returns true if it has been set, otherwise returns false */
	bool GetLegacyInventoryId(int64& OutValue) const { if (LegacyInventoryId_IsSet) OutValue = LegacyInventoryId_Optional; return LegacyInventoryId_IsSet; }
	/** @brief Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr */
	int64* GetLegacyInventoryIdOrNull() { if (LegacyInventoryId_IsSet) return &LegacyInventoryId_Optional; return nullptr; }
	/** @brief Returns a pointer to LegacyInventoryId_Optional, if it has been set, otherwise returns nullptr */
	const int64* GetLegacyInventoryIdOrNull() const { if (LegacyInventoryId_IsSet) return &LegacyInventoryId_Optional; return nullptr; }
	/** @brief Sets the value of LegacyInventoryId_Optional and also sets LegacyInventoryId_IsSet to true */
	void SetLegacyInventoryId(int64 NewValue) { LegacyInventoryId_Optional = NewValue; LegacyInventoryId_IsSet = true; }
	 /** @brief Clears the value of LegacyInventoryId_Optional and sets LegacyInventoryId_IsSet to false */
	void ClearLegacyInventoryId() { LegacyInventoryId_Optional = 0; LegacyInventoryId_IsSet = false; }
	/** @brief Returns true if LegacyInventoryId_Optional is set and matches the default value */
	bool IsLegacyInventoryIdDefaultValue() const { return LegacyInventoryId_IsSet && LegacyInventoryId_Optional == 0; }
	/** @brief Sets the value of LegacyInventoryId_Optional to its default and also sets LegacyInventoryId_IsSet to true */
	void SetLegacyInventoryIdToDefault() { LegacyInventoryId_Optional = 0; LegacyInventoryId_IsSet = true; }

	/** @brief Item Id used create or update Inventory directly. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY] */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 ItemId_Optional{  };
	/** @brief true if ItemId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool ItemId_IsSet{ false };
	/** @brief Gets the value of ItemId_Optional, regardless of it having been set */
	int32& GetItemId() { return ItemId_Optional; }
	/** @brief Gets the value of ItemId_Optional, regardless of it having been set */
	const int32& GetItemId() const { return ItemId_Optional; }
	/** @brief Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue */
	const int32& GetItemId(const int32& DefaultValue) const { if (ItemId_IsSet) return ItemId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false */
	bool GetItemId(int32& OutValue) const { if (ItemId_IsSet) OutValue = ItemId_Optional; return ItemId_IsSet; }
	/** @brief Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr */
	int32* GetItemIdOrNull() { if (ItemId_IsSet) return &ItemId_Optional; return nullptr; }
	/** @brief Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr */
	const int32* GetItemIdOrNull() const { if (ItemId_IsSet) return &ItemId_Optional; return nullptr; }
	/** @brief Sets the value of ItemId_Optional and also sets ItemId_IsSet to true */
	void SetItemId(int32 NewValue) { ItemId_Optional = NewValue; ItemId_IsSet = true; }
	 /** @brief Clears the value of ItemId_Optional and sets ItemId_IsSet to false */
	void ClearItemId() { ItemId_Optional = 0; ItemId_IsSet = false; }
	/** @brief Returns true if ItemId_Optional is set and matches the default value */
	bool IsItemIdDefaultValue() const { return ItemId_IsSet && ItemId_Optional == 0; }
	/** @brief Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true */
	void SetItemIdToDefault() { ItemId_Optional = 0; ItemId_IsSet = true; }

	/** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FDateTime Expires_Optional{  };
	/** @brief true if Expires_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Expires_IsSet{ false };
	/** @brief Gets the value of Expires_Optional, regardless of it having been set */
	FDateTime& GetExpires() { return Expires_Optional; }
	/** @brief Gets the value of Expires_Optional, regardless of it having been set */
	const FDateTime& GetExpires() const { return Expires_Optional; }
	/** @brief Gets the value of Expires_Optional, if it has been set, otherwise it returns DefaultValue */
	const FDateTime& GetExpires(const FDateTime& DefaultValue) const { if (Expires_IsSet) return Expires_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Expires_Optional and returns true if it has been set, otherwise returns false */
	bool GetExpires(FDateTime& OutValue) const { if (Expires_IsSet) OutValue = Expires_Optional; return Expires_IsSet; }
	/** @brief Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr */
	FDateTime* GetExpiresOrNull() { if (Expires_IsSet) return &Expires_Optional; return nullptr; }
	/** @brief Returns a pointer to Expires_Optional, if it has been set, otherwise returns nullptr */
	const FDateTime* GetExpiresOrNull() const { if (Expires_IsSet) return &Expires_Optional; return nullptr; }
	/** @brief Sets the value of Expires_Optional and also sets Expires_IsSet to true */
	void SetExpires(FDateTime NewValue) { Expires_Optional = NewValue; Expires_IsSet = true; }
	 /** @brief Clears the value of Expires_Optional and sets Expires_IsSet to false */
	void ClearExpires() { Expires_IsSet = false; }

	/** @brief Custom Data Attributes for the Inventory. This is only used when type equals [CREATE_NEW_PERSISTENT_INVENTORY, UPDATE_EXISTING_PERSISTENT_INVENTORY, CREATE_NEW_TRANSIENT_INVENTORY, UPDATE_EXISTING_TRANSIENT_INVENTORY, UPDATE_INVENTORY] */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TMap<FString, FString> CustomData_Optional{  };
	/** @brief true if CustomData_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool CustomData_IsSet{ false };
	/** @brief Gets the value of CustomData_Optional, regardless of it having been set */
	TMap<FString, FString>& GetCustomData() { return CustomData_Optional; }
	/** @brief Gets the value of CustomData_Optional, regardless of it having been set */
	const TMap<FString, FString>& GetCustomData() const { return CustomData_Optional; }
	/** @brief Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue */
	const TMap<FString, FString>& GetCustomData(const TMap<FString, FString>& DefaultValue) const { if (CustomData_IsSet) return CustomData_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false */
	bool GetCustomData(TMap<FString, FString>& OutValue) const { if (CustomData_IsSet) OutValue = CustomData_Optional; return CustomData_IsSet; }
	/** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
	TMap<FString, FString>* GetCustomDataOrNull() { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
	/** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
	const TMap<FString, FString>* GetCustomDataOrNull() const { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
	/** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true */
	void SetCustomData(TMap<FString, FString> NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
	 /** @brief Clears the value of CustomData_Optional and sets CustomData_IsSet to false */
	void ClearCustomData() { CustomData_IsSet = false; }

	/** @brief Unique Identifier for the Order Entry. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString EntryId_Optional{  };
	/** @brief true if EntryId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool EntryId_IsSet{ false };
	/** @brief Gets the value of EntryId_Optional, regardless of it having been set */
	FString& GetEntryId() { return EntryId_Optional; }
	/** @brief Gets the value of EntryId_Optional, regardless of it having been set */
	const FString& GetEntryId() const { return EntryId_Optional; }
	/** @brief Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetEntryId(const FString& DefaultValue) const { if (EntryId_IsSet) return EntryId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false */
	bool GetEntryId(FString& OutValue) const { if (EntryId_IsSet) OutValue = EntryId_Optional; return EntryId_IsSet; }
	/** @brief Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr */
	FString* GetEntryIdOrNull() { if (EntryId_IsSet) return &EntryId_Optional; return nullptr; }
	/** @brief Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetEntryIdOrNull() const { if (EntryId_IsSet) return &EntryId_Optional; return nullptr; }
	/** @brief Sets the value of EntryId_Optional and also sets EntryId_IsSet to true */
	void SetEntryId(FString NewValue) { EntryId_Optional = NewValue; EntryId_IsSet = true; }
	 /** @brief Clears the value of EntryId_Optional and sets EntryId_IsSet to false */
	void ClearEntryId() { EntryId_IsSet = false; }
};

/** @} */
