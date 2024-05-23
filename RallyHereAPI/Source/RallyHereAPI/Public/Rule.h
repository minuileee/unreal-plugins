// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "Operation.h"
#include "RuleType.h"
#include "Rule.generated.h"

/** @defgroup RHAPI_Rule RallyHere API Model Rule
 *  @{
 */

/**
 * @brief A rule to determine which MatchMakingTemplate should be used on a session entering matchmaking
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_Rule : public FRHAPI_Model
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

	/** @brief What type of rule this is */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_RuleType RuleType{  };
	/** @brief Gets the value of RuleType */
	ERHAPI_RuleType& GetRuleType() { return RuleType; }
	/** @brief Gets the value of RuleType */
	const ERHAPI_RuleType& GetRuleType() const { return RuleType; }
	/** @brief Sets the value of RuleType */
	void SetRuleType(const ERHAPI_RuleType& NewValue) { RuleType = NewValue;  }
	/** @brief Sets the value of RuleType using move semantics */
	void SetRuleType(ERHAPI_RuleType&& NewValue) { RuleType = NewValue;  }

	/** @brief Id of the item we are comparing if this is an inventory rule */
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
	void SetItemId(const int32& NewValue) { ItemId_Optional = NewValue; ItemId_IsSet = true; }
	/** @brief Sets the value of ItemId_Optional and also sets ItemId_IsSet to true using move semantics */
	void SetItemId(int32&& NewValue) { ItemId_Optional = NewValue; ItemId_IsSet = true; }
	 /** @brief Clears the value of ItemId_Optional and sets ItemId_IsSet to false */
	void ClearItemId() { ItemId_Optional = 0; ItemId_IsSet = false; }
	/** @brief Returns true if ItemId_Optional is set and matches the default value */
	bool IsItemIdDefaultValue() const { return ItemId_IsSet && ItemId_Optional == 0; }
	/** @brief Sets the value of ItemId_Optional to its default and also sets ItemId_IsSet to true */
	void SetItemIdToDefault() { ItemId_Optional = 0; ItemId_IsSet = true; }

	/** @brief Comparison operation to be performed */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_Operation ComparisonOperation{  };
	/** @brief Gets the value of ComparisonOperation */
	ERHAPI_Operation& GetComparisonOperation() { return ComparisonOperation; }
	/** @brief Gets the value of ComparisonOperation */
	const ERHAPI_Operation& GetComparisonOperation() const { return ComparisonOperation; }
	/** @brief Sets the value of ComparisonOperation */
	void SetComparisonOperation(const ERHAPI_Operation& NewValue) { ComparisonOperation = NewValue;  }
	/** @brief Sets the value of ComparisonOperation using move semantics */
	void SetComparisonOperation(ERHAPI_Operation&& NewValue) { ComparisonOperation = NewValue;  }

	/** @brief Value to compare to */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 ComparisonValue{ 0 };
	/** @brief Gets the value of ComparisonValue */
	int32& GetComparisonValue() { return ComparisonValue; }
	/** @brief Gets the value of ComparisonValue */
	const int32& GetComparisonValue() const { return ComparisonValue; }
	/** @brief Sets the value of ComparisonValue */
	void SetComparisonValue(const int32& NewValue) { ComparisonValue = NewValue;  }
	/** @brief Sets the value of ComparisonValue using move semantics */
	void SetComparisonValue(int32&& NewValue) { ComparisonValue = NewValue;  }
	/** @brief Returns true if ComparisonValue matches the default value */
	bool IsComparisonValueDefaultValue() const { return ComparisonValue == 0; }
	/** @brief Sets the value of ComparisonValue to its default  */
	void SetComparisonValueToDefault() { ComparisonValue = 0;  }
};

/** @} */
