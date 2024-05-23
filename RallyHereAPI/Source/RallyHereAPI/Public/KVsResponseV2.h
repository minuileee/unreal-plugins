// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "KVsResponseV2.generated.h"

/** @defgroup RHAPI_KVsResponseV2 RallyHere API Model KVsResponseV2
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_KVsResponseV2 : public FRHAPI_Model
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

	/** @brief The list of key/value pairs */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TMap<FString, FString> Kvs_Optional{  };
	/** @brief true if Kvs_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Kvs_IsSet{ false };
	/** @brief Gets the value of Kvs_Optional, regardless of it having been set */
	TMap<FString, FString>& GetKvs() { return Kvs_Optional; }
	/** @brief Gets the value of Kvs_Optional, regardless of it having been set */
	const TMap<FString, FString>& GetKvs() const { return Kvs_Optional; }
	/** @brief Gets the value of Kvs_Optional, if it has been set, otherwise it returns DefaultValue */
	const TMap<FString, FString>& GetKvs(const TMap<FString, FString>& DefaultValue) const { if (Kvs_IsSet) return Kvs_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Kvs_Optional and returns true if it has been set, otherwise returns false */
	bool GetKvs(TMap<FString, FString>& OutValue) const { if (Kvs_IsSet) OutValue = Kvs_Optional; return Kvs_IsSet; }
	/** @brief Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr */
	TMap<FString, FString>* GetKvsOrNull() { if (Kvs_IsSet) return &Kvs_Optional; return nullptr; }
	/** @brief Returns a pointer to Kvs_Optional, if it has been set, otherwise returns nullptr */
	const TMap<FString, FString>* GetKvsOrNull() const { if (Kvs_IsSet) return &Kvs_Optional; return nullptr; }
	/** @brief Sets the value of Kvs_Optional and also sets Kvs_IsSet to true */
	void SetKvs(const TMap<FString, FString>& NewValue) { Kvs_Optional = NewValue; Kvs_IsSet = true; }
	/** @brief Sets the value of Kvs_Optional and also sets Kvs_IsSet to true using move semantics */
	void SetKvs(TMap<FString, FString>&& NewValue) { Kvs_Optional = NewValue; Kvs_IsSet = true; }
	 /** @brief Clears the value of Kvs_Optional and sets Kvs_IsSet to false */
	void ClearKvs() { Kvs_IsSet = false; }

	/** @brief The list of secret key/value pairs */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TMap<FString, FString> SecretKvs_Optional{  };
	/** @brief true if SecretKvs_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool SecretKvs_IsSet{ false };
	/** @brief Gets the value of SecretKvs_Optional, regardless of it having been set */
	TMap<FString, FString>& GetSecretKvs() { return SecretKvs_Optional; }
	/** @brief Gets the value of SecretKvs_Optional, regardless of it having been set */
	const TMap<FString, FString>& GetSecretKvs() const { return SecretKvs_Optional; }
	/** @brief Gets the value of SecretKvs_Optional, if it has been set, otherwise it returns DefaultValue */
	const TMap<FString, FString>& GetSecretKvs(const TMap<FString, FString>& DefaultValue) const { if (SecretKvs_IsSet) return SecretKvs_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of SecretKvs_Optional and returns true if it has been set, otherwise returns false */
	bool GetSecretKvs(TMap<FString, FString>& OutValue) const { if (SecretKvs_IsSet) OutValue = SecretKvs_Optional; return SecretKvs_IsSet; }
	/** @brief Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr */
	TMap<FString, FString>* GetSecretKvsOrNull() { if (SecretKvs_IsSet) return &SecretKvs_Optional; return nullptr; }
	/** @brief Returns a pointer to SecretKvs_Optional, if it has been set, otherwise returns nullptr */
	const TMap<FString, FString>* GetSecretKvsOrNull() const { if (SecretKvs_IsSet) return &SecretKvs_Optional; return nullptr; }
	/** @brief Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true */
	void SetSecretKvs(const TMap<FString, FString>& NewValue) { SecretKvs_Optional = NewValue; SecretKvs_IsSet = true; }
	/** @brief Sets the value of SecretKvs_Optional and also sets SecretKvs_IsSet to true using move semantics */
	void SetSecretKvs(TMap<FString, FString>&& NewValue) { SecretKvs_Optional = NewValue; SecretKvs_IsSet = true; }
	 /** @brief Clears the value of SecretKvs_Optional and sets SecretKvs_IsSet to false */
	void ClearSecretKvs() { SecretKvs_IsSet = false; }
};

/** @} */
