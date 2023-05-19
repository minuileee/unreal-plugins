// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlayerInventoryChange.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlayerInventoryChange

void FRHAPI_PlayerInventoryChange::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (BeforeItemId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("before_item_id"));
        RallyHereAPI::WriteJsonValue(Writer, BeforeItemId_Optional);
    }
    if (AfterItemId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("after_item_id"));
        RallyHereAPI::WriteJsonValue(Writer, AfterItemId_Optional);
    }
    if (Before_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("before"));
        RallyHereAPI::WriteJsonValue(Writer, Before_Optional);
    }
    if (After_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("after"));
        RallyHereAPI::WriteJsonValue(Writer, After_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_PlayerInventoryChange::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    if ((*Object)->HasField(TEXT("before_item_id")))
    {
        BeforeItemId_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("before_item_id"), BeforeItemId_Optional);
        ParseSuccess &= BeforeItemId_IsSet;
    }
    if ((*Object)->HasField(TEXT("after_item_id")))
    {
        AfterItemId_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("after_item_id"), AfterItemId_Optional);
        ParseSuccess &= AfterItemId_IsSet;
    }
    if ((*Object)->HasField(TEXT("before")))
    {
        Before_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("before"), Before_Optional);
        ParseSuccess &= Before_IsSet;
    }
    if ((*Object)->HasField(TEXT("after")))
    {
        After_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("after"), After_Optional);
        ParseSuccess &= After_IsSet;
    }

    return ParseSuccess;
}

