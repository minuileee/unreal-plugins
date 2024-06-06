// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevCreateInventoryBucketUseRuleSet.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevCreateInventoryBucketUseRuleSet

void FRHAPI_DevCreateInventoryBucketUseRuleSet::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    if (Name_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("name"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Name_Optional);
    }
    if (Description_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("description"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Description_Optional);
    }
    if (Rules_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("rules"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Rules_Optional);
    }
    if (LegacyRuleSetId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("legacy_rule_set_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LegacyRuleSetId_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevCreateInventoryBucketUseRuleSet::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonNameField = (*Object)->TryGetField(TEXT("name"));
    if (JsonNameField.IsValid() && !JsonNameField->IsNull())
    {
        Name_IsSet = TryGetJsonValue(JsonNameField, Name_Optional);
        ParseSuccess &= Name_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDescriptionField = (*Object)->TryGetField(TEXT("description"));
    if (JsonDescriptionField.IsValid() && !JsonDescriptionField->IsNull())
    {
        Description_IsSet = TryGetJsonValue(JsonDescriptionField, Description_Optional);
        ParseSuccess &= Description_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonRulesField = (*Object)->TryGetField(TEXT("rules"));
    if (JsonRulesField.IsValid() && !JsonRulesField->IsNull())
    {
        Rules_IsSet = TryGetJsonValue(JsonRulesField, Rules_Optional);
        ParseSuccess &= Rules_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLegacyRuleSetIdField = (*Object)->TryGetField(TEXT("legacy_rule_set_id"));
    if (JsonLegacyRuleSetIdField.IsValid() && !JsonLegacyRuleSetIdField->IsNull())
    {
        LegacyRuleSetId_IsSet = TryGetJsonValue(JsonLegacyRuleSetIdField, LegacyRuleSetId_Optional);
        ParseSuccess &= LegacyRuleSetId_IsSet;
    }

    return ParseSuccess;
}
