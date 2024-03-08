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
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString MapId{  };
    /** @brief Gets the value of MapId */
    FString& GetMapId() { return MapId; }
    /** @brief Gets the value of MapId */
    const FString& GetMapId() const { return MapId; }
    /** @brief Sets the value of MapId */
    void SetMapId(FString NewValue) { MapId = NewValue;  }

    /** @brief Name of the map the instance should load into */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString MapName{  };
    /** @brief Gets the value of MapName */
    FString& GetMapName() { return MapName; }
    /** @brief Gets the value of MapName */
    const FString& GetMapName() const { return MapName; }
    /** @brief Sets the value of MapName */
    void SetMapName(FString NewValue) { MapName = NewValue;  }

    /** @brief Game mode for the instance to spawn in */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString Mode_Optional{  };
    /** @brief true if Mode_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
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
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    float MapWeight{  };
    /** @brief Gets the value of MapWeight */
    float& GetMapWeight() { return MapWeight; }
    /** @brief Gets the value of MapWeight */
    const float& GetMapWeight() const { return MapWeight; }
    /** @brief Sets the value of MapWeight */
    void SetMapWeight(float NewValue) { MapWeight = NewValue;  }

    /** @brief Custom data to pass through to the instance */
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

    /** @brief Human readable name for this map */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString Name_Optional{  };
    /** @brief true if Name_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool Name_IsSet{ false };
    /** @brief Gets the value of Name_Optional, regardless of it having been set */
    FString& GetName() { return Name_Optional; }
    /** @brief Gets the value of Name_Optional, regardless of it having been set */
    const FString& GetName() const { return Name_Optional; }
    /** @brief Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetName(const FString& DefaultValue) const { if (Name_IsSet) return Name_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false */
    bool GetName(FString& OutValue) const { if (Name_IsSet) OutValue = Name_Optional; return Name_IsSet; }
    /** @brief Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr */
    FString* GetNameOrNull() { if (Name_IsSet) return &Name_Optional; return nullptr; }
    /** @brief Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetNameOrNull() const { if (Name_IsSet) return &Name_Optional; return nullptr; }
    /** @brief Sets the value of Name_Optional and also sets Name_IsSet to true */
    void SetName(FString NewValue) { Name_Optional = NewValue; Name_IsSet = true; }
     /** @brief Clears the value of Name_Optional and sets Name_IsSet to false */
    void ClearName() { Name_IsSet = false; }

    /** @brief Description of the map */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString Description_Optional{  };
    /** @brief true if Description_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool Description_IsSet{ false };
    /** @brief Gets the value of Description_Optional, regardless of it having been set */
    FString& GetDescription() { return Description_Optional; }
    /** @brief Gets the value of Description_Optional, regardless of it having been set */
    const FString& GetDescription() const { return Description_Optional; }
    /** @brief Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetDescription(const FString& DefaultValue) const { if (Description_IsSet) return Description_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false */
    bool GetDescription(FString& OutValue) const { if (Description_IsSet) OutValue = Description_Optional; return Description_IsSet; }
    /** @brief Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr */
    FString* GetDescriptionOrNull() { if (Description_IsSet) return &Description_Optional; return nullptr; }
    /** @brief Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetDescriptionOrNull() const { if (Description_IsSet) return &Description_Optional; return nullptr; }
    /** @brief Sets the value of Description_Optional and also sets Description_IsSet to true */
    void SetDescription(FString NewValue) { Description_Optional = NewValue; Description_IsSet = true; }
     /** @brief Clears the value of Description_Optional and sets Description_IsSet to false */
    void ClearDescription() { Description_IsSet = false; }
};

/** @} */
