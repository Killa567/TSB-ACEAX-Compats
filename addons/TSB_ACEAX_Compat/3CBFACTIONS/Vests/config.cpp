#define true	1
#define false	0

#define private		0
#define protected		1
#define public		2

class CfgPatches
{
	class TSB_ACEAX_Compat_3CBFACTIONS_VESTS
	{
		name="TSB_ACEAX_Compat_3CBFACTIONS_VESTS";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"aceax_gearinfo",
			"UK3CB_Factions_Equipment"
		};
		author="Frost993";
		skipWhenMissingDependencies = 1;
	};
};