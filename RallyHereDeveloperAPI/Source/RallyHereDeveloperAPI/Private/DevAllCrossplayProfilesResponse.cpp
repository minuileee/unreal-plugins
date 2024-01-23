// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevAllCrossplayProfilesResponse.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevAllCrossplayProfilesResponse

void FRHAPI_DevAllCrossplayProfilesResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("cursor"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Cursor);
    Writer->WriteIdentifierPrefix(TEXT("profiles"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Profiles);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevAllCrossplayProfilesResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonCursorField = (*Object)->TryGetField(TEXT("cursor"));
    ParseSuccess &= JsonCursorField.IsValid() && !JsonCursorField->IsNull() && TryGetJsonValue(JsonCursorField, Cursor);
    const TSharedPtr<FJsonValue> JsonProfilesField = (*Object)->TryGetField(TEXT("profiles"));
    ParseSuccess &= JsonProfilesField.IsValid() && !JsonProfilesField->IsNull() && TryGetJsonValue(JsonProfilesField, Profiles);

    return ParseSuccess;
}

