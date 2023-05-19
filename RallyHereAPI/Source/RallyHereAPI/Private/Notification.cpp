// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "Notification.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_Notification

void FRHAPI_Notification::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("message"));
    RallyHereAPI::WriteJsonValue(Writer, Message);
    if (RhUrl_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("rh_url"));
        RallyHereAPI::WriteJsonValue(Writer, RhUrl_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("custom_data"));
    RallyHereAPI::WriteJsonValue(Writer, CustomData);
    Writer->WriteIdentifierPrefix(TEXT("notification_id"));
    RallyHereAPI::WriteJsonValue(Writer, NotificationId);
    Writer->WriteIdentifierPrefix(TEXT("created"));
    RallyHereAPI::WriteJsonValue(Writer, Created);
    Writer->WriteObjectEnd();
}

bool FRHAPI_Notification::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("message"), Message);
    if ((*Object)->HasField(TEXT("rh_url")))
    {
        RhUrl_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("rh_url"), RhUrl_Optional);
        ParseSuccess &= RhUrl_IsSet;
    }
    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("custom_data"), CustomData);
    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("notification_id"), NotificationId);
    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("created"), Created);

    return ParseSuccess;
}

