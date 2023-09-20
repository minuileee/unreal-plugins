// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevPriceBreakpoint.h"
#include "DevCreatePricePoint.generated.h"

/** @defgroup RHAPI_DevCreatePricePoint RallyHere API Model DevCreatePricePoint
 *  @{
 */

/**
 * @brief Price Point to create.
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevCreatePricePoint : public FRHAPI_DevModel
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

    /** @brief Custom data associated with the resource */
    TMap<FString, FString> CustomData_Optional{  };
    /** @brief true if CustomData_Optional has been set to a value */
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

    /** @brief Name of the resource */
    FString Name_Optional{  };
    /** @brief true if Name_Optional has been set to a value */
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

    /** @brief Description of the resource */
    FString Description_Optional{  };
    /** @brief true if Description_Optional has been set to a value */
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

    /** @brief Forces the quantity to be equal to a quantity on a Price Breakpoint. */
    bool StrictFlag_Optional{  };
    /** @brief true if StrictFlag_Optional has been set to a value */
    bool StrictFlag_IsSet{ false };
    /** @brief Gets the value of StrictFlag_Optional, regardless of it having been set */
    bool& GetStrictFlag() { return StrictFlag_Optional; }
    /** @brief Gets the value of StrictFlag_Optional, regardless of it having been set */
    const bool& GetStrictFlag() const { return StrictFlag_Optional; }
    /** @brief Gets the value of StrictFlag_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetStrictFlag(const bool& DefaultValue) const { if (StrictFlag_IsSet) return StrictFlag_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of StrictFlag_Optional and returns true if it has been set, otherwise returns false */
    bool GetStrictFlag(bool& OutValue) const { if (StrictFlag_IsSet) OutValue = StrictFlag_Optional; return StrictFlag_IsSet; }
    /** @brief Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr */
    bool* GetStrictFlagOrNull() { if (StrictFlag_IsSet) return &StrictFlag_Optional; return nullptr; }
    /** @brief Returns a pointer to StrictFlag_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetStrictFlagOrNull() const { if (StrictFlag_IsSet) return &StrictFlag_Optional; return nullptr; }
    /** @brief Sets the value of StrictFlag_Optional and also sets StrictFlag_IsSet to true */
    void SetStrictFlag(bool NewValue) { StrictFlag_Optional = NewValue; StrictFlag_IsSet = true; }
     /** @brief Clears the value of StrictFlag_Optional and sets StrictFlag_IsSet to false */
    void ClearStrictFlag() { StrictFlag_Optional = false; StrictFlag_IsSet = false; }
    /** @brief Returns true if StrictFlag_Optional is set and matches the default value */
    bool IsStrictFlagDefaultValue() const { return StrictFlag_IsSet && StrictFlag_Optional == false; }
    /** @brief Sets the value of StrictFlag_Optional to its default and also sets StrictFlag_IsSet to true */
    void SetStrictFlagToDefault() { StrictFlag_Optional = false; StrictFlag_IsSet = true; }

    /** @brief Only allows quantity to be fulfilled up the highest quantity on the Price Breakpoints */
    bool CapFlag_Optional{  };
    /** @brief true if CapFlag_Optional has been set to a value */
    bool CapFlag_IsSet{ false };
    /** @brief Gets the value of CapFlag_Optional, regardless of it having been set */
    bool& GetCapFlag() { return CapFlag_Optional; }
    /** @brief Gets the value of CapFlag_Optional, regardless of it having been set */
    const bool& GetCapFlag() const { return CapFlag_Optional; }
    /** @brief Gets the value of CapFlag_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetCapFlag(const bool& DefaultValue) const { if (CapFlag_IsSet) return CapFlag_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CapFlag_Optional and returns true if it has been set, otherwise returns false */
    bool GetCapFlag(bool& OutValue) const { if (CapFlag_IsSet) OutValue = CapFlag_Optional; return CapFlag_IsSet; }
    /** @brief Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr */
    bool* GetCapFlagOrNull() { if (CapFlag_IsSet) return &CapFlag_Optional; return nullptr; }
    /** @brief Returns a pointer to CapFlag_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetCapFlagOrNull() const { if (CapFlag_IsSet) return &CapFlag_Optional; return nullptr; }
    /** @brief Sets the value of CapFlag_Optional and also sets CapFlag_IsSet to true */
    void SetCapFlag(bool NewValue) { CapFlag_Optional = NewValue; CapFlag_IsSet = true; }
     /** @brief Clears the value of CapFlag_Optional and sets CapFlag_IsSet to false */
    void ClearCapFlag() { CapFlag_Optional = false; CapFlag_IsSet = false; }
    /** @brief Returns true if CapFlag_Optional is set and matches the default value */
    bool IsCapFlagDefaultValue() const { return CapFlag_IsSet && CapFlag_Optional == false; }
    /** @brief Sets the value of CapFlag_Optional to its default and also sets CapFlag_IsSet to true */
    void SetCapFlagToDefault() { CapFlag_Optional = false; CapFlag_IsSet = true; }

    /** @brief Current Price Breakpoints. */
    TArray<FRHAPI_DevPriceBreakpoint> CurrentBreakpoints_Optional{  };
    /** @brief true if CurrentBreakpoints_Optional has been set to a value */
    bool CurrentBreakpoints_IsSet{ false };
    /** @brief Gets the value of CurrentBreakpoints_Optional, regardless of it having been set */
    TArray<FRHAPI_DevPriceBreakpoint>& GetCurrentBreakpoints() { return CurrentBreakpoints_Optional; }
    /** @brief Gets the value of CurrentBreakpoints_Optional, regardless of it having been set */
    const TArray<FRHAPI_DevPriceBreakpoint>& GetCurrentBreakpoints() const { return CurrentBreakpoints_Optional; }
    /** @brief Gets the value of CurrentBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_DevPriceBreakpoint>& GetCurrentBreakpoints(const TArray<FRHAPI_DevPriceBreakpoint>& DefaultValue) const { if (CurrentBreakpoints_IsSet) return CurrentBreakpoints_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CurrentBreakpoints_Optional and returns true if it has been set, otherwise returns false */
    bool GetCurrentBreakpoints(TArray<FRHAPI_DevPriceBreakpoint>& OutValue) const { if (CurrentBreakpoints_IsSet) OutValue = CurrentBreakpoints_Optional; return CurrentBreakpoints_IsSet; }
    /** @brief Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_DevPriceBreakpoint>* GetCurrentBreakpointsOrNull() { if (CurrentBreakpoints_IsSet) return &CurrentBreakpoints_Optional; return nullptr; }
    /** @brief Returns a pointer to CurrentBreakpoints_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_DevPriceBreakpoint>* GetCurrentBreakpointsOrNull() const { if (CurrentBreakpoints_IsSet) return &CurrentBreakpoints_Optional; return nullptr; }
    /** @brief Sets the value of CurrentBreakpoints_Optional and also sets CurrentBreakpoints_IsSet to true */
    void SetCurrentBreakpoints(TArray<FRHAPI_DevPriceBreakpoint> NewValue) { CurrentBreakpoints_Optional = NewValue; CurrentBreakpoints_IsSet = true; }
     /** @brief Clears the value of CurrentBreakpoints_Optional and sets CurrentBreakpoints_IsSet to false */
    void ClearCurrentBreakpoints() { CurrentBreakpoints_IsSet = false; }

    /** @brief Previous Price Breakpoints. */
    TArray<FRHAPI_DevPriceBreakpoint> PreSaleBreakpoints_Optional{  };
    /** @brief true if PreSaleBreakpoints_Optional has been set to a value */
    bool PreSaleBreakpoints_IsSet{ false };
    /** @brief Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set */
    TArray<FRHAPI_DevPriceBreakpoint>& GetPreSaleBreakpoints() { return PreSaleBreakpoints_Optional; }
    /** @brief Gets the value of PreSaleBreakpoints_Optional, regardless of it having been set */
    const TArray<FRHAPI_DevPriceBreakpoint>& GetPreSaleBreakpoints() const { return PreSaleBreakpoints_Optional; }
    /** @brief Gets the value of PreSaleBreakpoints_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_DevPriceBreakpoint>& GetPreSaleBreakpoints(const TArray<FRHAPI_DevPriceBreakpoint>& DefaultValue) const { if (PreSaleBreakpoints_IsSet) return PreSaleBreakpoints_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of PreSaleBreakpoints_Optional and returns true if it has been set, otherwise returns false */
    bool GetPreSaleBreakpoints(TArray<FRHAPI_DevPriceBreakpoint>& OutValue) const { if (PreSaleBreakpoints_IsSet) OutValue = PreSaleBreakpoints_Optional; return PreSaleBreakpoints_IsSet; }
    /** @brief Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_DevPriceBreakpoint>* GetPreSaleBreakpointsOrNull() { if (PreSaleBreakpoints_IsSet) return &PreSaleBreakpoints_Optional; return nullptr; }
    /** @brief Returns a pointer to PreSaleBreakpoints_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_DevPriceBreakpoint>* GetPreSaleBreakpointsOrNull() const { if (PreSaleBreakpoints_IsSet) return &PreSaleBreakpoints_Optional; return nullptr; }
    /** @brief Sets the value of PreSaleBreakpoints_Optional and also sets PreSaleBreakpoints_IsSet to true */
    void SetPreSaleBreakpoints(TArray<FRHAPI_DevPriceBreakpoint> NewValue) { PreSaleBreakpoints_Optional = NewValue; PreSaleBreakpoints_IsSet = true; }
     /** @brief Clears the value of PreSaleBreakpoints_Optional and sets PreSaleBreakpoints_IsSet to false */
    void ClearPreSaleBreakpoints() { PreSaleBreakpoints_IsSet = false; }
};

/** @} */
