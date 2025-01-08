// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Interaction2 : ModuleRules
{
	public Interaction2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
