class CfgPatches
{
	class aceax_rf_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion="1.0";
		requiredAddons[]=
		{
			"aceax_gearinfo",
			"aceax_acebi_compat",
			"RF_Characters"
		};
		author="TSB";
		skipWhenMissingDependencies = 1;
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class rf_g19
		{
			options[]=
			{
				"camo"
			};
			label="G19";
			class camo
			{
				values[]=
				{
					"BLK",
					"KHK",
					"SND"
				};
				alwaysSelectable=1;
			};
		};
		class rf_g19A
		{
			options[]=
			{
				"camo"
			};
			label="G19A";
			class camo
			{
				values[]=
				{
					"BLK",
					"KHK",
					"SND"
				};
				alwaysSelectable=1;
			};
		};
		class rf_mk26
		{
			options[]=
			{
				"camo"
			};
			label="Mk26";
			class camo
			{
				values[]=
				{
					"BLK",
					"Bronze",
					"Classic",
					"Copper",
					"Gold"
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
		class hgun_Glock19_RF
		{
			model="rf_g19";
			camo="BLK";
		};
		class hgun_Glock19_khk_RF
		{
			model="rf_g19";
			camo="KHK";
		};
		class hgun_Glock19_Tan_RF
		{
			model="rf_g19";
			camo="SND";
		};
		class hgun_Glock19_auto_RF
		{
			model="rf_g19A";
			camo="BLK";
		};
		class hgun_Glock19_auto_khk_RF
		{
			model="rf_g19A";
			camo="KHK";
		};
		class hgun_Glock19_auto_Tan_RF
		{
			model="rf_g19A";
			camo="SND";
		};
		class hgun_DEagle_RF
		{
			model="rf_mk26";
			camo="BLK";
		};
		class hgun_DEagle_bronze_RF
		{
			model="rf_mk26";
			camo="Bronze";
		};
		class hgun_DEagle_classic_RF
		{
			model="rf_mk26";
			camo="Classic";
		};
		class hgun_DEagle_copper_RF
		{
			model="rf_mk26";
			camo="Copper";
		};
		class hgun_DEagle_gold_RF
		{
			model="rf_mk26";
			camo="Gold";
		};
	};
};
