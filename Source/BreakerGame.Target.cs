using UnrealBuildTool;

public class BreakerGameTarget : TargetRules {
	public BreakerGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Breaker",
		});
	}
}
