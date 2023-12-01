// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevComparisonOperation.h"
#include "DevRuleType.h"
#include "DevMatchMakingRule.generated.h"

/** @defgroup RHAPI_DevMatchMakingRule RallyHere API Model DevMatchMakingRule
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevMatchMakingRule : public FRHAPI_DevModel
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

    /** @brief Which ruleset this MatchMakingRule belongs to */
    FGuid MatchMakingRulesetId{  };
    /** @brief Gets the value of MatchMakingRulesetId */
    FGuid& GetMatchMakingRulesetId() { return MatchMakingRulesetId; }
    /** @brief Gets the value of MatchMakingRulesetId */
    const FGuid& GetMatchMakingRulesetId() const { return MatchMakingRulesetId; }
    /** @brief Sets the value of MatchMakingRulesetId */
    void SetMatchMakingRulesetId(FGuid NewValue) { MatchMakingRulesetId = NewValue;  }

    /** @brief Which comparison operator is used when evaluating the rule */
    ERHAPI_DevComparisonOperation ComparisonOperation{  };
    /** @brief Gets the value of ComparisonOperation */
    ERHAPI_DevComparisonOperation& GetComparisonOperation() { return ComparisonOperation; }
    /** @brief Gets the value of ComparisonOperation */
    const ERHAPI_DevComparisonOperation& GetComparisonOperation() const { return ComparisonOperation; }
    /** @brief Sets the value of ComparisonOperation */
    void SetComparisonOperation(ERHAPI_DevComparisonOperation NewValue) { ComparisonOperation = NewValue;  }

    /** @brief What item is being compared if this is an Inventory rule */
    FGuid ItemId_Optional{  };
    /** @brief true if ItemId_Optional has been set to a value */
    bool ItemId_IsSet{ false };
    /** @brief Gets the value of ItemId_Optional, regardless of it having been set */
    FGuid& GetItemId() { return ItemId_Optional; }
    /** @brief Gets the value of ItemId_Optional, regardless of it having been set */
    const FGuid& GetItemId() const { return ItemId_Optional; }
    /** @brief Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetItemId(const FGuid& DefaultValue) const { if (ItemId_IsSet) return ItemId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false */
    bool GetItemId(FGuid& OutValue) const { if (ItemId_IsSet) OutValue = ItemId_Optional; return ItemId_IsSet; }
    /** @brief Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetItemIdOrNull() { if (ItemId_IsSet) return &ItemId_Optional; return nullptr; }
    /** @brief Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetItemIdOrNull() const { if (ItemId_IsSet) return &ItemId_Optional; return nullptr; }
    /** @brief Sets the value of ItemId_Optional and also sets ItemId_IsSet to true */
    void SetItemId(FGuid NewValue) { ItemId_Optional = NewValue; ItemId_IsSet = true; }
     /** @brief Clears the value of ItemId_Optional and sets ItemId_IsSet to false */
    void ClearItemId() { ItemId_IsSet = false; }

    /** @brief What type of rule this is (determines what types of values are being compared */
    ERHAPI_DevRuleType RuleType{  };
    /** @brief Gets the value of RuleType */
    ERHAPI_DevRuleType& GetRuleType() { return RuleType; }
    /** @brief Gets the value of RuleType */
    const ERHAPI_DevRuleType& GetRuleType() const { return RuleType; }
    /** @brief Sets the value of RuleType */
    void SetRuleType(ERHAPI_DevRuleType NewValue) { RuleType = NewValue;  }

    /** @brief What value is to be compared to */
    int32 ComparisonValue{ 0 };
    /** @brief Gets the value of ComparisonValue */
    int32& GetComparisonValue() { return ComparisonValue; }
    /** @brief Gets the value of ComparisonValue */
    const int32& GetComparisonValue() const { return ComparisonValue; }
    /** @brief Sets the value of ComparisonValue */
    void SetComparisonValue(int32 NewValue) { ComparisonValue = NewValue;  }
    /** @brief Returns true if ComparisonValue matches the default value */
    bool IsComparisonValueDefaultValue() const { return ComparisonValue == 0; }
    /** @brief Sets the value of ComparisonValue to its default  */
    void SetComparisonValueToDefault() { ComparisonValue = 0;  }

    /** @brief ID of the Sandbox */
    FGuid SandboxId_Optional{  };
    /** @brief true if SandboxId_Optional has been set to a value */
    bool SandboxId_IsSet{ false };
    /** @brief Gets the value of SandboxId_Optional, regardless of it having been set */
    FGuid& GetSandboxId() { return SandboxId_Optional; }
    /** @brief Gets the value of SandboxId_Optional, regardless of it having been set */
    const FGuid& GetSandboxId() const { return SandboxId_Optional; }
    /** @brief Gets the value of SandboxId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetSandboxId(const FGuid& DefaultValue) const { if (SandboxId_IsSet) return SandboxId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of SandboxId_Optional and returns true if it has been set, otherwise returns false */
    bool GetSandboxId(FGuid& OutValue) const { if (SandboxId_IsSet) OutValue = SandboxId_Optional; return SandboxId_IsSet; }
    /** @brief Returns a pointer to SandboxId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetSandboxIdOrNull() { if (SandboxId_IsSet) return &SandboxId_Optional; return nullptr; }
    /** @brief Returns a pointer to SandboxId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetSandboxIdOrNull() const { if (SandboxId_IsSet) return &SandboxId_Optional; return nullptr; }
    /** @brief Sets the value of SandboxId_Optional and also sets SandboxId_IsSet to true */
    void SetSandboxId(FGuid NewValue) { SandboxId_Optional = NewValue; SandboxId_IsSet = true; }
     /** @brief Clears the value of SandboxId_Optional and sets SandboxId_IsSet to false */
    void ClearSandboxId() { SandboxId_IsSet = false; }

    /** @brief Account ID of the user who last modified the resource */
    FGuid LastModifiedAccountId_Optional{  };
    /** @brief true if LastModifiedAccountId_Optional has been set to a value */
    bool LastModifiedAccountId_IsSet{ false };
    /** @brief Gets the value of LastModifiedAccountId_Optional, regardless of it having been set */
    FGuid& GetLastModifiedAccountId() { return LastModifiedAccountId_Optional; }
    /** @brief Gets the value of LastModifiedAccountId_Optional, regardless of it having been set */
    const FGuid& GetLastModifiedAccountId() const { return LastModifiedAccountId_Optional; }
    /** @brief Gets the value of LastModifiedAccountId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetLastModifiedAccountId(const FGuid& DefaultValue) const { if (LastModifiedAccountId_IsSet) return LastModifiedAccountId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LastModifiedAccountId_Optional and returns true if it has been set, otherwise returns false */
    bool GetLastModifiedAccountId(FGuid& OutValue) const { if (LastModifiedAccountId_IsSet) OutValue = LastModifiedAccountId_Optional; return LastModifiedAccountId_IsSet; }
    /** @brief Returns a pointer to LastModifiedAccountId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetLastModifiedAccountIdOrNull() { if (LastModifiedAccountId_IsSet) return &LastModifiedAccountId_Optional; return nullptr; }
    /** @brief Returns a pointer to LastModifiedAccountId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetLastModifiedAccountIdOrNull() const { if (LastModifiedAccountId_IsSet) return &LastModifiedAccountId_Optional; return nullptr; }
    /** @brief Sets the value of LastModifiedAccountId_Optional and also sets LastModifiedAccountId_IsSet to true */
    void SetLastModifiedAccountId(FGuid NewValue) { LastModifiedAccountId_Optional = NewValue; LastModifiedAccountId_IsSet = true; }
     /** @brief Clears the value of LastModifiedAccountId_Optional and sets LastModifiedAccountId_IsSet to false */
    void ClearLastModifiedAccountId() { LastModifiedAccountId_IsSet = false; }

    /** @brief Timestamp of when the resource was last modified */
    FDateTime LastModifiedTimestamp_Optional{  };
    /** @brief true if LastModifiedTimestamp_Optional has been set to a value */
    bool LastModifiedTimestamp_IsSet{ false };
    /** @brief Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set */
    FDateTime& GetLastModifiedTimestamp() { return LastModifiedTimestamp_Optional; }
    /** @brief Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set */
    const FDateTime& GetLastModifiedTimestamp() const { return LastModifiedTimestamp_Optional; }
    /** @brief Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue */
    const FDateTime& GetLastModifiedTimestamp(const FDateTime& DefaultValue) const { if (LastModifiedTimestamp_IsSet) return LastModifiedTimestamp_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false */
    bool GetLastModifiedTimestamp(FDateTime& OutValue) const { if (LastModifiedTimestamp_IsSet) OutValue = LastModifiedTimestamp_Optional; return LastModifiedTimestamp_IsSet; }
    /** @brief Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr */
    FDateTime* GetLastModifiedTimestampOrNull() { if (LastModifiedTimestamp_IsSet) return &LastModifiedTimestamp_Optional; return nullptr; }
    /** @brief Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr */
    const FDateTime* GetLastModifiedTimestampOrNull() const { if (LastModifiedTimestamp_IsSet) return &LastModifiedTimestamp_Optional; return nullptr; }
    /** @brief Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true */
    void SetLastModifiedTimestamp(FDateTime NewValue) { LastModifiedTimestamp_Optional = NewValue; LastModifiedTimestamp_IsSet = true; }
     /** @brief Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false */
    void ClearLastModifiedTimestamp() { LastModifiedTimestamp_IsSet = false; }

    /** @brief Timestamp of when this resource was created */
    FDateTime CreatedTimestamp_Optional{  };
    /** @brief true if CreatedTimestamp_Optional has been set to a value */
    bool CreatedTimestamp_IsSet{ false };
    /** @brief Gets the value of CreatedTimestamp_Optional, regardless of it having been set */
    FDateTime& GetCreatedTimestamp() { return CreatedTimestamp_Optional; }
    /** @brief Gets the value of CreatedTimestamp_Optional, regardless of it having been set */
    const FDateTime& GetCreatedTimestamp() const { return CreatedTimestamp_Optional; }
    /** @brief Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue */
    const FDateTime& GetCreatedTimestamp(const FDateTime& DefaultValue) const { if (CreatedTimestamp_IsSet) return CreatedTimestamp_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false */
    bool GetCreatedTimestamp(FDateTime& OutValue) const { if (CreatedTimestamp_IsSet) OutValue = CreatedTimestamp_Optional; return CreatedTimestamp_IsSet; }
    /** @brief Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr */
    FDateTime* GetCreatedTimestampOrNull() { if (CreatedTimestamp_IsSet) return &CreatedTimestamp_Optional; return nullptr; }
    /** @brief Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr */
    const FDateTime* GetCreatedTimestampOrNull() const { if (CreatedTimestamp_IsSet) return &CreatedTimestamp_Optional; return nullptr; }
    /** @brief Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true */
    void SetCreatedTimestamp(FDateTime NewValue) { CreatedTimestamp_Optional = NewValue; CreatedTimestamp_IsSet = true; }
     /** @brief Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false */
    void ClearCreatedTimestamp() { CreatedTimestamp_IsSet = false; }

    /** @brief ID to uniquely identify this MatchMakingRule */
    FGuid MatchMakingRuleId{  };
    /** @brief Gets the value of MatchMakingRuleId */
    FGuid& GetMatchMakingRuleId() { return MatchMakingRuleId; }
    /** @brief Gets the value of MatchMakingRuleId */
    const FGuid& GetMatchMakingRuleId() const { return MatchMakingRuleId; }
    /** @brief Sets the value of MatchMakingRuleId */
    void SetMatchMakingRuleId(FGuid NewValue) { MatchMakingRuleId = NewValue;  }
};

/** @} */
