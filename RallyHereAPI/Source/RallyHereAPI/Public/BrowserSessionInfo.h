// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "BrowserSessionInfo.generated.h"

/** @defgroup RHAPI_BrowserSessionInfo RallyHere API Model BrowserSessionInfo
 *  @{
 */

/**
 * @brief Information about a session listed in a browser
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_BrowserSessionInfo : public FRHAPI_Model
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

    /** @brief ID for the session */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString SessionId{  };
    /** @brief Gets the value of SessionId */
    FString& GetSessionId() { return SessionId; }
    /** @brief Gets the value of SessionId */
    const FString& GetSessionId() const { return SessionId; }
    /** @brief Sets the value of SessionId */
    void SetSessionId(FString NewValue) { SessionId = NewValue;  }

    /** @brief Number of players actively in this session */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    int32 PlayerCount_Optional{  };
    /** @brief true if PlayerCount_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool PlayerCount_IsSet{ false };
    /** @brief Gets the value of PlayerCount_Optional, regardless of it having been set */
    int32& GetPlayerCount() { return PlayerCount_Optional; }
    /** @brief Gets the value of PlayerCount_Optional, regardless of it having been set */
    const int32& GetPlayerCount() const { return PlayerCount_Optional; }
    /** @brief Gets the value of PlayerCount_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetPlayerCount(const int32& DefaultValue) const { if (PlayerCount_IsSet) return PlayerCount_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of PlayerCount_Optional and returns true if it has been set, otherwise returns false */
    bool GetPlayerCount(int32& OutValue) const { if (PlayerCount_IsSet) OutValue = PlayerCount_Optional; return PlayerCount_IsSet; }
    /** @brief Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr */
    int32* GetPlayerCountOrNull() { if (PlayerCount_IsSet) return &PlayerCount_Optional; return nullptr; }
    /** @brief Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetPlayerCountOrNull() const { if (PlayerCount_IsSet) return &PlayerCount_Optional; return nullptr; }
    /** @brief Sets the value of PlayerCount_Optional and also sets PlayerCount_IsSet to true */
    void SetPlayerCount(int32 NewValue) { PlayerCount_Optional = NewValue; PlayerCount_IsSet = true; }
     /** @brief Clears the value of PlayerCount_Optional and sets PlayerCount_IsSet to false */
    void ClearPlayerCount() { PlayerCount_Optional = 0; PlayerCount_IsSet = false; }
    /** @brief Returns true if PlayerCount_Optional is set and matches the default value */
    bool IsPlayerCountDefaultValue() const { return PlayerCount_IsSet && PlayerCount_Optional == 0; }
    /** @brief Sets the value of PlayerCount_Optional to its default and also sets PlayerCount_IsSet to true */
    void SetPlayerCountToDefault() { PlayerCount_Optional = 0; PlayerCount_IsSet = true; }

    /** @brief Maximum number of players that can be in this session */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    int32 MaxPlayerCount_Optional{  };
    /** @brief true if MaxPlayerCount_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool MaxPlayerCount_IsSet{ false };
    /** @brief Gets the value of MaxPlayerCount_Optional, regardless of it having been set */
    int32& GetMaxPlayerCount() { return MaxPlayerCount_Optional; }
    /** @brief Gets the value of MaxPlayerCount_Optional, regardless of it having been set */
    const int32& GetMaxPlayerCount() const { return MaxPlayerCount_Optional; }
    /** @brief Gets the value of MaxPlayerCount_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetMaxPlayerCount(const int32& DefaultValue) const { if (MaxPlayerCount_IsSet) return MaxPlayerCount_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MaxPlayerCount_Optional and returns true if it has been set, otherwise returns false */
    bool GetMaxPlayerCount(int32& OutValue) const { if (MaxPlayerCount_IsSet) OutValue = MaxPlayerCount_Optional; return MaxPlayerCount_IsSet; }
    /** @brief Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr */
    int32* GetMaxPlayerCountOrNull() { if (MaxPlayerCount_IsSet) return &MaxPlayerCount_Optional; return nullptr; }
    /** @brief Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetMaxPlayerCountOrNull() const { if (MaxPlayerCount_IsSet) return &MaxPlayerCount_Optional; return nullptr; }
    /** @brief Sets the value of MaxPlayerCount_Optional and also sets MaxPlayerCount_IsSet to true */
    void SetMaxPlayerCount(int32 NewValue) { MaxPlayerCount_Optional = NewValue; MaxPlayerCount_IsSet = true; }
     /** @brief Clears the value of MaxPlayerCount_Optional and sets MaxPlayerCount_IsSet to false */
    void ClearMaxPlayerCount() { MaxPlayerCount_Optional = 0; MaxPlayerCount_IsSet = false; }
    /** @brief Returns true if MaxPlayerCount_Optional is set and matches the default value */
    bool IsMaxPlayerCountDefaultValue() const { return MaxPlayerCount_IsSet && MaxPlayerCount_Optional == 0; }
    /** @brief Sets the value of MaxPlayerCount_Optional to its default and also sets MaxPlayerCount_IsSet to true */
    void SetMaxPlayerCountToDefault() { MaxPlayerCount_Optional = 0; MaxPlayerCount_IsSet = true; }

    /** @brief Custom data with the listing of the instance in the Session browser */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    TMap<FString, FString> CustomData_Optional{  };
    /** @brief true if CustomData_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
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
