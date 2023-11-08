// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevAllMapSelectionListEntriesResponse.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevAllMapSelectionListEntriesResponse

void FRHAPI_DevAllMapSelectionListEntriesResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("cursor"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Cursor);
    if (MapSelectionListEntries_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("map_selection_list_entries"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, MapSelectionListEntries_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevAllMapSelectionListEntriesResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonCursorField = (*Object)->TryGetField(TEXT("cursor"));
    ParseSuccess &= JsonCursorField.IsValid() && !JsonCursorField->IsNull() && TryGetJsonValue(JsonCursorField, Cursor);
    const TSharedPtr<FJsonValue> JsonMapSelectionListEntriesField = (*Object)->TryGetField(TEXT("map_selection_list_entries"));
    if (JsonMapSelectionListEntriesField.IsValid() && !JsonMapSelectionListEntriesField->IsNull())
    {
        MapSelectionListEntries_IsSet = TryGetJsonValue(JsonMapSelectionListEntriesField, MapSelectionListEntries_Optional);
        ParseSuccess &= MapSelectionListEntries_IsSet;
    }

    return ParseSuccess;
}

