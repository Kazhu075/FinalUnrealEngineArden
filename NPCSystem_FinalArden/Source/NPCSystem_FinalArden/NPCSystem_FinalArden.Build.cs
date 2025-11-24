// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NPCSystem_FinalArden : ModuleRules
{
	public NPCSystem_FinalArden(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
