// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "Platform.h"
#include "PlatformID.h"
#include "PlatformSessionTemplate.generated.h"

/** @defgroup RHAPI_PlatformSessionTemplate RallyHere API Model PlatformSessionTemplate
 *  @{
 */

/**
 * @brief Template used to create new platform sessions for a specific type of platform. Configurable in the developer portal
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlatformSessionTemplate : public FRHAPI_Model
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

    /** @brief DEPRECATED. ID for the platform type for this template. Use 'platform' instead */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    ERHAPI_PlatformID PlatformId{  };
    /** @brief Gets the value of PlatformId */
    ERHAPI_PlatformID& GetPlatformId() { return PlatformId; }
    /** @brief Gets the value of PlatformId */
    const ERHAPI_PlatformID& GetPlatformId() const { return PlatformId; }
    /** @brief Sets the value of PlatformId */
    void SetPlatformId(ERHAPI_PlatformID NewValue) { PlatformId = NewValue;  }

    /** @brief Platform */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    ERHAPI_Platform Platform{  };
    /** @brief Gets the value of Platform */
    ERHAPI_Platform& GetPlatform() { return Platform; }
    /** @brief Gets the value of Platform */
    const ERHAPI_Platform& GetPlatform() const { return Platform; }
    /** @brief Sets the value of Platform */
    void SetPlatform(ERHAPI_Platform NewValue) { Platform = NewValue;  }

    /** @brief Platform-Specific Identifier for the Platform's template */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString PlatformSessionType{  };
    /** @brief Gets the value of PlatformSessionType */
    FString& GetPlatformSessionType() { return PlatformSessionType; }
    /** @brief Gets the value of PlatformSessionType */
    const FString& GetPlatformSessionType() const { return PlatformSessionType; }
    /** @brief Sets the value of PlatformSessionType */
    void SetPlatformSessionType(FString NewValue) { PlatformSessionType = NewValue;  }

    /** @brief The maximum number of players that can be a part of this platform session */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    int32 MaxPlayers_Optional{  };
    /** @brief true if MaxPlayers_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool MaxPlayers_IsSet{ false };
    /** @brief Gets the value of MaxPlayers_Optional, regardless of it having been set */
    int32& GetMaxPlayers() { return MaxPlayers_Optional; }
    /** @brief Gets the value of MaxPlayers_Optional, regardless of it having been set */
    const int32& GetMaxPlayers() const { return MaxPlayers_Optional; }
    /** @brief Gets the value of MaxPlayers_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetMaxPlayers(const int32& DefaultValue) const { if (MaxPlayers_IsSet) return MaxPlayers_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MaxPlayers_Optional and returns true if it has been set, otherwise returns false */
    bool GetMaxPlayers(int32& OutValue) const { if (MaxPlayers_IsSet) OutValue = MaxPlayers_Optional; return MaxPlayers_IsSet; }
    /** @brief Returns a pointer to MaxPlayers_Optional, if it has been set, otherwise returns nullptr */
    int32* GetMaxPlayersOrNull() { if (MaxPlayers_IsSet) return &MaxPlayers_Optional; return nullptr; }
    /** @brief Returns a pointer to MaxPlayers_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetMaxPlayersOrNull() const { if (MaxPlayers_IsSet) return &MaxPlayers_Optional; return nullptr; }
    /** @brief Sets the value of MaxPlayers_Optional and also sets MaxPlayers_IsSet to true */
    void SetMaxPlayers(int32 NewValue) { MaxPlayers_Optional = NewValue; MaxPlayers_IsSet = true; }
     /** @brief Clears the value of MaxPlayers_Optional and sets MaxPlayers_IsSet to false */
    void ClearMaxPlayers() { MaxPlayers_Optional = 0; MaxPlayers_IsSet = false; }
    /** @brief Returns true if MaxPlayers_Optional is set and matches the default value */
    bool IsMaxPlayersDefaultValue() const { return MaxPlayers_IsSet && MaxPlayers_Optional == 0; }
    /** @brief Sets the value of MaxPlayers_Optional to its default and also sets MaxPlayers_IsSet to true */
    void SetMaxPlayersToDefault() { MaxPlayers_Optional = 0; MaxPlayers_IsSet = true; }

    /** @brief Product-defined custom data */
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
