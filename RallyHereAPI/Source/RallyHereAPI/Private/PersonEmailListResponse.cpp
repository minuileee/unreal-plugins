// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PersonEmailListResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PersonEmailListResponse

void FRHAPI_PersonEmailListResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("email_list_ids"));
    RallyHereAPI::WriteJsonValue(Writer, EmailListIds);
    Writer->WriteObjectEnd();
}

bool FRHAPI_PersonEmailListResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonEmailListIdsField = (*Object)->TryGetField(TEXT("email_list_ids"));
    ParseSuccess &= JsonEmailListIdsField.IsValid() && !JsonEmailListIdsField->IsNull() && TryGetJsonValue(JsonEmailListIdsField, EmailListIds);

    return ParseSuccess;
}
