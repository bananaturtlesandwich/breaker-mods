using UnrealBuildTool;

public class BreakerEditorTarget : TargetRules {
	public BreakerEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Breaker",
		});
	}
}
