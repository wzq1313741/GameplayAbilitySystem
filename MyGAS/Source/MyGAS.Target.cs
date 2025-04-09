// Copyright WZQ

using UnrealBuildTool;
using System.Collections.Generic;

public class MyGASTarget : TargetRules
{
	public MyGASTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "MyGAS" } );
	}
}
