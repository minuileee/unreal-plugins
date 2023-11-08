// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

using System;
using System.IO;
using UnrealBuildTool;

public class RallyHereAPI : ModuleRules
{
    public RallyHereAPI(ReadOnlyTargetRules Target) : base(Target)
    {
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "HTTP",
                "Json",
                "Engine",
            }
        );
        PCHUsage = PCHUsageMode.NoPCHs;
    }
}