// Copyright Luminous Ember Studios

using UnrealBuildTool;
using System.Collections.Generic;

public class CitrineTarget : TargetRules
{
	public CitrineTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Citrine" } );
	}
}
