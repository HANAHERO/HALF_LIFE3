// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HALF_LIFE3 : ModuleRules
{
	public HALF_LIFE3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
