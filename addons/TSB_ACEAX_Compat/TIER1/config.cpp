class CfgPatches
{
	class TSB_ACEAX_Compat_TIER1
	{
		name="TSB_ACEAX_Compat_TIER1";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"aceax_gearinfo",
			"Tier1_Weapons_cfg"
		};
		author="TSB";
		version="0.8.0.0";
		versionStr="0.8.0.0";
		versionAr[]={0,8,0,0};
        skipWhenMissingDependencies = 1;
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class tier1_hk416_d110
		{
			label = "HK416 D10";
			author = "Tier One";
			options[] = {"camo","stock","handguard"};
			class camo
			{
				values[] = {"STD","DST","BDS"};
				class STD
				{
					label = "Standard";
				};
				class DST
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.61,0.54,0.45,1)";
				};
				class BDS
				{
					label = "Black/Desert";
					image = "\z\aceax\compats\compat_tier1\data\camo\bds.paa";
				};
			};
			class stock
			{
				label = "Stock";
				values[] = {"LMT","CTR","IMOD","MFT"};
				class LMT
				{
					label = "LMT";
				};
				class CTR
				{
					label = "CTR";
				};
				class IMOD
				{
					label = "IMOD";
				};
				class MFT
				{
					label = "MFT";
				};
			};
			class handguard
			{
				label = "Handguard";
				values[] = {"STD","SMR","RAHG","MW"};
				class STD
				{
					label = "Standard";
				};
				class SMR
				{
					label = "SMR";
				};
				class RAHG
				{
					label = "RAHG";
				};
				class MW
				{
					label = "Midwest";
				};
			};
		};
		class tier1_hk416_d145
		{
			label = "HK416 D14.5";
			author = "Tier One";
			options[] = {"camo","stock","handguard"};
			class camo
			{
				values[] = {"STD","DST","BDS"};
				class STD
				{
					label = "Standard";
				};
				class DST
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.61,0.54,0.45,1)";
				};
				class BDS
				{
					label = "Black/Desert";
					image = "\z\aceax\compats\compat_tier1\data\camo\bds.paa";
				};
			};
			class stock
			{
				label = "Stock";
				values[] = {"LMT","CTR","IMOD","MFT"};
				class LMT
				{
					label = "LMT";
				};
				class CTR
				{
					label = "CTR";
				};
				class IMOD
				{
					label = "IMOD";
				};
				class MFT
				{
					label = "MFT";
				};
			};
			class handguard
			{
				label = "Handguard";
				values[] = {"STD","SMR","RAHG","MW"};
				class STD
				{
					label = "Standard";
				};
				class SMR
				{
					label = "SMR";
				};
				class RAHG
				{
					label = "RAHG";
				};
				class MW
				{
					label = "Midwest";
				};
			};
		};
		class tier1_m110k1
		{
			options[] = {"stock"};
			label = "M110k1";
			class stock
			{
				label = "Stock";
				values[] = {"STD","CTR"};
				alwaysSelectable = 1;
				class STD
				{
					label = "Standard";
				};
				class CTR
				{
					label = "CTR";
				};
			};
		};
		class tier1_m110k5
		{
			options[] = {"stock","caliber"};
			label = "M110k5";
			class stock
			{
				label = "Stock";
				values[] = {"STD","ACS"};
				alwaysSelectable = 1;
				class STD
				{
					label = "Standard";
				};
				class ACS
				{
					label = "ACS";
				};
			};
			class caliber
			{
				label = "Caliber";
				values[] = {"762MM","65MM"};
				alwaysSelectable = 1;
				class 762MM
				{
					label = "7.62mm";
				};
				class 65MM
				{
					label = "6.5mm";
				};
			};
		};
		class tier1_mk46_mod0
		{
			options[] = {"camo","furniture"};
			label = "Mk 46 Mod 0";
			class camo
			{
				values[] = {"BLK","DES"};
				alwaysSelectable = 1;
				class DES
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.71,0.62,0.44,1)";
				};
			};
			class furniture
			{
				label = "Furniture";
				values[] = {"STD","PARA"};
				alwaysSelectable = 1;
				class STD
				{
					label = "Standard";
				};
				class PARA
				{
					label = "Para";
				};
			};
		};
		class tier1_mk46_mod1
		{
			options[] = {"camo","furniture"};
			label = "Mk 46 Mod 1";
			class camo
			{
				values[] = {"BLK","DES"};
				alwaysSelectable = 1;
				class DES
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.71,0.62,0.44,1)";
				};
			};
			class furniture
			{
				label = "Furniture";
				values[] = {"PARA","SAVIT"};
				alwaysSelectable = 1;
				class PARA
				{
					label = "Para";
				};
				class SAVIT
				{
					label = "Savit";
				};
			};
		};
		class tier1_mk48_mod0
		{
			options[] = {"camo","furniture"};
			label = "Mk 48 Mod 0";
			class camo
			{
				values[] = {"BLK","DES"};
				alwaysSelectable = 1;
				class DES
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.71,0.62,0.44,1)";
				};
			};
			class furniture
			{
				label = "Furniture";
				values[] = {"STD","PARA"};
				alwaysSelectable = 1;
				class STD
				{
					label = "Standard";
				};
				class PARA
				{
					label = "Para";
				};
			};
		};
		class tier1_mk48_mod1
		{
			options[] = {"camo"};
			label = "Mk 48 Mod 1";
			class camo
			{
				values[] = {"BLK","DES"};
				alwaysSelectable = 1;
				class DES
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.71,0.62,0.44,1)";
				};
			};
		};
		class tier1_mx115_virtus
		{
			options[] = {"camo","caliber"};
			label = "MX 11.5 Virtus";
			class camo
			{
				values[] = {"GRY","BLK","DES","FDE"};
				alwaysSelectable = 1;
				class DES
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.61,0.54,0.45,1)";
				};
			};
			class caliber
			{
				label = "Caliber";
				values[] = {"556MM","300BLK"};
				alwaysSelectable = 1;
				class 556MM
				{
					label = "5.56mm";
				};
				class 300BLK
				{
					label = ".300BLK";
				};
			};
		};
		class tier1_sr16_car
		{
			options[] = {"camo","stock"};
			label = "SR-16 Carbine";
			class camo
			{
				values[] = {"BLK","FDE"};
				alwaysSelectable = 1;
			};
			class stock
			{
				label = "Stock";
				values[] = {"CTR","IMOD","LMT","MFT"};
				alwaysSelectable = 1;
				class CTR
				{
					label = "CTR";
				};
				class IMOD
				{
					label = "IMOD";
				};
				class LMT
				{
					label = "LMT";
				};
				class MFT
				{
					label = "MFT";
				};
			};
		};
		class tier1_sr16_cqb
		{
			options[] = {"camo","stock"};
			label = "SR-16 CQB";
			class camo
			{
				values[] = {"BLK","FDE"};
				alwaysSelectable = 1;
			};
			class stock
			{
				label = "Stock";
				values[] = {"CTR","IMOD","LMT","MFT"};
				alwaysSelectable = 1;
				class CTR
				{
					label = "CTR";
				};
				class IMOD
				{
					label = "IMOD";
				};
				class LMT
				{
					label = "LMT";
				};
				class MFT
				{
					label = "MFT";
				};
			};
		};
		class tier1_sr25
		{
			options[] = {"camo","furniture"};
			label = "SR-25";
			class camo
			{
				values[] = {"BLK","TAN"};
				alwaysSelectable = 1;
			};
			class furniture
			{
				label = "Furniture";
				values[] = {"STD","EC"};
				alwaysSelectable = 1;
				class STD
				{
					label = "Standard";
				};
				class EC
				{
					label = "EC";
					description = "Enhanced Carbine";
				};
			};
		};
		class tier1_glock19
		{
			options[] = {"furniture","barrel"};
			label = "Glock 19";
			class furniture
			{
				label = "Furniture";
				values[] = {"URB","WAR"};
				alwaysSelectable = 1;
				class URB
				{
					label = "Urban";
				};
				class WAR
				{
					label = "WAR";
				};
			};
			class barrel
			{
				label = "Barrel/Iron Sights";
				values[] = {"STD","TB"};
				alwaysSelectable = 1;
				class STD
				{
					label = "Standard";
				};
				class TB
				{
					label = "Threaded";
					description = "Threaded Barrel";
				};
			};
		};
		class tier1_glock22
		{
			options[] = {"attachsys","barrel"};
			label = "Glock 22";
			class attachsys
			{
				label = "Attachment System";
				values[] = {"none","pica"};
				alwaysSelectable = 1;
				class none
				{
					label = "None";
				};
				class pica
				{
					label = "Picatinny";
					description = "Picatinny Rail";
				};
			};
			class barrel
			{
				label = "Barrel/Iron Sights";
				values[] = {"STD","TB"};
				alwaysSelectable = 1;
				class STD
				{
					label = "Standard";
				};
				class TB
				{
					label = "Threaded";
					description = "Threaded Barrel";
				};
			};
		};
		class tier1_p320
		{
			options[] = {"barrel"};
			label = "P320";
			class barrel
			{
				label = "Barrel/Iron Sights";
				values[] = {"STD","PMM","TB"};
				alwaysSelectable = 1;
				class STD
				{
					label = "Standard";
				};
				class PMM
				{
					label = "PMM";
					description = "PMM Compensator";
				};
				class TB
				{
					label = "Threaded";
					description = "Threaded Barrel";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class Tier1_HK416D10_CTR
		{
			model = "tier1_hk416_d110";
			camo = "STD";
			handguard = "STD";
			stock = "CTR";
		};
		class Tier1_HK416D10_CTR_Desert
		{
			model = "tier1_hk416_d110";
			camo = "DST";
			handguard = "STD";
			stock = "CTR";
		};
		class Tier1_HK416D10_LMT
		{
			model = "tier1_hk416_d110";
			camo = "STD";
			handguard = "STD";
			stock = "LMT";
		};
		class Tier1_HK416D10_LMT_Desert
		{
			model = "tier1_hk416_d110";
			camo = "DST";
			handguard = "STD";
			stock = "LMT";
		};
		class Tier1_HK416D10_SMR_LMT
		{
			model = "tier1_hk416_d110";
			camo = "STD";
			handguard = "SMR";
			stock = "LMT";
		};
		class Tier1_HK416D10_SMR_LMT_Desert
		{
			model = "tier1_hk416_d110";
			camo = "DST";
			handguard = "SMR";
			stock = "LMT";
		};
		class Tier1_HK416D10_SMR_LMT_BlackDesert
		{
			model = "tier1_hk416_d110";
			camo = "BDS";
			handguard = "SMR";
			stock = "LMT";
		};
		class Tier1_HK416D10_SMR_CTR
		{
			model = "tier1_hk416_d110";
			camo = "STD";
			handguard = "SMR";
			stock = "CTR";
		};
		class Tier1_HK416D10_SMR_CTR_Desert
		{
			model = "tier1_hk416_d110";
			camo = "DST";
			handguard = "SMR";
			stock = "CTR";
		};
		class Tier1_HK416D10_SMR_CTR_BlackDesert
		{
			model = "tier1_hk416_d110";
			camo = "BDS";
			handguard = "SMR";
			stock = "CTR";
		};
		class Tier1_HK416D10_SMR_IMOD
		{
			model = "tier1_hk416_d110";
			camo = "STD";
			handguard = "SMR";
			stock = "IMOD";
		};
		class Tier1_HK416D10_SMR_IMOD_Desert
		{
			model = "tier1_hk416_d110";
			camo = "DST";
			handguard = "SMR";
			stock = "IMOD";
		};
		class Tier1_HK416D10_SMR_IMOD_BlackDesert
		{
			model = "tier1_hk416_d110";
			camo = "BDS";
			handguard = "SMR";
			stock = "IMOD";
		};
		class Tier1_HK416D10_SMR_MFT
		{
			model = "tier1_hk416_d110";
			camo = "STD";
			handguard = "SMR";
			stock = "MFT";
		};
		class Tier1_HK416D10_SMR_MFT_Desert
		{
			model = "tier1_hk416_d110";
			camo = "DST";
			handguard = "SMR";
			stock = "MFT";
		};
		class Tier1_HK416D10_SMR_MFT_BlackDesert
		{
			model = "tier1_hk416_d110";
			camo = "BDS";
			handguard = "SMR";
			stock = "MFT";
		};
		class Tier1_HK416D10_RAHG_LMT
		{
			model = "tier1_hk416_d110";
			camo = "STD";
			handguard = "RAHG";
			stock = "LMT";
		};
		class Tier1_HK416D10_RAHG_LMT_Desert
		{
			model = "tier1_hk416_d110";
			camo = "DST";
			handguard = "RAHG";
			stock = "LMT";
		};
		class Tier1_HK416D10_RAHG_LMT_BlackDesert
		{
			model = "tier1_hk416_d110";
			camo = "BDS";
			handguard = "RAHG";
			stock = "LMT";
		};
		class Tier1_HK416D10_RAHG_CTR
		{
			model = "tier1_hk416_d110";
			camo = "STD";
			handguard = "RAHG";
			stock = "CTR";
		};
		class Tier1_HK416D10_RAHG_CTR_Desert
		{
			model = "tier1_hk416_d110";
			camo = "DST";
			handguard = "RAHG";
			stock = "CTR";
		};
		class Tier1_HK416D10_RAHG_CTR_BlackDesert
		{
			model = "tier1_hk416_d110";
			camo = "BDS";
			handguard = "RAHG";
			stock = "CTR";
		};
		class Tier1_HK416D10_RAHG_IMOD
		{
			model = "tier1_hk416_d110";
			camo = "STD";
			handguard = "RAHG";
			stock = "IMOD";
		};
		class Tier1_HK416D10_RAHG_IMOD_Desert
		{
			model = "tier1_hk416_d110";
			camo = "DST";
			handguard = "RAHG";
			stock = "IMOD";
		};
		class Tier1_HK416D10_RAHG_IMOD_BlackDesert
		{
			model = "tier1_hk416_d110";
			camo = "BDS";
			handguard = "RAHG";
			stock = "IMOD";
		};
		class Tier1_HK416D10_RAHG_MFT
		{
			model = "tier1_hk416_d110";
			camo = "STD";
			handguard = "RAHG";
			stock = "MFT";
		};
		class Tier1_HK416D10_RAHG_MFT_Desert
		{
			model = "tier1_hk416_d110";
			camo = "DST";
			handguard = "RAHG";
			stock = "MFT";
		};
		class Tier1_HK416D10_RAHG_MFT_BlackDesert
		{
			model = "tier1_hk416_d110";
			camo = "BDS";
			handguard = "RAHG";
			stock = "MFT";
		};
		class Tier1_HK416D10_MW9_LMT
		{
			model = "tier1_hk416_d110";
			camo = "STD";
			handguard = "MW";
			stock = "LMT";
		};
		class Tier1_HK416D10_MW9_LMT_Desert
		{
			model = "tier1_hk416_d110";
			camo = "DST";
			handguard = "MW";
			stock = "LMT";
		};
		class Tier1_HK416D10_MW9_LMT_BlackDesert
		{
			model = "tier1_hk416_d110";
			camo = "BDS";
			handguard = "MW";
			stock = "LMT";
		};
		class Tier1_HK416D10_MW9_CTR
		{
			model = "tier1_hk416_d110";
			camo = "STD";
			handguard = "MW";
			stock = "CTR";
		};
		class Tier1_HK416D10_MW9_CTR_Desert
		{
			model = "tier1_hk416_d110";
			camo = "DST";
			handguard = "MW";
			stock = "CTR";
		};
		class Tier1_HK416D10_MW9_CTR_BlackDesert
		{
			model = "tier1_hk416_d110";
			camo = "BDS";
			handguard = "MW";
			stock = "CTR";
		};
		class Tier1_HK416D10_MW9_IMOD
		{
			model = "tier1_hk416_d110";
			camo = "STD";
			handguard = "MW";
			stock = "IMOD";
		};
		class Tier1_HK416D10_MW9_IMOD_Desert
		{
			model = "tier1_hk416_d110";
			camo = "DST";
			handguard = "MW";
			stock = "IMOD";
		};
		class Tier1_HK416D10_MW9_IMOD_BlackDesert
		{
			model = "tier1_hk416_d110";
			camo = "BDS";
			handguard = "MW";
			stock = "IMOD";
		};
		class Tier1_HK416D10_MW9_MFT
		{
			model = "tier1_hk416_d110";
			camo = "STD";
			handguard = "MW";
			stock = "MFT";
		};
		class Tier1_HK416D10_MW9_MFT_Desert
		{
			model = "tier1_hk416_d110";
			camo = "DST";
			handguard = "MW";
			stock = "MFT";
		};
		class Tier1_HK416D10_MW9_MFT_BlackDesert
		{
			model = "tier1_hk416_d110";
			camo = "BDS";
			handguard = "MW";
			stock = "MFT";
		};
		class Tier1_HK416D145_CTR
		{
			model = "tier1_hk416_d145";
			camo = "STD";
			handguard = "STD";
			stock = "CTR";
		};
		class Tier1_HK416D145_CTR_Desert
		{
			model = "tier1_hk416_d145";
			camo = "DST";
			handguard = "STD";
			stock = "CTR";
		};
		class Tier1_HK416D145_LMT
		{
			model = "tier1_hk416_d145";
			camo = "STD";
			handguard = "STD";
			stock = "LMT";
		};
		class Tier1_HK416D145_LMT_Desert
		{
			model = "tier1_hk416_d145";
			camo = "DST";
			handguard = "STD";
			stock = "LMT";
		};
		class Tier1_HK416D145_SMR_LMT
		{
			model = "tier1_hk416_d145";
			camo = "STD";
			handguard = "SMR";
			stock = "LMT";
		};
		class Tier1_HK416D145_SMR_LMT_Desert
		{
			model = "tier1_hk416_d145";
			camo = "DST";
			handguard = "SMR";
			stock = "LMT";
		};
		class Tier1_HK416D145_SMR_LMT_BlackDesert
		{
			model = "tier1_hk416_d145";
			camo = "BDS";
			handguard = "SMR";
			stock = "LMT";
		};
		class Tier1_HK416D145_SMR_CTR
		{
			model = "tier1_hk416_d145";
			camo = "STD";
			handguard = "SMR";
			stock = "CTR";
		};
		class Tier1_HK416D145_SMR_CTR_Desert
		{
			model = "tier1_hk416_d145";
			camo = "DST";
			handguard = "SMR";
			stock = "CTR";
		};
		class Tier1_HK416D145_SMR_CTR_BlackDesert
		{
			model = "tier1_hk416_d145";
			camo = "BDS";
			handguard = "SMR";
			stock = "CTR";
		};
		class Tier1_HK416D145_SMR_IMOD
		{
			model = "tier1_hk416_d145";
			camo = "STD";
			handguard = "SMR";
			stock = "IMOD";
		};
		class Tier1_HK416D145_SMR_IMOD_Desert
		{
			model = "tier1_hk416_d145";
			camo = "DST";
			handguard = "SMR";
			stock = "IMOD";
		};
		class Tier1_HK416D145_SMR_IMOD_BlackDesert
		{
			model = "tier1_hk416_d145";
			camo = "BDS";
			handguard = "SMR";
			stock = "IMOD";
		};
		class Tier1_HK416D145_SMR_MFT
		{
			model = "tier1_hk416_d145";
			camo = "STD";
			handguard = "SMR";
			stock = "MFT";
		};
		class Tier1_HK416D145_SMR_MFT_Desert
		{
			model = "tier1_hk416_d145";
			camo = "DST";
			handguard = "SMR";
			stock = "MFT";
		};
		class Tier1_HK416D145_SMR_MFT_BlackDesert
		{
			model = "tier1_hk416_d145";
			camo = "BDS";
			handguard = "SMR";
			stock = "MFT";
		};
		class Tier1_HK416D145_RAHG_LMT
		{
			model = "tier1_hk416_d145";
			camo = "STD";
			handguard = "RAHG";
			stock = "LMT";
		};
		class Tier1_HK416D145_RAHG_LMT_Desert
		{
			model = "tier1_hk416_d145";
			camo = "DST";
			handguard = "RAHG";
			stock = "LMT";
		};
		class Tier1_HK416D145_RAHG_LMT_BlackDesert
		{
			model = "tier1_hk416_d145";
			camo = "BDS";
			handguard = "RAHG";
			stock = "LMT";
		};
		class Tier1_HK416D145_RAHG_CTR
		{
			model = "tier1_hk416_d145";
			camo = "STD";
			handguard = "RAHG";
			stock = "CTR";
		};
		class Tier1_HK416D145_RAHG_CTR_Desert
		{
			model = "tier1_hk416_d145";
			camo = "DST";
			handguard = "RAHG";
			stock = "CTR";
		};
		class Tier1_HK416D145_RAHG_CTR_BlackDesert
		{
			model = "tier1_hk416_d145";
			camo = "BDS";
			handguard = "RAHG";
			stock = "CTR";
		};
		class Tier1_HK416D145_RAHG_IMOD
		{
			model = "tier1_hk416_d145";
			camo = "STD";
			handguard = "RAHG";
			stock = "IMOD";
		};
		class Tier1_HK416D145_RAHG_IMOD_Desert
		{
			model = "tier1_hk416_d145";
			camo = "DST";
			handguard = "RAHG";
			stock = "IMOD";
		};
		class Tier1_HK416D145_RAHG_IMOD_BlackDesert
		{
			model = "tier1_hk416_d145";
			camo = "BDS";
			handguard = "RAHG";
			stock = "IMOD";
		};
		class Tier1_HK416D145_RAHG_MFT
		{
			model = "tier1_hk416_d145";
			camo = "STD";
			handguard = "RAHG";
			stock = "MFT";
		};
		class Tier1_HK416D145_RAHG_MFT_Desert
		{
			model = "tier1_hk416_d145";
			camo = "DST";
			handguard = "RAHG";
			stock = "MFT";
		};
		class Tier1_HK416D145_RAHG_MFT_BlackDesert
		{
			model = "tier1_hk416_d145";
			camo = "BDS";
			handguard = "RAHG";
			stock = "MFT";
		};
		class Tier1_HK416D145_MW13_LMT
		{
			model = "tier1_hk416_d145";
			camo = "STD";
			handguard = "MW";
			stock = "LMT";
		};
		class Tier1_HK416D145_MW13_LMT_Desert
		{
			model = "tier1_hk416_d145";
			camo = "DST";
			handguard = "MW";
			stock = "LMT";
		};
		class Tier1_HK416D145_MW13_LMT_BlackDesert
		{
			model = "tier1_hk416_d145";
			camo = "BDS";
			handguard = "MW";
			stock = "LMT";
		};
		class Tier1_HK416D145_MW13_CTR
		{
			model = "tier1_hk416_d145";
			camo = "STD";
			handguard = "MW";
			stock = "CTR";
		};
		class Tier1_HK416D145_MW13_CTR_Desert
		{
			model = "tier1_hk416_d145";
			camo = "DST";
			handguard = "MW";
			stock = "CTR";
		};
		class Tier1_HK416D145_MW13_CTR_BlackDesert
		{
			model = "tier1_hk416_d145";
			camo = "BDS";
			handguard = "MW";
			stock = "CTR";
		};
		class Tier1_HK416D145_MW13_IMOD
		{
			model = "tier1_hk416_d145";
			camo = "STD";
			handguard = "MW";
			stock = "IMOD";
		};
		class Tier1_HK416D145_MW13_IMOD_Desert
		{
			model = "tier1_hk416_d145";
			camo = "DST";
			handguard = "MW";
			stock = "IMOD";
		};
		class Tier1_HK416D145_MW13_IMOD_BlackDesert
		{
			model = "tier1_hk416_d145";
			camo = "BDS";
			handguard = "MW";
			stock = "IMOD";
		};
		class Tier1_HK416D145_MW13_MFT
		{
			model = "tier1_hk416_d145";
			camo = "STD";
			handguard = "MW";
			stock = "MFT";
		};
		class Tier1_HK416D145_MW13_MFT_Desert
		{
			model = "tier1_hk416_d145";
			camo = "DST";
			handguard = "MW";
			stock = "MFT";
		};
		class Tier1_HK416D145_MW13_MFT_BlackDesert
		{
			model = "tier1_hk416_d145";
			camo = "BDS";
			handguard = "MW";
			stock = "MFT";
		};
		class Tier1_M110k1
		{
			model = "tier1_m110k1";
			stock = "STD";
		};
		class Tier1_M110k1_CTR
		{
			model = "tier1_m110k1";
			stock = "CTR";
		};
		class Tier1_M110k5
		{
			model = "tier1_m110k5";
			stock = "STD";
			caliber = "762MM";
		};
		class Tier1_M110k5_ACS
		{
			model = "tier1_m110k5";
			stock = "ACS";
			caliber = "762MM";
		};
		class Tier1_M110k5_65mm
		{
			model = "tier1_m110k5";
			stock = "STD";
			caliber = "65MM";
		};
		class Tier1_M110k5_ACS_65mm
		{
			model = "tier1_m110k5";
			stock = "ACS";
			caliber = "65MM";
		};
		class Tier1_MK46_Mod0
		{
			model = "tier1_mk46_mod0";
			camo = "BLK";
			furniture = "STD";
		};
		class Tier1_MK46_Mod0_Para
		{
			model = "tier1_mk46_mod0";
			camo = "BLK";
			furniture = "PARA";
		};
		class Tier1_MK46_Mod0_Desert
		{
			model = "tier1_mk46_mod0";
			camo = "DES";
			furniture = "STD";
		};
		class Tier1_MK46_Mod0_Para_Desert
		{
			model = "tier1_mk46_mod0";
			camo = "DES";
			furniture = "PARA";
		};
		class Tier1_MK46_Mod1
		{
			model = "tier1_mk46_mod1";
			camo = "BLK";
			furniture = "PARA";
		};
		class Tier1_MK46_Mod1_Savit
		{
			model = "tier1_mk46_mod1";
			camo = "BLK";
			furniture = "SAVIT";
		};
		class Tier1_MK46_Mod1_Desert
		{
			model = "tier1_mk46_mod1";
			camo = "DES";
			furniture = "PARA";
		};
		class Tier1_MK46_Mod1_Savit_Desert
		{
			model = "tier1_mk46_mod1";
			camo = "DES";
			furniture = "SAVIT";
		};
		class Tier1_MK48_Mod0
		{
			model = "tier1_mk48_mod0";
			camo = "BLK";
			furniture = "STD";
		};
		class Tier1_MK48_Mod0_Para
		{
			model = "tier1_mk48_mod0";
			camo = "BLK";
			furniture = "PARA";
		};
		class Tier1_MK48_Mod0_Desert
		{
			model = "tier1_mk48_mod0";
			camo = "DES";
			furniture = "STD";
		};
		class Tier1_MK48_Mod0_Para_Desert
		{
			model = "tier1_mk48_mod0";
			camo = "DES";
			furniture = "PARA";
		};
		class Tier1_MK48_Mod1
		{
			model = "tier1_mk48_mod1";
			camo = "BLK";
		};
		class Tier1_MK48_Mod1_Desert
		{
			model = "tier1_mk48_mod1";
			camo = "DES";
		};
		class Tier1_SIG_MCX_115_Virtus
		{
			model = "tier1_mx115_virtus";
			camo = "GRY";
			caliber = "556MM";
		};
		class Tier1_SIG_MCX_115_Virtus_300BLK
		{
			model = "tier1_mx115_virtus";
			camo = "GRY";
			caliber = "300BLK";
		};
		class Tier1_SIG_MCX_115_Virtus_Black
		{
			model = "tier1_mx115_virtus";
			camo = "BLK";
			caliber = "556MM";
		};
		class Tier1_SIG_MCX_115_Virtus_300BLK_Black
		{
			model = "tier1_mx115_virtus";
			camo = "BLK";
			caliber = "300BLK";
		};
		class Tier1_SIG_MCX_115_Virtus_Desert
		{
			model = "tier1_mx115_virtus";
			camo = "DES";
			caliber = "556MM";
		};
		class Tier1_SIG_MCX_115_Virtus_300BLK_Desert
		{
			model = "tier1_mx115_virtus";
			camo = "DES";
			caliber = "300BLK";
		};
		class Tier1_SIG_MCX_115_Virtus_FDE
		{
			model = "tier1_mx115_virtus";
			camo = "FDE";
			caliber = "556MM";
		};
		class Tier1_SIG_MCX_115_Virtus_300BLK_FDE
		{
			model = "tier1_mx115_virtus";
			camo = "FDE";
			caliber = "300BLK";
		};
		class Tier1_SR16_Carbine_Mod2_CTR_Black
		{
			model = "tier1_sr16_car";
			camo = "BLK";
			stock = "CTR";
		};
		class Tier1_SR16_Carbine_Mod2_CTR_FDE
		{
			model = "tier1_sr16_car";
			camo = "FDE";
			stock = "CTR";
		};
		class Tier1_SR16_Carbine_Mod2_IMOD_Black
		{
			model = "tier1_sr16_car";
			camo = "BLK";
			stock = "IMOD";
		};
		class Tier1_SR16_Carbine_Mod2_IMOD_FDE
		{
			model = "tier1_sr16_car";
			camo = "FDE";
			stock = "IMOD";
		};
		class Tier1_SR16_Carbine_Mod2_LMT_Black
		{
			model = "tier1_sr16_car";
			camo = "BLK";
			stock = "LMT";
		};
		class Tier1_SR16_Carbine_Mod2_LMT_FDE
		{
			model = "tier1_sr16_car";
			camo = "FDE";
			stock = "LMT";
		};
		class Tier1_SR16_Carbine_Mod2_MFT_Black
		{
			model = "tier1_sr16_car";
			camo = "BLK";
			stock = "MFT";
		};
		class Tier1_SR16_Carbine_Mod2_MFT_FDE
		{
			model = "tier1_sr16_car";
			camo = "FDE";
			stock = "MFT";
		};
		class Tier1_SR16_CQB_Mod2_CTR_Black
		{
			model = "tier1_sr16_cqb";
			camo = "BLK";
			stock = "CTR";
		};
		class Tier1_SR16_CQB_Mod2_CTR_FDE
		{
			model = "tier1_sr16_cqb";
			camo = "FDE";
			stock = "CTR";
		};
		class Tier1_SR16_CQB_Mod2_IMOD_Black
		{
			model = "tier1_sr16_cqb";
			camo = "BLK";
			stock = "IMOD";
		};
		class Tier1_SR16_CQB_Mod2_IMOD_FDE
		{
			model = "tier1_sr16_cqb";
			camo = "FDE";
			stock = "IMOD";
		};
		class Tier1_SR16_CQB_Mod2_LMT_Black
		{
			model = "tier1_sr16_cqb";
			camo = "BLK";
			stock = "LMT";
		};
		class Tier1_SR16_CQB_Mod2_LMT_FDE
		{
			model = "tier1_sr16_cqb";
			camo = "FDE";
			stock = "LMT";
		};
		class Tier1_SR16_CQB_Mod2_MFT_Black
		{
			model = "tier1_sr16_cqb";
			camo = "BLK";
			stock = "MFT";
		};
		class Tier1_SR16_CQB_Mod2_MFT_FDE
		{
			model = "tier1_sr16_cqb";
			camo = "FDE";
			stock = "MFT";
		};
		class Tier1_SR25
		{
			model = "tier1_sr25";
			camo = "BLK";
			furniture = "STD";
		};
		class Tier1_SR25_tan
		{
			model = "tier1_sr25";
			camo = "TAN";
			furniture = "STD";
		};
		class Tier1_SR25_EC
		{
			model = "tier1_sr25";
			camo = "BLK";
			furniture = "EC";
		};
		class Tier1_SR25_EC_tan
		{
			model = "tier1_sr25";
			camo = "TAN";
			furniture = "EC";
		};
		class Tier1_Glock19_Urban
		{
			model = "tier1_glock19";
			furniture = "URB";
			barrel = "STD";
		};
		class Tier1_Glock19_WAR
		{
			model = "tier1_glock19";
			furniture = "WAR";
			barrel = "STD";
		};
		class Tier1_Glock19_Urban_TB
		{
			model = "tier1_glock19";
			furniture = "URB";
			barrel = "TB";
		};
		class Tier1_Glock19_WAR_TB
		{
			model = "tier1_glock19";
			furniture = "WAR";
			barrel = "TB";
		};
		class Tier1_Glock22
		{
			model = "tier1_glock22";
			attachsys = "none";
			barrel = "STD";
		};
		class Tier1_Glock22_Rail
		{
			model = "tier1_glock22";
			attachsys = "pica";
			barrel = "STD";
		};
		class Tier1_Glock22_TB
		{
			model = "tier1_glock22";
			attachsys = "none";
			barrel = "TB";
		};
		class Tier1_Glock22_TB_Rail
		{
			model = "tier1_glock22";
			attachsys = "pica";
			barrel = "TB";
		};
		class Tier1_P320
		{
			model = "tier1_p320";
			barrel = "STD";
		};
		class Tier1_P320_PMM
		{
			model = "tier1_p320";
			barrel = "PMM";
		};
		class Tier1_P320_TB
		{
			model = "tier1_p320";
			barrel = "TB";
		};
	};
};
