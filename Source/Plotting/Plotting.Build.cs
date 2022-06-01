// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Plotting : ModuleRules
{
	public Plotting(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "KantanChartsSlate", "KantanChartsDatasource", "SlateCore", "Slate", "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG"});

		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

	}
}
