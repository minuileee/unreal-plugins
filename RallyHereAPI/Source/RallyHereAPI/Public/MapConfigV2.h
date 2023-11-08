// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "MapConfigV2.generated.h"

/** @defgroup RHAPI_MapConfigV2 RallyHere API Model MapConfigV2
 *  @{
 */

/**
 * @brief Configuration about a specific map for an instance to load into
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_MapConfigV2 : public FRHAPI_Model
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

    /** @brief ID to uniquely identify this map game */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString MapId{  };
    /** @brief Gets the value of MapId */
    FString& GetMapId() { return MapId; }
    /** @brief Gets the value of MapId */
    const FString& GetMapId() const { return MapId; }
    /** @brief Sets the value of MapId */
    void SetMapId(FString NewValue) { MapId = NewValue;  }

    /** @brief Name of the map the instance should load into */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Name{  };
    /** @brief Gets the value of Name */
    FString& GetName() { return Name; }
    /** @brief Gets the value of Name */
    const FString& GetName() const { return Name; }
    /** @brief Sets the value of Name */
    void SetName(FString NewValue) { Name = NewValue;  }

    /** @brief Game mode for the instance to spawn in */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Mode_Optional{  };
    /** @brief true if Mode_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Mode_IsSet{ false };
    /** @brief Gets the value of Mode_Optional, regardless of it having been set */
    FString& GetMode() { return Mode_Optional; }
    /** @brief Gets the value of Mode_Optional, regardless of it having been set */
    const FString& GetMode() const { return Mode_Optional; }
    /** @brief Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetMode(const FString& DefaultValue) const { if (Mode_IsSet) return Mode_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false */
    bool GetMode(FString& OutValue) const { if (Mode_IsSet) OutValue = Mode_Optional; return Mode_IsSet; }
    /** @brief Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr */
    FString* GetModeOrNull() { if (Mode_IsSet) return &Mode_Optional; return nullptr; }
    /** @brief Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetModeOrNull() const { if (Mode_IsSet) return &Mode_Optional; return nullptr; }
    /** @brief Sets the value of Mode_Optional and also sets Mode_IsSet to true */
    void SetMode(FString NewValue) { Mode_Optional = NewValue; Mode_IsSet = true; }
     /** @brief Clears the value of Mode_Optional and sets Mode_IsSet to false */
    void ClearMode() { Mode_IsSet = false; }

    /** @brief Chance that this map will get selected in a rotation list */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    float MapWeight{  };
    /** @brief Gets the value of MapWeight */
    float& GetMapWeight() { return MapWeight; }
    /** @brief Gets the value of MapWeight */
    const float& GetMapWeight() const { return MapWeight; }
    /** @brief Sets the value of MapWeight */
    void SetMapWeight(float NewValue) { MapWeight = NewValue;  }

    /** @brief Custom data to pass through to the instance */
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
