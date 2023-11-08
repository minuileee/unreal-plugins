// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "SiteSettings.generated.h"

/** @defgroup RHAPI_SiteSettings RallyHere API Model SiteSettings
 *  @{
 */

/**
 * @brief Contains information about a site/region.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_SiteSettings : public FRHAPI_Model
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

    /** @brief The site ID */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 SiteId{ 0 };
    /** @brief Gets the value of SiteId */
    int32& GetSiteId() { return SiteId; }
    /** @brief Gets the value of SiteId */
    const int32& GetSiteId() const { return SiteId; }
    /** @brief Sets the value of SiteId */
    void SetSiteId(int32 NewValue) { SiteId = NewValue;  }
    /** @brief Returns true if SiteId matches the default value */
    bool IsSiteIdDefaultValue() const { return SiteId == 0; }
    /** @brief Sets the value of SiteId to its default  */
    void SetSiteIdToDefault() { SiteId = 0;  }

    /** @brief The priority order of this site */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 SortOrder{ 0 };
    /** @brief Gets the value of SortOrder */
    int32& GetSortOrder() { return SortOrder; }
    /** @brief Gets the value of SortOrder */
    const int32& GetSortOrder() const { return SortOrder; }
    /** @brief Sets the value of SortOrder */
    void SetSortOrder(int32 NewValue) { SortOrder = NewValue;  }
    /** @brief Returns true if SortOrder matches the default value */
    bool IsSortOrderDefaultValue() const { return SortOrder == 0; }
    /** @brief Sets the value of SortOrder to its default  */
    void SetSortOrderToDefault() { SortOrder = 0;  }

    /** @brief Indicates if the site is a custom games only */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CustomOnly{ false };
    /** @brief Gets the value of CustomOnly */
    bool& GetCustomOnly() { return CustomOnly; }
    /** @brief Gets the value of CustomOnly */
    const bool& GetCustomOnly() const { return CustomOnly; }
    /** @brief Sets the value of CustomOnly */
    void SetCustomOnly(bool NewValue) { CustomOnly = NewValue;  }
    /** @brief Returns true if CustomOnly matches the default value */
    bool IsCustomOnlyDefaultValue() const { return CustomOnly == false; }
    /** @brief Sets the value of CustomOnly to its default  */
    void SetCustomOnlyToDefault() { CustomOnly = false;  }

    /** @brief The message associated with this site */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString MessageName_Optional{  };
    /** @brief true if MessageName_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool MessageName_IsSet{ false };
    /** @brief Gets the value of MessageName_Optional, regardless of it having been set */
    FString& GetMessageName() { return MessageName_Optional; }
    /** @brief Gets the value of MessageName_Optional, regardless of it having been set */
    const FString& GetMessageName() const { return MessageName_Optional; }
    /** @brief Gets the value of MessageName_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetMessageName(const FString& DefaultValue) const { if (MessageName_IsSet) return MessageName_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MessageName_Optional and returns true if it has been set, otherwise returns false */
    bool GetMessageName(FString& OutValue) const { if (MessageName_IsSet) OutValue = MessageName_Optional; return MessageName_IsSet; }
    /** @brief Returns a pointer to MessageName_Optional, if it has been set, otherwise returns nullptr */
    FString* GetMessageNameOrNull() { if (MessageName_IsSet) return &MessageName_Optional; return nullptr; }
    /** @brief Returns a pointer to MessageName_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetMessageNameOrNull() const { if (MessageName_IsSet) return &MessageName_Optional; return nullptr; }
    /** @brief Sets the value of MessageName_Optional and also sets MessageName_IsSet to true */
    void SetMessageName(FString NewValue) { MessageName_Optional = NewValue; MessageName_IsSet = true; }
     /** @brief Clears the value of MessageName_Optional and sets MessageName_IsSet to false */
    void ClearMessageName() { MessageName_IsSet = false; }
};

/** @} */
