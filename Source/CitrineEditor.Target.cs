// Copyright Luminous Ember Studios

using UnrealBuildTool;
using System.Collections.Generic;

public class CitrineEditorTarget : TargetRules
{
	public CitrineEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Citrine" } );
	}
}
