// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HordeShooter : ModuleRules
{
	public HordeShooter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "OnlineSubsystemSteam", "OnlineSubsystem", "GameplayAbilities" });
	}
}
