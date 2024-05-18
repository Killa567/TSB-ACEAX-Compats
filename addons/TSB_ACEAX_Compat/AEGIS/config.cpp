#define true	1
#define false	0

#define private		0
#define protected		1
#define public		2

class CfgPatches
{
	class TSB_ACEAX_Compat_AEGIS
	{
		name="TSB_ACEAX_Compat_AEGIS";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"aceax_gearinfo",
			"A3_Characters_F_Globe_Headgear", // required O&T to override it
			"A3_Aegis_Data_F_Aegis"
		};
		author="Frost99";
		skipWhenMissingDependencies = 1;
	};
};

// Hide unneeded classes

class CfgWeapons {
	class H_HelmetHBK_headset_base_F;	// External class reference
	class H_HelmetHBK_ear_base_F;	// External class reference
	class H_HelmetHBK_chops_base_F;	// External class reference
	class H_HelmetHBK_base_F;	// External class reference
	
	class H_HelmetHBK_headset_olive : H_HelmetHBK_headset_base_F {
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;	
	};
	
	class H_HelmetHBK_ear_olive : H_HelmetHBK_ear_base_F {
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;	
	};
	
	class H_HelmetHBK_chops_olive : H_HelmetHBK_chops_base_F {
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;	
	};
	
	class H_HelmetHBK_noHeadset : H_HelmetHBK_base_F {
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;	
	};
};