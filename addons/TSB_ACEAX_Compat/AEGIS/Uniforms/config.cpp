#define true	1
#define false	0

#define private		0
#define protected		1
#define public		2

class CfgPatches
{
	class TSB_ACEAX_Compat_AEGIS_UNIFORMS
	{
		name="TSB_ACEAX_Compat_AEGIS_UNIFORMS";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"aceax_gearinfo",
			"A3_Aegis_Data_F_Aegis"
		};
		author="Frost99";
		skipWhenMissingDependencies = 1;
	};
};