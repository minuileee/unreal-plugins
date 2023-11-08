// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "HostType.h"
#include "MapSelectionListV2.h"
#include "InstanceRequestTemplate.generated.h"

/** @defgroup RHAPI_InstanceRequestTemplate RallyHere API Model InstanceRequestTemplate
 *  @{
 */

/**
 * @brief Configuration about how an instance should behave when it&#39;s allocated
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_InstanceRequestTemplate : public FRHAPI_Model
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

    /** @brief ID to uniquely identify this instance launch template */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid InstanceRequestTemplateId{  };
    /** @brief Gets the value of InstanceRequestTemplateId */
    FGuid& GetInstanceRequestTemplateId() { return InstanceRequestTemplateId; }
    /** @brief Gets the value of InstanceRequestTemplateId */
    const FGuid& GetInstanceRequestTemplateId() const { return InstanceRequestTemplateId; }
    /** @brief Sets the value of InstanceRequestTemplateId */
    void SetInstanceRequestTemplateId(FGuid NewValue) { InstanceRequestTemplateId = NewValue;  }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_MapSelectionListV2 MapSelectionList{  };
    /** @brief Gets the value of MapSelectionList */
    FRHAPI_MapSelectionListV2& GetMapSelectionList() { return MapSelectionList; }
    /** @brief Gets the value of MapSelectionList */
    const FRHAPI_MapSelectionListV2& GetMapSelectionList() const { return MapSelectionList; }
    /** @brief Sets the value of MapSelectionList */
    void SetMapSelectionList(FRHAPI_MapSelectionListV2 NewValue) { MapSelectionList = NewValue;  }

    /** @brief Default host type for this template. Can be overriden in instance requests */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_HostType DefaultHostType{  };
    /** @brief Gets the value of DefaultHostType */
    ERHAPI_HostType& GetDefaultHostType() { return DefaultHostType; }
    /** @brief Gets the value of DefaultHostType */
    const ERHAPI_HostType& GetDefaultHostType() const { return DefaultHostType; }
    /** @brief Sets the value of DefaultHostType */
    void SetDefaultHostType(ERHAPI_HostType NewValue) { DefaultHostType = NewValue;  }

    /** @brief Custom data that will be passed to the session during the instance launch request */
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
