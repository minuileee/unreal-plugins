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
#include "PortalUseRuleset.h"
#include "PortalUseRulesets.generated.h"

/** @defgroup RHAPI_PortalUseRulesets RallyHere API Model PortalUseRulesets
 *  @{
 */

/**
 * @brief A collection of Portal Use Rulesets. A ruleset determine how item can be used across portals.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PortalUseRulesets : public FRHAPI_Model
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

	/** @brief Custom data associated with the resource */
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
	void SetCustomData(const TMap<FString, FString>& NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
	/** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics */
	void SetCustomData(TMap<FString, FString>&& NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
	 /** @brief Clears the value of CustomData_Optional and sets CustomData_IsSet to false */
	void ClearCustomData() { CustomData_IsSet = false; }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TMap<FString, FRHAPI_PortalUseRuleset> Rulesets_Optional{  };
	/** @brief true if Rulesets_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Rulesets_IsSet{ false };
	/** @brief Gets the value of Rulesets_Optional, regardless of it having been set */
	TMap<FString, FRHAPI_PortalUseRuleset>& GetRulesets() { return Rulesets_Optional; }
	/** @brief Gets the value of Rulesets_Optional, regardless of it having been set */
	const TMap<FString, FRHAPI_PortalUseRuleset>& GetRulesets() const { return Rulesets_Optional; }
	/** @brief Gets the value of Rulesets_Optional, if it has been set, otherwise it returns DefaultValue */
	const TMap<FString, FRHAPI_PortalUseRuleset>& GetRulesets(const TMap<FString, FRHAPI_PortalUseRuleset>& DefaultValue) const { if (Rulesets_IsSet) return Rulesets_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Rulesets_Optional and returns true if it has been set, otherwise returns false */
	bool GetRulesets(TMap<FString, FRHAPI_PortalUseRuleset>& OutValue) const { if (Rulesets_IsSet) OutValue = Rulesets_Optional; return Rulesets_IsSet; }
	/** @brief Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr */
	TMap<FString, FRHAPI_PortalUseRuleset>* GetRulesetsOrNull() { if (Rulesets_IsSet) return &Rulesets_Optional; return nullptr; }
	/** @brief Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr */
	const TMap<FString, FRHAPI_PortalUseRuleset>* GetRulesetsOrNull() const { if (Rulesets_IsSet) return &Rulesets_Optional; return nullptr; }
	/** @brief Sets the value of Rulesets_Optional and also sets Rulesets_IsSet to true */
	void SetRulesets(const TMap<FString, FRHAPI_PortalUseRuleset>& NewValue) { Rulesets_Optional = NewValue; Rulesets_IsSet = true; }
	/** @brief Sets the value of Rulesets_Optional and also sets Rulesets_IsSet to true using move semantics */
	void SetRulesets(TMap<FString, FRHAPI_PortalUseRuleset>&& NewValue) { Rulesets_Optional = NewValue; Rulesets_IsSet = true; }
	 /** @brief Clears the value of Rulesets_Optional and sets Rulesets_IsSet to false */
	void ClearRulesets() { Rulesets_IsSet = false; }

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
