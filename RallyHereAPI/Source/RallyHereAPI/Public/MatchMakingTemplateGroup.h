// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "Containers/Set.h"
#include "MatchMakingTemplate.h"
#include "MatchMakingTemplateGroup.generated.h"

/** @defgroup RHAPI_MatchMakingTemplateGroup RallyHere API Model MatchMakingTemplateGroup
 *  @{
 */

/**
 * @brief DEPRECATED A collection of MatchMakingTemplates that may be used when a session enters a queue. The first template that satisfies the necessary rules will be used
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_MatchMakingTemplateGroup : public FRHAPI_Model
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

	/** @brief ID for this set of potential matchmaking templates */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid TemplateGroupId{  };
	/** @brief Gets the value of TemplateGroupId */
	FGuid& GetTemplateGroupId() { return TemplateGroupId; }
	/** @brief Gets the value of TemplateGroupId */
	const FGuid& GetTemplateGroupId() const { return TemplateGroupId; }
	/** @brief Sets the value of TemplateGroupId */
	void SetTemplateGroupId(FGuid NewValue) { TemplateGroupId = NewValue;  }

	/** @brief List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<FRHAPI_MatchMakingTemplate> TemplateOptions{  };
	/** @brief Gets the value of TemplateOptions */
	TArray<FRHAPI_MatchMakingTemplate>& GetTemplateOptions() { return TemplateOptions; }
	/** @brief Gets the value of TemplateOptions */
	const TArray<FRHAPI_MatchMakingTemplate>& GetTemplateOptions() const { return TemplateOptions; }
	/** @brief Sets the value of TemplateOptions */
	void SetTemplateOptions(TArray<FRHAPI_MatchMakingTemplate> NewValue) { TemplateOptions = NewValue;  }

	/** @brief Set of all the item ids that are required to validate every rule contained in this template group */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TSet<int32> RequiredItemIds_Optional{  };
	/** @brief true if RequiredItemIds_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool RequiredItemIds_IsSet{ false };
	/** @brief Gets the value of RequiredItemIds_Optional, regardless of it having been set */
	TSet<int32>& GetRequiredItemIds() { return RequiredItemIds_Optional; }
	/** @brief Gets the value of RequiredItemIds_Optional, regardless of it having been set */
	const TSet<int32>& GetRequiredItemIds() const { return RequiredItemIds_Optional; }
	/** @brief Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue */
	const TSet<int32>& GetRequiredItemIds(const TSet<int32>& DefaultValue) const { if (RequiredItemIds_IsSet) return RequiredItemIds_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false */
	bool GetRequiredItemIds(TSet<int32>& OutValue) const { if (RequiredItemIds_IsSet) OutValue = RequiredItemIds_Optional; return RequiredItemIds_IsSet; }
	/** @brief Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr */
	TSet<int32>* GetRequiredItemIdsOrNull() { if (RequiredItemIds_IsSet) return &RequiredItemIds_Optional; return nullptr; }
	/** @brief Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr */
	const TSet<int32>* GetRequiredItemIdsOrNull() const { if (RequiredItemIds_IsSet) return &RequiredItemIds_Optional; return nullptr; }
	/** @brief Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true */
	void SetRequiredItemIds(TSet<int32> NewValue) { RequiredItemIds_Optional = NewValue; RequiredItemIds_IsSet = true; }
	 /** @brief Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false */
	void ClearRequiredItemIds() { RequiredItemIds_IsSet = false; }
};

/** @} */
