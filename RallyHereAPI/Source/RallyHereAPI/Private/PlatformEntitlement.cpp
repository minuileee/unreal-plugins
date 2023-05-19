// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlatformEntitlement.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlatformEntitlement

void FRHAPI_PlatformEntitlement::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("platform_sku"));
    RallyHereAPI::WriteJsonValue(Writer, PlatformSku);
    Writer->WriteIdentifierPrefix(TEXT("platform_entitlement_id"));
    RallyHereAPI::WriteJsonValue(Writer, PlatformEntitlementId);
    if (Quantity_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("quantity"));
        RallyHereAPI::WriteJsonValue(Writer, Quantity_Optional);
    }
    if (Status_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("status"));
        RallyHereAPI::WriteJsonValue(Writer, EnumToString(Status_Optional));
    }
    if (ErrorCode_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("error_code"));
        RallyHereAPI::WriteJsonValue(Writer, EnumToString(ErrorCode_Optional));
    }
    if (OrderId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("order_id"));
        RallyHereAPI::WriteJsonValue(Writer, OrderId_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_PlatformEntitlement::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("platform_sku"), PlatformSku);
    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("platform_entitlement_id"), PlatformEntitlementId);
    if ((*Object)->HasField(TEXT("quantity")))
    {
        Quantity_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("quantity"), Quantity_Optional);
        ParseSuccess &= Quantity_IsSet;
    }
    if ((*Object)->HasField(TEXT("status")))
    {
        Status_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("status"), Status_Optional);
        ParseSuccess &= Status_IsSet;
    }
    if ((*Object)->HasField(TEXT("error_code")))
    {
        ErrorCode_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("error_code"), ErrorCode_Optional);
        ParseSuccess &= ErrorCode_IsSet;
    }
    if ((*Object)->HasField(TEXT("order_id")))
    {
        OrderId_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("order_id"), OrderId_Optional);
        ParseSuccess &= OrderId_IsSet;
    }

    return ParseSuccess;
}

