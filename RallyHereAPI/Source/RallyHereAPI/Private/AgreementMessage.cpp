// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "AgreementMessage.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_AgreementMessage

void FRHAPI_AgreementMessage::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (AuthSuccess_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("auth_success"));
        RallyHereAPI::WriteJsonValue(Writer, AuthSuccess_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("error_code"));
    RallyHereAPI::WriteJsonValue(Writer, ErrorCode);
    Writer->WriteIdentifierPrefix(TEXT("desc"));
    RallyHereAPI::WriteJsonValue(Writer, Desc);
    if (NeedsEula_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("needs_eula"));
        RallyHereAPI::WriteJsonValue(Writer, NeedsEula_Optional);
    }
    if (NeedsTos_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("needs_tos"));
        RallyHereAPI::WriteJsonValue(Writer, NeedsTos_Optional);
    }
    if (NeedsPrivacyPolicy_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("needs_privacy_policy"));
        RallyHereAPI::WriteJsonValue(Writer, NeedsPrivacyPolicy_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_AgreementMessage::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonAuthSuccessField = (*Object)->TryGetField(TEXT("auth_success"));
    if (JsonAuthSuccessField.IsValid() && !JsonAuthSuccessField->IsNull())
    {
        AuthSuccess_IsSet = TryGetJsonValue(JsonAuthSuccessField, AuthSuccess_Optional);
        ParseSuccess &= AuthSuccess_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonErrorCodeField = (*Object)->TryGetField(TEXT("error_code"));
    ParseSuccess &= JsonErrorCodeField.IsValid() && !JsonErrorCodeField->IsNull() && TryGetJsonValue(JsonErrorCodeField, ErrorCode);
    const TSharedPtr<FJsonValue> JsonDescField = (*Object)->TryGetField(TEXT("desc"));
    ParseSuccess &= JsonDescField.IsValid() && !JsonDescField->IsNull() && TryGetJsonValue(JsonDescField, Desc);
    const TSharedPtr<FJsonValue> JsonNeedsEulaField = (*Object)->TryGetField(TEXT("needs_eula"));
    if (JsonNeedsEulaField.IsValid() && !JsonNeedsEulaField->IsNull())
    {
        NeedsEula_IsSet = TryGetJsonValue(JsonNeedsEulaField, NeedsEula_Optional);
        ParseSuccess &= NeedsEula_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonNeedsTosField = (*Object)->TryGetField(TEXT("needs_tos"));
    if (JsonNeedsTosField.IsValid() && !JsonNeedsTosField->IsNull())
    {
        NeedsTos_IsSet = TryGetJsonValue(JsonNeedsTosField, NeedsTos_Optional);
        ParseSuccess &= NeedsTos_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonNeedsPrivacyPolicyField = (*Object)->TryGetField(TEXT("needs_privacy_policy"));
    if (JsonNeedsPrivacyPolicyField.IsValid() && !JsonNeedsPrivacyPolicyField->IsNull())
    {
        NeedsPrivacyPolicy_IsSet = TryGetJsonValue(JsonNeedsPrivacyPolicyField, NeedsPrivacyPolicy_Optional);
        ParseSuccess &= NeedsPrivacyPolicy_IsSet;
    }

    return ParseSuccess;
}

