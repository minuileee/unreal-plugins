// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevHostLabel.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevHostLabel

void FRHAPI_DevHostLabel::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("label"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Label);
    Writer->WriteIdentifierPrefix(TEXT("host_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, HostId);
    Writer->WriteIdentifierPrefix(TEXT("host_label_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, HostLabelId);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevHostLabel::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonLabelField = (*Object)->TryGetField(TEXT("label"));
    ParseSuccess &= JsonLabelField.IsValid() && !JsonLabelField->IsNull() && TryGetJsonValue(JsonLabelField, Label);
    const TSharedPtr<FJsonValue> JsonHostIdField = (*Object)->TryGetField(TEXT("host_id"));
    ParseSuccess &= JsonHostIdField.IsValid() && !JsonHostIdField->IsNull() && TryGetJsonValue(JsonHostIdField, HostId);
    const TSharedPtr<FJsonValue> JsonHostLabelIdField = (*Object)->TryGetField(TEXT("host_label_id"));
    ParseSuccess &= JsonHostLabelIdField.IsValid() && !JsonHostLabelIdField->IsNull() && TryGetJsonValue(JsonHostLabelIdField, HostLabelId);

    return ParseSuccess;
}
