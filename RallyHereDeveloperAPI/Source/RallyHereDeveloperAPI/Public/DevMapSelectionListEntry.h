// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevMapSelectionListEntry.generated.h"

/** @defgroup RHAPI_DevMapSelectionListEntry RallyHere API Model DevMapSelectionListEntry
 *  @{
 */

/**
 * @brief
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevMapSelectionListEntry : public FRHAPI_DevModel
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

    /** @brief The weight given to this entry when choosing from the MapSelectionList */
    int32 MapWeight{ 0 };
    /** @brief Gets the value of MapWeight */
    int32& GetMapWeight() { return MapWeight; }
    /** @brief Gets the value of MapWeight */
    const int32& GetMapWeight() const { return MapWeight; }
    /** @brief Sets the value of MapWeight */
    void SetMapWeight(int32 NewValue) { MapWeight = NewValue;  }
    /** @brief Returns true if MapWeight matches the default value */
    bool IsMapWeightDefaultValue() const { return MapWeight == 0; }
    /** @brief Sets the value of MapWeight to its default  */
    void SetMapWeightToDefault() { MapWeight = 0;  }

    /** @brief Which Map this entry refers to */
    FGuid MapId{  };
    /** @brief Gets the value of MapId */
    FGuid& GetMapId() { return MapId; }
    /** @brief Gets the value of MapId */
    const FGuid& GetMapId() const { return MapId; }
    /** @brief Sets the value of MapId */
    void SetMapId(FGuid NewValue) { MapId = NewValue;  }

    /** @brief ID of the Sandbox */
    FGuid SandboxId_Optional{  };
    /** @brief true if SandboxId_Optional has been set to a value */
    bool SandboxId_IsSet{ false };
    /** @brief Gets the value of SandboxId_Optional, regardless of it having been set */
    FGuid& GetSandboxId() { return SandboxId_Optional; }
    /** @brief Gets the value of SandboxId_Optional, regardless of it having been set */
    const FGuid& GetSandboxId() const { return SandboxId_Optional; }
    /** @brief Gets the value of SandboxId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetSandboxId(const FGuid& DefaultValue) const { if (SandboxId_IsSet) return SandboxId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of SandboxId_Optional and returns true if it has been set, otherwise returns false */
    bool GetSandboxId(FGuid& OutValue) const { if (SandboxId_IsSet) OutValue = SandboxId_Optional; return SandboxId_IsSet; }
    /** @brief Returns a pointer to SandboxId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetSandboxIdOrNull() { if (SandboxId_IsSet) return &SandboxId_Optional; return nullptr; }
    /** @brief Returns a pointer to SandboxId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetSandboxIdOrNull() const { if (SandboxId_IsSet) return &SandboxId_Optional; return nullptr; }
    /** @brief Sets the value of SandboxId_Optional and also sets SandboxId_IsSet to true */
    void SetSandboxId(FGuid NewValue) { SandboxId_Optional = NewValue; SandboxId_IsSet = true; }
     /** @brief Clears the value of SandboxId_Optional and sets SandboxId_IsSet to false */
    void ClearSandboxId() { SandboxId_IsSet = false; }

    /** @brief Which MapSelectionList this entry belongs to */
    FGuid SelectionListId{  };
    /** @brief Gets the value of SelectionListId */
    FGuid& GetSelectionListId() { return SelectionListId; }
    /** @brief Gets the value of SelectionListId */
    const FGuid& GetSelectionListId() const { return SelectionListId; }
    /** @brief Sets the value of SelectionListId */
    void SetSelectionListId(FGuid NewValue) { SelectionListId = NewValue;  }

    /** @brief ID to uniquely identify this MapSelectionListEntry */
    FGuid MapSelectionListEntryId{  };
    /** @brief Gets the value of MapSelectionListEntryId */
    FGuid& GetMapSelectionListEntryId() { return MapSelectionListEntryId; }
    /** @brief Gets the value of MapSelectionListEntryId */
    const FGuid& GetMapSelectionListEntryId() const { return MapSelectionListEntryId; }
    /** @brief Sets the value of MapSelectionListEntryId */
    void SetMapSelectionListEntryId(FGuid NewValue) { MapSelectionListEntryId = NewValue;  }

    /** @brief Account ID of the user who last modified the resource */
    FGuid LastModifiedAccountId_Optional{  };
    /** @brief true if LastModifiedAccountId_Optional has been set to a value */
    bool LastModifiedAccountId_IsSet{ false };
    /** @brief Gets the value of LastModifiedAccountId_Optional, regardless of it having been set */
    FGuid& GetLastModifiedAccountId() { return LastModifiedAccountId_Optional; }
    /** @brief Gets the value of LastModifiedAccountId_Optional, regardless of it having been set */
    const FGuid& GetLastModifiedAccountId() const { return LastModifiedAccountId_Optional; }
    /** @brief Gets the value of LastModifiedAccountId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetLastModifiedAccountId(const FGuid& DefaultValue) const { if (LastModifiedAccountId_IsSet) return LastModifiedAccountId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LastModifiedAccountId_Optional and returns true if it has been set, otherwise returns false */
    bool GetLastModifiedAccountId(FGuid& OutValue) const { if (LastModifiedAccountId_IsSet) OutValue = LastModifiedAccountId_Optional; return LastModifiedAccountId_IsSet; }
    /** @brief Returns a pointer to LastModifiedAccountId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetLastModifiedAccountIdOrNull() { if (LastModifiedAccountId_IsSet) return &LastModifiedAccountId_Optional; return nullptr; }
    /** @brief Returns a pointer to LastModifiedAccountId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetLastModifiedAccountIdOrNull() const { if (LastModifiedAccountId_IsSet) return &LastModifiedAccountId_Optional; return nullptr; }
    /** @brief Sets the value of LastModifiedAccountId_Optional and also sets LastModifiedAccountId_IsSet to true */
    void SetLastModifiedAccountId(FGuid NewValue) { LastModifiedAccountId_Optional = NewValue; LastModifiedAccountId_IsSet = true; }
     /** @brief Clears the value of LastModifiedAccountId_Optional and sets LastModifiedAccountId_IsSet to false */
    void ClearLastModifiedAccountId() { LastModifiedAccountId_IsSet = false; }

    /** @brief Timestamp of when the resource was last modified */
    FDateTime LastModifiedTimestamp_Optional{  };
    /** @brief true if LastModifiedTimestamp_Optional has been set to a value */
    bool LastModifiedTimestamp_IsSet{ false };
    /** @brief Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set */
    FDateTime& GetLastModifiedTimestamp() { return LastModifiedTimestamp_Optional; }
    /** @brief Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set */
    const FDateTime& GetLastModifiedTimestamp() const { return LastModifiedTimestamp_Optional; }
    /** @brief Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue */
    const FDateTime& GetLastModifiedTimestamp(const FDateTime& DefaultValue) const { if (LastModifiedTimestamp_IsSet) return LastModifiedTimestamp_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false */
    bool GetLastModifiedTimestamp(FDateTime& OutValue) const { if (LastModifiedTimestamp_IsSet) OutValue = LastModifiedTimestamp_Optional; return LastModifiedTimestamp_IsSet; }
    /** @brief Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr */
    FDateTime* GetLastModifiedTimestampOrNull() { if (LastModifiedTimestamp_IsSet) return &LastModifiedTimestamp_Optional; return nullptr; }
    /** @brief Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr */
    const FDateTime* GetLastModifiedTimestampOrNull() const { if (LastModifiedTimestamp_IsSet) return &LastModifiedTimestamp_Optional; return nullptr; }
    /** @brief Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true */
    void SetLastModifiedTimestamp(FDateTime NewValue) { LastModifiedTimestamp_Optional = NewValue; LastModifiedTimestamp_IsSet = true; }
     /** @brief Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false */
    void ClearLastModifiedTimestamp() { LastModifiedTimestamp_IsSet = false; }

    /** @brief The name of the map that will be loaded into */
    FString MapName_Optional{  };
    /** @brief true if MapName_Optional has been set to a value */
    bool MapName_IsSet{ false };
    /** @brief Gets the value of MapName_Optional, regardless of it having been set */
    FString& GetMapName() { return MapName_Optional; }
    /** @brief Gets the value of MapName_Optional, regardless of it having been set */
    const FString& GetMapName() const { return MapName_Optional; }
    /** @brief Gets the value of MapName_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetMapName(const FString& DefaultValue) const { if (MapName_IsSet) return MapName_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MapName_Optional and returns true if it has been set, otherwise returns false */
    bool GetMapName(FString& OutValue) const { if (MapName_IsSet) OutValue = MapName_Optional; return MapName_IsSet; }
    /** @brief Returns a pointer to MapName_Optional, if it has been set, otherwise returns nullptr */
    FString* GetMapNameOrNull() { if (MapName_IsSet) return &MapName_Optional; return nullptr; }
    /** @brief Returns a pointer to MapName_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetMapNameOrNull() const { if (MapName_IsSet) return &MapName_Optional; return nullptr; }
    /** @brief Sets the value of MapName_Optional and also sets MapName_IsSet to true */
    void SetMapName(FString NewValue) { MapName_Optional = NewValue; MapName_IsSet = true; }
     /** @brief Clears the value of MapName_Optional and sets MapName_IsSet to false */
    void ClearMapName() { MapName_IsSet = false; }

    /** @brief An optional mode that will be loaded into */
    FString Mode_Optional{  };
    /** @brief true if Mode_Optional has been set to a value */
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

    /** @brief Dictionary of config required for legacy games */
    TMap<FString, FString> LegacyConfig_Optional{  };
    /** @brief true if LegacyConfig_Optional has been set to a value */
    bool LegacyConfig_IsSet{ false };
    /** @brief Gets the value of LegacyConfig_Optional, regardless of it having been set */
    TMap<FString, FString>& GetLegacyConfig() { return LegacyConfig_Optional; }
    /** @brief Gets the value of LegacyConfig_Optional, regardless of it having been set */
    const TMap<FString, FString>& GetLegacyConfig() const { return LegacyConfig_Optional; }
    /** @brief Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue */
    const TMap<FString, FString>& GetLegacyConfig(const TMap<FString, FString>& DefaultValue) const { if (LegacyConfig_IsSet) return LegacyConfig_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false */
    bool GetLegacyConfig(TMap<FString, FString>& OutValue) const { if (LegacyConfig_IsSet) OutValue = LegacyConfig_Optional; return LegacyConfig_IsSet; }
    /** @brief Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr */
    TMap<FString, FString>* GetLegacyConfigOrNull() { if (LegacyConfig_IsSet) return &LegacyConfig_Optional; return nullptr; }
    /** @brief Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr */
    const TMap<FString, FString>* GetLegacyConfigOrNull() const { if (LegacyConfig_IsSet) return &LegacyConfig_Optional; return nullptr; }
    /** @brief Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true */
    void SetLegacyConfig(TMap<FString, FString> NewValue) { LegacyConfig_Optional = NewValue; LegacyConfig_IsSet = true; }
     /** @brief Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false */
    void ClearLegacyConfig() { LegacyConfig_IsSet = false; }
};

/** @} */
