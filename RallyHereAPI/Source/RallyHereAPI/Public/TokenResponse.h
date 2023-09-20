// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "TokenResponse.generated.h"

/** @defgroup RHAPI_TokenResponse RallyHere API Model TokenResponse
 *  @{
 */

/**
 * @brief OAuth2 Token Response
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_TokenResponse : public FRHAPI_Model
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

    /** @brief Result access token */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString AccessToken{  };
    /** @brief Gets the value of AccessToken */
    FString& GetAccessToken() { return AccessToken; }
    /** @brief Gets the value of AccessToken */
    const FString& GetAccessToken() const { return AccessToken; }
    /** @brief Sets the value of AccessToken */
    void SetAccessToken(FString NewValue) { AccessToken = NewValue;  }

    /** @brief Result token type */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString TokenType{  };
    /** @brief Gets the value of TokenType */
    FString& GetTokenType() { return TokenType; }
    /** @brief Gets the value of TokenType */
    const FString& GetTokenType() const { return TokenType; }
    /** @brief Sets the value of TokenType */
    void SetTokenType(FString NewValue) { TokenType = NewValue;  }

    /** @brief Result refresh token that can be used to get new access tokens */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString RefreshToken_Optional{  };
    /** @brief true if RefreshToken_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool RefreshToken_IsSet{ false };
    /** @brief Gets the value of RefreshToken_Optional, regardless of it having been set */
    FString& GetRefreshToken() { return RefreshToken_Optional; }
    /** @brief Gets the value of RefreshToken_Optional, regardless of it having been set */
    const FString& GetRefreshToken() const { return RefreshToken_Optional; }
    /** @brief Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetRefreshToken(const FString& DefaultValue) const { if (RefreshToken_IsSet) return RefreshToken_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false */
    bool GetRefreshToken(FString& OutValue) const { if (RefreshToken_IsSet) OutValue = RefreshToken_Optional; return RefreshToken_IsSet; }
    /** @brief Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr */
    FString* GetRefreshTokenOrNull() { if (RefreshToken_IsSet) return &RefreshToken_Optional; return nullptr; }
    /** @brief Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetRefreshTokenOrNull() const { if (RefreshToken_IsSet) return &RefreshToken_Optional; return nullptr; }
    /** @brief Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true */
    void SetRefreshToken(FString NewValue) { RefreshToken_Optional = NewValue; RefreshToken_IsSet = true; }
     /** @brief Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false */
    void ClearRefreshToken() { RefreshToken_IsSet = false; }

    /** @brief Result access token expiration time in seconds */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 ExpiresIn{ 0 };
    /** @brief Gets the value of ExpiresIn */
    int32& GetExpiresIn() { return ExpiresIn; }
    /** @brief Gets the value of ExpiresIn */
    const int32& GetExpiresIn() const { return ExpiresIn; }
    /** @brief Sets the value of ExpiresIn */
    void SetExpiresIn(int32 NewValue) { ExpiresIn = NewValue;  }
    /** @brief Returns true if ExpiresIn matches the default value */
    bool IsExpiresInDefaultValue() const { return ExpiresIn == 0; }
    /** @brief Sets the value of ExpiresIn to its default  */
    void SetExpiresInToDefault() { ExpiresIn = 0;  }
};

/** @} */
