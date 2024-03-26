// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "CreateInventoryRequest.h"
#include "Source.h"
#include "CreateInventoryRequests.generated.h"

/** @defgroup RHAPI_CreateInventoryRequests RallyHere API Model CreateInventoryRequests
 *  @{
 */

/**
 * @brief Collection of Create Inventory Requests. This will create new Inventory for each request. Each individual entry will be processed in the order they are specified in the collection.  &lt;b&gt;Note: Partial success is possible as each request is processed individually.&lt;/b&gt;
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_CreateInventoryRequests : public FRHAPI_Model
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
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_Source Source_Optional{  };
	/** @brief true if Source_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
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
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid ClientOrderRefId_Optional{  };
	/** @brief true if ClientOrderRefId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
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

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<FRHAPI_CreateInventoryRequest> Inventory{  };
	/** @brief Gets the value of Inventory */
	TArray<FRHAPI_CreateInventoryRequest>& GetInventory() { return Inventory; }
	/** @brief Gets the value of Inventory */
	const TArray<FRHAPI_CreateInventoryRequest>& GetInventory() const { return Inventory; }
	/** @brief Sets the value of Inventory */
	void SetInventory(TArray<FRHAPI_CreateInventoryRequest> NewValue) { Inventory = NewValue;  }
};

/** @} */
