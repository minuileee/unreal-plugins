// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevProduct.generated.h"

/** @defgroup RHAPI_DevProduct RallyHere API Model DevProduct
 *  @{
 */

/**
 * @brief
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevProduct : public FRHAPI_DevModel
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

    FGuid ProductId{  };
    /** @brief Gets the value of ProductId */
    FGuid& GetProductId() { return ProductId; }
    /** @brief Gets the value of ProductId */
    const FGuid& GetProductId() const { return ProductId; }
    /** @brief Sets the value of ProductId */
    void SetProductId(FGuid NewValue) { ProductId = NewValue;  }

    /** @brief Organization that owns this product */
    FGuid OrgId{  };
    /** @brief Gets the value of OrgId */
    FGuid& GetOrgId() { return OrgId; }
    /** @brief Gets the value of OrgId */
    const FGuid& GetOrgId() const { return OrgId; }
    /** @brief Sets the value of OrgId */
    void SetOrgId(FGuid NewValue) { OrgId = NewValue;  }

    /** @brief Official Full Name */
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
    void ClearName() { Name_Optional = TEXT(""); Name_IsSet = false; }
    /** @brief Returns true if Name_Optional is set and matches the default value */
    bool IsNameDefaultValue() const { return Name_IsSet && Name_Optional == TEXT(""); }
    /** @brief Sets the value of Name_Optional to its default and also sets Name_IsSet to true */
    void SetNameToDefault() { Name_Optional = TEXT(""); Name_IsSet = true; }

    /** @brief Email Address for the primary point of contact */
    FString PrimaryContactEmail_Optional{  };
    /** @brief true if PrimaryContactEmail_Optional has been set to a value */
    bool PrimaryContactEmail_IsSet{ false };
    /** @brief Gets the value of PrimaryContactEmail_Optional, regardless of it having been set */
    FString& GetPrimaryContactEmail() { return PrimaryContactEmail_Optional; }
    /** @brief Gets the value of PrimaryContactEmail_Optional, regardless of it having been set */
    const FString& GetPrimaryContactEmail() const { return PrimaryContactEmail_Optional; }
    /** @brief Gets the value of PrimaryContactEmail_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetPrimaryContactEmail(const FString& DefaultValue) const { if (PrimaryContactEmail_IsSet) return PrimaryContactEmail_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of PrimaryContactEmail_Optional and returns true if it has been set, otherwise returns false */
    bool GetPrimaryContactEmail(FString& OutValue) const { if (PrimaryContactEmail_IsSet) OutValue = PrimaryContactEmail_Optional; return PrimaryContactEmail_IsSet; }
    /** @brief Returns a pointer to PrimaryContactEmail_Optional, if it has been set, otherwise returns nullptr */
    FString* GetPrimaryContactEmailOrNull() { if (PrimaryContactEmail_IsSet) return &PrimaryContactEmail_Optional; return nullptr; }
    /** @brief Returns a pointer to PrimaryContactEmail_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetPrimaryContactEmailOrNull() const { if (PrimaryContactEmail_IsSet) return &PrimaryContactEmail_Optional; return nullptr; }
    /** @brief Sets the value of PrimaryContactEmail_Optional and also sets PrimaryContactEmail_IsSet to true */
    void SetPrimaryContactEmail(FString NewValue) { PrimaryContactEmail_Optional = NewValue; PrimaryContactEmail_IsSet = true; }
     /** @brief Clears the value of PrimaryContactEmail_Optional and sets PrimaryContactEmail_IsSet to false */
    void ClearPrimaryContactEmail() { PrimaryContactEmail_IsSet = false; }

    /** @brief Name used in URLs */
    FString ShortName{  };
    /** @brief Gets the value of ShortName */
    FString& GetShortName() { return ShortName; }
    /** @brief Gets the value of ShortName */
    const FString& GetShortName() const { return ShortName; }
    /** @brief Sets the value of ShortName */
    void SetShortName(FString NewValue) { ShortName = NewValue;  }

    FDateTime LastModifiedTimestamp{  };
    /** @brief Gets the value of LastModifiedTimestamp */
    FDateTime& GetLastModifiedTimestamp() { return LastModifiedTimestamp; }
    /** @brief Gets the value of LastModifiedTimestamp */
    const FDateTime& GetLastModifiedTimestamp() const { return LastModifiedTimestamp; }
    /** @brief Sets the value of LastModifiedTimestamp */
    void SetLastModifiedTimestamp(FDateTime NewValue) { LastModifiedTimestamp = NewValue;  }

    FDateTime CreatedTimestamp{  };
    /** @brief Gets the value of CreatedTimestamp */
    FDateTime& GetCreatedTimestamp() { return CreatedTimestamp; }
    /** @brief Gets the value of CreatedTimestamp */
    const FDateTime& GetCreatedTimestamp() const { return CreatedTimestamp; }
    /** @brief Sets the value of CreatedTimestamp */
    void SetCreatedTimestamp(FDateTime NewValue) { CreatedTimestamp = NewValue;  }

    bool Archive{ false };
    /** @brief Gets the value of Archive */
    bool& GetArchive() { return Archive; }
    /** @brief Gets the value of Archive */
    const bool& GetArchive() const { return Archive; }
    /** @brief Sets the value of Archive */
    void SetArchive(bool NewValue) { Archive = NewValue;  }
    /** @brief Returns true if Archive matches the default value */
    bool IsArchiveDefaultValue() const { return Archive == false; }
    /** @brief Sets the value of Archive to its default  */
    void SetArchiveToDefault() { Archive = false;  }
};

/** @} */
