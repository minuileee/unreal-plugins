// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "CrossplayPreferences.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_CrossplayPreferences

void FRHAPI_CrossplayPreferences::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("permitted_platform"));
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(PermittedPlatform));
    Writer->WriteIdentifierPrefix(TEXT("permitted_input"));
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(PermittedInput));
    Writer->WriteObjectEnd();
}

bool FRHAPI_CrossplayPreferences::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonPermittedPlatformField = (*Object)->TryGetField(TEXT("permitted_platform"));
    ParseSuccess &= JsonPermittedPlatformField.IsValid() && !JsonPermittedPlatformField->IsNull() && TryGetJsonValue(JsonPermittedPlatformField, PermittedPlatform);
    const TSharedPtr<FJsonValue> JsonPermittedInputField = (*Object)->TryGetField(TEXT("permitted_input"));
    ParseSuccess &= JsonPermittedInputField.IsValid() && !JsonPermittedInputField->IsNull() && TryGetJsonValue(JsonPermittedInputField, PermittedInput);

    return ParseSuccess;
}
