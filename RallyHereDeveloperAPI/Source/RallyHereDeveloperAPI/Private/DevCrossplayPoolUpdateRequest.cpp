// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevCrossplayPoolUpdateRequest.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevCrossplayPoolUpdateRequest

void FRHAPI_DevCrossplayPoolUpdateRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Name_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("name"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Name_Optional);
    }
    if (CrossplayProfileId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("crossplay_profile_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CrossplayProfileId_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevCrossplayPoolUpdateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonNameField = (*Object)->TryGetField(TEXT("name"));
    if (JsonNameField.IsValid() && !JsonNameField->IsNull())
    {
        Name_IsSet = TryGetJsonValue(JsonNameField, Name_Optional);
        ParseSuccess &= Name_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCrossplayProfileIdField = (*Object)->TryGetField(TEXT("crossplay_profile_id"));
    if (JsonCrossplayProfileIdField.IsValid() && !JsonCrossplayProfileIdField->IsNull())
    {
        CrossplayProfileId_IsSet = TryGetJsonValue(JsonCrossplayProfileIdField, CrossplayProfileId_Optional);
        ParseSuccess &= CrossplayProfileId_IsSet;
    }

    return ParseSuccess;
}
