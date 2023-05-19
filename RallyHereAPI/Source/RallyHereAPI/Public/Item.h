// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "CacheInfo.h"
#include "ItemType.h"
#include "Item.generated.h"

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_Item : public FRHAPI_Model
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
    ERHAPI_ItemType Type_Optional{  };
    /** @brief true if Type_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Type_IsSet{ false };
    /** @brief Gets the value of Type_Optional, regardless of it having been set */
    ERHAPI_ItemType& GetType() { return Type_Optional; }
    /** @brief Gets the value of Type_Optional, regardless of it having been set */
    const ERHAPI_ItemType& GetType() const { return Type_Optional; }
    /** @brief Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_ItemType& GetType(const ERHAPI_ItemType& DefaultValue) const { if (Type_IsSet) return Type_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false */
    bool GetType(ERHAPI_ItemType& OutValue) const { if (Type_IsSet) OutValue = Type_Optional; return Type_IsSet; }
    /** @brief Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_ItemType* GetTypeOrNull() { if (Type_IsSet) return &Type_Optional; return nullptr; }
    /** @brief Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_ItemType* GetTypeOrNull() const { if (Type_IsSet) return &Type_Optional; return nullptr; }
    /** @brief Sets the value of Type_Optional and also sets Type_IsSet to true */
    void SetType(ERHAPI_ItemType NewValue) { Type_Optional = NewValue; Type_IsSet = true; }
     /** @brief Clears the value of Type_Optional and sets Type_IsSet to false */
    void ClearType() { Type_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 LegacyType_Optional{  };
    /** @brief true if LegacyType_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool LegacyType_IsSet{ false };
    /** @brief Gets the value of LegacyType_Optional, regardless of it having been set */
    int32& GetLegacyType() { return LegacyType_Optional; }
    /** @brief Gets the value of LegacyType_Optional, regardless of it having been set */
    const int32& GetLegacyType() const { return LegacyType_Optional; }
    /** @brief Gets the value of LegacyType_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetLegacyType(const int32& DefaultValue) const { if (LegacyType_IsSet) return LegacyType_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LegacyType_Optional and returns true if it has been set, otherwise returns false */
    bool GetLegacyType(int32& OutValue) const { if (LegacyType_IsSet) OutValue = LegacyType_Optional; return LegacyType_IsSet; }
    /** @brief Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr */
    int32* GetLegacyTypeOrNull() { if (LegacyType_IsSet) return &LegacyType_Optional; return nullptr; }
    /** @brief Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetLegacyTypeOrNull() const { if (LegacyType_IsSet) return &LegacyType_Optional; return nullptr; }
    /** @brief Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true */
    void SetLegacyType(int32 NewValue) { LegacyType_Optional = NewValue; LegacyType_IsSet = true; }
     /** @brief Clears the value of LegacyType_Optional and sets LegacyType_IsSet to false */
    void ClearLegacyType() { LegacyType_Optional = 0; LegacyType_IsSet = false; }
    /** @brief Returns true if LegacyType_Optional is set and matches the default value */
    bool IsLegacyTypeDefaultValue() const { return LegacyType_IsSet && LegacyType_Optional == 0; }
    /** @brief Sets the value of LegacyType_Optional to its default and also sets LegacyType_IsSet to true */
    void SetLegacyTypeToDefault() { LegacyType_Optional = 0; LegacyType_IsSet = true; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 LegacySubtype_Optional{  };
    /** @brief true if LegacySubtype_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool LegacySubtype_IsSet{ false };
    /** @brief Gets the value of LegacySubtype_Optional, regardless of it having been set */
    int32& GetLegacySubtype() { return LegacySubtype_Optional; }
    /** @brief Gets the value of LegacySubtype_Optional, regardless of it having been set */
    const int32& GetLegacySubtype() const { return LegacySubtype_Optional; }
    /** @brief Gets the value of LegacySubtype_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetLegacySubtype(const int32& DefaultValue) const { if (LegacySubtype_IsSet) return LegacySubtype_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LegacySubtype_Optional and returns true if it has been set, otherwise returns false */
    bool GetLegacySubtype(int32& OutValue) const { if (LegacySubtype_IsSet) OutValue = LegacySubtype_Optional; return LegacySubtype_IsSet; }
    /** @brief Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr */
    int32* GetLegacySubtypeOrNull() { if (LegacySubtype_IsSet) return &LegacySubtype_Optional; return nullptr; }
    /** @brief Returns a pointer to LegacySubtype_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetLegacySubtypeOrNull() const { if (LegacySubtype_IsSet) return &LegacySubtype_Optional; return nullptr; }
    /** @brief Sets the value of LegacySubtype_Optional and also sets LegacySubtype_IsSet to true */
    void SetLegacySubtype(int32 NewValue) { LegacySubtype_Optional = NewValue; LegacySubtype_IsSet = true; }
     /** @brief Clears the value of LegacySubtype_Optional and sets LegacySubtype_IsSet to false */
    void ClearLegacySubtype() { LegacySubtype_Optional = 0; LegacySubtype_IsSet = false; }
    /** @brief Returns true if LegacySubtype_Optional is set and matches the default value */
    bool IsLegacySubtypeDefaultValue() const { return LegacySubtype_IsSet && LegacySubtype_Optional == 0; }
    /** @brief Sets the value of LegacySubtype_Optional to its default and also sets LegacySubtype_IsSet to true */
    void SetLegacySubtypeToDefault() { LegacySubtype_Optional = 0; LegacySubtype_IsSet = true; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 RefItemId_Optional{  };
    /** @brief true if RefItemId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool RefItemId_IsSet{ false };
    /** @brief Gets the value of RefItemId_Optional, regardless of it having been set */
    int32& GetRefItemId() { return RefItemId_Optional; }
    /** @brief Gets the value of RefItemId_Optional, regardless of it having been set */
    const int32& GetRefItemId() const { return RefItemId_Optional; }
    /** @brief Gets the value of RefItemId_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetRefItemId(const int32& DefaultValue) const { if (RefItemId_IsSet) return RefItemId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of RefItemId_Optional and returns true if it has been set, otherwise returns false */
    bool GetRefItemId(int32& OutValue) const { if (RefItemId_IsSet) OutValue = RefItemId_Optional; return RefItemId_IsSet; }
    /** @brief Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr */
    int32* GetRefItemIdOrNull() { if (RefItemId_IsSet) return &RefItemId_Optional; return nullptr; }
    /** @brief Returns a pointer to RefItemId_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetRefItemIdOrNull() const { if (RefItemId_IsSet) return &RefItemId_Optional; return nullptr; }
    /** @brief Sets the value of RefItemId_Optional and also sets RefItemId_IsSet to true */
    void SetRefItemId(int32 NewValue) { RefItemId_Optional = NewValue; RefItemId_IsSet = true; }
     /** @brief Clears the value of RefItemId_Optional and sets RefItemId_IsSet to false */
    void ClearRefItemId() { RefItemId_Optional = 0; RefItemId_IsSet = false; }
    /** @brief Returns true if RefItemId_Optional is set and matches the default value */
    bool IsRefItemIdDefaultValue() const { return RefItemId_IsSet && RefItemId_Optional == 0; }
    /** @brief Sets the value of RefItemId_Optional to its default and also sets RefItemId_IsSet to true */
    void SetRefItemIdToDefault() { RefItemId_Optional = 0; RefItemId_IsSet = true; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 AvailabilityFlags_Optional{  };
    /** @brief true if AvailabilityFlags_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool AvailabilityFlags_IsSet{ false };
    /** @brief Gets the value of AvailabilityFlags_Optional, regardless of it having been set */
    int32& GetAvailabilityFlags() { return AvailabilityFlags_Optional; }
    /** @brief Gets the value of AvailabilityFlags_Optional, regardless of it having been set */
    const int32& GetAvailabilityFlags() const { return AvailabilityFlags_Optional; }
    /** @brief Gets the value of AvailabilityFlags_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetAvailabilityFlags(const int32& DefaultValue) const { if (AvailabilityFlags_IsSet) return AvailabilityFlags_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of AvailabilityFlags_Optional and returns true if it has been set, otherwise returns false */
    bool GetAvailabilityFlags(int32& OutValue) const { if (AvailabilityFlags_IsSet) OutValue = AvailabilityFlags_Optional; return AvailabilityFlags_IsSet; }
    /** @brief Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr */
    int32* GetAvailabilityFlagsOrNull() { if (AvailabilityFlags_IsSet) return &AvailabilityFlags_Optional; return nullptr; }
    /** @brief Returns a pointer to AvailabilityFlags_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetAvailabilityFlagsOrNull() const { if (AvailabilityFlags_IsSet) return &AvailabilityFlags_Optional; return nullptr; }
    /** @brief Sets the value of AvailabilityFlags_Optional and also sets AvailabilityFlags_IsSet to true */
    void SetAvailabilityFlags(int32 NewValue) { AvailabilityFlags_Optional = NewValue; AvailabilityFlags_IsSet = true; }
     /** @brief Clears the value of AvailabilityFlags_Optional and sets AvailabilityFlags_IsSet to false */
    void ClearAvailabilityFlags() { AvailabilityFlags_Optional = 0; AvailabilityFlags_IsSet = false; }
    /** @brief Returns true if AvailabilityFlags_Optional is set and matches the default value */
    bool IsAvailabilityFlagsDefaultValue() const { return AvailabilityFlags_IsSet && AvailabilityFlags_Optional == 0; }
    /** @brief Sets the value of AvailabilityFlags_Optional to its default and also sets AvailabilityFlags_IsSet to true */
    void SetAvailabilityFlagsToDefault() { AvailabilityFlags_Optional = 0; AvailabilityFlags_IsSet = true; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 EntitledLootId_Optional{  };
    /** @brief true if EntitledLootId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool EntitledLootId_IsSet{ false };
    /** @brief Gets the value of EntitledLootId_Optional, regardless of it having been set */
    int32& GetEntitledLootId() { return EntitledLootId_Optional; }
    /** @brief Gets the value of EntitledLootId_Optional, regardless of it having been set */
    const int32& GetEntitledLootId() const { return EntitledLootId_Optional; }
    /** @brief Gets the value of EntitledLootId_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetEntitledLootId(const int32& DefaultValue) const { if (EntitledLootId_IsSet) return EntitledLootId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of EntitledLootId_Optional and returns true if it has been set, otherwise returns false */
    bool GetEntitledLootId(int32& OutValue) const { if (EntitledLootId_IsSet) OutValue = EntitledLootId_Optional; return EntitledLootId_IsSet; }
    /** @brief Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr */
    int32* GetEntitledLootIdOrNull() { if (EntitledLootId_IsSet) return &EntitledLootId_Optional; return nullptr; }
    /** @brief Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetEntitledLootIdOrNull() const { if (EntitledLootId_IsSet) return &EntitledLootId_Optional; return nullptr; }
    /** @brief Sets the value of EntitledLootId_Optional and also sets EntitledLootId_IsSet to true */
    void SetEntitledLootId(int32 NewValue) { EntitledLootId_Optional = NewValue; EntitledLootId_IsSet = true; }
     /** @brief Clears the value of EntitledLootId_Optional and sets EntitledLootId_IsSet to false */
    void ClearEntitledLootId() { EntitledLootId_Optional = 0; EntitledLootId_IsSet = false; }
    /** @brief Returns true if EntitledLootId_Optional is set and matches the default value */
    bool IsEntitledLootIdDefaultValue() const { return EntitledLootId_IsSet && EntitledLootId_Optional == 0; }
    /** @brief Sets the value of EntitledLootId_Optional to its default and also sets EntitledLootId_IsSet to true */
    void SetEntitledLootIdToDefault() { EntitledLootId_Optional = 0; EntitledLootId_IsSet = true; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 LevelXpTableId_Optional{  };
    /** @brief true if LevelXpTableId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool LevelXpTableId_IsSet{ false };
    /** @brief Gets the value of LevelXpTableId_Optional, regardless of it having been set */
    int32& GetLevelXpTableId() { return LevelXpTableId_Optional; }
    /** @brief Gets the value of LevelXpTableId_Optional, regardless of it having been set */
    const int32& GetLevelXpTableId() const { return LevelXpTableId_Optional; }
    /** @brief Gets the value of LevelXpTableId_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetLevelXpTableId(const int32& DefaultValue) const { if (LevelXpTableId_IsSet) return LevelXpTableId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LevelXpTableId_Optional and returns true if it has been set, otherwise returns false */
    bool GetLevelXpTableId(int32& OutValue) const { if (LevelXpTableId_IsSet) OutValue = LevelXpTableId_Optional; return LevelXpTableId_IsSet; }
    /** @brief Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr */
    int32* GetLevelXpTableIdOrNull() { if (LevelXpTableId_IsSet) return &LevelXpTableId_Optional; return nullptr; }
    /** @brief Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetLevelXpTableIdOrNull() const { if (LevelXpTableId_IsSet) return &LevelXpTableId_Optional; return nullptr; }
    /** @brief Sets the value of LevelXpTableId_Optional and also sets LevelXpTableId_IsSet to true */
    void SetLevelXpTableId(int32 NewValue) { LevelXpTableId_Optional = NewValue; LevelXpTableId_IsSet = true; }
     /** @brief Clears the value of LevelXpTableId_Optional and sets LevelXpTableId_IsSet to false */
    void ClearLevelXpTableId() { LevelXpTableId_Optional = 0; LevelXpTableId_IsSet = false; }
    /** @brief Returns true if LevelXpTableId_Optional is set and matches the default value */
    bool IsLevelXpTableIdDefaultValue() const { return LevelXpTableId_IsSet && LevelXpTableId_Optional == 0; }
    /** @brief Sets the value of LevelXpTableId_Optional to its default and also sets LevelXpTableId_IsSet to true */
    void SetLevelXpTableIdToDefault() { LevelXpTableId_Optional = 0; LevelXpTableId_IsSet = true; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 LevelVendorId_Optional{  };
    /** @brief true if LevelVendorId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool LevelVendorId_IsSet{ false };
    /** @brief Gets the value of LevelVendorId_Optional, regardless of it having been set */
    int32& GetLevelVendorId() { return LevelVendorId_Optional; }
    /** @brief Gets the value of LevelVendorId_Optional, regardless of it having been set */
    const int32& GetLevelVendorId() const { return LevelVendorId_Optional; }
    /** @brief Gets the value of LevelVendorId_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetLevelVendorId(const int32& DefaultValue) const { if (LevelVendorId_IsSet) return LevelVendorId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LevelVendorId_Optional and returns true if it has been set, otherwise returns false */
    bool GetLevelVendorId(int32& OutValue) const { if (LevelVendorId_IsSet) OutValue = LevelVendorId_Optional; return LevelVendorId_IsSet; }
    /** @brief Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr */
    int32* GetLevelVendorIdOrNull() { if (LevelVendorId_IsSet) return &LevelVendorId_Optional; return nullptr; }
    /** @brief Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetLevelVendorIdOrNull() const { if (LevelVendorId_IsSet) return &LevelVendorId_Optional; return nullptr; }
    /** @brief Sets the value of LevelVendorId_Optional and also sets LevelVendorId_IsSet to true */
    void SetLevelVendorId(int32 NewValue) { LevelVendorId_Optional = NewValue; LevelVendorId_IsSet = true; }
     /** @brief Clears the value of LevelVendorId_Optional and sets LevelVendorId_IsSet to false */
    void ClearLevelVendorId() { LevelVendorId_Optional = 0; LevelVendorId_IsSet = false; }
    /** @brief Returns true if LevelVendorId_Optional is set and matches the default value */
    bool IsLevelVendorIdDefaultValue() const { return LevelVendorId_IsSet && LevelVendorId_Optional == 0; }
    /** @brief Sets the value of LevelVendorId_Optional to its default and also sets LevelVendorId_IsSet to true */
    void SetLevelVendorIdToDefault() { LevelVendorId_Optional = 0; LevelVendorId_IsSet = true; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 CouponDiscountCurrencyItemId_Optional{  };
    /** @brief true if CouponDiscountCurrencyItemId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CouponDiscountCurrencyItemId_IsSet{ false };
    /** @brief Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set */
    int32& GetCouponDiscountCurrencyItemId() { return CouponDiscountCurrencyItemId_Optional; }
    /** @brief Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set */
    const int32& GetCouponDiscountCurrencyItemId() const { return CouponDiscountCurrencyItemId_Optional; }
    /** @brief Gets the value of CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetCouponDiscountCurrencyItemId(const int32& DefaultValue) const { if (CouponDiscountCurrencyItemId_IsSet) return CouponDiscountCurrencyItemId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CouponDiscountCurrencyItemId_Optional and returns true if it has been set, otherwise returns false */
    bool GetCouponDiscountCurrencyItemId(int32& OutValue) const { if (CouponDiscountCurrencyItemId_IsSet) OutValue = CouponDiscountCurrencyItemId_Optional; return CouponDiscountCurrencyItemId_IsSet; }
    /** @brief Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr */
    int32* GetCouponDiscountCurrencyItemIdOrNull() { if (CouponDiscountCurrencyItemId_IsSet) return &CouponDiscountCurrencyItemId_Optional; return nullptr; }
    /** @brief Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetCouponDiscountCurrencyItemIdOrNull() const { if (CouponDiscountCurrencyItemId_IsSet) return &CouponDiscountCurrencyItemId_Optional; return nullptr; }
    /** @brief Sets the value of CouponDiscountCurrencyItemId_Optional and also sets CouponDiscountCurrencyItemId_IsSet to true */
    void SetCouponDiscountCurrencyItemId(int32 NewValue) { CouponDiscountCurrencyItemId_Optional = NewValue; CouponDiscountCurrencyItemId_IsSet = true; }
     /** @brief Clears the value of CouponDiscountCurrencyItemId_Optional and sets CouponDiscountCurrencyItemId_IsSet to false */
    void ClearCouponDiscountCurrencyItemId() { CouponDiscountCurrencyItemId_Optional = 0; CouponDiscountCurrencyItemId_IsSet = false; }
    /** @brief Returns true if CouponDiscountCurrencyItemId_Optional is set and matches the default value */
    bool IsCouponDiscountCurrencyItemIdDefaultValue() const { return CouponDiscountCurrencyItemId_IsSet && CouponDiscountCurrencyItemId_Optional == 0; }
    /** @brief Sets the value of CouponDiscountCurrencyItemId_Optional to its default and also sets CouponDiscountCurrencyItemId_IsSet to true */
    void SetCouponDiscountCurrencyItemIdToDefault() { CouponDiscountCurrencyItemId_Optional = 0; CouponDiscountCurrencyItemId_IsSet = true; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    float CouponDiscountPercentage_Optional{  };
    /** @brief true if CouponDiscountPercentage_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CouponDiscountPercentage_IsSet{ false };
    /** @brief Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set */
    float& GetCouponDiscountPercentage() { return CouponDiscountPercentage_Optional; }
    /** @brief Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set */
    const float& GetCouponDiscountPercentage() const { return CouponDiscountPercentage_Optional; }
    /** @brief Gets the value of CouponDiscountPercentage_Optional, if it has been set, otherwise it returns DefaultValue */
    const float& GetCouponDiscountPercentage(const float& DefaultValue) const { if (CouponDiscountPercentage_IsSet) return CouponDiscountPercentage_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CouponDiscountPercentage_Optional and returns true if it has been set, otherwise returns false */
    bool GetCouponDiscountPercentage(float& OutValue) const { if (CouponDiscountPercentage_IsSet) OutValue = CouponDiscountPercentage_Optional; return CouponDiscountPercentage_IsSet; }
    /** @brief Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr */
    float* GetCouponDiscountPercentageOrNull() { if (CouponDiscountPercentage_IsSet) return &CouponDiscountPercentage_Optional; return nullptr; }
    /** @brief Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr */
    const float* GetCouponDiscountPercentageOrNull() const { if (CouponDiscountPercentage_IsSet) return &CouponDiscountPercentage_Optional; return nullptr; }
    /** @brief Sets the value of CouponDiscountPercentage_Optional and also sets CouponDiscountPercentage_IsSet to true */
    void SetCouponDiscountPercentage(float NewValue) { CouponDiscountPercentage_Optional = NewValue; CouponDiscountPercentage_IsSet = true; }
     /** @brief Clears the value of CouponDiscountPercentage_Optional and sets CouponDiscountPercentage_IsSet to false */
    void ClearCouponDiscountPercentage() { CouponDiscountPercentage_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CouponConsumeOnUse_Optional{  };
    /** @brief true if CouponConsumeOnUse_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CouponConsumeOnUse_IsSet{ false };
    /** @brief Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set */
    bool& GetCouponConsumeOnUse() { return CouponConsumeOnUse_Optional; }
    /** @brief Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set */
    const bool& GetCouponConsumeOnUse() const { return CouponConsumeOnUse_Optional; }
    /** @brief Gets the value of CouponConsumeOnUse_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetCouponConsumeOnUse(const bool& DefaultValue) const { if (CouponConsumeOnUse_IsSet) return CouponConsumeOnUse_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CouponConsumeOnUse_Optional and returns true if it has been set, otherwise returns false */
    bool GetCouponConsumeOnUse(bool& OutValue) const { if (CouponConsumeOnUse_IsSet) OutValue = CouponConsumeOnUse_Optional; return CouponConsumeOnUse_IsSet; }
    /** @brief Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr */
    bool* GetCouponConsumeOnUseOrNull() { if (CouponConsumeOnUse_IsSet) return &CouponConsumeOnUse_Optional; return nullptr; }
    /** @brief Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetCouponConsumeOnUseOrNull() const { if (CouponConsumeOnUse_IsSet) return &CouponConsumeOnUse_Optional; return nullptr; }
    /** @brief Sets the value of CouponConsumeOnUse_Optional and also sets CouponConsumeOnUse_IsSet to true */
    void SetCouponConsumeOnUse(bool NewValue) { CouponConsumeOnUse_Optional = NewValue; CouponConsumeOnUse_IsSet = true; }
     /** @brief Clears the value of CouponConsumeOnUse_Optional and sets CouponConsumeOnUse_IsSet to false */
    void ClearCouponConsumeOnUse() { CouponConsumeOnUse_Optional = false; CouponConsumeOnUse_IsSet = false; }
    /** @brief Returns true if CouponConsumeOnUse_Optional is set and matches the default value */
    bool IsCouponConsumeOnUseDefaultValue() const { return CouponConsumeOnUse_IsSet && CouponConsumeOnUse_Optional == false; }
    /** @brief Sets the value of CouponConsumeOnUse_Optional to its default and also sets CouponConsumeOnUse_IsSet to true */
    void SetCouponConsumeOnUseToDefault() { CouponConsumeOnUse_Optional = false; CouponConsumeOnUse_IsSet = true; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 ItemPortalUseRulesetId_Optional{  };
    /** @brief true if ItemPortalUseRulesetId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool ItemPortalUseRulesetId_IsSet{ false };
    /** @brief Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set */
    int32& GetItemPortalUseRulesetId() { return ItemPortalUseRulesetId_Optional; }
    /** @brief Gets the value of ItemPortalUseRulesetId_Optional, regardless of it having been set */
    const int32& GetItemPortalUseRulesetId() const { return ItemPortalUseRulesetId_Optional; }
    /** @brief Gets the value of ItemPortalUseRulesetId_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetItemPortalUseRulesetId(const int32& DefaultValue) const { if (ItemPortalUseRulesetId_IsSet) return ItemPortalUseRulesetId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ItemPortalUseRulesetId_Optional and returns true if it has been set, otherwise returns false */
    bool GetItemPortalUseRulesetId(int32& OutValue) const { if (ItemPortalUseRulesetId_IsSet) OutValue = ItemPortalUseRulesetId_Optional; return ItemPortalUseRulesetId_IsSet; }
    /** @brief Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr */
    int32* GetItemPortalUseRulesetIdOrNull() { if (ItemPortalUseRulesetId_IsSet) return &ItemPortalUseRulesetId_Optional; return nullptr; }
    /** @brief Returns a pointer to ItemPortalUseRulesetId_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetItemPortalUseRulesetIdOrNull() const { if (ItemPortalUseRulesetId_IsSet) return &ItemPortalUseRulesetId_Optional; return nullptr; }
    /** @brief Sets the value of ItemPortalUseRulesetId_Optional and also sets ItemPortalUseRulesetId_IsSet to true */
    void SetItemPortalUseRulesetId(int32 NewValue) { ItemPortalUseRulesetId_Optional = NewValue; ItemPortalUseRulesetId_IsSet = true; }
     /** @brief Clears the value of ItemPortalUseRulesetId_Optional and sets ItemPortalUseRulesetId_IsSet to false */
    void ClearItemPortalUseRulesetId() { ItemPortalUseRulesetId_Optional = 0; ItemPortalUseRulesetId_IsSet = false; }
    /** @brief Returns true if ItemPortalUseRulesetId_Optional is set and matches the default value */
    bool IsItemPortalUseRulesetIdDefaultValue() const { return ItemPortalUseRulesetId_IsSet && ItemPortalUseRulesetId_Optional == 0; }
    /** @brief Sets the value of ItemPortalUseRulesetId_Optional to its default and also sets ItemPortalUseRulesetId_IsSet to true */
    void SetItemPortalUseRulesetIdToDefault() { ItemPortalUseRulesetId_Optional = 0; ItemPortalUseRulesetId_IsSet = true; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString InventoryBucketUseRuleSetId_Optional{  };
    /** @brief true if InventoryBucketUseRuleSetId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool InventoryBucketUseRuleSetId_IsSet{ false };
    /** @brief Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set */
    FString& GetInventoryBucketUseRuleSetId() { return InventoryBucketUseRuleSetId_Optional; }
    /** @brief Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set */
    const FString& GetInventoryBucketUseRuleSetId() const { return InventoryBucketUseRuleSetId_Optional; }
    /** @brief Gets the value of InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetInventoryBucketUseRuleSetId(const FString& DefaultValue) const { if (InventoryBucketUseRuleSetId_IsSet) return InventoryBucketUseRuleSetId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of InventoryBucketUseRuleSetId_Optional and returns true if it has been set, otherwise returns false */
    bool GetInventoryBucketUseRuleSetId(FString& OutValue) const { if (InventoryBucketUseRuleSetId_IsSet) OutValue = InventoryBucketUseRuleSetId_Optional; return InventoryBucketUseRuleSetId_IsSet; }
    /** @brief Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr */
    FString* GetInventoryBucketUseRuleSetIdOrNull() { if (InventoryBucketUseRuleSetId_IsSet) return &InventoryBucketUseRuleSetId_Optional; return nullptr; }
    /** @brief Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetInventoryBucketUseRuleSetIdOrNull() const { if (InventoryBucketUseRuleSetId_IsSet) return &InventoryBucketUseRuleSetId_Optional; return nullptr; }
    /** @brief Sets the value of InventoryBucketUseRuleSetId_Optional and also sets InventoryBucketUseRuleSetId_IsSet to true */
    void SetInventoryBucketUseRuleSetId(FString NewValue) { InventoryBucketUseRuleSetId_Optional = NewValue; InventoryBucketUseRuleSetId_IsSet = true; }
     /** @brief Clears the value of InventoryBucketUseRuleSetId_Optional and sets InventoryBucketUseRuleSetId_IsSet to false */
    void ClearInventoryBucketUseRuleSetId() { InventoryBucketUseRuleSetId_IsSet = false; }

    /** @brief List of Loot IDs this item can discount */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<int32> CouponDiscountLoot_Optional{  };
    /** @brief true if CouponDiscountLoot_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CouponDiscountLoot_IsSet{ false };
    /** @brief Gets the value of CouponDiscountLoot_Optional, regardless of it having been set */
    TArray<int32>& GetCouponDiscountLoot() { return CouponDiscountLoot_Optional; }
    /** @brief Gets the value of CouponDiscountLoot_Optional, regardless of it having been set */
    const TArray<int32>& GetCouponDiscountLoot() const { return CouponDiscountLoot_Optional; }
    /** @brief Gets the value of CouponDiscountLoot_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<int32>& GetCouponDiscountLoot(const TArray<int32>& DefaultValue) const { if (CouponDiscountLoot_IsSet) return CouponDiscountLoot_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CouponDiscountLoot_Optional and returns true if it has been set, otherwise returns false */
    bool GetCouponDiscountLoot(TArray<int32>& OutValue) const { if (CouponDiscountLoot_IsSet) OutValue = CouponDiscountLoot_Optional; return CouponDiscountLoot_IsSet; }
    /** @brief Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr */
    TArray<int32>* GetCouponDiscountLootOrNull() { if (CouponDiscountLoot_IsSet) return &CouponDiscountLoot_Optional; return nullptr; }
    /** @brief Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr */
    const TArray<int32>* GetCouponDiscountLootOrNull() const { if (CouponDiscountLoot_IsSet) return &CouponDiscountLoot_Optional; return nullptr; }
    /** @brief Sets the value of CouponDiscountLoot_Optional and also sets CouponDiscountLoot_IsSet to true */
    void SetCouponDiscountLoot(TArray<int32> NewValue) { CouponDiscountLoot_Optional = NewValue; CouponDiscountLoot_IsSet = true; }
     /** @brief Clears the value of CouponDiscountLoot_Optional and sets CouponDiscountLoot_IsSet to false */
    void ClearCouponDiscountLoot() { CouponDiscountLoot_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_CacheInfo CacheInfo_Optional{  };
    /** @brief true if CacheInfo_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
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
