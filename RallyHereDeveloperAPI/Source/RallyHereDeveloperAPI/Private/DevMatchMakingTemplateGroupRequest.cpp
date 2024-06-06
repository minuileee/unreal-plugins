// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevMatchMakingTemplateGroupRequest.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevMatchMakingTemplateGroupRequest

void FRHAPI_DevMatchMakingTemplateGroupRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("name"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Name);
    if (MatchMakingTemplateGroupId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("match_making_template_group_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, MatchMakingTemplateGroupId_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevMatchMakingTemplateGroupRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonNameField = (*Object)->TryGetField(TEXT("name"));
    ParseSuccess &= JsonNameField.IsValid() && !JsonNameField->IsNull() && TryGetJsonValue(JsonNameField, Name);
    const TSharedPtr<FJsonValue> JsonMatchMakingTemplateGroupIdField = (*Object)->TryGetField(TEXT("match_making_template_group_id"));
    if (JsonMatchMakingTemplateGroupIdField.IsValid() && !JsonMatchMakingTemplateGroupIdField->IsNull())
    {
        MatchMakingTemplateGroupId_IsSet = TryGetJsonValue(JsonMatchMakingTemplateGroupIdField, MatchMakingTemplateGroupId_Optional);
        ParseSuccess &= MatchMakingTemplateGroupId_IsSet;
    }

    return ParseSuccess;
}
