// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevMatchMakingTemplateUpdateRequest.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevMatchMakingTemplateUpdateRequest

void FRHAPI_DevMatchMakingTemplateUpdateRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (MatchMakingTemplateId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("match_making_template_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, MatchMakingTemplateId_Optional);
    }
    if (MatchMakingTemplateGroupId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("match_making_template_group_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, MatchMakingTemplateGroupId_Optional);
    }
    if (MmrGroupingMethod_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("mmr_grouping_method"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(MmrGroupingMethod_Optional));
    }
    if (MatchMakingRulesetId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("match_making_ruleset_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, MatchMakingRulesetId_Optional);
    }
    if (MatchMakingProfileListId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("match_making_profile_list_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, MatchMakingProfileListId_Optional);
    }
    if (LegacyConfig_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("legacy_config"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LegacyConfig_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevMatchMakingTemplateUpdateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonMatchMakingTemplateIdField = (*Object)->TryGetField(TEXT("match_making_template_id"));
    if (JsonMatchMakingTemplateIdField.IsValid() && !JsonMatchMakingTemplateIdField->IsNull())
    {
        MatchMakingTemplateId_IsSet = TryGetJsonValue(JsonMatchMakingTemplateIdField, MatchMakingTemplateId_Optional);
        ParseSuccess &= MatchMakingTemplateId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMatchMakingTemplateGroupIdField = (*Object)->TryGetField(TEXT("match_making_template_group_id"));
    if (JsonMatchMakingTemplateGroupIdField.IsValid() && !JsonMatchMakingTemplateGroupIdField->IsNull())
    {
        MatchMakingTemplateGroupId_IsSet = TryGetJsonValue(JsonMatchMakingTemplateGroupIdField, MatchMakingTemplateGroupId_Optional);
        ParseSuccess &= MatchMakingTemplateGroupId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMmrGroupingMethodField = (*Object)->TryGetField(TEXT("mmr_grouping_method"));
    if (JsonMmrGroupingMethodField.IsValid() && !JsonMmrGroupingMethodField->IsNull())
    {
        MmrGroupingMethod_IsSet = TryGetJsonValue(JsonMmrGroupingMethodField, MmrGroupingMethod_Optional);
        ParseSuccess &= MmrGroupingMethod_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMatchMakingRulesetIdField = (*Object)->TryGetField(TEXT("match_making_ruleset_id"));
    if (JsonMatchMakingRulesetIdField.IsValid() && !JsonMatchMakingRulesetIdField->IsNull())
    {
        MatchMakingRulesetId_IsSet = TryGetJsonValue(JsonMatchMakingRulesetIdField, MatchMakingRulesetId_Optional);
        ParseSuccess &= MatchMakingRulesetId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMatchMakingProfileListIdField = (*Object)->TryGetField(TEXT("match_making_profile_list_id"));
    if (JsonMatchMakingProfileListIdField.IsValid() && !JsonMatchMakingProfileListIdField->IsNull())
    {
        MatchMakingProfileListId_IsSet = TryGetJsonValue(JsonMatchMakingProfileListIdField, MatchMakingProfileListId_Optional);
        ParseSuccess &= MatchMakingProfileListId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLegacyConfigField = (*Object)->TryGetField(TEXT("legacy_config"));
    if (JsonLegacyConfigField.IsValid() && !JsonLegacyConfigField->IsNull())
    {
        LegacyConfig_IsSet = TryGetJsonValue(JsonLegacyConfigField, LegacyConfig_Optional);
        ParseSuccess &= LegacyConfig_IsSet;
    }

    return ParseSuccess;
}

