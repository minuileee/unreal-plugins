// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PlayerInventoryChange.h"
#include "PlayerOrderCreate.h"
#include "PlayerOrderDetailType.h"
#include "PlayerOrderDetail.generated.h"

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlayerOrderDetail : public FRHAPI_Model
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
    ERHAPI_PlayerOrderDetailType Type{  };
    /** @brief Gets the value of Type */
    ERHAPI_PlayerOrderDetailType& GetType() { return Type; }
    /** @brief Gets the value of Type */
    const ERHAPI_PlayerOrderDetailType& GetType() const { return Type; }
    /** @brief Sets the value of Type */
    void SetType(ERHAPI_PlayerOrderDetailType NewValue) { Type = NewValue;  }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 LootId_Optional{  };
    /** @brief true if LootId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
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

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_PlayerInventoryChange InvChange_Optional{  };
    /** @brief true if InvChange_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool InvChange_IsSet{ false };
    /** @brief Gets the value of InvChange_Optional, regardless of it having been set */
    FRHAPI_PlayerInventoryChange& GetInvChange() { return InvChange_Optional; }
    /** @brief Gets the value of InvChange_Optional, regardless of it having been set */
    const FRHAPI_PlayerInventoryChange& GetInvChange() const { return InvChange_Optional; }
    /** @brief Gets the value of InvChange_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_PlayerInventoryChange& GetInvChange(const FRHAPI_PlayerInventoryChange& DefaultValue) const { if (InvChange_IsSet) return InvChange_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of InvChange_Optional and returns true if it has been set, otherwise returns false */
    bool GetInvChange(FRHAPI_PlayerInventoryChange& OutValue) const { if (InvChange_IsSet) OutValue = InvChange_Optional; return InvChange_IsSet; }
    /** @brief Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_PlayerInventoryChange* GetInvChangeOrNull() { if (InvChange_IsSet) return &InvChange_Optional; return nullptr; }
    /** @brief Returns a pointer to InvChange_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_PlayerInventoryChange* GetInvChangeOrNull() const { if (InvChange_IsSet) return &InvChange_Optional; return nullptr; }
    /** @brief Sets the value of InvChange_Optional and also sets InvChange_IsSet to true */
    void SetInvChange(FRHAPI_PlayerInventoryChange NewValue) { InvChange_Optional = NewValue; InvChange_IsSet = true; }
     /** @brief Clears the value of InvChange_Optional and sets InvChange_IsSet to false */
    void ClearInvChange() { InvChange_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_PlayerOrderCreate Order_Optional{  };
    /** @brief true if Order_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Order_IsSet{ false };
    /** @brief Gets the value of Order_Optional, regardless of it having been set */
    FRHAPI_PlayerOrderCreate& GetOrder() { return Order_Optional; }
    /** @brief Gets the value of Order_Optional, regardless of it having been set */
    const FRHAPI_PlayerOrderCreate& GetOrder() const { return Order_Optional; }
    /** @brief Gets the value of Order_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_PlayerOrderCreate& GetOrder(const FRHAPI_PlayerOrderCreate& DefaultValue) const { if (Order_IsSet) return Order_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Order_Optional and returns true if it has been set, otherwise returns false */
    bool GetOrder(FRHAPI_PlayerOrderCreate& OutValue) const { if (Order_IsSet) OutValue = Order_Optional; return Order_IsSet; }
    /** @brief Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_PlayerOrderCreate* GetOrderOrNull() { if (Order_IsSet) return &Order_Optional; return nullptr; }
    /** @brief Returns a pointer to Order_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_PlayerOrderCreate* GetOrderOrNull() const { if (Order_IsSet) return &Order_Optional; return nullptr; }
    /** @brief Sets the value of Order_Optional and also sets Order_IsSet to true */
    void SetOrder(FRHAPI_PlayerOrderCreate NewValue) { Order_Optional = NewValue; Order_IsSet = true; }
     /** @brief Clears the value of Order_Optional and sets Order_IsSet to false */
    void ClearOrder() { Order_IsSet = false; }
};
