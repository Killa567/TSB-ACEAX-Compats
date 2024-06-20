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
					"DES",
					"JGL",
					"WOOD"
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
		class lxWS_GLX160
		{
			options[]=
			{
				"camo"
			};
			label="GLX 160";
			class camo
			{
				values[]=
				{
					"BLK",
					"CAMO",
					"GHEX",
					"HEX",
					"SND",
					"SNK"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_SLRPara
		{
			options[]=
			{
				"camo"
			};
			label="SLR Para";
			class camo
			{
				values[]=
				{
					"BLK",
					"SNK"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_VektorR5Carbine
		{
			options[]=
			{
				"camo"
			};
			label="Vektor R5 Carbine";
			class camo
			{
				values[]=
				{
					"BLK",
					"SNK"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_VektorR5CarbineGL
		{
			options[]=
			{
				"camo"
			};
			label="Vektor R5 Carbine GL";
			class camo
			{
				values[]=
				{
					"BLK",
					"SNK"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_VektorSS77C
		{
			options[]=
			{
				"camo"
			};
			label="Vektor SS-77 Compact";
			class camo
			{
				values[]=
				{
					"BLK",
					"SNK"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_VektorSS77
		{
			options[]=
			{
				"camo"
			};
			label="Vektor SS-77";
			class camo
			{
				values[]=
				{
					"BLK",
					"GHEX",
					"HEX",
					"DES",
					"CAMO",
					"SNK"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_XMS
		{
			options[]=
			{
				"camo"
			};
			label="XMS";
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
		class lxWS_XMSGL
		{
			options[]=
			{
				"camo"
			};
			label="XMS GL";
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
		class lxWS_XMSSG
		{
			options[]=
			{
				"camo"
			};
			label="XMS SG";
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
		class lxWS_XMSSW
		{
			options[]=
			{
				"camo"
			};
			label="XMS SW";
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
		class lxWS_banditrags
		{
			options[]=
			{
				"camo"
			};
			label="Bandit Rags";
			class camo
			{
				values[]=
				{
					"BRN",
					"GRY",
					"GRN",
					"SND"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_ccdjellaba
		{
			options[]=
			{
				"camo"
			};
			label="Commoner Clothes (Djellaba)";
			class camo
			{
				values[]=
				{
					"BLK",
					"BLKSimple",
					"BLU",
					"BLUSimple",
					"GRN",
					"WHT",
					"Wine",
					"YLW"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_ccnomad
		{
			options[]=
			{
				"camo"
			};
			label="Commoner Clothes (Nomad)";
			class camo
			{
				values[]=
				{
					"BLU",
					"BRN",
					"WHT"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_ccvillager
		{
			options[]=
			{
				"camo"
			};
			label="Commoner Clothes (Villager)";
			class camo
			{
				values[]=
				{
					"BLU",
					"DRK",
					"GRN"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_ccjacket
		{
			options[]=
			{
				"camo"
			};
			label="Commoner Clothes (Jacket)";
			class camo
			{
				values[]=
				{
					"BLK",
					"GRY",
					"GRN"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_ion
		{
			options[]=
			{
				"camo"
			};
			label="Contractor Outfit";
			class camo
			{
				values[]=
				{
					"BLK",
					"CAMO",
					"Peace",
					"RED",
					"WHT"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_balisticmask
		{
			options[]=
			{
				"camo",
				"turban"
			};
			label="Ballistic Mask";
			class camo
			{
				values[]=
				{
					"BLK",
					"GHEX",
					"HEX",
					"RED",
					"SNK",
					"WHT",
					"WDL",
					"YLW"
				};
				alwaysSelectable=1;
			};
			class turban
			{
				values[]=
				{
					"Yes",
					"No"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_oldhelmet
		{
			options[]=
			{
				"camo"
			};
			label="Old Helmet";
			class camo
			{
				values[]=
				{
					"BLK",
					"BLU",
					"GRN",
					"SND",
					"WHT",
					"UNA"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_taqiyah
		{
			options[]=
			{
				"camo"
			};
			label="Taqiyah";
			class camo
			{
				values[]=
				{
					"BLK",
					"GRY",
					"WHT"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_turban
		{
			options[]=
			{
				"camo",
				"fit"
			};
			label="Turban";
			class camo
			{
				values[]=
				{
					"BLK",
					"BLU",
					"UNA",
					"GRN",
					"GRNP",
					"ORG",
					"RED",
					"SND",
					"WHT",
					"YLW"
				};
				alwaysSelectable=1;
			};
			class fit
			{
				values[]=
				{
					"Full",
					"Loose",
					"Open",
					"Simple"
				};
				alwaysSelectable=1;
			};
		};
	};
	class CfgGlasses
	{
		class lxWS_BalaclavaThin
		{
			options[]=
			{
				"camo"
			};
			label="Balaclava (Thin)";
			class camo
			{
				values[]=
				{
					"BLK",
					"OLI",
					"SND"
				};
				alwaysSelectable=1;
			};
		};
	};
	class CfgVehicles
	{
		class lxWS_PortShield
		{
			options[]=
			{
				"camo"
			};
			label="Portable Shield Bag";
			class camo
			{
				values[]=
				{
					"AAF",
					"BLK",
					"GHEX",
					"HEX"
				};
				alwaysSelectable=1;
			};
		};
		class lxWS_AP5
		{
			options[]=
			{
				"faction"
			};
			label="UAV Bag (AP-5)";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"NATO",
					"BLK"
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
			camo="DES";
		};
		class arifle_SLR_V_camo_lxWS
		{
			model="lxWS_FAL";
			camo="JGL";
		};
		class arifle_SLR_lxWS
		{
			model="lxWS_FAL";
			camo="WOOD";
		};
		class arifle_SLR_V_GL_lxWS
		{
			model="lxWS_FALGL";
			camo="BLK";
		};
		class arifle_SLR_GL_lxWS
		{
			model="lxWS_FALGL";
			camo="WOOD";
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
		class glaunch_GLX_lxWS
		{
			model="lxWS_GLX160";
			camo="BLK";
		};
		class glaunch_GLX_camo_lxWS
		{
			model="lxWS_GLX160";
			camo="CAMO";
		};
		class glaunch_GLX_ghex_lxWS
		{
			model="lxWS_GLX160";
			camo="GHEX";
		};
		class glaunch_GLX_hex_lxWS
		{
			model="lxWS_GLX160";
			camo="HEX";
		};
		class glaunch_GLX_tan_lxWS
		{
			model="lxWS_GLX160";
			camo="SND";
		};
		class glaunch_GLX_snake_lxWS
		{
			model="lxWS_GLX160";
			camo="SNK";
		};
		class srifle_GM6_snake_lxWS
		{
			model="acebi_gm6_lynx";
			camo="SNK";
		};
		class srifle_EBR_blk_lxWS
		{
			model="acebi_mk14";
			camo="BLK";
		};
		class srifle_EBR_snake_lxWS
		{
			model="acebi_mk14";
			camo="SNK";
		};
		class arifle_SLR_Para_lxWS
		{
			model="lxWS_SLRPara";
			camo="BLK";
		};
		class arifle_SLR_Para_snake_lxWS
		{
			model="lxWS_SLRPara";
			camo="SNK";
		};
		class arifle_VelkoR5_lxWS
		{
			model="lxWS_VektorR5Carbine";
			camo="BLK";
		};
		class arifle_VelkoR5_snake_lxWS
		{
			model="lxWS_VektorR5Carbine";
			camo="SNK";
		};
		class arifle_VelkoR5_GL_lxWS
		{
			model="lxWS_VektorR5CarbineGL";
			camo="BLK";
		};
		class arifle_VelkoR5_GL_snake_lxWS
		{
			model="lxWS_VektorR5CarbineGL";
			camo="SNK";
		};
		class LMG_S77_Compact_lxWS
		{
			model="lxWS_VektorSS77C";
			camo="BLK";
		};
		class LMG_S77_Compact_Snakeskin_lxWS
		{
			model="lxWS_VektorSS77C";
			camo="SNK";
		};
		class LMG_S77_lxWS
		{
			model="lxWS_VektorSS77";
			camo="BLK";
		};
		class LMG_S77_AAF_lxWS
		{
			model="lxWS_VektorSS77";
			camo="CAMO";
		};
		class LMG_S77_Desert_lxWS
		{
			model="lxWS_VektorSS77";
			camo="DES";
		};
		class LMG_S77_Hex_lxWS
		{
			model="lxWS_VektorSS77";
			camo="HEX";
		};
		class LMG_S77_GHex_lxWS
		{
			model="lxWS_VektorSS77";
			camo="GHEX";
		};
		class arifle_XMS_Base_lxWS
		{
			model="lxWS_XMS";
			camo="BLK";
		};
		class arifle_XMS_Base_khk_lxWS
		{
			model="lxWS_XMS";
			camo="KHK";
		};
		class arifle_XMS_Base_Sand_lxWS
		{
			model="lxWS_XMS";
			camo="SND";
		};
		class arifle_XMS_GL_lxWS
		{
			model="lxWS_XMSGL";
			camo="BLK";
		};
		class arifle_XMS_GL_khk_lxWS
		{
			model="lxWS_XMSGL";
			camo="KHK";
		};
		class arifle_XMS_GL_Sand_lxWS
		{
			model="lxWS_XMSGL";
			camo="SND";
		};
		class arifle_XMS_Shot_lxWS
		{
			model="lxWS_XMSSG";
			camo="BLK";
		};
		class arifle_XMS_Shot_khk_lxWS
		{
			model="lxWS_XMSSG";
			camo="KHK";
		};
		class arifle_XMS_Shot_Sand_lxWS
		{
			model="lxWS_XMSSG";
			camo="SND";
		};
		class arifle_XMS_M_lxWS
		{
			model="lxWS_XMSSW";
			camo="BLK";
		};
		class arifle_XMS_M_khk_lxWS
		{
			model="lxWS_XMSSW";
			camo="KHK";
		};
		class arifle_XMS_M_Sand_lxWS
		{
			model="lxWS_XMSSW";
			camo="SND";
		};
		class V_lxWS_PlateCarrierGL_desert
		{
			model="acebi_carrier_gl";
			camo="DES";
		};
		class V_lxWS_PlateCarrier1_desert
		{
			model="acebi_carrier_lite";
			camo="DES";
		};
		class V_lxWS_PlateCarrier2_desert
		{
			model="acebi_carrier_rig";
			camo="DES";
		};
		class V_lxWS_PlateCarrierSpec_desert
		{
			model="acebi_carrier_spec";
			camo="DES";
		};
		class V_lxWS_UN_Vest_F
		{
			model="acebi_ga_carrier_rig";
			camo="UNA";
		};
		class V_lxWS_UN_Vest_Lite_F
		{
			model="acebi_ga_carrier_lite";
			camo="UNA";
		};
		class V_lxWS_HarnessO_oli
		{
			model="acebi_lbv_harness";
			camo="OLI";
		};
		class V_lxWS_TacVestIR_oli
		{
			model="acebi_ravenvest";
			camo="OLI";
		};
		class U_lxWS_Djella_02_Brown
		{
			model="lxWS_banditrags";
			camo="BRN";
		};
		class U_lxWS_Djella_02_Grey
		{
			model="lxWS_banditrags";
			camo="GRY";
		};
		class U_lxWS_Djella_03_Green
		{
			model="lxWS_banditrags";
			camo="GRN";
		};
		class U_lxWS_Djella_02_Sand
		{
			model="lxWS_banditrags";
			camo="SND";
		};
		class U_lxWS_B_CombatUniform_desert
		{
			model="acebi_fatigues_nato";
			camo="DES";
			top="Standard";
		};
		class U_lxWS_B_CombatUniform_desert_tshirt
		{
			model="acebi_fatigues_nato";
			camo="DES";
			top="Tee";
		};
		class U_lxWS_B_CombatUniform_desert_vest
		{
			model="acebi_fatigues_nato";
			camo="DES";
			top="Rolled";
		};
		class U_lxWS_UN_Camo2
		{
			model="acebi_fatigues_aaf";
			camo="UNA";
			top="Standard";
		};
		class U_lxWS_UN_Camo1
		{
			model="acebi_fatigues_aaf";
			camo="UNA";
			top="Officer";
		};
		class U_lxWS_UN_Camo3
		{
			model="acebi_fatigues_aaf";
			camo="UNA";
			top="Rolled";
		};
		class U_lxWS_SFIA_soldier_2_O
		{
			model="acebi_fatigues_ldf";
			camo="SFIA";
			top="Standard";
		};
		class U_lxWS_SFIA_Officer_1_O
		{
			model="acebi_fatigues_ldf";
			camo="SFIA";
			top="Officer";
		};
		class U_lxWS_SFIA_soldier_1_O
		{
			model="acebi_fatigues_ldf";
			camo="SFIA";
			top="Rolled";
		};
		class U_lxWS_C_Djella_03
		{
			model="lxWS_ccdjellaba";
			camo="BLK";
		};
		class U_lxWS_C_Djella_06
		{
			model="lxWS_ccdjellaba";
			camo="BLKSimple";
		};
		class U_lxWS_C_Djella_02
		{
			model="lxWS_ccdjellaba";
			camo="BLU";
		};
		class U_lxWS_C_Djella_02a
		{
			model="lxWS_ccdjellaba";
			camo="BLUSimple";
		};
		class U_lxWS_C_Djella_07
		{
			model="lxWS_ccdjellaba";
			camo="GRN";
		};
		class U_lxWS_C_Djella_05
		{
			model="lxWS_ccdjellaba";
			camo="WHT";
		};
		class U_lxWS_C_Djella_04
		{
			model="lxWS_ccdjellaba";
			camo="Wine";
		};
		class U_lxWS_C_Djella_01
		{
			model="lxWS_ccdjellaba";
			camo="YLW";
		};
		class U_lxWS_Tak_02_B
		{
			model="lxWS_ccjacket";
			camo="BLK";
		};
		class U_lxWS_Tak_02_C
		{
			model="lxWS_ccjacket";
			camo="GRY";
		};
		class U_lxWS_Tak_02_A
		{
			model="lxWS_ccjacket";
			camo="GRN";
		};
		class U_lxWS_Tak_03_B
		{
			model="lxWS_ccnomad";
			camo="BLU";
		};
		class U_lxWS_Tak_03_A
		{
			model="lxWS_ccnomad";
			camo="BRN";
		};
		class U_lxWS_Tak_03_C
		{
			model="lxWS_ccnomad";
			camo="WHT";
		};
		class U_lxWS_Tak_01_C
		{
			model="lxWS_ccvillager";
			camo="BLU";
		};
		class U_lxWS_Tak_01_B
		{
			model="lxWS_ccvillager";
			camo="DRK";
		};
		class U_lxWS_Tak_01_A
		{
			model="lxWS_ccvillager";
			camo="GRN";
		};
		class U_lxWS_ION_Casual3
		{
			model="lxWS_ion";
			camo="BLK";
		};
		class U_lxWS_ION_Casual6
		{
			model="lxWS_ion";
			camo="CAMO";
		};
		class U_lxWS_ION_Casual5
		{
			model="lxWS_ion";
			camo="Peace";
		};
		class U_lxWS_ION_Casual2
		{
			model="lxWS_ion";
			camo="RED";
		};
		class U_lxWS_ION_Casual4
		{
			model="lxWS_ion";
			camo="WHT";
		};
		class lxWS_H_bmask_base
		{
			model="lxWS_balisticmask";
			camo="BLK";
			turban="No";
		};
		class H_turban_02_mask_black_lxws
		{
			model="lxWS_balisticmask";
			camo="BLK";
			turban="Yes";
		};
		class lxWS_H_bmask_ghex
		{
			model="lxWS_balisticmask";
			camo="GHEX";
			turban="No";
		};
		class lxWS_H_bmask_hex
		{
			model="lxWS_balisticmask";
			camo="HEX";
			turban="No";
		};
		class H_turban_02_mask_hex_lxws
		{
			model="lxWS_balisticmask";
			camo="HEX";
			turban="Yes";
		};
		class lxWS_H_bmask_camo01
		{
			model="lxWS_balisticmask";
			camo="RED";
			turban="No";
		};
		class H_bmask_snake_lxws
		{
			model="lxWS_balisticmask";
			camo="SNK";
			turban="No";
		};
		class H_turban_02_mask_snake_lxws
		{
			model="lxWS_balisticmask";
			camo="SNK";
			turban="Yes";
		};
		class lxWS_H_bmask_white
		{
			model="lxWS_balisticmask";
			camo="WHT";
			turban="No";
		};
		class lxWS_H_bmask_camo02
		{
			model="lxWS_balisticmask";
			camo="WDL";
			turban="No";
		};
		class lxWS_H_bmask_yellow
		{
			model="lxWS_balisticmask";
			camo="YLW";
			turban="No";
		};
		class lxWS_H_Bandanna_blk_hs
		{
			model="acebi_bandana_head";
			camo="BLK";
			headset="Yes";
		};
		class lxWS_H_PASGT_goggles_black_F
		{
			model="acebi_basic_helm";
			camo="BLK";
			goggles="Yes"
		};
		class lxWS_H_PASGT_goggles_olive_F
		{
			model="acebi_basic_helm";
			camo="OLI";
			goggles="Yes"
		};
		class lxWS_H_PASGT_goggles_white_F
		{
			model="acebi_basic_helm";
			camo="WHT";
			goggles="Yes"
		};
		class lxWS_H_PASGT_basic_UN_F
		{
			model="acebi_basic_helm";
			camo="UNA";
			goggles="No"
		};
		class lxWS_H_PASGT_goggles_UN_F
		{
			model="acebi_basic_helm";
			camo="UNA";
			goggles="Yes"
		};
		class lxWS_H_Beret_Colonel
		{
			model="acebi_beret_faction";
			faction="UNA";
			rank="Unspecified";
		};
		class lxWS_H_Booniehat_desert
		{
			model="acebi_booniehat";
			faction="DES";
			headset="No";
		};
		class lxWS_H_HelmetCrew_I
		{
			model="acebi_crew_helm";
			faction="NATO";
			camo="BLK";
		};
		class lxWS_H_HelmetCrew_Blue
		{
			model="acebi_crew_helm";
			faction="NATO";
			camo="BLU";
		};
		class lxWS_H_Tank_tan_F
		{
			model="acebi_crew_helm_soft";
			faction="SFIA";
		};
		class lxWS_H_MilCap_desert
		{
			model="acebi_mil_cap";
			faction="DES";
		};
		class lxWS_H_ssh40_black
		{
			model="lxWS_oldhelmet";
			camo="BLK";
		};
		class lxWS_H_ssh40_blue
		{
			model="lxWS_oldhelmet";
			camo="BLU";
		};
		class lxWS_H_ssh40_green
		{
			model="lxWS_oldhelmet";
			camo="GRN";
		};
		class lxWS_H_ssh40_sand
		{
			model="lxWS_oldhelmet";
			camo="SND";
		};
		class lxWS_H_ssh40_white
		{
			model="lxWS_oldhelmet";
			camo="WHT";
		};
		class lxWS_H_ssh40_un
		{
			model="lxWS_oldhelmet";
			camo="UNA";
		};
		class lxWS_H_cloth_5_A
		{
			model="lxWS_taqiyah";
			camo="BLK";
		};
		class lxWS_H_cloth_5_C
		{
			model="lxWS_taqiyah";
			camo="GRY";
		};
		class lxWS_H_cloth_5_B
		{
			model="lxWS_taqiyah";
			camo="WHT";
		};
		//turb
		class lxWS_H_turban_03_black
		{
			model="lxWS_turban";
			camo="BLK";
			fit="Full";
		};
		class lxWS_H_turban_04_black
		{
			model="lxWS_turban";
			camo="BLK";
			fit="Loose";
		};
		class lxWS_H_turban_02_black
		{
			model="lxWS_turban";
			camo="BLK";
			fit="Open";
		};
		class lxWS_H_turban_01_black
		{
			model="lxWS_turban";
			camo="BLK";
			fit="Simple";
		};
		class lxWS_H_turban_03_blue
		{
			model="lxWS_turban";
			camo="BLU";
			fit="Full";
		};
		class lxWS_H_turban_04_blue
		{
			model="lxWS_turban";
			camo="BLU";
			fit="Loose";
		};
		class lxWS_H_turban_02_blue
		{
			model="lxWS_turban";
			camo="BLU";
			fit="Open";
		};
		class lxWS_H_turban_01_blue
		{
			model="lxWS_turban";
			camo="BLU";
			fit="Simple";
		};
		class lxWS_H_turban_03_blue_una
		{
			model="lxWS_turban";
			camo="UNA";
			fit="Full";
		};
		class lxWS_H_turban_04_blue_una
		{
			model="lxWS_turban";
			camo="UNA";
			fit="Loose";
		};
		class lxWS_H_turban_02_blue_una
		{
			model="lxWS_turban";
			camo="UNA";
			fit="Open";
		};
		class lxWS_H_turban_01_blue_una
		{
			model="lxWS_turban";
			camo="UNA";
			fit="Simple";
		};
		class lxWS_H_turban_03_green
		{
			model="lxWS_turban";
			camo="GRN";
			fit="Full";
		};
		class lxWS_H_turban_04_green
		{
			model="lxWS_turban";
			camo="GRN";
			fit="Loose";
		};
		class lxWS_H_turban_02_green
		{
			model="lxWS_turban";
			camo="GRN";
			fit="Open";
		};
		class lxWS_H_turban_01_green
		{
			model="lxWS_turban";
			camo="GRN";
			fit="Simple";
		};
		class lxWS_H_turban_03_green_pattern
		{
			model="lxWS_turban";
			camo="GRNP";
			fit="Full";
		};
		class lxWS_H_turban_02_green_pattern
		{
			model="lxWS_turban";
			camo="GRNP";
			fit="Open";
		};
		class lxWS_H_turban_03_orange
		{
			model="lxWS_turban";
			camo="ORG";
			fit="Full";
		};
		class lxWS_H_turban_02_orange
		{
			model="lxWS_turban";
			camo="ORG";
			fit="Open";
		};
		class lxWS_H_turban_03_red
		{
			model="lxWS_turban";
			camo="RED";
			fit="Full";
		};
		class lxWS_H_turban_04_red
		{
			model="lxWS_turban";
			camo="RED";
			fit="Loose";
		};
		class lxWS_H_turban_02_red
		{
			model="lxWS_turban";
			camo="RED";
			fit="Open";
		};
		class lxWS_H_turban_01_red
		{
			model="lxWS_turban";
			camo="RED";
			fit="Simple";
		};
		class lxWS_H_turban_03_sand
		{
			model="lxWS_turban";
			camo="SND";
			fit="Full";
		};
		class lxWS_H_turban_04_sand
		{
			model="lxWS_turban";
			camo="SND";
			fit="Loose";
		};
		class lxWS_H_turban_02_sand
		{
			model="lxWS_turban";
			camo="SND";
			fit="Open";
		};
		class lxWS_H_turban_01_sand
		{
			model="lxWS_turban";
			camo="SND";
			fit="Simple";
		};
		class lxWS_H_turban_03_gray
		{
			model="lxWS_turban";
			camo="WHT";
			fit="Full";
		};
		class lxWS_H_turban_04_gray
		{
			model="lxWS_turban";
			camo="WHT";
			fit="Loose";
		};
		class lxWS_H_turban_02_gray
		{
			model="lxWS_turban";
			camo="WHT";
			fit="Open";
		};
		class lxWS_H_turban_01_gray
		{
			model="lxWS_turban";
			camo="WHT";
			fit="Simple";
		};
		class lxWS_H_turban_03_yellow
		{
			model="lxWS_turban";
			camo="YLW";
			fit="Full";
		};
		class lxWS_H_turban_04_yellow
		{
			model="lxWS_turban";
			camo="YLW";
			fit="Loose";
		};
		class lxWS_H_turban_02_yellow
		{
			model="lxWS_turban";
			camo="YLW";
			fit="Open";
		};
		class lxWS_H_turban_01_yellow
		{
			model="lxWS_turban";
			camo="YLW";
			fit="Simple";
		};
	};
	class CfgGlasses
	{
		class G_Balaclava_blk_lxWS
		{
			model="lxWS_BalaclavaThin";
			camo="BLK";
		};
		class G_Balaclava_oli_lxWS
		{
			model="lxWS_BalaclavaThin";
			camo="OLI";
		};
		class G_Balaclava_snd_lxWS
		{
			model="lxWS_BalaclavaThin";
			camo="SND";
		};
	};
	class CfgVehicles
	{
		class B_AssaultPack_desert_lxWS
		{
			model="acebi_assaultpack";
			camo="DES";
		};
		class B_Carryall_desert_lxWS
		{
			model="acebi_carryall";
			camo="DES";
		};
		class B_Kitbag_desert_lxWS
		{
			model="acebi_kitbag";
			camo="DES";
		};
		class I_shield_backpack_lxWS
		{
			model="lxWS_PortShield";
			camo="AAF";
		};
		class B_shield_backpack_lxWS
		{
			model="lxWS_PortShield";
			camo="BLK";
		};
		class O_shield_backpack_GHEX_lxWS
		{
			model="lxWS_PortShield";
			camo="GHEX";
		};
		class O_shield_backpack_lxWS
		{
			model="lxWS_PortShield";
			camo="HEX";
		};
		class ION_UAV_01_backpack_lxWS
		{
			model="acebi_ar2";
			camo="BLK";
		};
		class ION_UAV_02_backpack_lxWS
		{
			model="lxWS_AP5";
			camo="BLK";
		};
		class I_UAV_02_backpack_lxWS
		{
			model="lxWS_AP5";
			camo="AAF";
		};
		class O_UAV_02_backpack_lxWS
		{
			model="lxWS_AP5";
			camo="CSAT";
		};
		class B_UAV_02_backpack_lxWS
		{
			model="lxWS_AP5";
			camo="NATO";
		};
	};
};
