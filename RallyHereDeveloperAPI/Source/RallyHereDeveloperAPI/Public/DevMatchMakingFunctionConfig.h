// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevMatchMakingFunctionClientType.h"
#include "DevMatchMakingFunctionConfig.generated.h"

/** @defgroup RHAPI_DevMatchMakingFunctionConfig RallyHere API Model DevMatchMakingFunctionConfig
 *  @{
 */

/**
 * @brief
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevMatchMakingFunctionConfig : public FRHAPI_DevModel
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

    /** @brief The name of the matchmaking function that will be used to propose matches */
    FString Host_Optional{  };
    /** @brief true if Host_Optional has been set to a value */
    bool Host_IsSet{ false };
    /** @brief Gets the value of Host_Optional, regardless of it having been set */
    FString& GetHost() { return Host_Optional; }
    /** @brief Gets the value of Host_Optional, regardless of it having been set */
    const FString& GetHost() const { return Host_Optional; }
    /** @brief Gets the value of Host_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetHost(const FString& DefaultValue) const { if (Host_IsSet) return Host_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Host_Optional and returns true if it has been set, otherwise returns false */
    bool GetHost(FString& OutValue) const { if (Host_IsSet) OutValue = Host_Optional; return Host_IsSet; }
    /** @brief Returns a pointer to Host_Optional, if it has been set, otherwise returns nullptr */
    FString* GetHostOrNull() { if (Host_IsSet) return &Host_Optional; return nullptr; }
    /** @brief Returns a pointer to Host_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetHostOrNull() const { if (Host_IsSet) return &Host_Optional; return nullptr; }
    /** @brief Sets the value of Host_Optional and also sets Host_IsSet to true */
    void SetHost(FString NewValue) { Host_Optional = NewValue; Host_IsSet = true; }
     /** @brief Clears the value of Host_Optional and sets Host_IsSet to false */
    void ClearHost() { Host_Optional = TEXT("hirez-matchmakingfunction"); Host_IsSet = false; }
    /** @brief Returns true if Host_Optional is set and matches the default value */
    bool IsHostDefaultValue() const { return Host_IsSet && Host_Optional == TEXT("hirez-matchmakingfunction"); }
    /** @brief Sets the value of Host_Optional to its default and also sets Host_IsSet to true */
    void SetHostToDefault() { Host_Optional = TEXT("hirez-matchmakingfunction"); Host_IsSet = true; }

    /** @brief Which port the specified matchmaking function listens on */
    int32 Port_Optional{  };
    /** @brief true if Port_Optional has been set to a value */
    bool Port_IsSet{ false };
    /** @brief Gets the value of Port_Optional, regardless of it having been set */
    int32& GetPort() { return Port_Optional; }
    /** @brief Gets the value of Port_Optional, regardless of it having been set */
    const int32& GetPort() const { return Port_Optional; }
    /** @brief Gets the value of Port_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetPort(const int32& DefaultValue) const { if (Port_IsSet) return Port_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Port_Optional and returns true if it has been set, otherwise returns false */
    bool GetPort(int32& OutValue) const { if (Port_IsSet) OutValue = Port_Optional; return Port_IsSet; }
    /** @brief Returns a pointer to Port_Optional, if it has been set, otherwise returns nullptr */
    int32* GetPortOrNull() { if (Port_IsSet) return &Port_Optional; return nullptr; }
    /** @brief Returns a pointer to Port_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetPortOrNull() const { if (Port_IsSet) return &Port_Optional; return nullptr; }
    /** @brief Sets the value of Port_Optional and also sets Port_IsSet to true */
    void SetPort(int32 NewValue) { Port_Optional = NewValue; Port_IsSet = true; }
     /** @brief Clears the value of Port_Optional and sets Port_IsSet to false */
    void ClearPort() { Port_Optional = 50502; Port_IsSet = false; }
    /** @brief Returns true if Port_Optional is set and matches the default value */
    bool IsPortDefaultValue() const { return Port_IsSet && Port_Optional == 50502; }
    /** @brief Sets the value of Port_Optional to its default and also sets Port_IsSet to true */
    void SetPortToDefault() { Port_Optional = 50502; Port_IsSet = true; }

    /** @brief Which client type the specified matchmaking function uses */
    ERHAPI_DevMatchMakingFunctionClientType Type_Optional{  };
    /** @brief true if Type_Optional has been set to a value */
    bool Type_IsSet{ false };
    /** @brief Gets the value of Type_Optional, regardless of it having been set */
    ERHAPI_DevMatchMakingFunctionClientType& GetType() { return Type_Optional; }
    /** @brief Gets the value of Type_Optional, regardless of it having been set */
    const ERHAPI_DevMatchMakingFunctionClientType& GetType() const { return Type_Optional; }
    /** @brief Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_DevMatchMakingFunctionClientType& GetType(const ERHAPI_DevMatchMakingFunctionClientType& DefaultValue) const { if (Type_IsSet) return Type_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false */
    bool GetType(ERHAPI_DevMatchMakingFunctionClientType& OutValue) const { if (Type_IsSet) OutValue = Type_Optional; return Type_IsSet; }
    /** @brief Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_DevMatchMakingFunctionClientType* GetTypeOrNull() { if (Type_IsSet) return &Type_Optional; return nullptr; }
    /** @brief Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_DevMatchMakingFunctionClientType* GetTypeOrNull() const { if (Type_IsSet) return &Type_Optional; return nullptr; }
    /** @brief Sets the value of Type_Optional and also sets Type_IsSet to true */
    void SetType(ERHAPI_DevMatchMakingFunctionClientType NewValue) { Type_Optional = NewValue; Type_IsSet = true; }
     /** @brief Clears the value of Type_Optional and sets Type_IsSet to false */
    void ClearType() { Type_IsSet = false; }
};

/** @} */
