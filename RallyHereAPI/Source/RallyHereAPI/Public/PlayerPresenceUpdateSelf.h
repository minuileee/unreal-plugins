// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "OnlineStatus.h"
#include "PlayerPresenceUpdateSelf.generated.h"

/** @defgroup RHAPI_PlayerPresenceUpdateSelf RallyHere API Model PlayerPresenceUpdateSelf
 *  @{
 */

/**
 * @brief
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlayerPresenceUpdateSelf : public FRHAPI_Model
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

    /** @brief Is the player currently online? */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_OnlineStatus Status_Optional{  };
    /** @brief true if Status_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Status_IsSet{ false };
    /** @brief Gets the value of Status_Optional, regardless of it having been set */
    ERHAPI_OnlineStatus& GetStatus() { return Status_Optional; }
    /** @brief Gets the value of Status_Optional, regardless of it having been set */
    const ERHAPI_OnlineStatus& GetStatus() const { return Status_Optional; }
    /** @brief Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_OnlineStatus& GetStatus(const ERHAPI_OnlineStatus& DefaultValue) const { if (Status_IsSet) return Status_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false */
    bool GetStatus(ERHAPI_OnlineStatus& OutValue) const { if (Status_IsSet) OutValue = Status_Optional; return Status_IsSet; }
    /** @brief Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_OnlineStatus* GetStatusOrNull() { if (Status_IsSet) return &Status_Optional; return nullptr; }
    /** @brief Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_OnlineStatus* GetStatusOrNull() const { if (Status_IsSet) return &Status_Optional; return nullptr; }
    /** @brief Sets the value of Status_Optional and also sets Status_IsSet to true */
    void SetStatus(ERHAPI_OnlineStatus NewValue) { Status_Optional = NewValue; Status_IsSet = true; }
     /** @brief Clears the value of Status_Optional and sets Status_IsSet to false */
    void ClearStatus() { Status_IsSet = false; }

    /** @brief Optional custom message to display alongside the user's online status. Leaving this unset will not change the value. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Message_Optional{  };
    /** @brief true if Message_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Message_IsSet{ false };
    /** @brief Gets the value of Message_Optional, regardless of it having been set */
    FString& GetMessage() { return Message_Optional; }
    /** @brief Gets the value of Message_Optional, regardless of it having been set */
    const FString& GetMessage() const { return Message_Optional; }
    /** @brief Gets the value of Message_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetMessage(const FString& DefaultValue) const { if (Message_IsSet) return Message_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Message_Optional and returns true if it has been set, otherwise returns false */
    bool GetMessage(FString& OutValue) const { if (Message_IsSet) OutValue = Message_Optional; return Message_IsSet; }
    /** @brief Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr */
    FString* GetMessageOrNull() { if (Message_IsSet) return &Message_Optional; return nullptr; }
    /** @brief Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetMessageOrNull() const { if (Message_IsSet) return &Message_Optional; return nullptr; }
    /** @brief Sets the value of Message_Optional and also sets Message_IsSet to true */
    void SetMessage(FString NewValue) { Message_Optional = NewValue; Message_IsSet = true; }
     /** @brief Clears the value of Message_Optional and sets Message_IsSet to false */
    void ClearMessage() { Message_IsSet = false; }

    /** @brief Disables notifications and invites. Leaving this unset will not change the value. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool DoNotDisturb_Optional{  };
    /** @brief true if DoNotDisturb_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool DoNotDisturb_IsSet{ false };
    /** @brief Gets the value of DoNotDisturb_Optional, regardless of it having been set */
    bool& GetDoNotDisturb() { return DoNotDisturb_Optional; }
    /** @brief Gets the value of DoNotDisturb_Optional, regardless of it having been set */
    const bool& GetDoNotDisturb() const { return DoNotDisturb_Optional; }
    /** @brief Gets the value of DoNotDisturb_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetDoNotDisturb(const bool& DefaultValue) const { if (DoNotDisturb_IsSet) return DoNotDisturb_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of DoNotDisturb_Optional and returns true if it has been set, otherwise returns false */
    bool GetDoNotDisturb(bool& OutValue) const { if (DoNotDisturb_IsSet) OutValue = DoNotDisturb_Optional; return DoNotDisturb_IsSet; }
    /** @brief Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr */
    bool* GetDoNotDisturbOrNull() { if (DoNotDisturb_IsSet) return &DoNotDisturb_Optional; return nullptr; }
    /** @brief Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetDoNotDisturbOrNull() const { if (DoNotDisturb_IsSet) return &DoNotDisturb_Optional; return nullptr; }
    /** @brief Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true */
    void SetDoNotDisturb(bool NewValue) { DoNotDisturb_Optional = NewValue; DoNotDisturb_IsSet = true; }
     /** @brief Clears the value of DoNotDisturb_Optional and sets DoNotDisturb_IsSet to false */
    void ClearDoNotDisturb() { DoNotDisturb_Optional = false; DoNotDisturb_IsSet = false; }
    /** @brief Returns true if DoNotDisturb_Optional is set and matches the default value */
    bool IsDoNotDisturbDefaultValue() const { return DoNotDisturb_IsSet && DoNotDisturb_Optional == false; }
    /** @brief Sets the value of DoNotDisturb_Optional to its default and also sets DoNotDisturb_IsSet to true */
    void SetDoNotDisturbToDefault() { DoNotDisturb_Optional = false; DoNotDisturb_IsSet = true; }

    /** @brief custom fields for the player to update about their presence. Custom data with a null value will be removed */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TMap<FString, FString> CustomData_Optional{  };
    /** @brief true if CustomData_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CustomData_IsSet{ false };
    /** @brief Gets the value of CustomData_Optional, regardless of it having been set */
    TMap<FString, FString>& GetCustomData() { return CustomData_Optional; }
    /** @brief Gets the value of CustomData_Optional, regardless of it having been set */
    const TMap<FString, FString>& GetCustomData() const { return CustomData_Optional; }
    /** @brief Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue */
    const TMap<FString, FString>& GetCustomData(const TMap<FString, FString>& DefaultValue) const { if (CustomData_IsSet) return CustomData_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false */
    bool GetCustomData(TMap<FString, FString>& OutValue) const { if (CustomData_IsSet) OutValue = CustomData_Optional; return CustomData_IsSet; }
    /** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
    TMap<FString, FString>* GetCustomDataOrNull() { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    /** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
    const TMap<FString, FString>* GetCustomDataOrNull() const { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    /** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true */
    void SetCustomData(TMap<FString, FString> NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
     /** @brief Clears the value of CustomData_Optional and sets CustomData_IsSet to false */
    void ClearCustomData() { CustomData_IsSet = false; }
};

/** @} */
