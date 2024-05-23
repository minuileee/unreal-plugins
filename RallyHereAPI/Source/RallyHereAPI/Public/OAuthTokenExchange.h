// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "OAuthTokenEchangeGrantType.h"
#include "OAuthTokenExchange.generated.h"

/** @defgroup RHAPI_OAuthTokenExchange RallyHere API Model OAuthTokenExchange
 *  @{
 */

/**
 * @brief OAuth token exchange request.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_OAuthTokenExchange : public FRHAPI_Model
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

	/** @brief Grant type for the OAuth exchange. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_OAuthTokenEchangeGrantType GrantType{  };
	/** @brief Gets the value of GrantType */
	ERHAPI_OAuthTokenEchangeGrantType& GetGrantType() { return GrantType; }
	/** @brief Gets the value of GrantType */
	const ERHAPI_OAuthTokenEchangeGrantType& GetGrantType() const { return GrantType; }
	/** @brief Sets the value of GrantType */
	void SetGrantType(const ERHAPI_OAuthTokenEchangeGrantType& NewValue) { GrantType = NewValue;  }
	/** @brief Sets the value of GrantType using move semantics */
	void SetGrantType(ERHAPI_OAuthTokenEchangeGrantType&& NewValue) { GrantType = NewValue;  }

	/** @brief authorization_code for the OAuth exchange. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString Code{  };
	/** @brief Gets the value of Code */
	FString& GetCode() { return Code; }
	/** @brief Gets the value of Code */
	const FString& GetCode() const { return Code; }
	/** @brief Sets the value of Code */
	void SetCode(const FString& NewValue) { Code = NewValue;  }
	/** @brief Sets the value of Code using move semantics */
	void SetCode(FString&& NewValue) { Code = NewValue;  }

	/** @brief If true, the user has accepted the EULA. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool AcceptedEula_Optional{  };
	/** @brief true if AcceptedEula_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool AcceptedEula_IsSet{ false };
	/** @brief Gets the value of AcceptedEula_Optional, regardless of it having been set */
	bool& GetAcceptedEula() { return AcceptedEula_Optional; }
	/** @brief Gets the value of AcceptedEula_Optional, regardless of it having been set */
	const bool& GetAcceptedEula() const { return AcceptedEula_Optional; }
	/** @brief Gets the value of AcceptedEula_Optional, if it has been set, otherwise it returns DefaultValue */
	const bool& GetAcceptedEula(const bool& DefaultValue) const { if (AcceptedEula_IsSet) return AcceptedEula_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of AcceptedEula_Optional and returns true if it has been set, otherwise returns false */
	bool GetAcceptedEula(bool& OutValue) const { if (AcceptedEula_IsSet) OutValue = AcceptedEula_Optional; return AcceptedEula_IsSet; }
	/** @brief Returns a pointer to AcceptedEula_Optional, if it has been set, otherwise returns nullptr */
	bool* GetAcceptedEulaOrNull() { if (AcceptedEula_IsSet) return &AcceptedEula_Optional; return nullptr; }
	/** @brief Returns a pointer to AcceptedEula_Optional, if it has been set, otherwise returns nullptr */
	const bool* GetAcceptedEulaOrNull() const { if (AcceptedEula_IsSet) return &AcceptedEula_Optional; return nullptr; }
	/** @brief Sets the value of AcceptedEula_Optional and also sets AcceptedEula_IsSet to true */
	void SetAcceptedEula(const bool& NewValue) { AcceptedEula_Optional = NewValue; AcceptedEula_IsSet = true; }
	/** @brief Sets the value of AcceptedEula_Optional and also sets AcceptedEula_IsSet to true using move semantics */
	void SetAcceptedEula(bool&& NewValue) { AcceptedEula_Optional = NewValue; AcceptedEula_IsSet = true; }
	 /** @brief Clears the value of AcceptedEula_Optional and sets AcceptedEula_IsSet to false */
	void ClearAcceptedEula() { AcceptedEula_Optional = false; AcceptedEula_IsSet = false; }
	/** @brief Returns true if AcceptedEula_Optional is set and matches the default value */
	bool IsAcceptedEulaDefaultValue() const { return AcceptedEula_IsSet && AcceptedEula_Optional == false; }
	/** @brief Sets the value of AcceptedEula_Optional to its default and also sets AcceptedEula_IsSet to true */
	void SetAcceptedEulaToDefault() { AcceptedEula_Optional = false; AcceptedEula_IsSet = true; }

	/** @brief If true, the user has accepted the TOS. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool AcceptedTos_Optional{  };
	/** @brief true if AcceptedTos_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool AcceptedTos_IsSet{ false };
	/** @brief Gets the value of AcceptedTos_Optional, regardless of it having been set */
	bool& GetAcceptedTos() { return AcceptedTos_Optional; }
	/** @brief Gets the value of AcceptedTos_Optional, regardless of it having been set */
	const bool& GetAcceptedTos() const { return AcceptedTos_Optional; }
	/** @brief Gets the value of AcceptedTos_Optional, if it has been set, otherwise it returns DefaultValue */
	const bool& GetAcceptedTos(const bool& DefaultValue) const { if (AcceptedTos_IsSet) return AcceptedTos_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of AcceptedTos_Optional and returns true if it has been set, otherwise returns false */
	bool GetAcceptedTos(bool& OutValue) const { if (AcceptedTos_IsSet) OutValue = AcceptedTos_Optional; return AcceptedTos_IsSet; }
	/** @brief Returns a pointer to AcceptedTos_Optional, if it has been set, otherwise returns nullptr */
	bool* GetAcceptedTosOrNull() { if (AcceptedTos_IsSet) return &AcceptedTos_Optional; return nullptr; }
	/** @brief Returns a pointer to AcceptedTos_Optional, if it has been set, otherwise returns nullptr */
	const bool* GetAcceptedTosOrNull() const { if (AcceptedTos_IsSet) return &AcceptedTos_Optional; return nullptr; }
	/** @brief Sets the value of AcceptedTos_Optional and also sets AcceptedTos_IsSet to true */
	void SetAcceptedTos(const bool& NewValue) { AcceptedTos_Optional = NewValue; AcceptedTos_IsSet = true; }
	/** @brief Sets the value of AcceptedTos_Optional and also sets AcceptedTos_IsSet to true using move semantics */
	void SetAcceptedTos(bool&& NewValue) { AcceptedTos_Optional = NewValue; AcceptedTos_IsSet = true; }
	 /** @brief Clears the value of AcceptedTos_Optional and sets AcceptedTos_IsSet to false */
	void ClearAcceptedTos() { AcceptedTos_Optional = false; AcceptedTos_IsSet = false; }
	/** @brief Returns true if AcceptedTos_Optional is set and matches the default value */
	bool IsAcceptedTosDefaultValue() const { return AcceptedTos_IsSet && AcceptedTos_Optional == false; }
	/** @brief Sets the value of AcceptedTos_Optional to its default and also sets AcceptedTos_IsSet to true */
	void SetAcceptedTosToDefault() { AcceptedTos_Optional = false; AcceptedTos_IsSet = true; }

	/** @brief If true, the user has accepted the Privacy Policy. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool AcceptedPrivacyPolicy_Optional{  };
	/** @brief true if AcceptedPrivacyPolicy_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool AcceptedPrivacyPolicy_IsSet{ false };
	/** @brief Gets the value of AcceptedPrivacyPolicy_Optional, regardless of it having been set */
	bool& GetAcceptedPrivacyPolicy() { return AcceptedPrivacyPolicy_Optional; }
	/** @brief Gets the value of AcceptedPrivacyPolicy_Optional, regardless of it having been set */
	const bool& GetAcceptedPrivacyPolicy() const { return AcceptedPrivacyPolicy_Optional; }
	/** @brief Gets the value of AcceptedPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue */
	const bool& GetAcceptedPrivacyPolicy(const bool& DefaultValue) const { if (AcceptedPrivacyPolicy_IsSet) return AcceptedPrivacyPolicy_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of AcceptedPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false */
	bool GetAcceptedPrivacyPolicy(bool& OutValue) const { if (AcceptedPrivacyPolicy_IsSet) OutValue = AcceptedPrivacyPolicy_Optional; return AcceptedPrivacyPolicy_IsSet; }
	/** @brief Returns a pointer to AcceptedPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr */
	bool* GetAcceptedPrivacyPolicyOrNull() { if (AcceptedPrivacyPolicy_IsSet) return &AcceptedPrivacyPolicy_Optional; return nullptr; }
	/** @brief Returns a pointer to AcceptedPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr */
	const bool* GetAcceptedPrivacyPolicyOrNull() const { if (AcceptedPrivacyPolicy_IsSet) return &AcceptedPrivacyPolicy_Optional; return nullptr; }
	/** @brief Sets the value of AcceptedPrivacyPolicy_Optional and also sets AcceptedPrivacyPolicy_IsSet to true */
	void SetAcceptedPrivacyPolicy(const bool& NewValue) { AcceptedPrivacyPolicy_Optional = NewValue; AcceptedPrivacyPolicy_IsSet = true; }
	/** @brief Sets the value of AcceptedPrivacyPolicy_Optional and also sets AcceptedPrivacyPolicy_IsSet to true using move semantics */
	void SetAcceptedPrivacyPolicy(bool&& NewValue) { AcceptedPrivacyPolicy_Optional = NewValue; AcceptedPrivacyPolicy_IsSet = true; }
	 /** @brief Clears the value of AcceptedPrivacyPolicy_Optional and sets AcceptedPrivacyPolicy_IsSet to false */
	void ClearAcceptedPrivacyPolicy() { AcceptedPrivacyPolicy_Optional = false; AcceptedPrivacyPolicy_IsSet = false; }
	/** @brief Returns true if AcceptedPrivacyPolicy_Optional is set and matches the default value */
	bool IsAcceptedPrivacyPolicyDefaultValue() const { return AcceptedPrivacyPolicy_IsSet && AcceptedPrivacyPolicy_Optional == false; }
	/** @brief Sets the value of AcceptedPrivacyPolicy_Optional to its default and also sets AcceptedPrivacyPolicy_IsSet to true */
	void SetAcceptedPrivacyPolicyToDefault() { AcceptedPrivacyPolicy_Optional = false; AcceptedPrivacyPolicy_IsSet = true; }
};

/** @} */
