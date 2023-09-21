using System;
using System.IO;
using UnrealBuildTool;

public class RallyHereIntegration : ModuleRules
{
    public RallyHereIntegration(ReadOnlyTargetRules Target) : base(Target)
    {
		bAllowConfidentialPlatformDefines = true;

		PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "HTTP",
                "Json",
                "Engine",
                "OnlineSubsystem",
                "OnlineSubsystemUtils",
                "RallyHereAPI",
				"RallyHereGameHostProvider",
                "WebAuth",
				"Sockets",
				"Networking",
				"DeveloperSettings",
            }
        );

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Hotfix"
			}
		);
    }
}