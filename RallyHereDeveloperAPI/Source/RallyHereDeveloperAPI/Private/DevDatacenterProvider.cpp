// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevDatacenterProvider.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevDatacenterProvider

void FRHAPI_DevDatacenterProvider::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("name"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Name);
    Writer->WriteIdentifierPrefix(TEXT("datacenter_provider_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, DatacenterProviderId);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevDatacenterProvider::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonNameField = (*Object)->TryGetField(TEXT("name"));
    ParseSuccess &= JsonNameField.IsValid() && !JsonNameField->IsNull() && TryGetJsonValue(JsonNameField, Name);
    const TSharedPtr<FJsonValue> JsonDatacenterProviderIdField = (*Object)->TryGetField(TEXT("datacenter_provider_id"));
    ParseSuccess &= JsonDatacenterProviderIdField.IsValid() && !JsonDatacenterProviderIdField->IsNull() && TryGetJsonValue(JsonDatacenterProviderIdField, DatacenterProviderId);

    return ParseSuccess;
}
