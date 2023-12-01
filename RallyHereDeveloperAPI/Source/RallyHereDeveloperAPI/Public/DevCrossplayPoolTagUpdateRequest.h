// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevCrossplayPoolTagUpdateRequest.generated.h"

/** @defgroup RHAPI_DevCrossplayPoolTagUpdateRequest RallyHere API Model DevCrossplayPoolTagUpdateRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevCrossplayPoolTagUpdateRequest : public FRHAPI_DevModel
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

    /** @brief The open-match tag to be added to the specific pool */
    FString Tag_Optional{  };
    /** @brief true if Tag_Optional has been set to a value */
    bool Tag_IsSet{ false };
    /** @brief Gets the value of Tag_Optional, regardless of it having been set */
    FString& GetTag() { return Tag_Optional; }
    /** @brief Gets the value of Tag_Optional, regardless of it having been set */
    const FString& GetTag() const { return Tag_Optional; }
    /** @brief Gets the value of Tag_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetTag(const FString& DefaultValue) const { if (Tag_IsSet) return Tag_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Tag_Optional and returns true if it has been set, otherwise returns false */
    bool GetTag(FString& OutValue) const { if (Tag_IsSet) OutValue = Tag_Optional; return Tag_IsSet; }
    /** @brief Returns a pointer to Tag_Optional, if it has been set, otherwise returns nullptr */
    FString* GetTagOrNull() { if (Tag_IsSet) return &Tag_Optional; return nullptr; }
    /** @brief Returns a pointer to Tag_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetTagOrNull() const { if (Tag_IsSet) return &Tag_Optional; return nullptr; }
    /** @brief Sets the value of Tag_Optional and also sets Tag_IsSet to true */
    void SetTag(FString NewValue) { Tag_Optional = NewValue; Tag_IsSet = true; }
     /** @brief Clears the value of Tag_Optional and sets Tag_IsSet to false */
    void ClearTag() { Tag_IsSet = false; }

    /** @brief Which CrossplayPool this CrossplayPoolTag belongs to */
    FGuid CrossplayPoolId_Optional{  };
    /** @brief true if CrossplayPoolId_Optional has been set to a value */
    bool CrossplayPoolId_IsSet{ false };
    /** @brief Gets the value of CrossplayPoolId_Optional, regardless of it having been set */
    FGuid& GetCrossplayPoolId() { return CrossplayPoolId_Optional; }
    /** @brief Gets the value of CrossplayPoolId_Optional, regardless of it having been set */
    const FGuid& GetCrossplayPoolId() const { return CrossplayPoolId_Optional; }
    /** @brief Gets the value of CrossplayPoolId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetCrossplayPoolId(const FGuid& DefaultValue) const { if (CrossplayPoolId_IsSet) return CrossplayPoolId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CrossplayPoolId_Optional and returns true if it has been set, otherwise returns false */
    bool GetCrossplayPoolId(FGuid& OutValue) const { if (CrossplayPoolId_IsSet) OutValue = CrossplayPoolId_Optional; return CrossplayPoolId_IsSet; }
    /** @brief Returns a pointer to CrossplayPoolId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetCrossplayPoolIdOrNull() { if (CrossplayPoolId_IsSet) return &CrossplayPoolId_Optional; return nullptr; }
    /** @brief Returns a pointer to CrossplayPoolId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetCrossplayPoolIdOrNull() const { if (CrossplayPoolId_IsSet) return &CrossplayPoolId_Optional; return nullptr; }
    /** @brief Sets the value of CrossplayPoolId_Optional and also sets CrossplayPoolId_IsSet to true */
    void SetCrossplayPoolId(FGuid NewValue) { CrossplayPoolId_Optional = NewValue; CrossplayPoolId_IsSet = true; }
     /** @brief Clears the value of CrossplayPoolId_Optional and sets CrossplayPoolId_IsSet to false */
    void ClearCrossplayPoolId() { CrossplayPoolId_IsSet = false; }
};

/** @} */
