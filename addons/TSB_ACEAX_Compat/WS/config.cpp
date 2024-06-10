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
