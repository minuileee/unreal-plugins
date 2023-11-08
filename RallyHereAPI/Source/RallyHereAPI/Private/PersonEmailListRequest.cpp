// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PersonEmailListRequest.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PersonEmailListRequest

void FRHAPI_PersonEmailListRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (EmailListIds_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("email_list_ids"));
        RallyHereAPI::WriteJsonValue(Writer, EmailListIds_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_PersonEmailListRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonEmailListIdsField = (*Object)->TryGetField(TEXT("email_list_ids"));
    if (JsonEmailListIdsField.IsValid() && !JsonEmailListIdsField->IsNull())
    {
        EmailListIds_IsSet = TryGetJsonValue(JsonEmailListIdsField, EmailListIds_Optional);
        ParseSuccess &= EmailListIds_IsSet;
    }

    return ParseSuccess;
}

