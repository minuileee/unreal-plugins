// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "HTTPAuthorizationCredentials.generated.h"

/** @defgroup RHAPI_HTTPAuthorizationCredentials RallyHere API Model HTTPAuthorizationCredentials
 *  @{
 */

/**
 * @brief The HTTP authorization credentials in the result of using &#x60;HTTPBearer&#x60; or &#x60;HTTPDigest&#x60; in a dependency.  The HTTP authorization header value is split by the first space.  The first part is the &#x60;scheme&#x60;, the second part is the &#x60;credentials&#x60;.  For example, in an HTTP Bearer token scheme, the client will send a header like:  &#x60;&#x60;&#x60; Authorization: Bearer deadbeef12346 &#x60;&#x60;&#x60;  In this case:  * &#x60;scheme&#x60; will have the value &#x60;\&quot;Bearer\&quot;&#x60; * &#x60;credentials&#x60; will have the value &#x60;\&quot;deadbeef12346\&quot;&#x60;
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_HTTPAuthorizationCredentials : public FRHAPI_Model
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

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString Scheme{  };
    /** @brief Gets the value of Scheme */
    FString& GetScheme() { return Scheme; }
    /** @brief Gets the value of Scheme */
    const FString& GetScheme() const { return Scheme; }
    /** @brief Sets the value of Scheme */
    void SetScheme(FString NewValue) { Scheme = NewValue;  }

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString Credentials{  };
    /** @brief Gets the value of Credentials */
    FString& GetCredentials() { return Credentials; }
    /** @brief Gets the value of Credentials */
    const FString& GetCredentials() const { return Credentials; }
    /** @brief Sets the value of Credentials */
    void SetCredentials(FString NewValue) { Credentials = NewValue;  }
};

/** @} */
