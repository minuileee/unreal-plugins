// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevUpdatePricePoint.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevUpdatePricePoint

void FRHAPI_DevUpdatePricePoint::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    if (Name_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("name"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Name_Optional);
    }
    if (Description_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("description"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Description_Optional);
    }
    if (StrictFlag_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("strict_flag"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, StrictFlag_Optional);
    }
    if (CapFlag_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cap_flag"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CapFlag_Optional);
    }
    if (CurrentBreakpoints_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("current_breakpoints"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CurrentBreakpoints_Optional);
    }
    if (PreSaleBreakpoints_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("pre_sale_breakpoints"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, PreSaleBreakpoints_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevUpdatePricePoint::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonNameField = (*Object)->TryGetField(TEXT("name"));
    if (JsonNameField.IsValid() && !JsonNameField->IsNull())
    {
        Name_IsSet = TryGetJsonValue(JsonNameField, Name_Optional);
        ParseSuccess &= Name_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDescriptionField = (*Object)->TryGetField(TEXT("description"));
    if (JsonDescriptionField.IsValid() && !JsonDescriptionField->IsNull())
    {
        Description_IsSet = TryGetJsonValue(JsonDescriptionField, Description_Optional);
        ParseSuccess &= Description_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonStrictFlagField = (*Object)->TryGetField(TEXT("strict_flag"));
    if (JsonStrictFlagField.IsValid() && !JsonStrictFlagField->IsNull())
    {
        StrictFlag_IsSet = TryGetJsonValue(JsonStrictFlagField, StrictFlag_Optional);
        ParseSuccess &= StrictFlag_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCapFlagField = (*Object)->TryGetField(TEXT("cap_flag"));
    if (JsonCapFlagField.IsValid() && !JsonCapFlagField->IsNull())
    {
        CapFlag_IsSet = TryGetJsonValue(JsonCapFlagField, CapFlag_Optional);
        ParseSuccess &= CapFlag_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCurrentBreakpointsField = (*Object)->TryGetField(TEXT("current_breakpoints"));
    if (JsonCurrentBreakpointsField.IsValid() && !JsonCurrentBreakpointsField->IsNull())
    {
        CurrentBreakpoints_IsSet = TryGetJsonValue(JsonCurrentBreakpointsField, CurrentBreakpoints_Optional);
        ParseSuccess &= CurrentBreakpoints_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPreSaleBreakpointsField = (*Object)->TryGetField(TEXT("pre_sale_breakpoints"));
    if (JsonPreSaleBreakpointsField.IsValid() && !JsonPreSaleBreakpointsField->IsNull())
    {
        PreSaleBreakpoints_IsSet = TryGetJsonValue(JsonPreSaleBreakpointsField, PreSaleBreakpoints_Optional);
        ParseSuccess &= PreSaleBreakpoints_IsSet;
    }

    return ParseSuccess;
}

