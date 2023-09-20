// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "MapConfig.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_MapConfig

void FRHAPI_MapConfig::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (MapGameId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("map_game_id"));
        RallyHereAPI::WriteJsonValue(Writer, MapGameId_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("map_name"));
    RallyHereAPI::WriteJsonValue(Writer, MapName);
    if (Mode_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("mode"));
        RallyHereAPI::WriteJsonValue(Writer, Mode_Optional);
    }
    if (SelectionChance_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("selection_chance"));
        RallyHereAPI::WriteJsonValue(Writer, SelectionChance_Optional);
    }
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_MapConfig::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonMapGameIdField = (*Object)->TryGetField(TEXT("map_game_id"));
    if (JsonMapGameIdField.IsValid() && !JsonMapGameIdField->IsNull())
    {
        MapGameId_IsSet = TryGetJsonValue(JsonMapGameIdField, MapGameId_Optional);
        ParseSuccess &= MapGameId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMapNameField = (*Object)->TryGetField(TEXT("map_name"));
    ParseSuccess &= JsonMapNameField.IsValid() && !JsonMapNameField->IsNull() && TryGetJsonValue(JsonMapNameField, MapName);
    const TSharedPtr<FJsonValue> JsonModeField = (*Object)->TryGetField(TEXT("mode"));
    if (JsonModeField.IsValid() && !JsonModeField->IsNull())
    {
        Mode_IsSet = TryGetJsonValue(JsonModeField, Mode_Optional);
        ParseSuccess &= Mode_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonSelectionChanceField = (*Object)->TryGetField(TEXT("selection_chance"));
    if (JsonSelectionChanceField.IsValid() && !JsonSelectionChanceField->IsNull())
    {
        SelectionChance_IsSet = TryGetJsonValue(JsonSelectionChanceField, SelectionChance_Optional);
        ParseSuccess &= SelectionChance_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }

    return ParseSuccess;
}

