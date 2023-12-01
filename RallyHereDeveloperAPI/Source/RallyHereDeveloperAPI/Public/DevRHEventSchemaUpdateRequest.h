// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevEventSchemaState.h"
#include "DevRHEventSchemaUpdateRequest.generated.h"

/** @defgroup RHAPI_DevRHEventSchemaUpdateRequest RallyHere API Model DevRHEventSchemaUpdateRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevRHEventSchemaUpdateRequest : public FRHAPI_DevModel
{
    GENERATED_BODY()

    /**
    * @brief Fills this object with data from the passed in JSON
    *
    * @param [in] JsonValue Data from the API call.
    *
    * @return true if parsing of the JSON data was successful.
    */
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;

    /**
    * @brief Writes the data from this object into the specified JSON Writer stream
    *
    * @param [in] Writer JSON Writer stream to push .
    */
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    /** @brief Name of the event, should be unique */
    FString EventName{  };
    /** @brief Gets the value of EventName */
    FString& GetEventName() { return EventName; }
    /** @brief Gets the value of EventName */
    const FString& GetEventName() const { return EventName; }
    /** @brief Sets the value of EventName */
    void SetEventName(FString NewValue) { EventName = NewValue;  }

    /** @brief Description of the event */
    FString Description{  };
    /** @brief Gets the value of Description */
    FString& GetDescription() { return Description; }
    /** @brief Gets the value of Description */
    const FString& GetDescription() const { return Description; }
    /** @brief Sets the value of Description */
    void SetDescription(FString NewValue) { Description = NewValue;  }

    /** @brief JSONSchema definition of the setting */
    FRHAPI_DevJsonObject ValueJsonschema_Optional{  };
    /** @brief true if ValueJsonschema_Optional has been set to a value */
    bool ValueJsonschema_IsSet{ false };
    /** @brief Gets the value of ValueJsonschema_Optional, regardless of it having been set */
    FRHAPI_DevJsonObject& GetValueJsonschema() { return ValueJsonschema_Optional; }
    /** @brief Gets the value of ValueJsonschema_Optional, regardless of it having been set */
    const FRHAPI_DevJsonObject& GetValueJsonschema() const { return ValueJsonschema_Optional; }
    /** @brief Gets the value of ValueJsonschema_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_DevJsonObject& GetValueJsonschema(const FRHAPI_DevJsonObject& DefaultValue) const { if (ValueJsonschema_IsSet) return ValueJsonschema_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ValueJsonschema_Optional and returns true if it has been set, otherwise returns false */
    bool GetValueJsonschema(FRHAPI_DevJsonObject& OutValue) const { if (ValueJsonschema_IsSet) OutValue = ValueJsonschema_Optional; return ValueJsonschema_IsSet; }
    /** @brief Returns a pointer to ValueJsonschema_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_DevJsonObject* GetValueJsonschemaOrNull() { if (ValueJsonschema_IsSet) return &ValueJsonschema_Optional; return nullptr; }
    /** @brief Returns a pointer to ValueJsonschema_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_DevJsonObject* GetValueJsonschemaOrNull() const { if (ValueJsonschema_IsSet) return &ValueJsonschema_Optional; return nullptr; }
    /** @brief Sets the value of ValueJsonschema_Optional and also sets ValueJsonschema_IsSet to true */
    void SetValueJsonschema(FRHAPI_DevJsonObject NewValue) { ValueJsonschema_Optional = NewValue; ValueJsonschema_IsSet = true; }
     /** @brief Clears the value of ValueJsonschema_Optional and sets ValueJsonschema_IsSet to false */
    void ClearValueJsonschema() { ValueJsonschema_IsSet = false; }

    /** @brief Whether this standard event is enabled */
    ERHAPI_DevEventSchemaState State_Optional{  };
    /** @brief true if State_Optional has been set to a value */
    bool State_IsSet{ false };
    /** @brief Gets the value of State_Optional, regardless of it having been set */
    ERHAPI_DevEventSchemaState& GetState() { return State_Optional; }
    /** @brief Gets the value of State_Optional, regardless of it having been set */
    const ERHAPI_DevEventSchemaState& GetState() const { return State_Optional; }
    /** @brief Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_DevEventSchemaState& GetState(const ERHAPI_DevEventSchemaState& DefaultValue) const { if (State_IsSet) return State_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false */
    bool GetState(ERHAPI_DevEventSchemaState& OutValue) const { if (State_IsSet) OutValue = State_Optional; return State_IsSet; }
    /** @brief Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_DevEventSchemaState* GetStateOrNull() { if (State_IsSet) return &State_Optional; return nullptr; }
    /** @brief Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_DevEventSchemaState* GetStateOrNull() const { if (State_IsSet) return &State_Optional; return nullptr; }
    /** @brief Sets the value of State_Optional and also sets State_IsSet to true */
    void SetState(ERHAPI_DevEventSchemaState NewValue) { State_Optional = NewValue; State_IsSet = true; }
     /** @brief Clears the value of State_Optional and sets State_IsSet to false */
    void ClearState() { State_IsSet = false; }
};

/** @} */
