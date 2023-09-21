// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "FriendsV1.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_FriendsV1

void FRHAPI_FriendsV1::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("friends"));
    RallyHereAPI::WriteJsonValue(Writer, Friends);
    Writer->WriteObjectEnd();
}

bool FRHAPI_FriendsV1::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonFriendsField = (*Object)->TryGetField(TEXT("friends"));
    ParseSuccess &= JsonFriendsField.IsValid() && !JsonFriendsField->IsNull() && TryGetJsonValue(JsonFriendsField, Friends);

    return ParseSuccess;
}
