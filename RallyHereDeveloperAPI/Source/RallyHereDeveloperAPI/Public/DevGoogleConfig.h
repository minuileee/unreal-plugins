// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevGoogleConfig.generated.h"

/** @defgroup RHAPI_DevGoogleConfig RallyHere API Model DevGoogleConfig
 *  @{
 */

/**
 * @brief
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevGoogleConfig : public FRHAPI_DevModel
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

    /** @brief Whether or not to enable Google logins */
    bool EnableLogin_Optional{  };
    /** @brief true if EnableLogin_Optional has been set to a value */
    bool EnableLogin_IsSet{ false };
    /** @brief Gets the value of EnableLogin_Optional, regardless of it having been set */
    bool& GetEnableLogin() { return EnableLogin_Optional; }
    /** @brief Gets the value of EnableLogin_Optional, regardless of it having been set */
    const bool& GetEnableLogin() const { return EnableLogin_Optional; }
    /** @brief Gets the value of EnableLogin_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetEnableLogin(const bool& DefaultValue) const { if (EnableLogin_IsSet) return EnableLogin_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of EnableLogin_Optional and returns true if it has been set, otherwise returns false */
    bool GetEnableLogin(bool& OutValue) const { if (EnableLogin_IsSet) OutValue = EnableLogin_Optional; return EnableLogin_IsSet; }
    /** @brief Returns a pointer to EnableLogin_Optional, if it has been set, otherwise returns nullptr */
    bool* GetEnableLoginOrNull() { if (EnableLogin_IsSet) return &EnableLogin_Optional; return nullptr; }
    /** @brief Returns a pointer to EnableLogin_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetEnableLoginOrNull() const { if (EnableLogin_IsSet) return &EnableLogin_Optional; return nullptr; }
    /** @brief Sets the value of EnableLogin_Optional and also sets EnableLogin_IsSet to true */
    void SetEnableLogin(bool NewValue) { EnableLogin_Optional = NewValue; EnableLogin_IsSet = true; }
     /** @brief Clears the value of EnableLogin_Optional and sets EnableLogin_IsSet to false */
    void ClearEnableLogin() { EnableLogin_Optional = true; EnableLogin_IsSet = false; }
    /** @brief Returns true if EnableLogin_Optional is set and matches the default value */
    bool IsEnableLoginDefaultValue() const { return EnableLogin_IsSet && EnableLogin_Optional == true; }
    /** @brief Sets the value of EnableLogin_Optional to its default and also sets EnableLogin_IsSet to true */
    void SetEnableLoginToDefault() { EnableLogin_Optional = true; EnableLogin_IsSet = true; }

    /** @brief Google client ID. Client tokens are validated against this ID */
    FString ClientId{  };
    /** @brief Gets the value of ClientId */
    FString& GetClientId() { return ClientId; }
    /** @brief Gets the value of ClientId */
    const FString& GetClientId() const { return ClientId; }
    /** @brief Sets the value of ClientId */
    void SetClientId(FString NewValue) { ClientId = NewValue;  }
};

/** @} */
