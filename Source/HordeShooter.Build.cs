// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HordeShooter : ModuleRules
{
	public HordeShooter(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] { "Niagara" });
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", 
			"OnlineSubsystemSteam", "OnlineSubsystem","GameplayTags", "GameplayAbilities" , "GameplayTasks"});

		if (Target.bBuildEditor == true)
		{
			PublicDependencyModuleNames.AddRange(new string[] {"GameplayTasksEditor", "AssetTools", "ContentBrowser", "AssetRegistry", "UnrealEd"});
		}
	}
}
