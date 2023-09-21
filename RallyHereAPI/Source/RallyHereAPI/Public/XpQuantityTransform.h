// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "XpQuantityTransform.generated.h"


/**
 * @brief Allows granting xp levels as Loot. If the player is already max level, the Loot will not be fulfilled. Requires the Item assigned to the Loot to have an XP Table ID.  The following examples assume the player is level 3 with 150 total xp. The quantity configured on the Loot being fulfilled is 1. The XP Table is configured like so: 1: 20 2: 50 3: 100 4: 200 5: 400  from_current_xp_to_target_additional_level_min_xp - The Loot will grant the player enough xp to reach min xp of the next level. Example 1: fulfill quantity 1     Player will be level 4 with 200 total xp. Example 2: fulfill quantity 2     Player will be level 5 with 400 total xp. Example 3: fulfill quantity 3     Player will be level 5 with 400 total xp.  from_current_level_min_xp_to_target_additional_level_min_xp - The Loot will grant the player the amount of xp required to reach the min xp of the next level from the min xp of the current level. Example 1: fulfill quantity 1     Player will be level 4 with 250 total xp. Example 2: fulfill quantity 2     Player will be level 5 with 450 total xp. Example 3: fulfill quantity 3     Player will be level 5 with 450 total xp.  from_zero_to_target_exact_level_min_xp - The Loot will grant the player the amount of xp required to reach the min xp of the target level from zero xp. Example 1: fulfill quantity 1     Player will be level 3 with 170 total xp. Example 2: fulfill quantity 2     Player will be level 4 with 200 total xp. Example 3: fulfill quantity 3     Player will be level 4 with 250 total xp.
 */
UENUM(BlueprintType)
enum class ERHAPI_XpQuantityTransform : uint8
{
    None UMETA(ToolTip="Quantity will be treated as XP and will not be transformed."),
    FromCurrentXpToTargetAdditionalLevelMinXp UMETA(ToolTip="Quantity will be treated as level to fulfill and will be transformed to the amount of XP required to reach the min xp of the fulfilled levels."),
    FromCurrentLevelMinXpToTargetAdditionalLevelMinXp UMETA(ToolTip="Quantity will be treated as levels to fulfill and will be transformed to the amount of XP required to reach the min xp of the fulfilled levels from the min xp of the current level."),
    FromZeroToTargetExactLevelMinXp UMETA(ToolTip="Quantity will be treated as levels to fulfill and will be transformed to the amount of XP required to reach the min xp of the fulfilled levels from zero xp."),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_XpQuantityTransform& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_XpQuantityTransform& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_XpQuantityTransform& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_XpQuantityTransform& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_XpQuantityTransform& Value);