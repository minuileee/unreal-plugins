// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevMachineClassLabelCreate.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevMachineClassLabelCreate

void FRHAPI_DevMachineClassLabelCreate::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("label"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Label);
    Writer->WriteIdentifierPrefix(TEXT("machine_class_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, MachineClassId);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevMachineClassLabelCreate::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonLabelField = (*Object)->TryGetField(TEXT("label"));
    ParseSuccess &= JsonLabelField.IsValid() && !JsonLabelField->IsNull() && TryGetJsonValue(JsonLabelField, Label);
    const TSharedPtr<FJsonValue> JsonMachineClassIdField = (*Object)->TryGetField(TEXT("machine_class_id"));
    ParseSuccess &= JsonMachineClassIdField.IsValid() && !JsonMachineClassIdField->IsNull() && TryGetJsonValue(JsonMachineClassIdField, MachineClassId);

    return ParseSuccess;
}
