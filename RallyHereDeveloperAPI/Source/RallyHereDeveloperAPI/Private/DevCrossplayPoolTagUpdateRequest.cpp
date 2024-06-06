// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevCrossplayPoolTagUpdateRequest.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevCrossplayPoolTagUpdateRequest

void FRHAPI_DevCrossplayPoolTagUpdateRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Tag_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("tag"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Tag_Optional);
    }
    if (CrossplayPoolId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("crossplay_pool_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CrossplayPoolId_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevCrossplayPoolTagUpdateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonTagField = (*Object)->TryGetField(TEXT("tag"));
    if (JsonTagField.IsValid() && !JsonTagField->IsNull())
    {
        Tag_IsSet = TryGetJsonValue(JsonTagField, Tag_Optional);
        ParseSuccess &= Tag_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCrossplayPoolIdField = (*Object)->TryGetField(TEXT("crossplay_pool_id"));
    if (JsonCrossplayPoolIdField.IsValid() && !JsonCrossplayPoolIdField->IsNull())
    {
        CrossplayPoolId_IsSet = TryGetJsonValue(JsonCrossplayPoolIdField, CrossplayPoolId_Optional);
        ParseSuccess &= CrossplayPoolId_IsSet;
    }

    return ParseSuccess;
}
