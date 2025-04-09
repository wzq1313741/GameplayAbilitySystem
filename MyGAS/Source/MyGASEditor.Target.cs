// Copyright WZQ

using UnrealBuildTool;
using System.Collections.Generic;

public class MyGASEditorTarget : TargetRules
{
	public MyGASEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "MyGAS" } );
	}
}
