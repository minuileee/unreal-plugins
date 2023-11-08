// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "MatchMakingTemplateV2.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_MatchMakingTemplateV2

void FRHAPI_MatchMakingTemplateV2::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (MatchMakingTemplateId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("match_making_template_id"));
        RallyHereAPI::WriteJsonValue(Writer, MatchMakingTemplateId_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("mmr_grouping_method"));
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(MmrGroupingMethod));
    if (Ruleset_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("ruleset"));
        RallyHereAPI::WriteJsonValue(Writer, Ruleset_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("profiles"));
    RallyHereAPI::WriteJsonValue(Writer, Profiles);
    Writer->WriteObjectEnd();
}

bool FRHAPI_MatchMakingTemplateV2::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
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
    const TSharedPtr<FJsonValue> JsonMmrGroupingMethodField = (*Object)->TryGetField(TEXT("mmr_grouping_method"));
    ParseSuccess &= JsonMmrGroupingMethodField.IsValid() && !JsonMmrGroupingMethodField->IsNull() && TryGetJsonValue(JsonMmrGroupingMethodField, MmrGroupingMethod);
    const TSharedPtr<FJsonValue> JsonRulesetField = (*Object)->TryGetField(TEXT("ruleset"));
    if (JsonRulesetField.IsValid() && !JsonRulesetField->IsNull())
    {
        Ruleset_IsSet = TryGetJsonValue(JsonRulesetField, Ruleset_Optional);
        ParseSuccess &= Ruleset_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonProfilesField = (*Object)->TryGetField(TEXT("profiles"));
    ParseSuccess &= JsonProfilesField.IsValid() && !JsonProfilesField->IsNull() && TryGetJsonValue(JsonProfilesField, Profiles);

    return ParseSuccess;
}

