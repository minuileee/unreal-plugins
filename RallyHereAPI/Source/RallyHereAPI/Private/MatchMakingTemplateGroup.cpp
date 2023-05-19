// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "MatchMakingTemplateGroup.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_MatchMakingTemplateGroup

void FRHAPI_MatchMakingTemplateGroup::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("template_group_id"));
    RallyHereAPI::WriteJsonValue(Writer, TemplateGroupId);
    Writer->WriteIdentifierPrefix(TEXT("template_options"));
    RallyHereAPI::WriteJsonValue(Writer, TemplateOptions);
    if (RequiredItemIds_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("required_item_ids"));
        RallyHereAPI::WriteJsonValue(Writer, RequiredItemIds_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_MatchMakingTemplateGroup::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("template_group_id"), TemplateGroupId);
    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("template_options"), TemplateOptions);
    if ((*Object)->HasField(TEXT("required_item_ids")))
    {
        RequiredItemIds_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("required_item_ids"), RequiredItemIds_Optional);
        ParseSuccess &= RequiredItemIds_IsSet;
    }

    return ParseSuccess;
}

