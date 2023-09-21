// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "InventoryBucket.h"
#include "Source.h"
#include "UpdateInventoryRequest.generated.h"

/** @defgroup RHAPI_UpdateInventoryRequest RallyHere API Model UpdateInventoryRequest
 *  @{
 */

/**
 * @brief Request to Update an existing Inventory entry. If the Inventory entry does not exist, then the request will fail.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_UpdateInventoryRequest : public FRHAPI_Model
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

    /** @brief Source of this Inventory Operation. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_Source Source_Optional{  };
    /** @brief true if Source_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Source_IsSet{ false };
    /** @brief Gets the value of Source_Optional, regardless of it having been set */
    ERHAPI_Source& GetSource() { return Source_Optional; }
    /** @brief Gets the value of Source_Optional, regardless of it having been set */
    const ERHAPI_Source& GetSource() const { return Source_Optional; }
    /** @brief Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_Source& GetSource(const ERHAPI_Source& DefaultValue) const { if (Source_IsSet) return Source_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false */
    bool GetSource(ERHAPI_Source& OutValue) const { if (Source_IsSet) OutValue = Source_Optional; return Source_IsSet; }
    /** @brief Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_Source* GetSourceOrNull() { if (Source_IsSet) return &Source_Optional; return nullptr; }
    /** @brief Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_Source* GetSourceOrNull() const { if (Source_IsSet) return &Source_Optional; return nullptr; }
    /** @brief Sets the value of Source_Optional and also sets Source_IsSet to true */
    void SetSource(ERHAPI_Source NewValue) { Source_Optional = NewValue; Source_IsSet = true; }
     /** @brief Clears the value of Source_Optional and sets Source_IsSet to false */
    void ClearSource() { Source_IsSet = false; }

    /** @brief Arbitrary UUID that can be used by clients to correlate Order requests with Order responses. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid ClientOrderRefId_Optional{  };
    /** @brief true if ClientOrderRefId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool ClientOrderRefId_IsSet{ false };
    /** @brief Gets the value of ClientOrderRefId_Optional, regardless of it having been set */
    FGuid& GetClientOrderRefId() { return ClientOrderRefId_Optional; }
    /** @brief Gets the value of ClientOrderRefId_Optional, regardless of it having been set */
    const FGuid& GetClientOrderRefId() const { return ClientOrderRefId_Optional; }
    /** @brief Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetClientOrderRefId(const FGuid& DefaultValue) const { if (ClientOrderRefId_IsSet) return ClientOrderRefId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false */
    bool GetClientOrderRefId(FGuid& OutValue) const { if (ClientOrderRefId_IsSet) OutValue = ClientOrderRefId_Optional; return ClientOrderRefId_IsSet; }
    /** @brief Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetClientOrderRefIdOrNull() { if (ClientOrderRefId_IsSet) return &ClientOrderRefId_Optional; return nullptr; }
    /** @brief Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetClientOrderRefIdOrNull() const { if (ClientOrderRefId_IsSet) return &ClientOrderRefId_Optional; return nullptr; }
    /** @brief Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true */
    void SetClientOrderRefId(FGuid NewValue) { ClientOrderRefId_Optional = NewValue; ClientOrderRefId_IsSet = true; }
     /** @brief Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false */
    void ClearClientOrderRefId() { ClientOrderRefId_IsSet = false; }

    /** @brief Inventory Bucket for this Inventory Operation. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_InventoryBucket Bucket_Optional{  };
    /** @brief true if Bucket_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Bucket_IsSet{ false };
    /** @brief Gets the value of Bucket_Optional, regardless of it having been set */
    ERHAPI_InventoryBucket& GetBucket() { return Bucket_Optional; }
    /** @brief Gets the value of Bucket_Optional, regardless of it having been set */
    const ERHAPI_InventoryBucket& GetBucket() const { return Bucket_Optional; }
    /** @brief Gets the value of Bucket_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_InventoryBucket& GetBucket(const ERHAPI_InventoryBucket& DefaultValue) const { if (Bucket_IsSet) return Bucket_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Bucket_Optional and returns true if it has been set, otherwise returns false */
    bool GetBucket(ERHAPI_InventoryBucket& OutValue) const { if (Bucket_IsSet) OutValue = Bucket_Optional; return Bucket_IsSet; }
    /** @brief Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_InventoryBucket* GetBucketOrNull() { if (Bucket_IsSet) return &Bucket_Optional; return nullptr; }
    /** @brief Returns a pointer to Bucket_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_InventoryBucket* GetBucketOrNull() const { if (Bucket_IsSet) return &Bucket_Optional; return nullptr; }
    /** @brief Sets the value of Bucket_Optional and also sets Bucket_IsSet to true */
    void SetBucket(ERHAPI_InventoryBucket NewValue) { Bucket_Optional = NewValue; Bucket_IsSet = true; }
     /** @brief Clears the value of Bucket_Optional and sets Bucket_IsSet to false */
    void ClearBucket() { Bucket_IsSet = false; }

    /** @brief Count for this Inventory Operation. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 Count_Optional{  };
    /** @brief true if Count_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Count_IsSet{ false };
    /** @brief Gets the value of Count_Optional, regardless of it having been set */
    int32& GetCount() { return Count_Optional; }
    /** @brief Gets the value of Count_Optional, regardless of it having been set */
    const int32& GetCount() const { return Count_Optional; }
    /** @brief Gets the value of Count_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetCount(const int32& DefaultValue) const { if (Count_IsSet) return Count_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Count_Optional and returns true if it has been set, otherwise returns false */
    bool GetCount(int32& OutValue) const { if (Count_IsSet) OutValue = Count_Optional; return Count_IsSet; }
    /** @brief Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr */
    int32* GetCountOrNull() { if (Count_IsSet) return &Count_Optional; return nullptr; }
    /** @brief Returns a pointer to Count_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetCountOrNull() const { if (Count_IsSet) return &Count_Optional; return nullptr; }
    /** @brief Sets the value of Count_Optional and also sets Count_IsSet to true */
    void SetCount(int32 NewValue) { Count_Optional = NewValue; Count_IsSet = true; }
     /** @brief Clears the value of Count_Optional and sets Count_IsSet to false */
    void ClearCount() { Count_Optional = 1; Count_IsSet = false; }
    /** @brief Returns true if Count_Optional is set and matches the default value */
    bool IsCountDefaultValue() const { return Count_IsSet && Count_Optional == 1; }
    /** @brief Sets the value of Count_Optional to its default and also sets Count_IsSet to true */
    void SetCountToDefault() { Count_Optional = 1; Count_IsSet = true; }

    /** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FDateTime Expires_Optional{  };
    /** @brief true if Expires_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
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

    /** @brief Arbitrary data map that can be set to add additional data to Inventory. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TMap<FString, FString> CustomData_Optional{  };
    /** @brief true if CustomData_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
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

    /** @brief Item ID for this Inventory Operation. If the Item ID is not set during an Update Inventory Request, then the Item ID will not be modified on the existing Inventory Record. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 ItemId_Optional{  };
    /** @brief true if ItemId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
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
};

/** @} */