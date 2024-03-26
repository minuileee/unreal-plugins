// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "EntitlementActionType.h"
#include "EntitlementEventStatus.h"
#include "Platform.h"
#include "EntitlementEventRequest.generated.h"

/** @defgroup RHAPI_EntitlementEventRequest RallyHere API Model EntitlementEventRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_EntitlementEventRequest : public FRHAPI_Model
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

	/** @brief The type of the event */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_EntitlementActionType ActionType{  };
	/** @brief Gets the value of ActionType */
	ERHAPI_EntitlementActionType& GetActionType() { return ActionType; }
	/** @brief Gets the value of ActionType */
	const ERHAPI_EntitlementActionType& GetActionType() const { return ActionType; }
	/** @brief Sets the value of ActionType */
	void SetActionType(ERHAPI_EntitlementActionType NewValue) { ActionType = NewValue;  }

	/** @brief The status of the event */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_EntitlementEventStatus Status_Optional{  };
	/** @brief true if Status_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Status_IsSet{ false };
	/** @brief Gets the value of Status_Optional, regardless of it having been set */
	ERHAPI_EntitlementEventStatus& GetStatus() { return Status_Optional; }
	/** @brief Gets the value of Status_Optional, regardless of it having been set */
	const ERHAPI_EntitlementEventStatus& GetStatus() const { return Status_Optional; }
	/** @brief Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue */
	const ERHAPI_EntitlementEventStatus& GetStatus(const ERHAPI_EntitlementEventStatus& DefaultValue) const { if (Status_IsSet) return Status_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false */
	bool GetStatus(ERHAPI_EntitlementEventStatus& OutValue) const { if (Status_IsSet) OutValue = Status_Optional; return Status_IsSet; }
	/** @brief Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr */
	ERHAPI_EntitlementEventStatus* GetStatusOrNull() { if (Status_IsSet) return &Status_Optional; return nullptr; }
	/** @brief Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr */
	const ERHAPI_EntitlementEventStatus* GetStatusOrNull() const { if (Status_IsSet) return &Status_Optional; return nullptr; }
	/** @brief Sets the value of Status_Optional and also sets Status_IsSet to true */
	void SetStatus(ERHAPI_EntitlementEventStatus NewValue) { Status_Optional = NewValue; Status_IsSet = true; }
	 /** @brief Clears the value of Status_Optional and sets Status_IsSet to false */
	void ClearStatus() { Status_IsSet = false; }

	/** @brief Override the player UUID for the event.  If not provided, the active player for the platform user will be used */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid PlayerUuid_Optional{  };
	/** @brief true if PlayerUuid_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool PlayerUuid_IsSet{ false };
	/** @brief Gets the value of PlayerUuid_Optional, regardless of it having been set */
	FGuid& GetPlayerUuid() { return PlayerUuid_Optional; }
	/** @brief Gets the value of PlayerUuid_Optional, regardless of it having been set */
	const FGuid& GetPlayerUuid() const { return PlayerUuid_Optional; }
	/** @brief Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue */
	const FGuid& GetPlayerUuid(const FGuid& DefaultValue) const { if (PlayerUuid_IsSet) return PlayerUuid_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false */
	bool GetPlayerUuid(FGuid& OutValue) const { if (PlayerUuid_IsSet) OutValue = PlayerUuid_Optional; return PlayerUuid_IsSet; }
	/** @brief Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr */
	FGuid* GetPlayerUuidOrNull() { if (PlayerUuid_IsSet) return &PlayerUuid_Optional; return nullptr; }
	/** @brief Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr */
	const FGuid* GetPlayerUuidOrNull() const { if (PlayerUuid_IsSet) return &PlayerUuid_Optional; return nullptr; }
	/** @brief Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true */
	void SetPlayerUuid(FGuid NewValue) { PlayerUuid_Optional = NewValue; PlayerUuid_IsSet = true; }
	 /** @brief Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false */
	void ClearPlayerUuid() { PlayerUuid_IsSet = false; }

	/** @brief The platform for the event */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_Platform Platform{  };
	/** @brief Gets the value of Platform */
	ERHAPI_Platform& GetPlatform() { return Platform; }
	/** @brief Gets the value of Platform */
	const ERHAPI_Platform& GetPlatform() const { return Platform; }
	/** @brief Sets the value of Platform */
	void SetPlatform(ERHAPI_Platform NewValue) { Platform = NewValue;  }

	/** @brief The platform user ID for the event */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString PlatformUserId{  };
	/** @brief Gets the value of PlatformUserId */
	FString& GetPlatformUserId() { return PlatformUserId; }
	/** @brief Gets the value of PlatformUserId */
	const FString& GetPlatformUserId() const { return PlatformUserId; }
	/** @brief Sets the value of PlatformUserId */
	void SetPlatformUserId(FString NewValue) { PlatformUserId = NewValue;  }

	/** @brief The SKU for the event */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString Sku{  };
	/** @brief Gets the value of Sku */
	FString& GetSku() { return Sku; }
	/** @brief Gets the value of Sku */
	const FString& GetSku() const { return Sku; }
	/** @brief Sets the value of Sku */
	void SetSku(FString NewValue) { Sku = NewValue;  }

	/** @brief The quantity for the event */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 Quantity_Optional{  };
	/** @brief true if Quantity_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Quantity_IsSet{ false };
	/** @brief Gets the value of Quantity_Optional, regardless of it having been set */
	int32& GetQuantity() { return Quantity_Optional; }
	/** @brief Gets the value of Quantity_Optional, regardless of it having been set */
	const int32& GetQuantity() const { return Quantity_Optional; }
	/** @brief Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue */
	const int32& GetQuantity(const int32& DefaultValue) const { if (Quantity_IsSet) return Quantity_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false */
	bool GetQuantity(int32& OutValue) const { if (Quantity_IsSet) OutValue = Quantity_Optional; return Quantity_IsSet; }
	/** @brief Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr */
	int32* GetQuantityOrNull() { if (Quantity_IsSet) return &Quantity_Optional; return nullptr; }
	/** @brief Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr */
	const int32* GetQuantityOrNull() const { if (Quantity_IsSet) return &Quantity_Optional; return nullptr; }
	/** @brief Sets the value of Quantity_Optional and also sets Quantity_IsSet to true */
	void SetQuantity(int32 NewValue) { Quantity_Optional = NewValue; Quantity_IsSet = true; }
	 /** @brief Clears the value of Quantity_Optional and sets Quantity_IsSet to false */
	void ClearQuantity() { Quantity_Optional = 1; Quantity_IsSet = false; }
	/** @brief Returns true if Quantity_Optional is set and matches the default value */
	bool IsQuantityDefaultValue() const { return Quantity_IsSet && Quantity_Optional == 1; }
	/** @brief Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true */
	void SetQuantityToDefault() { Quantity_Optional = 1; Quantity_IsSet = true; }

	/** @brief The external transaction ID for the event */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString PlatformTransactionId{  };
	/** @brief Gets the value of PlatformTransactionId */
	FString& GetPlatformTransactionId() { return PlatformTransactionId; }
	/** @brief Gets the value of PlatformTransactionId */
	const FString& GetPlatformTransactionId() const { return PlatformTransactionId; }
	/** @brief Sets the value of PlatformTransactionId */
	void SetPlatformTransactionId(FString NewValue) { PlatformTransactionId = NewValue;  }

	/** @brief The platform specific data for the event */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_JsonObject PlatformData_Optional{  };
	/** @brief true if PlatformData_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool PlatformData_IsSet{ false };
	/** @brief Gets the value of PlatformData_Optional, regardless of it having been set */
	FRHAPI_JsonObject& GetPlatformData() { return PlatformData_Optional; }
	/** @brief Gets the value of PlatformData_Optional, regardless of it having been set */
	const FRHAPI_JsonObject& GetPlatformData() const { return PlatformData_Optional; }
	/** @brief Gets the value of PlatformData_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_JsonObject& GetPlatformData(const FRHAPI_JsonObject& DefaultValue) const { if (PlatformData_IsSet) return PlatformData_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of PlatformData_Optional and returns true if it has been set, otherwise returns false */
	bool GetPlatformData(FRHAPI_JsonObject& OutValue) const { if (PlatformData_IsSet) OutValue = PlatformData_Optional; return PlatformData_IsSet; }
	/** @brief Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_JsonObject* GetPlatformDataOrNull() { if (PlatformData_IsSet) return &PlatformData_Optional; return nullptr; }
	/** @brief Returns a pointer to PlatformData_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_JsonObject* GetPlatformDataOrNull() const { if (PlatformData_IsSet) return &PlatformData_Optional; return nullptr; }
	/** @brief Sets the value of PlatformData_Optional and also sets PlatformData_IsSet to true */
	void SetPlatformData(FRHAPI_JsonObject NewValue) { PlatformData_Optional = NewValue; PlatformData_IsSet = true; }
	 /** @brief Clears the value of PlatformData_Optional and sets PlatformData_IsSet to false */
	void ClearPlatformData() { PlatformData_IsSet = false; }
};

/** @} */
