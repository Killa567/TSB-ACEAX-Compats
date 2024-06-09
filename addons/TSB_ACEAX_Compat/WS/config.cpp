class CfgPatches
{
	class aceax_ws_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion="1.0";
		requiredAddons[]=
		{
			"aceax_gearinfo",
			"aceax_acebi_compat",
			"Characters_f_lxWS"
		};
		author="TSB";
		skipWhenMissingDependencies = 1;
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class lxWS_AA12
		{
			options[]=
			{
				"camo"
			};
			label="AA12";
			class camo
			{
				values[]=
				{
					"BLK",
					"SND",
					"SNK"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_FAL
		{
			options[]=
			{
				"camo"
			};
			label="FN FAL 50.00";
			class camo
			{
				values[]=
				{
					"BLK",
					"Desert",
					"Jungle",
					"Wood"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_FALGL
		{
			options[]=
			{
				"camo"
			};
			label="FN FAL 50.00 GL";
			class camo
			{
				values[]=
				{
					"BLK",
					"Wood"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_GalilARM
		{
			options[]=
			{
				"camo"
			};
			label="Galil ARM";
			class camo
			{
				values[]=
				{
					"BLK",
					"Rust"
				};
				alwaysSelectable=1;
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class launch_RPG32_tan_lxWS
		{
			model="acebi_rpg32";
			camo="SND";
		};
		class sgun_aa40_lxWS
		{
			model="lxWS_AA12";
			camo="BLK";
		};
		class sgun_aa40_tan_lxWS
		{
			model="lxWS_AA12";
			camo="SND";
		};
		class sgun_aa40_snake_lxWS
		{
			model="lxWS_AA12";
			camo="SNK";
		};
		class arifle_SLR_V_lxWS
		{
			model="lxWS_FAL";
			camo="BLK";
		};
		class arifle_SLR_D_lxWS
		{
			model="lxWS_FAL";
			camo="Desert";
		};
		class arifle_SLR_V_camo_lxWS
		{
			model="lxWS_FAL";
			camo="Jungle";
		};
		class arifle_SLR_lxWS
		{
			model="lxWS_FAL";
			camo="Wood";
		};
		class arifle_SLR_V_GL_lxWS
		{
			model="lxWS_FALGL";
			camo="BLK";
		};
		class arifle_SLR_GL_lxWS
		{
			model="lxWS_FALGL";
			camo="Wood";
		};
		class arifle_Galat_lxWS
		{
			model="lxWS_GalilARM";
			camo="BLK";
		};
		class arifle_Galat_worn_lxWS
		{
			model="lxWS_GalilARM";
			camo="Rust";
		};
	};
};
