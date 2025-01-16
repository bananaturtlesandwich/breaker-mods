using UnrealBuildTool;

public class Breaker : ModuleRules {
    public Breaker(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "CommonInput",
            "CommonUI",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "FastNoiseGenerator",
            "Foliage",
            "GameplayCameras",
            "GameplayTags",
            "GameplayTasks",
            "HMMagic",
            "InputCore",
            "LevelSequence",
            "NavigationSystem",
            "Niagara",
            "NiagaraAnimNotifies",
            "PhysicsCore",
            "ProceduralMeshComponent",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
