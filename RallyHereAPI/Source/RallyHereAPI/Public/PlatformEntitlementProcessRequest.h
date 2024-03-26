// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "ClientType.h"
#include "PlatformEntitlement.h"
#include "PlatformRegion.h"
#include "PlatformEntitlementProcessRequest.generated.h"

/** @defgroup RHAPI_PlatformEntitlementProcessRequest RallyHere API Model PlatformEntitlementProcessRequest
 *  @{
 */

/**
 * @brief Request to process a platform entitlement
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlatformEntitlementProcessRequest : public FRHAPI_Model
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

	/** @brief unique id for this transaction on the platform */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString TransactionId{  };
	/** @brief Gets the value of TransactionId */
	FString& GetTransactionId() { return TransactionId; }
	/** @brief Gets the value of TransactionId */
	const FString& GetTransactionId() const { return TransactionId; }
	/** @brief Sets the value of TransactionId */
	void SetTransactionId(FString NewValue) { TransactionId = NewValue;  }

	/** @brief Platform token that can be used to verify the identity of the user */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString PlatformToken{  };
	/** @brief Gets the value of PlatformToken */
	FString& GetPlatformToken() { return PlatformToken; }
	/** @brief Gets the value of PlatformToken */
	const FString& GetPlatformToken() const { return PlatformToken; }
	/** @brief Sets the value of PlatformToken */
	void SetPlatformToken(FString NewValue) { PlatformToken = NewValue;  }

	/** @brief Platform this entitlement was purchased was made on */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString PlatformId{  };
	/** @brief Gets the value of PlatformId */
	FString& GetPlatformId() { return PlatformId; }
	/** @brief Gets the value of PlatformId */
	const FString& GetPlatformId() const { return PlatformId; }
	/** @brief Sets the value of PlatformId */
	void SetPlatformId(FString NewValue) { PlatformId = NewValue;  }

	/** @brief region this purchase was made in */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_PlatformRegion PlatformRegion{  };
	/** @brief Gets the value of PlatformRegion */
	ERHAPI_PlatformRegion& GetPlatformRegion() { return PlatformRegion; }
	/** @brief Gets the value of PlatformRegion */
	const ERHAPI_PlatformRegion& GetPlatformRegion() const { return PlatformRegion; }
	/** @brief Sets the value of PlatformRegion */
	void SetPlatformRegion(ERHAPI_PlatformRegion NewValue) { PlatformRegion = NewValue;  }

	/** @brief client type this purchase was made on */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_ClientType ClientType{  };
	/** @brief Gets the value of ClientType */
	ERHAPI_ClientType& GetClientType() { return ClientType; }
	/** @brief Gets the value of ClientType */
	const ERHAPI_ClientType& GetClientType() const { return ClientType; }
	/** @brief Sets the value of ClientType */
	void SetClientType(ERHAPI_ClientType NewValue) { ClientType = NewValue;  }

	/** @brief Platform entitlements to process */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<FRHAPI_PlatformEntitlement> Entitlements_Optional{  };
	/** @brief true if Entitlements_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Entitlements_IsSet{ false };
	/** @brief Gets the value of Entitlements_Optional, regardless of it having been set */
	TArray<FRHAPI_PlatformEntitlement>& GetEntitlements() { return Entitlements_Optional; }
	/** @brief Gets the value of Entitlements_Optional, regardless of it having been set */
	const TArray<FRHAPI_PlatformEntitlement>& GetEntitlements() const { return Entitlements_Optional; }
	/** @brief Gets the value of Entitlements_Optional, if it has been set, otherwise it returns DefaultValue */
	const TArray<FRHAPI_PlatformEntitlement>& GetEntitlements(const TArray<FRHAPI_PlatformEntitlement>& DefaultValue) const { if (Entitlements_IsSet) return Entitlements_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Entitlements_Optional and returns true if it has been set, otherwise returns false */
	bool GetEntitlements(TArray<FRHAPI_PlatformEntitlement>& OutValue) const { if (Entitlements_IsSet) OutValue = Entitlements_Optional; return Entitlements_IsSet; }
	/** @brief Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr */
	TArray<FRHAPI_PlatformEntitlement>* GetEntitlementsOrNull() { if (Entitlements_IsSet) return &Entitlements_Optional; return nullptr; }
	/** @brief Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr */
	const TArray<FRHAPI_PlatformEntitlement>* GetEntitlementsOrNull() const { if (Entitlements_IsSet) return &Entitlements_Optional; return nullptr; }
	/** @brief Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true */
	void SetEntitlements(TArray<FRHAPI_PlatformEntitlement> NewValue) { Entitlements_Optional = NewValue; Entitlements_IsSet = true; }
	 /** @brief Clears the value of Entitlements_Optional and sets Entitlements_IsSet to false */
	void ClearEntitlements() { Entitlements_IsSet = false; }
};

/** @} */
