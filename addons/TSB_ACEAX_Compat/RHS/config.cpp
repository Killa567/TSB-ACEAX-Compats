class CfgPatches
{
	class TSB_ACEAX_Compat_RHS
	{
		units[]={};
		weapons[]={};
		requiredVersion="1.0";
		requiredAddons[]=
		{
			"aceax_gearinfo",
			"rhs_main",
			"rhsusf_main",
			"rhssaf_main",
			"rhsgref_main"
		};
		author="TSB";
		skipWhenMissingDependencies = 1;
	};
};
class XtdGearModels
{
	class CamoBase
	{
		class AFGKA
		{
			label="Afghanka";
			image="TSB_ACEAX_Compat\RHS\data\camo\afghka.paa";
		};
		class DESPNK
		{
			label="Des Pink";
			description="Desert Pink";
			image="#(rgb,8,8,3)color(0.89,0.65,0.53,1)";
		};
		class FLRA_MTN
		{
			label="Flora Mtn.";
			description="VSR-98 Flora Mountain";
			image="TSB_ACEAX_Compat\RHS\data\camo\flora_mtn.paa";
		};
		class KLMK
		{
			label="KLMK";
			image="TSB_ACEAX_Compat\RHS\data\camo\klmk.paa";
		};
		class Izlom
		{
			label="Izlom";
			image="TSB_ACEAX_Compat\RHS\data\camo\izlom.paa";
		};
		class Spetsodezhda
		{
			label="Spetsodezhda";
			description="Also known as Berezka";
			image="TSB_ACEAX_Compat\RHS\data\camo\spetsodezhda.paa";
		};
		class MTNLES
		{
			label="Mtn. Les";
			description="Mountain Les";
			image="TSB_ACEAX_Compat\RHS\data\camo\mtnles.paa";
		};
		class TTsKO
		{
			label="TTsKO";
			image="TSB_ACEAX_Compat\RHS\data\camo\ttsko.paa";
		};
		class TTsKO_ALT
		{
			label="TTsKO Alt.";
			image="TSB_ACEAX_Compat\RHS\data\camo\ttsko_alt.paa";
		};
		class TTsKO_AIR
		{
			label="TTsKO Air.";
			description="TTsKO Airborne";
			image="TSB_ACEAX_Compat\RHS\data\camo\ttsko_air.paa";
		};
		class TTsKO_MLDV_BLUE
		{
			label="TTsKO Blue";
			description="Moldovan TTsKO Blue";
			image="TSB_ACEAX_Compat\RHS\data\camo\ttsko_mldv_blue.paa";
		};
		class TTsKO_MLDV_COLD
		{
			label="TTsKO Cold";
			description="Moldovan TTsKO Cold";
			image="TSB_ACEAX_Compat\RHS\data\camo\ttsko_mldv_cold.paa";
		};
		class TTsKO_MLDV_DESAT
		{
			label="TTsKO Desat.";
			description="Moldovan TTsKO Desaturated";
			image="TSB_ACEAX_Compat\RHS\data\camo\ttsko_mldv_desat.paa";
		};
		class TTsKO_MLDV_HOT
		{
			label="TTsKO Hot";
			description="Moldovan TTsKO Hot";
			image="TSB_ACEAX_Compat\RHS\data\camo\ttsko_mldv_hot.paa";
		};
		class LIZ_ATS
		{
			label="Altis Liz";
			description="Altis Lizard";
			image="TSB_ACEAX_Compat\RHS\data\camo\liz_ats.paa";
		};
		class LIZ_TNA
		{
			label="Tanoa Liz";
			description="Tanoa Lizard";
			image="TSB_ACEAX_Compat\RHS\data\camo\liz_tna.paa";
		};
		class OG107
		{
			label="OG-107";
			image="#(rgb,8,8,3)color(0.55,0.62,0.40,1)";
		};
		class TTsKO_CDF_DIGI
		{
			label="TTsKO Digi";
			description="TTsKO Digital";
			image="TSB_ACEAX_Compat\RHS\data\camo\ttsko_cdf_digi.paa";
		};
		class TTsKO_CDF_FRS
		{
			label="TTsKO Frs";
			description="TTsKO Forest";
			image="TSB_ACEAX_Compat\RHS\data\camo\ttsko_cdf_frs.paa";
		};
		class TTsKO_CDF_MTN
		{
			label="TTsKO Mtn";
			description="TTsKO Mountain";
			image="TSB_ACEAX_Compat\RHS\data\camo\ttsko_cdf_mtn.paa";
		};
		class TTsKO_CDF_URB
		{
			label="TTsKO Urb";
			description="TTsKO Urban";
			image="TSB_ACEAX_Compat\RHS\data\camo\ttsko_cdf_urb.paa";
		};
		class UN
		{
			label="UN";
			description="United Nations";
			image="TSB_ACEAX_Compat\RHS\data\camo\un.paa";
		};
		class MDU02
		{
			label="MDU-02";
			description="M-MDU-02";
			image="TSB_ACEAX_Compat\RHS\data\camo\mdu02.paa";
		};
		class MDU10
		{
			label="MDU-10";
			description="M-MDU-10";
			image="TSB_ACEAX_Compat\RHS\data\camo\mdu10.paa";
		};
		class MDU10_DES
		{
			label="MDU-10 Des.";
			description="M-MDU-10 Desert";
			image="TSB_ACEAX_Compat\RHS\data\camo\mdu10_des.paa";
		};
		class MDU10_SUM
		{
			label="MDU-10 Sum.";
			description="M-MDU-10 Summer";
			image="TSB_ACEAX_Compat\RHS\data\camo\mdu10_sum.paa";
		};
		class OAK_SAF
		{
			label="Oakleaf";
			description="M93 Oakleaf";
			image="TSB_ACEAX_Compat\RHS\data\camo\oakleaf.paa";
		};
		class OAK_SAF_SUM
		{
			label="Oakleaf Sum.";
			description="M93 Oakleaf Summer";
			image="TSB_ACEAX_Compat\RHS\data\camo\oakleaf_sum.paa";
		};
		class SMB
		{
			label="SMB";
			image="#(rgb,8,8,3)color(0.34,0.33,0.28,1)";
		};
		class WDL_SAF
		{
			label="Serb WDL";
			description="Serbian Woodland";
			image="TSB_ACEAX_Compat\RHS\data\camo\wdl_saf.paa";
		};
		class FOLGRN
		{
			label="FOLGRN";
			description="Foliage Green";
			image="#(rgb,8,8,3)color(0.51,0.54,0.42,1)";
		};
		class URBTAN
		{
			label="Urb. Tan";
			description="Urban Tan";
			image="#(rgb,8,8,3)color(0.68,0.64,0.62,1)";
		};
		class M1942
		{
			description="M1942 Frog Skin";
			image="TSB_ACEAX_Compat\RHS\data\camo\m1942.paa";
		};
		class UCP_D
		{
			label="UCP-D";
			description="Universal Camouflage Pattern - Desert";
			image="TSB_ACEAX_Compat\RHS\data\camo\ucp_d.paa";
		};
		class SA_MICH
		{
			label="Semi-Arid";
			image="TSB_ACEAX_Compat\RHS\data\camo\semi_arid.paa";
		};
		class AK_WOOD
		{
			label="Wood";
			description="Laminated Wood";
			image="#(rgb,8,8,3)color(0.60,0.31,0.14,1)";
		};
		class AK_BLK
		{
			label="Black";
			description="Black Polymer";
			image="#(rgb,8,8,3)color(0.12,0.12,0.11,1)";
		};
		class AK_CAMO
		{
			label="Camo";
			image="#(rgb,8,8,3)color(0.75,0.74,0.54,1)";
		};
		class AK_DES
		{
			label="Desert";
			image="#(rgb,8,8,3)color(0.80,0.79,0.73,1)";
		};
		class AK_GRN
		{
			label="Green";
			description="Green Polymer; awarded to border guards when they retired.";
			image="#(rgb,8,8,3)color(0.14,0.33,0.20,1)";
		};
		class AK_PLUM
		{
			label="Plum";
			description="Russian Plum Polymer";
			image="#(rgb,8,8,3)color(0.35,0.28,0.32,1)";
		};
		class SVD_FLRA
		{
			label="Flora";
			image="TSB_ACEAX_Compat\RHS\data\camo\svd_flora.paa";
		};
	};
	class rhs_attachsys
	{
		label="Attachment System";
		changeingame=0;
		values[]={};
		class none
		{
			label="None";
		};
		class picatinny
		{
			label="Picatinny";
			description="Picatinny Rail";
		};
		class ris
		{
			label="RIS";
			description="Rail Integration System";
		};
		class warsaw
		{
			label="Warsaw";
			description="Warsaw Pact Rail";
		};
		class zenit
		{
			label="Zenitco";
			description="Zenitco Railed Handguard";
		};
		class zenit_pica
		{
			label="Zenit/Pica";
			description="Zenitco Railed Handguard and Picatinny Rail";
		};
	};
	class CfgGlasses
	{
		class rhs_6m2_face
		{
			options[]=
			{
				"mouthpiece"
			};
			label="6M2";
			class mouthpiece
			{
				label="Mouthpiece";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_balaclava
		{
			options[]=
			{
				"eyehole"
			};
			label="Balaclava";
			class eyehole
			{
				label="Eyeholes";
				values[]=
				{
					"Two-Hole",
					"Slit"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_goggles
		{
			options[]=
			{
				"camo"
			};
			label="Ballistic Glasses";
			class camo
			{
				values[]=
				{
					"BLK",
					"CLR",
					"ORG",
					"YLW"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_oakley_goggles
		{
			options[]=
			{
				"camo"
			};
			label="SI Ballistic 2.0";
			class camo
			{
				values[]=
				{
					"BLK",
					"CLR",
					"YLW"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_shemagh
		{
			options[]=
			{
				"camo",
				"position",
				"goggles"
			};
			label="Shemagh";
			class camo
			{
				values[]=
				{
					"GRN",
					"OD",
					"TAN",
					"WHT"
				};
				alwaysSelectable=1;
			};
			class position
			{
				label="Position";
				values[]=
				{
					"Chin",
					"Mouth"
				};
				changeingame=1;
				alwaysSelectable=1;
			};
			class goggles
			{
				labe="Goggles";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
	};
	class CfgVehicles
	{
		class rhs_alicepack
		{
			options[]=
			{
				"camo"
			};
			label="ALICE Pack";
			class camo
			{
				values[]=
				{
					"MDU02",
					"OD",
					"SMB",
					"TTsKO",
					"M81"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_eagleaiii
		{
			options[]=
			{
				"camo"
			};
			label="Eagle A-III";
			class camo
			{
				values[]=
				{
					"CBR",
					"OEF_CP",
					"UCP"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_falconii
		{
			options[]=
			{
				"camo"
			};
			label="Falcon-II";
			class camo
			{
				values[]=
				{
					"CBR",
					"MC",
					"RGR"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_kitbag
		{
			options[]=
			{
				"camo"
			};
			label="Kitbag";
			class camo
			{
				values[]=
				{
					"MDU02",
					"MDU10",
					"SMB"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_rd54
		{
			options[]=
			{
				"camo",
				"vestfit"
			};
			label="RD-54";
			class camo
			{
				values[]=
				{
					"AFGKA",
					"EMR_SUM",
					"FLRA",
					"FLRA_2"
				};
				alwaysSelectable=1;
				class FLRA_2
				{
					label="Flora 2";
					image="TSB_ACEAX_Compat\RHS\data\camo\flora_rd54.paa";
				};
			};
			class vestfit
			{
				label="Fitted for Vest";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_rk_sht_30
		{
			options[]=
			{
				"camo",
				"loadout"
			};
			label="RK-ShT-30";
			class camo
			{
				values[]=
				{
					"EMR_SUM",
					"OLI"
				};
				alwaysSelectable=1;
			};
			class loadout
			{
				label="Loadout";
				values[]=
				{
					"None",
					"Engineer"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_rpg_carrier
		{
			options[]=
			{
				"vestfit"
			};
			label="RPG Carrier";
			class vestfit
			{
				label="Vest Fitting";
				values[]=
				{
					"Generic",
					"6B2",
					"6B3"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_sposn_tortila
		{
			options[]=
			{
				"camo"
			};
			label="SPOSN Tortila";
			class camo
			{
				values[]=
				{
					"BLK",
					"EMR_SUM",
					"GRY",
					"KHK",
					"OLI",
					"SPCT_SKWO"
				};
				alwaysSelectable=1;
				class SPCT_SKWO
				{
					label="Spct-SKWO";
					description="Spectre-SKWO";
					image="TSB_ACEAX_Compat\RHS\data\camo\spct_skwo.paa";
				};
			};
		};
		class rhs_umbts
		{
			options[]=
			{
				"loadout"
			};
			label="UMBTS Backpack";
			class loadout
			{
				values[]=
				{
					"None",
					"Engineer"
				};
				alwaysSelectable=1;
			};
		};
	};
	class CfgWeapons
	{
		class rhs_6b26
		{
			options[]=
			{
				"camo",
				"goggles",
				"balaclava"
			};
			label="6B26";
			class camo
			{
				values[]=
				{
					"GRN",
					"FLRA",
					"EMR_SUM"
				};
				alwaysSelectable=1;
			};
			class goggles
			{
				label="Goggles";
				values[]=
				{
					"None",
					"ESS"
				};
				alwaysSelectable=1;
			};
			class balaclava
			{
				label="Balaclava";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_6b27m
		{
			options[]=
			{
				"camo",
				"goggles",
				"balaclava"
			};
			label="6B27M";
			class camo
			{
				values[]=
				{
					"GRN",
					"FLRA",
					"EMR_SUM",
					"MTNLES"
				};
				alwaysSelectable=1;
			};
			class goggles
			{
				label="Goggles";
				values[]=
				{
					"None",
					"ESS"
				};
				alwaysSelectable=1;
			};
			class balaclava
			{
				label="Balaclava";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_6b28
		{
			options[]=
			{
				"camo",
				"goggles",
				"balaclava"
			};
			label="6B28";
			class camo
			{
				values[]=
				{
					"GRN",
					"FLRA",
					"EMR_SUM"
				};
				alwaysSelectable=1;
			};
			class goggles
			{
				label="Goggles";
				values[]=
				{
					"None",
					"ESS"
				};
				alwaysSelectable=1;
			};
			class balaclava
			{
				label="Balaclava";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_6b47
		{
			options[]=
			{
				"camo",
				"goggles",
				"balaclava",
				"headset"
			};
			label="6B47";
			class camo
			{
				values[]=
				{
					"GRN",
					"EMR_SUM",
					"DESPNK"
				};
				alwaysSelectable=1;
			};
			class goggles
			{
				label="Goggles";
				values[]=
				{
					"None",
					"ESS"
				};
				alwaysSelectable=1;
			};
			class balaclava
			{
				label="Balaclava";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
			class headset
			{
				label="Headset";
				values[]=
				{
					"None",
					"6M2",
					"6M2-1"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_6b47_alt
		{
			options[]=
			{
				"goggles",
				"emrvar"
			};
			label="6B47 (Alt)";
			class goggles
			{
				label="Goggles";
				values[]=
				{
					"None",
					"6B50"
				};
				alwaysSelectable=1;
			};
			class emrvar
			{
				label="Variant";
				values[]={"1","2","3"};
				alwaysSelectable=1;
			};
		};
		class rhs_6b7_1m
		{
			options[]=
			{
				"camo",
				"goggles",
				"balaclava"
			};
			label="6B7-1M";
			class camo
			{
				values[]=
				{
					"GRN",
					"EMR_SUM",
					"FLRA",
					"OLI"
				};
				alwaysSelectable=1;
			};
			class goggles
			{
				label="Goggles";
				values[]=
				{
					"None",
					"ESS",
					"NS-3"
				};
				alwaysSelectable=1;
			};
			class balaclava
			{
				label="Balaclava";
				values[]=
				{
					"None",
					"Slit",
					"Two-Hole"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_6m2_head
		{
			options[]=
			{
				"mouthpiece"
			};
			label="6M2";
			class mouthpiece
			{
				label="Mouthpiece";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_ach
		{
			options[]=
			{
				"camo",
				"goggles",
				"headset",
				"nvgmount",
				"netting"
			};
			label="ACH";
			class camo
			{
				values[]=
				{
					"GRN",
					"Desert",
					"SemiArid",
					"TAN",
					"Woodland",
					"DCP",
					"DCP_ERL",
					"M81",
					"OEF_CP",
					"UCP"
				};
				alwaysSelectable=1;
				class DCP_ERL
				{
					label="DCP (Early)";
					description="Desert Camouflage Pattern; AKA 3-Color Desert or Coffee Stain Camouflage";
					image="TSB_ACEAX_Compat\RHS\data\camo\dcp_early.paa";
				};
				class Desert
				{
					label="Desert";
					image="TSB_ACEAX_Compat\RHS\data\camo\des_ach.paa";
				};
				class SemiArid
				{
					label="Semi-Arid";
					image="TSB_ACEAX_Compat\RHS\data\camo\semi_arid.paa";
				};
				class Woodland
				{
					label="Woodland";
					image="TSB_ACEAX_Compat\RHS\data\camo\wdl_ach.paa";
				};
			};
			class goggles
			{
				label="Goggles";
				values[]=
				{
					"None",
					"ESS"
				};
				alwaysSelectable=1;
			};
			class headset
			{
				label="Headset";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
			class nvgmount
			{
				values[]=
				{
					"None",
					"RhinoB",
					"RhinoT",
					"Norotos"
				};
				alwaysSelectable=1;
				class RhinoB
				{
					label="Rhino B.";
					description="Rhino Black";
				};
				class RhinoT
				{
					label="Rhino T.";
					description="Rhino Tan";
				};
			};
			class netting
			{
				label="Netting";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_acvch
		{
			options[]=
			{
				"camo",
				"goggles",
				"weather"
			};
			label="ACVC-H";
			class camo
			{
				values[]=
				{
					"GRN",
					"TAN"
				};
				alwaysSelectable=1;
			};
			class goggles
			{
				label="Goggles";
				values[]=
				{
					"none",
					"ESS"
				};
				alwaysSelectable=1;
				class none
				{
					label="CSTRING(None)";
				};
			};
			class weather
			{
				label="Weathering";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_altyn
		{
			options[]=
			{
				"visor",
				"balaclava",
				"goggles"
			};
			label="Altyn";
			class visor
			{
				label="Visor";
				values[]=
				{
					"None",
					"Up",
					"Down"
				};
				alwaysSelectable=1;
			};
			class balaclava
			{
				label="Balaclava";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
			class goggles
			{
				label="Goggles";
				values[]=
				{
					"None",
					"ESS"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_bandana
		{
			options[]=
			{
				"camo"
			};
			label="Bandana";
			class camo
			{
				values[]=
				{
					"MDU02",
					"MDU10",
					"MDU10_DES",
					"OAK_SAF",
					"SMB"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_beanie
		{
			options[]=
			{
				"camo"
			};
			label="Beanie";
			class camo
			{
				values[]=
				{
					"GRN",
					"FloraBean"
				};
				alwaysSelectable=1;
				class FloraBean
				{
					label="Flora";
					image="TSB_ACEAX_Compat\RHS\data\camo\flora_beanie.paa";
				};
			};
		};
		class rhs_beret_afrf
		{
			options[]=
			{
				"unit",
				"variant"
			};
			label="Beret [AFRF]";
			class unit
			{
				label="Unit";
				values[]=
				{
					"MP",
					"MVD",
					"OMON",
					"VDV",
					"VP"
				};
				alwaysSelectable=1;
			};
			class variant
			{
				label="Variant";
				values[]=
				{
					"1",
					"2",
					"3",
					"Early"
				};
				alwaysSelectable=0;
			};
		};
		class rhs_beret_saf
		{
			options[]=
			{
				"camo"
			};
			label="Beret [Serbian]";
			class camo
			{
				values[]=
				{
					"Airborne",
					"Army",
					"MP",
					"Recon",
					"UN"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_booniehat
		{
			options[]=
			{
				"camo"
			};
			label="Booniehat";
			class camo
			{
				values[]=
				{
					"ALP",
					"EMR_SUM",
					"FLRA",
					"M81",
					"MRPT_D",
					"MRPT_WD",
					"MDU02",
					"MDU10",
					"OEF_CP",
					"UCP",
					"WDL_SAF"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_bowman
		{
			options[]=
			{
				"cap"
			};
			label="Bowman Elite II";
			class cap
			{
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_fast_ballistic
		{
			options[]=
			{
				"camo",
				"headset",
				"accessory"
			};
			label="FAST Ballistic";
			class camo
			{
				values[]=
				{
					"AOR1",
					"AOR2",
					"BLK",
					"CBR",
					"FOLGRN",
					"MC",
					"MCPaint",
					"Paint",
					"RGR",
					"URBTAN"
				};
				alwaysSelectable=1;
				class MCPaint
				{
					label="MC (Paint)";
					description="MultiCam (Paint)";
					image="TSB_ACEAX_Compat\RHS\data\camo\mc_opscore.paa";
				};
				class Paint
				{
					label="Paint";
					image="TSB_ACEAX_Compat\RHS\data\camo\paint_opscore.paa";
				};
			};
			class headset
			{
				label="Headset";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
			class accessory
			{
				label="Accessory";
				values[]=
				{
					"None",
					"NSW",
					"Camera",
					"NSW & Cam."
				};
				alwaysSelectable=1;
			};
		};
		class rhs_fast_maritime
		{
			options[]=
			{
				"camo",
				"headset"
			};
			label="FAST Maritime";
			class camo
			{
				values[]=
				{
					"FOLGRN",
					"URBTAN"
				};
				alwaysSelectable=1;
			};
			class headset
			{
				label="Headset";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_fieldcap
		{
			options[]=
			{
				"camo",
				"helmet"
			};
			label="Fieldcap";
			class camo
			{
				values[]=
				{
					"FLRA",
					"EMR_SUM",
					"EMR_2",
					"Izlom",
					"MTNLES",
					"KHK",
					"TTsKO_CDF_DIGI",
					"TTsKO_CDF_FRS",
					"TTsKO_CDF_MTN",
					"TTsKO_CDF_URB",
					"VSR"
				};
				alwaysSelectable=1;
				class EMR_2
				{
					label="EMR-Sum 2";
					description="EMR-Summer";
					image="TSB_ACEAX_Compat\RHS\data\camo\emr_cap.paa";
				};
			};
			class helmet
			{
				label="Chest-Slung Helmet";
				values[]=
				{
					"None",
					"6B27M"
				};
				alwaysSelectable=0;
			};
		};
		class rhs_fieldcap_m88
		{
			options[]=
			{
				"camo",
				"facing"
			};
			label="Fieldcap M88";
			class camo
			{
				values[]=
				{
					"AFGKA",
					"GRY",
					"KLMK",
					"M81",
					"TTsKO_AIR",
					"TTsKO",
					"TTsKO 2",
					"TTsKO_MLDV_BLUE",
					"TTsKO_MLDV_COLD",
					"TTsKO_MLDV_DESAT",
					"TTsKO_MLDV_HOT",
					"VSR",
					"VSR_2"
				};
				alwaysSelectable=1;
				class VSR_2
				{
					label="VSR 2";
					image="TSB_ACEAX_Compat\RHS\data\camo\vsr_cap.paa";
				};
			};
			class facing
			{
				label="Facing";
				values[]=
				{
					"Front",
					"Back"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_furazkha
		{
			options[]=
			{
				"camo"
			};
			label="Furzakha";
			class camo
			{
				values[]=
				{
					"BLK",
					"KHK"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_hgu56p
		{
			options[]=
			{
				"camo",
				"mask",
				"visor",
				"livery"
			};
			label="HGU-56/P";
			class camo
			{
				values[]=
				{
					"BLK",
					"GRN",
					"OD",
					"PNK",
					"SAF",
					"TAN",
					"USA",
					"WHT"
				};
				alwaysSelectable=1;
				class PNK
				{
					label="Pink";
					image="#(rgb,8,8,3)color(0.96,0.86,0.9,1)";
				};
				class SAF
				{
					label="SAF";
					image="#(rgb,8,8,3)color(0.50,0.64,0.68,1)";
				};
				class USA
				{
					label="USA";
					description="Flag of the United States of America";
					image="TSB_ACEAX_Compat\RHS\data\camo\usa.paa";
				};
			};
			class mask
			{
				label="Mask";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
			class visor
			{
				label="Visor";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
			class livery
			{
				label="Livery";
				values[]=
				{
					"None",
					"Empire",
					"Skull",
					"Smiley",
					"Moustache"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_kaska
		{
			options[]=
			{
				"camo"
			};
			label="Kaska K93";
			class camo
			{
				values[]=
				{
					"TTsKO_CDF_DIGI",
					"TTsKO_CDF_FRS",
					"TTsKO_CDF_MTN",
					"TTsKO_CDF_URB"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_lwh
		{
			options[]=
			{
				"camo",
				"goggles",
				"headset"
			};
			label="LWH";
			class camo
			{
				values[]=
				{
					"M1942",
					"MRPT_D",
					"MRPT_WD"
				};
				alwaysSelectable=1;
				class M1942
				{
					description="M1942 Frog Skin";
				};
			};
			class goggles
			{
				label="Goggles";
				values[]=
				{
					"None",
					"ESSB",
					"ESST"
				};
				alwaysSelectable=1;
				class ESSB
				{
					label="Black ESS";
				};
				class ESST
				{
					label="Tan ESS";
				};
			};
			class headset
			{
				labe="Headset";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_m1_helm
		{
			options[]=
			{
				"camo",
				"strap"
			};
			label="M1";
			class camo
			{
				values[]=
				{
					"6CDP",
					"ERDL_H",
					"Liner",
					"Mitchell",
					"OG107",
					"Painted"
				};
				alwaysSelectable=1;
				class Liner
				{
					label="Liner";
					image="#(rgb,8,8,3)color(0.36,0.34,0.22,1)";
				};
				class Mitchell
				{
					label="Mitchell";
					image="TSB_ACEAX_Compat\RHS\data\camo\mitchell.paa";
				};
				class Painted
				{
					label="Painted";
					image="TSB_ACEAX_Compat\RHS\data\camo\m1_paint.paa";
				};
			};
			class strap
			{
				label="Strap";
				values[]=
				{
					"Up",
					"Down"
				};
				alwaysSelectable=0;
			};
		};
		class rhs_m40_helm
		{
			options[]=
			{
				"camo",
				"strap"
			};
			label="M40";
			class camo
			{
				values[]=
				{
					"GRY",
					"Painted",
					"Winter"
				};
				alwaysSelectable=1;
				class Painted
				{
					label="Painted";
					image="TSB_ACEAX_Compat\RHS\data\camo\m1940_paint.paa";
				};
				class Winter
				{
					label="Winter";
					image="#(rgb,8,8,3)color(0.91,0.90,0.91,1)";
				};
			};
			class strap
			{
				label="Strap";
				values[]=
				{
					"Up",
					"Down"
				};
			};
		};
		class rhs_m42_helm
		{
			options[]=
			{
				"camo",
				"strap"
			};
			label="M42";
			class camo
			{
				values[]=
				{
					"GRY",
					"Painted",
					"Winter"
				};
				alwaysSelectable=1;
				class Painted
				{
					label="Painted";
					image="TSB_ACEAX_Compat\RHS\data\camo\m1940_paint.paa";
				};
				class Winter
				{
					label="Winter";
					image="#(rgb,8,8,3)color(0.91,0.90,0.91,1)";
				};
			};
			class strap
			{
				label="Strap";
				values[]=
				{
					"Up",
					"Down"
				};
			};
		};
		class rhs_m42_helm_cover
		{
			options[]=
			{
				"camo"
			};
			label="M42 Covered";
			class camo
			{
				values[]=
				{
					"Splitter31",
					"Sumpf44",
					"Mouse",
					"Winter"
				};
				alwaysSelectable=1;
				class Mouse
				{
					label="Mouse Grey";
					image="#(rgb,8,8,3)color(0.70,0.65,0.62,1)";
				};
				class Splitter31
				{
					label="Splitter 31";
					description="Splittermuster 31";
					image="TSB_ACEAX_Compat\RHS\data\camo\splitter31.paa";
				};
				class Sumpf44
				{
					label="Sumpf 44";
					description="Sumpfmuster 44";
					image="TSB_ACEAX_Compat\RHS\data\camo\sumpf44.paa";
				};
				class Winter
				{
					label="Winter";
					image="#(rgb,8,8,3)color(0.91,0.90,0.91,1)";
				};
			};
		};
		class rhs_m43_cap
		{
			options[]=
			{
				"tilt"
			};
			label="M43 Cap";
			class tilt
			{
				label="Tilted";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_m59_85
		{
			options[]=
			{
				"camo"
			};
			label="M59/85";
			class camo
			{
				values[]=
				{
					"None",
					"OAK_SAF"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_m97
		{
			options[]=
			{
				"camo",
				"goggles",
				"veil"
			};
			label="M97";
			class camo
			{
				values[]=
				{
					"BLK",
					"UN",
					"MDU02",
					"MDU10",
					"OAK_SAF",
					"OLI",
					"M81"
				};
				alwaysSelectable=1;
			};
			class goggles
			{
				label="Goggles";
				values[]=
				{
					"None",
					"Covered",
					"Uncovered"
				};
				alwaysSelectable=1;
			};
			class veil
			{
				label="Veil";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_mich2000
		{
			options[]=
			{
				"camo",
				"rail",
				"nvgmount",
				"headset",
				"belt"
			};
			label="MICH 2000";
			class camo
			{
				values[]=
				{
					"GRN",
					"SemiArid",
					"TAN",
					"MRPT_D",
					"MRPT_WD"
				};
				alwaysSelectable=1;
				class SemiArid
				{
					label="Semi-Arid";
					image="TSB_ACEAX_Compat\RHS\data\camo\semi_arid.paa";
				};
			};
			class rail
			{
				label="Rail";
				values[]=
				{
					"None",
					"ARC"
				};
				alwaysSelectable=1;
			};
			class nvgmount
			{
				label="NVG Mount";
				values[]=
				{
					"Rhino",
					"Norotos"
				};
				alwaysSelectable=1;
			};
			class headset
			{
				label="Headset";
				values[]=
				{
					"No",
					"Stan.",
					"Ear Prot."
				};
				alwaysSelectable=0;
			};
			class belt
			{
				label="Belt";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=0;
			};
		};
		class rhs_pasgt
		{
			options[]=
			{
				"camo",
				"nvg"
			};
			label="PASGT";
			class camo
			{
				values[]=
				{
					"DCP",
					"LIZ_ATS",
					"ERDL_L",
					"FLCK",
					"OLI",
					"Press",
					"UN",
					"M81"
				};
				alwaysSelectable=1;
				class Press
				{
					label="Press";
					image="#(rgb,8,8,3)color(0.38,0.46,0.66,1)";
				};
			};
			class nvg
			{
				label="NVG Mount";
				values[]=
				{
					"none",
					"rhino"
				};
				alwaysSelectable=1;
				class none
				{
					label="None";
				};
				class rhino
				{
					label="Rhino";
				};
			};
		};
		class rhs_patrolcap
		{
			options[]=
			{
				"camo"
			};
			label="Patrol Cap";
			class camo
			{
				values[]=
				{
					"OEF_CP",
					"UCP"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_protech_sf
		{
			options[]=
			{
				"goggles",
				"nvgmount"
			};
			label="Pro-Tech SF";
			class goggles
			{
				label="Goggles";
				values[]=
				{
					"None",
					"ESS"
				};
				alwaysSelectable=1;
			};
			class nvgmount
			{
				values[]=
				{
					"None",
					"Rhino"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_ssh68
		{
			options[]=
			{
				"camo"
			};
			label="SSh-68";
			class camo
			{
				values[]=
				{
					"GRN",
					"EMR_SUM",
					"TTsKO_CDF_DIGI",
					"TTsKO_CDF_FRS",
					"TTsKO_CDF_MTN",
					"TTsKO_CDF_URB",
					"UN",
					"VSR"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_stsh81
		{
			options[]=
			{
				"camo"
			};
			label="STSh-81";
			class camo
			{
				values[]=
				{
					"GRN",
					"TTsKO"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_tsh4
		{
			options[]=
			{
				"goggles",
				"balaclava"
			};
			label="TSh-4";
			class goggles
			{
				label="Goggles";
				values[]=
				{
					"None",
					"ESS"
				};
				alwaysSelectable=1;
			};
			class balaclava
			{
				label="Balaclava";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_utilitycap
		{
			options[]=
			{
				"camo"
			};
			label="Utility Cap";
			class camo
			{
				values[]=
				{
					"MRPT_D",
					"MRPT_WD"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_vkpo_cap
		{
			options[]=
			{
				"camo"
			};
			label="VKPO Field Cap";
			class camo
			{
				values[]=
				{
					"STD",
					"ALT"
				};
				alwaysSelectable=1;
				class STD
				{
					label="Standard";
					image="TSB_ACEAX_Compat\RHS\data\camo\vkpo.paa";
				};
				class ALT
				{
					label="Alternate";
					image="TSB_ACEAX_Compat\RHS\data\camo\vkpo_alt.paa";
				};
			};
		};
		class rhs_zsh7a
		{
			options[]=
			{
				"camo",
				"mask",
				"visor"
			};
			label="ZSh-7A";
			class camo
			{
				values[]=
				{
					"GRN",
					"WHT"
				};
				alwaysSelectable=1;
			};
			class mask
			{
				label="Mask";
				values[]=
				{
					"None",
					"KM-35"
				};
				alwaysSelectable=1;
			};
			class visor
			{
				label="Visor";
				values[]=
				{
					"Up",
					"Down"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_6sh122
		{
			options[]=
			{
				"camo",
				"gloves"
			};
			label="6Sh122";
			class camo
			{
				values[]=
				{
					"Fall",
					"Spring"
				};
				alwaysSelectable=1;
				class Fall
				{
					label="Fall";
					image="TSB_ACEAX_Compat\RHS\data\camo\6sh122_fall.paa";
				};
				class Spring
				{
					label="Spring";
					image="TSB_ACEAX_Compat\RHS\data\camo\6sh122_spring.paa";
				};
			};
			class gloves
			{
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_FROG
		{
			options[]=
			{
				"camo"
			};
			label="FROG";
			class camo
			{
				values[]=
				{
					"MRPT_D",
					"MRPT_WD"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_acu
		{
			options[]=
			{
				"camo",
				"irflag"
			};
			label="Army Combat Uniform";
			class camo
			{
				values[]=
				{
					"OCP",
					"OEF_CP",
					"UCP",
					"UCP_D"
				};
				alwaysSelectable=1;
			};
			class irflag
			{
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_cu
		{
			options[]=
			{
				"camo",
				"unit"
			};
			label="Combat Uniform";
			class camo
			{
				values[]=
				{
					"OCP",
					"UCP"
				};
				alwaysSelectable=1;
			};
			class unit
			{
				values[]=
				{
					"User-Defined",
					"101st Air.",
					"10th Mtn.",
					"1st Cav.",
					"82nd Air."
				};
				alwaysSelectable=1;
			};
		};
		class rhs_df15_2
		{
			options[]=
			{
				"camo"
			};
			label="DF-15-2";
			class camo
			{
				values[]=
				{
					"BLU",
					"TAN"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_df15_saf
		{
			options[]=
			{
				"insignia"
			};
			label="DF-15 [Serbian]";
			class insignia
			{
				values[]=
				{
					"JET",
					"HELI"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_emr
		{
			options[]=
			{
				"camo",
				"unit"
			};
			label="EMR";
			class camo
			{
				values[]=
				{
					"EMR_SUM",
					"EMR_DES"
				};
				alwaysSelectable=1;
			};
			class unit
			{
				values[]=
				{
					"Generic",
					"VDV"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_flora
		{
			options[]=
			{
				"camo",
				"unit"
			};
			label="Flora";
			class camo
			{
				values[]=
				{
					"FLRA",
					"FLRA_ALT",
					"FLRA_MTN"
				};
				alwaysSelectable=1;
				class FLRA_ALT
				{
					label="Flora Alt.";
					description="Flora Alternate";
					image="TSB_ACEAX_Compat\RHS\data\camo\flora_alt.paa";
				};
			};
			class unit
			{
				values[]=
				{
					"Generic",
					"MSV",
					"RVA",
					"VDV",
					"VMF",
					"VMF 2"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_g3
		{
			options[]=
			{
				"camo"
			};
			label="G3 Uniform";
			class camo
			{
				values[]=
				{
					"AOR2",
					"BLK",
					"M81",
					"MC",
					"RGR",
					"TAN"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_gorka_1
		{
			options[]=
			{
				"camo"
			};
			label="Gorka 1";
			class camo
			{
				values[]=
				{
					"AFGKA",
					"Spetsodezhda",
					"FLCK"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_gorka_r
		{
			options[]=
			{
				"camo",
				"gloves"
			};
			label="Gorka-R";
			class camo
			{
				values[]=
				{
					"GRN",
					"YLW"
				};
				alwaysSelectable=1;
				class YLW
				{
					label="Yellow";
					image="#(rgb,8,8,3)color(0.64,0.58,0.37,1)";
				};
			};
			class gloves
			{
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_gue_unif_tna
		{
			options[]=
			{
				"pantscamo"
			};
			label="Guerilla Uni. [Tanoa] ";
			class pantscamo
			{
				values[]=
				{
					"LIZ_TNA",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_m10
		{
			options[]=
			{
				"camo"
			};
			label="M10";
			class camo
			{
				values[]=
				{
					"MDU10",
					"MDU10_DES",
					"MDU10_SUM",
					"MDU10_SUM_2",
					"TTsKO_GUE_MTN",
					"TTsKO_GUE_OX",
					"TTsKO_GUE_URB"
				};
				alwaysSelectable=1;
				class MDU10_SUM_2
				{
					label="MDU-10 Sum. 2";
					description="M-MDU-10 Summer With Tan Boots";
					image="TSB_ACEAX_Compat\RHS\data\camo\mdu10_sum.paa";
				};
				class TTsKO_GUE_MTN
				{
					label="TTsKO Mtn.";
					description="TTsKO Mountain";
					image="TSB_ACEAX_Compat\RHS\data\camo\ttsko_gue_mtn.paa";
				};
				class TTsKO_GUE_OX
				{
					label="TTsKO Ox.";
					description="TTsKO Oxblood";
					image="TSB_ACEAX_Compat\RHS\data\camo\ttsko_gue_ox.paa";
				};
				class TTsKO_GUE_URB
				{
					label="TTsKO Urb.";
					description="TTsKO Urban";
					image="TSB_ACEAX_Compat\RHS\data\camo\ttsko_gue_urb.paa";
				};
			};
		};
		class rhs_m88
		{
			options[]=
			{
				"camo",
				"coat",
				"boots"
			};
			label="M88";
			class camo
			{
				values[]=
				{
					"AFGKA",
					"GRY",
					"KLMK",
					"M81",
					"Spetsodezhda",
					"TTsKO",
					"TTsKO_ALT",
					"TTsKO_MLDV_BLUE",
					"TTsKO_MLDV_COLD",
					"TTsKO_MLDV_DESAT",
					"TTsKO_MLDV_HOT",
					"VSR",
					"VSR_2",
					"VSR_3"
				};
				alwaysSelectable=1;
				class VSR_2
				{
					label="VSR 2";
					image="TSB_ACEAX_Compat\RHS\data\camo\vsr_m88_1.paa";
				};
				class VSR_3
				{
					label="VSR 3";
					image="TSB_ACEAX_Compat\RHS\data\camo\vsr_m88_2.paa";
				};
			};
			class coat
			{
				label="Coat";
				values[]=
				{
					"Standard",
					"Winter"
				};
				alwaysSelectable=1;
			};
			class boots
			{
				label="Boots";
				values[]=
				{
					"Standard",
					"Sapogi"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_m88_cdf
		{
			options[]=
			{
				"camo"
			};
			label="M88 [CDF]";
			class camo
			{
				values[]=
				{
					"TTsKO_CDF_FRS",
					"TTsKO_CDF_MTN",
					"TTsKO_CDF_URB",
					"VSR"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_m88_vdv
		{
			options[]=
			{
				"camo"
			};
			label="M88 VDV";
			class camo
			{
				values[]=
				{
					"AFGKA",
					"TTsKO",
					"TTsKO_AIR",
					"VSR_VDV",
					"VSR_VDV_2"
				};
				alwaysSelectable=1;
				class VSR_VDV
				{
					label="VSR";
					image="TSB_ACEAX_Compat\RHS\data\camo\vsr_vdv_1.paa";
				};
				class VSR_VDV_2
				{
					label="VSR 2";
					image="TSB_ACEAX_Compat\RHS\data\camo\vsr_vdv_2.paa";
				};
			};
		};
		class rhs_m93
		{
			options[]=
			{
				"camo",
				"pantscamo"
			};
			label="M93";
			class camo
			{
				values[]=
				{
					"ALP",
					"LIZ_ATS",
					"DCP",
					"DPM",
					"ERDL_L",
					"FLCK",
					"M81",
					"OAK_SAF",
					"OAK_SAF_SUM",
					"OG107",
					"OLI",
					"TSW",
					"URB_RD"
				};
				alwaysSelectable=1;
				class URB_RD
				{
					label="Urban Reed";
					image="TSB_ACEAX_Compat\RHS\data\camo\urb_reed.paa";
				};
			};
			class pantscamo
			{
				values[]=
				{
					"match",
					"ERDL_L",
					"OLI"
				};
				alwaysSelectable=1;
				class match
				{
					label="Matching";
				};
			};
		};
		class rhs_vkpo
		{
			options[]=
			{
				"camo",
				"gloves"
			};
			label="VKPO";
			class camo
			{
				values[]=
				{
					"STD",
					"ALT"
				};
				alwaysSelectable=1;
				class STD
				{
					label="Standard";
					image="TSB_ACEAX_Compat\RHS\data\camo\vkpo.paa";
				};
				class ALT
				{
					label="Alternate";
					image="TSB_ACEAX_Compat\RHS\data\camo\vkpo_alt.paa";
				};
			};
			class gloves
			{
				label="Gloves";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_6b13
		{
			options[]=
			{
				"camo",
				"loadout"
			};
			label="6B13";
			class camo
			{
				values[]=
				{
					"EMR_SUM",
					"FLRA",
					"VSR"
				};
				alwaysSelectable=1;
			};
			class loadout
			{
				values[]=
				{
					"None",
					"6sh92",
					"6sh92_headset_map",
					"6sh92_radio",
					"6sh92_vog",
					"crew_off"
				};
				alwaysSelectable=1;
				class 6sh92
				{
					label="6Sh92";
				};
				class 6sh92_headset_map
				{
					label="6Sh92/Hdst./Map";
					description="6Sh92/Headset/Mapcase";
				};
				class 6sh92_radio
				{
					label="6Sh92/Radio";
				};
				class 6sh92_vog
				{
					label="6Sh92/VOG";
				};
				class crew_off
				{
					label="Crew Off.";
					description="Crew Officer";
				};
			};
		};
		class rhs_6b2
		{
			options[]=
			{
				"loadout"
			};
			label="6B2";
			class loadout
			{
				values[]=
				{
					"None",
					"6sh92",
					"chicom",
					"holster",
					"lifchik",
					"rpk",
					"sniper"
				};
				alwaysSelectable=1;
				class 6sh92
				{
					label="6Sh92";
				};
				class chicom
				{
					label="Chicom";
					description="Chicom Chest Rig";
				};
				class holster
				{
					label="Holster";
				};
				class lifchik
				{
					label="Lifchik Chest Rig";
				};
				class rpk
				{
					label="RPK";
				};
				class sniper
				{
					label="Sniper";
				};
			};
		};
		class rhs_6b23
		{
			options[]=
			{
				"camo",
				"loadout",
				"collar"
			};
			label="6B23";
			class camo
			{
				values[]=
				{
					"KHK",
					"EMR_SUM",
					"FLRA",
					"FLRA_EMR",
					"MTNLES",
					"OLI",
					"TTsKO_CDF_DIGI",
					"TTsKO_CDF_FRS",
					"TTsKO_CDF_MTN"
				};
				alwaysSelectable=1;
				class FLRA_EMR
				{
					label="Flora & EMR-S";
					description="Flora and EMR-Summer";
					image="TSB_ACEAX_Compat\RHS\data\camo\flora_and_emr.paa";
				};
			};
			class loadout
			{
				values[]=
				{
					"None",
					"6Sh116",
					"6Sh116/VOG",
					"6Sh92",
					"6Sh92/Hdst.",
					"6Sh92/Hdst./Map",
					"6Sh92/Radio",
					"6Sh92/VOG",
					"6Sh92/VOG/Hdst.",
					"6Sh92/VOG/Radio",
					"Off.",
					"NCO/Crew",
					"Engi.",
					"Medic",
					"Rifl.",
					"Snip.",
					"Vydra-3M"
				};
				alwaysSelectable=1;
			};
			class collar
			{
				values[]=
				{
					"Standard",
					"Spetsnaz"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_6b3
		{
			options[]=
			{
				"loadout"
			};
			label="6B3";
			class loadout
			{
				values[]=
				{
					"None",
					"holster",
					"off",
					"r148",
					"rifle1",
					"rifle2",
					"rifle3",
					"rpk",
					"vog1",
					"vog2"
				};
				alwaysSelectable=1;
				class holster
				{
					label="Holster";
				};
				class off
				{
					label="Officer";
				};
				class r148
				{
					label="R-148";
				};
				class rifle1
				{
					label="Rifleman 1";
				};
				class rifle2
				{
					label="Rifleman 2";
				};
				class rifle3
				{
					label="Rifleman 3";
				};
				class rpk
				{
					label="RPK";
				};
				class vog1
				{
					label="VOG 1";
				};
				class vog2
				{
					label="VOG 2";
				};
			};
		};
		class rhs_6b45
		{
			options[]=
			{
				"camo",
				"loadout"
			};
			label="6B45";
			class camo
			{
				values[]=
				{
					"EMR_SUM",
					"DESPNK"
				};
			};
			class loadout
			{
				values[]=
				{
					"None",
					"holster",
					"light",
					"mg",
					"off",
					"rifle1",
					"rifle2",
					"vog"
				};
				alwaysSelectable=1;
				class holster
				{
					label="Holster";
				};
				class light
				{
					label="Light";
				};
				class mg
				{
					label="Machinegunner";
				};
				class off
				{
					label="Officer";
				};
				class rifle1
				{
					label="Rifleman 1";
				};
				class rifle2
				{
					label="Rifleman 2";
				};
				class vog
				{
					label="VOG";
				};
			};
		};
		class rhs_6b5_19
		{
			options[]=
			{
				"camo",
				"loadout"
			};
			label="6B5-19";
			class camo
			{
				values[]=
				{
					"KHK",
					"Spetsodezhda",
					"OLI",
					"TTsKO",
					"VSR"
				};
				class TTsKO
				{
					image="TSB_ACEAX_Compat\RHS\data\camo\ttsko_6b519.paa";
				};
			};
			class loadout
			{
				values[]=
				{
					"None",
					"6sh46",
					"medic",
					"off",
					"sniper"
				};
				alwaysSelectable=1;
				class 6sh46
				{
					label="6Sh46";
				};
				class medic
				{
					label="Medic";
				};
				class off
				{
					label="Officer";
				};
				class sniper
				{
					label="Sniper";
				};
			};
		};
		class rhs_6sh117
		{
			options[]=
			{
				"loadout"
			};
			label="6Sh117";
			class loadout
			{
				values[]=
				{
					"mg",
					"rifle",
					"rpk",
					"sl",
					"sl_azart",
					"svd",
					"val",
					"vog"
				};
				alwaysSelectable=1;
				class mg
				{
					label="Machinegunner";
				};
				class rifle
				{
					label="Rifleman";
				};
				class rpk
				{
					label="RPK";
				};
				class sl
				{
					label="SL";
					description="Squad Leader";
				};
				class sl_azart
				{
					label="SL/Azart";
					description="Squad Leader/Azart";
				};
				class svd
				{
					label="Squad Lead.";
				};
				class val
				{
					label="Val/VSS";
				};
				class vog
				{
					label="VOG";
				};
			};
		};
		class rhs_6sh92
		{
			options[]=
			{
				"camo",
				"loadout"
			};
			label="6Sh92";
			class camo
			{
				values[]=
				{
					"EMR_SUM",
					"FLRA",
					"VSR"
				};
				alwaysSelectable=1;
				class VSR
				{
					image="TSB_ACEAX_Compat\RHS\data\camo\vsr_6sh92.paa";
				};
			};
			class loadout
			{
				values[]=
				{
					"None",
					"headset",
					"radio",
					"vog",
					"vog_headset"
				};
				alwaysSelectable=1;
				class headset
				{
					label="Headset";
				};
				class radio
				{
					label="Radio";
				};
				class vog
				{
					label="VOG";
				};
				class vog_headset
				{
					label="VOG/Hdst.";
					description="VOG/Headset";
				};
			};
		};
		class rhs_belt_equip
		{
			options[]=
			{
				"loadout"
			};
			label="Belt Equipment";
			class loadout
			{
				values[]=
				{
					"6sh46",
					"6sh46_alt",
					"auto",
					"gl",
					"holster",
					"rifle",
					"rifle_alt",
					"sks",
					"svd"
				};
				alwaysSelectable=1;
				class 6sh46
				{
					label="6Sh46";
				};
				class 6sh46_alt
				{
					label="6Sh46/Alt";
				};
				class auto
				{
					label="Autorifl.";
					description="Autorifleman";
				};
				class gl
				{
					label="Grenadier";
				};
				class holster
				{
					label="Holster";
				};
				class rifle
				{
					label="Rifleman";
				};
				class rifle_alt
				{
					label="Rifleman/Alt";
				};
				class sks
				{
					label="SKS";
				};
				class svd
				{
					label="SVD";
				};
			};
		};
		class rhs_chicom
		{
			options[]=
			{
				"camo"
			};
			label="Chicom Rig";
			class camo
			{
				values[]=
				{
					"GRN",
					"KHK"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_iotv
		{
			options[]=
			{
				"camo",
				"loadout"
			};
			label="IOTV";
			class camo
			{
				values[]=
				{
					"OEF_CP",
					"UCP"
				};
				alwaysSelectable=1;
			};
			class loadout
			{
				values[]=
				{
					"None",
					"Grenadier",
					"Medic",
					"Repair",
					"Rifleman",
					"SAW",
					"Squad Lead.",
					"Team Lead."
				};
				alwaysSelectable=1;
			};
		};
		class rhs_lifchik
		{
			options[]=
			{
				"loadout"
			};
			label="Lifchik Rig";
			class loadout
			{
				label="Loadout";
				values[]=
				{
					"stan",
					"light",
					"off",
					"vog"
				};
				alwaysSelectable=1;
				class stan
				{
					label="Standard";
				};
				class light
				{
					label="Light";
				};
				class off
				{
					label="Officer";
				};
				class vog
				{
					label="VOG";
				};
			};
		};
		class rhs_mbav
		{
			options[]=
			{
				"loadout"
			};
			label="MBAV";
			class loadout
			{
				values[]=
				{
					"None",
					"Grenadier",
					"Light",
					"Machinegunner",
					"Medic",
					"Rifleman"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_otv
		{
			options[]=
			{
				"camo"
			};
			label="OTV";
			class camo
			{
				values[]=
				{
					"KHK",
					"MDU02",
					"TTsKO_CDF_DIGI"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_pbb_m12
		{
			options[]=
			{
				"camo",
				"loadout"
			};
			label="PBB M-12";
			class camo
			{
				values[]=
				{
					"MDU10",
					"MDU10_DES"
				};
				alwaysSelectable=1;
			};
			class loadout
			{
				values[]=
				{
					"None",
					"Rifleman"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_pbb_m98
		{
			options[]=
			{
				"camo",
				"loadout"
			};
			label="PBB M-98";
			class camo
			{
				values[]=
				{
					"MDU02",
					"MDU10",
					"WDL_SAF"
				};
				alwaysSelectable=1;
			};
			class loadout
			{
				values[]=
				{
					"None",
					"Rifleman"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_pbb_m99t
		{
			options[]=
			{
				"camo",
				"loadout"
			};
			label="PBB M-99T";
			class camo
			{
				values[]=
				{
					"MDU02",
					"MDU10",
					"WDL_SAF"
				};
				alwaysSelectable=1;
			};
			class loadout
			{
				values[]=
				{
					"None",
					"Radio",
					"Rifleman",
					"Rifl./Radio"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_plateframe
		{
			options[]=
			{
				"loadout"
			};
			label="Plateframe";
			class loadout
			{
				values[]=
				{
					"None",
					"Grenadier",
					"Light",
					"Machinegunner",
					"Marksman",
					"Medic",
					"Rifleman",
					"Team Lead."
				};
				alwaysSelectable=1;
			};
		};
		class rhs_spc
		{
			options[]=
			{
				"loadout"
			};
			label="SPC";
			class loadout
			{
				values[]=
				{
					"None",
					"Corpsman",
					"Crewman",
					"IAR",
					"Light",
					"Machinegunner",
					"Marksman",
					"Patchless",
					"Radio",
					"Rifleman",
					"Sniper",
					"Squad Lead.",
					"Team Lead."
				};
				alwaysSelectable=1;
			};
		};
		class rhs_spcs
		{
			options[]=
			{
				"camo",
				"loadout"
			};
			label="SPCS";
			class camo
			{
				values[]=
				{
					"OEF_CP",
					"UCP"
				};
				alwaysSelectable=1;
			};
			class loadout
			{
				values[]=
				{
					"None",
					"Crewman",
					"Grenadier",
					"Machinegunner",
					"Medic",
					"Rifleman Alt",
					"Rifleman",
					"SAW",
					"Sniper",
					"Squad Lead.",
					"Team Lead.",
					"Team Lead. Alt"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_sus_equip
		{
			options[]=
			{
				"loadout"
			};
			label="Suspender Equip.";
			class loadout
			{
				values[]=
				{
					"ak",
					"rifle",
					"rifle_light",
					"sks"
				};
				alwaysSelectable=1;
				class ak
				{
					label="AK Chest.";
					description="AK Chestrig";
				};
				class rifle
				{
					label="Rifleman";
				};
				class rifle_light
				{
					label="Rifleman Li.";
					description="Rifleman Light";
				};
				class sks
				{
					label="SKS";
				};
			};
		};
		class rhs_6m2_nvg
		{
			options[]=
			{
				"mouthpiece"
			};
			label="6M2";
			class mouthpiece
			{
				label="Mouthpiece";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_ak103
		{
			options[]=
			{
				"attachsys"
			};
			label="AK-103";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny",
					"zenit",
					"zenit_pica"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_ak103_1
		{
			options[]=
			{
				"attachsys"
			};
			label="AK-103-1";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_ak103_2
		{
			options[]=
			{
				"attachsys"
			};
			label="AK-103-2";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_ak103_gp25
		{
			options[]=
			{
				"attachsys"
			};
			label="AK-103 (GP-25)";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_ak104
		{
			options[]=
			{
				"attachsys"
			};
			label="AK-104";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny",
					"zenit",
					"zenit_pica"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_ak105
		{
			options[]=
			{
				"attachsys"
			};
			label="AK-105";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny",
					"zenit",
					"zenit_pica"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_ak74
		{
			options[]=
			{
				"camo"
			};
			label="AK-74";
			class camo
			{
				label="Furniture";
				values[]=
				{
					"AK_WOOD",
					"AK_GRN",
					"AK_PLUM"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_ak74m
		{
			options[]=
			{
				"camo",
				"attachsys"
			};
			label="AK-74M";
			class camo
			{
				label="Furniture";
				values[]=
				{
					"AK_BLK",
					"AK_CAMO",
					"AK_DES",
					"AK_PLUM"
				};
				alwaysSelectable=1;
			};
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny",
					"zenit",
					"zenit_pica"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_ak74m_gp25
		{
			options[]=
			{
				"camo",
				"attachsys"
			};
			label="AK-74M (GP-25)";
			class camo
			{
				label="Furniture";
				values[]=
				{
					"AK_BLK",
					"AK_PLUM"
				};
				alwaysSelectable=1;
			};
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_ak74n
		{
			options[]=
			{
				"camo",
				"attachsys"
			};
			label="AK-74N";
			class camo
			{
				label="Furniture";
				values[]=
				{
					"AK_WOOD",
					"AK_PLUM"
				};
				alwaysSelectable=1;
			};
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_ak74n_gp25
		{
			options[]=
			{
				"camo",
				"attachsys"
			};
			label="AK-74N (GP-25)";
			class camo
			{
				label="Furniture";
				values[]=
				{
					"AK_WOOD",
					"AK_PLUM"
				};
				alwaysSelectable=1;
			};
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_akmn
		{
			options[]=
			{
				"attachsys"
			};
			label="AKMN";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_akmn_gp25
		{
			options[]=
			{
				"attachsys"
			};
			label="AKMN (GP-25)";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_aks74n
		{
			options[]=
			{
				"camo",
				"attachsys"
			};
			label="AKS-74N";
			class camo
			{
				label="Furniture";
				values[]=
				{
					"AK_WOOD",
					"AK_PLUM"
				};
				alwaysSelectable=1;
			};
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_aks74n_gp25
		{
			options[]=
			{
				"attachsys"
			};
			label="AKS-74N (GP-25)";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_asval
		{
			options[]=
			{
				"attachsys",
				"grip"
			};
			label="AS Val";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
			class grip
			{
				label="Grip Mounts";
				values[]=
				{
					"no",
					"yes"
				};
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
					description="Allows you to mount a flashlight or laser point as well as a grip";
				};
			};
		};
		class rhs_hk416_d10
		{
			options[]=
			{
				"camo",
				"stock"
			};
			label="HK416 D10";
			class camo
			{
				values[]=
				{
					"BLK",
					"desert",
					"woodland"
				};
				alwaysSelectable=1;
				class desert
				{
					label="Desert";
				};
				class woodland
				{
					label="Woodland";
				};
			};
			class stock
			{
				label="Stock";
				values[]=
				{
					"standard",
					"sopmod"
				};
				alwaysSelectable=1;
				class standard
				{
					label="Standard";
				};
				class sopmod
				{
					label="SOPMOD";
				};
			};
		};
		class rhs_hk416_d145
		{
			options[]=
			{
				"camo"
			};
			label="HK416 D14.5";
			class camo
			{
				values[]=
				{
					"BLK",
					"desert",
					"desert_net",
					"woodland",
					"woodland_net"
				};
				alwaysSelectable=1;
				class desert
				{
					label="Desert";
				};
				class desert_net
				{
					label="Desert Net";
				};
				class woodland
				{
					label="Woodland";
				};
				class woodland_net
				{
					label="Woodland Net";
				};
			};
		};
		class rhs_l1a1
		{
			options[]=
			{
				"camo"
			};
			label="L1A1";
			class camo
			{
				values[]=
				{
					"polymer",
					"wood"
				};
				alwaysSelectable=1;
				class polymer
				{
					label="Polymer";
				};
				class wood
				{
					label="Wood";
				};
			};
		};
		class rhs_m107
		{
			options[]=
			{
				"camo"
			};
			label="M107";
			class camo
			{
				values[]=
				{
					"BLK",
					"Desert",
					"Woodland"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_m14
		{
			options[]=
			{
				"camo",
				"attachsys"
			};
			label="M14";
			class camo
			{
				values[]=
				{
					"wood",
					"desert",
					"fiberglass",
					"woodland"
				};
				alwaysSelectable=1;
				class wood
				{
					label="Wood";
				};
				class desert
				{
					label="Desert";
				};
				class fiberglass
				{
					label="Fiberglass";
				};
				class woodland
				{
					label="Woodland";
				};
			};
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"none",
					"picatinny",
					"ris"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_m16a4
		{
			options[]=
			{
				"handle",
				"stock"
			};
			label="M16A4";
			class handle
			{
				label="Carryhandle";
				values[]=
				{
					"no",
					"yes"
				};
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class stock
			{
				label="Stock";
				values[]=
				{
					"standard",
					"imod"
				};
				alwaysSelectable=1;
				class standard
				{
					label="Standard";
				};
				class imod
				{
					label="IMOD";
				};
			};
		};
		class rhs_m16a4_m203
		{
			options[]=
			{
				"handle",
				"stock"
			};
			label="M16A4 (M203)";
			class handle
			{
				label="Carryhandle";
				values[]=
				{
					"no",
					"yes"
				};
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class stock
			{
				label="Stock";
				values[]=
				{
					"standard",
					"imod"
				};
				alwaysSelectable=1;
				class standard
				{
					label="Standard";
				};
				class imod
				{
					label="IMOD";
				};
			};
		};
		class rhs_m2010
		{
			options[]=
			{
				"camo"
			};
			label="M2010 ESR";
			class camo
			{
				values[]=
				{
					"BLK",
					"desert",
					"semi",
					"woodland"
				};
				alwaysSelectable=1;
				class desert
				{
					label="Desert";
				};
				class semi
				{
					label="Semi-Arid";
				};
				class woodland
				{
					label="Woodland";
				};
			};
		};
		class rhs_m21a
		{
			options[]=
			{
				"attachsys"
			};
			label="M21A";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_m21a_pbg
		{
			options[]=
			{
				"attachsys"
			};
			label="M21A (PBG)";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_m21s
		{
			options[]=
			{
				"attachsys"
			};
			label="M21S";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_m24
		{
			options[]=
			{
				"camo"
			};
			label="M24 SWS";
			class camo
			{
				values[]=
				{
					"BLK",
					"desert",
					"woodland"
				};
				alwaysSelectable=1;
				class desert
				{
					label="Desert";
				};
				class woodland
				{
					label="Woodland";
				};
			};
		};
		class rhs_m27iar
		{
			options[]=
			{
				"grip"
			};
			label="M27 IAR";
			class grip
			{
				label="Grip";
				values[]=
				{
					"none",
					"kac"
				};
				alwaysSelectable=1;
				class none
				{
					label="None";
				};
				class kac
				{
					label="KAC";
				};
			};
		};
		class rhs_m38
		{
			options[]=
			{
				"attachsys"
			};
			label="M38";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"none",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_m4
		{
			options[]=
			{
				"handle",
				"stock"
			};
			label="M4";
			class handle
			{
				label="Carryhandle";
				values[]=
				{
					"no",
					"yes"
				};
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class stock
			{
				label="Stock";
				values[]=
				{
					"standard",
					"magpull"
				};
				alwaysSelectable=1;
				class standard
				{
					label="Standard";
				};
				class magpull
				{
					label="Magpull";
				};
			};
		};
		class rhs_m40a5
		{
			options[]=
			{
				"camo"
			};
			label="M40A5";
			class camo
			{
				values[]=
				{
					"BLK",
					"desert",
					"woodland"
				};
				alwaysSelectable=1;
				class desert
				{
					label="Desert";
				};
				class woodland
				{
					label="Woodland";
				};
			};
		};
		class rhs_m4_m203
		{
			options[]=
			{
				"handle"
			};
			label="M4 (M203)";
			class handle
			{
				label="Carryhandle";
				values[]=
				{
					"no",
					"yes"
				};
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class rhs_m4_m203s
		{
			options[]=
			{
				"handle"
			};
			label="M4 (M203S)";
			class handle
			{
				label="Carryhandle";
				values[]=
				{
					"no",
					"yes"
				};
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class rhs_m4a1
		{
			options[]=
			{
				"stock"
			};
			label="M4A1";
			class stock
			{
				label="Stock";
				values[]=
				{
					"standard",
					"magpull"
				};
				alwaysSelectable=1;
				class standard
				{
					label="Standard";
				};
				class magpull
				{
					label="Magpull";
				};
			};
		};
		class rhs_m4a1_blockII
		{
			options[]=
			{
				"camo",
				"stock"
			};
			label="M4A1 Block II";
			class camo
			{
				values[]=
				{
					"standard",
					"BLK",
					"desert",
					"woodland"
				};
				alwaysSelectable=1;
				class standard
				{
					label="Standard";
				};
				class desert
				{
					label="Desert";
				};
				class woodland
				{
					label="Woodland";
				};
			};
			class stock
			{
				label="Stock";
				values[]=
				{
					"standard",
					"sopmod"
				};
				alwaysSelectable=1;
				class standard
				{
					label="Standard";
				};
				class sopmod
				{
					label="SOPMOD";
				};
			};
		};
		class rhs_m4a1_blockII_m203
		{
			options[]=
			{
				"camo"
			};
			label="M4A1 Blk. II (M203)";
			class camo
			{
				values[]=
				{
					"standard",
					"BLK",
					"desert",
					"woodland"
				};
				alwaysSelectable=1;
				class standard
				{
					label="Standard";
				};
				class desert
				{
					label="Desert";
				};
				class woodland
				{
					label="Woodland";
				};
			};
		};
		class rhs_m4a1_pip
		{
			options[]=
			{
				"camo",
				"stock"
			};
			label="M4A1 PIP";
			class camo
			{
				values[]=
				{
					"BLK",
					"desert",
					"woodland"
				};
				alwaysSelectable=1;
				class standard
				{
					label="Standard";
				};
				class desert
				{
					label="Desert";
				};
				class woodland
				{
					label="Woodland";
				};
			};
			class stock
			{
				label="Stock";
				values[]=
				{
					"standard",
					"magpull"
				};
				alwaysSelectable=1;
				class standard
				{
					label="Standard";
				};
				class magpull
				{
					label="Magpull";
				};
			};
		};
		class rhs_m4a1_pip_m203s
		{
			options[]=
			{
				"camo"
			};
			label="M4A1 PIP (M203S)";
			class camo
			{
				values[]=
				{
					"BLK",
					"desert",
					"woodland"
				};
				alwaysSelectable=1;
				class standard
				{
					label="Standard";
				};
				class desert
				{
					label="Desert";
				};
				class woodland
				{
					label="Woodland";
				};
			};
		};
		class rhs_mk11
		{
			options[]=
			{
				"camo"
			};
			label="Mk 11 Mod 0";
			class camo
			{
				values[]=
				{
					"BLK",
					"desert",
					"woodland"
				};
				alwaysSelectable=1;
				class desert
				{
					label="Desert";
				};
				class woodland
				{
					label="Woodland";
				};
			};
		};
		class rhs_mk11_ec
		{
			options[]=
			{
				"camo"
			};
			label="Mk 11 Mod 0 (EC)";
			class camo
			{
				values[]=
				{
					"BLK",
					"desert",
					"woodland"
				};
				alwaysSelectable=1;
				class desert
				{
					label="Desert";
				};
				class woodland
				{
					label="Woodland";
				};
			};
		};
		class rhs_mk18
		{
			options[]=
			{
				"camo",
				"stock"
			};
			label="Mk 18 Mod 1";
			class camo
			{
				values[]=
				{
					"standard",
					"BLK",
					"desert",
					"woodland"
				};
				alwaysSelectable=1;
				class standard
				{
					label="Standard";
				};
				class desert
				{
					label="Desert";
				};
				class woodland
				{
					label="Woodland";
				};
			};
			class stock
			{
				label="Stock";
				values[]=
				{
					"standard",
					"sopmod"
				};
				alwaysSelectable=1;
				class standard
				{
					label="Standard";
				};
				class sopmod
				{
					label="SOPMOD";
				};
			};
		};
		class rhs_mp7a2
		{
			options[]=
			{
				"camo"
			};
			label="MP7A2";
			class camo
			{
				values[]=
				{
					"BLK",
					"AOR1",
					"Desert",
					"Winter"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_rpk74m
		{
			options[]=
			{
				"attachsys"
			};
			label="RPK-74M";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_savz58p
		{
			options[]=
			{
				"camo",
				"attachsys"
			};
			label="Sa vz. 58P";
			class camo
			{
				values[]=
				{
					"wood",
					"BLK"
				};
				alwaysSelectable=1;
				class wood
				{
					label="Wood";
				};
			};
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"none",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_savz58v
		{
			options[]=
			{
				"camo",
				"attachsys"
			};
			label="Sa vz. 58P";
			class camo
			{
				values[]=
				{
					"wood",
					"BLK"
				};
				alwaysSelectable=1;
				class wood
				{
					label="Wood";
				};
			};
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"none",
					"picatinny",
					"ris"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_scarh_cqc
		{
			options[]=
			{
				"camo"
			};
			label="SCAR-H (CQC)";
			class camo
			{
				values[]=
				{
					"BLK",
					"FDE",
					"USA"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_scarh_lb
		{
			options[]=
			{
				"camo"
			};
			label="SCAR-H (LB)";
			class camo
			{
				values[]=
				{
					"BLK",
					"FDE",
					"USA"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_scarh_std
		{
			options[]=
			{
				"camo"
			};
			label="SCAR-H (STD)";
			class camo
			{
				values[]=
				{
					"BLK",
					"FDE",
					"USA"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_socom16
		{
			options[]=
			{
				"attachsys"
			};
			label="SOCOM 16";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"picatinny",
					"picatinny_and_flash"
				};
				alwaysSelectable=1;
				class picatinny_and_flash
				{
					label="Pica. & Side";
					description="Picatinny Rail and Side Mount (e.g. flashlights and lasers)";
				};
			};
		};
		class rhs_svdm
		{
			options[]=
			{
				"camo",
				"attachsys"
			};
			label="SVDM";
			class camo
			{
				values[]=
				{
					"AK_BLK",
					"SVD_FLRA"
				};
				alwaysSelectable=1;
			};
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_svds
		{
			options[]=
			{
				"attachsys"
			};
			label="SVDS";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_vhsd2
		{
			options[]=
			{
				"attachsys"
			};
			label="VHS-D2";
			class attachsys: rhs_attachsys
			{
				label="Optic";
				values[]=
				{
					"ct15x",
					"picatinny"
				};
				alwaysSelectable=1;
				class ct15x
				{
					label="CT-1.5x";
				};
			};
		};
		class rhs_vhsd2_bg
		{
			options[]=
			{
				"attachsys"
			};
			label="VHS-D2 (BG)";
			class attachsys: rhs_attachsys
			{
				label="Optic";
				values[]=
				{
					"ct15x",
					"picatinny"
				};
				alwaysSelectable=1;
				class ct15x
				{
					label="CT-1.5x";
				};
			};
		};
		class rhs_vssvin
		{
			options[]=
			{
				"attachsys",
				"grip"
			};
			label="VSS Vintorez";
			class attachsys: rhs_attachsys
			{
				values[]=
				{
					"warsaw",
					"picatinny"
				};
				alwaysSelectable=1;
			};
			class grip
			{
				label="Grip Mounts";
				values[]=
				{
					"no",
					"yes"
				};
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
					description="Allows you to mount a flashlight or laser point as well as a grip";
				};
			};
		};
		class rhs_cz99
		{
			options[]=
			{
				"camo"
			};
			label="CZ99";
			class camo
			{
				values[]=
				{
					"BLK",
					"engraved"
				};
				alwaysSelectable=1;
				class engraved
				{
					label="Engraved";
				};
			};
		};
		class rhs_rsp30
		{
			options[]=
			{
				"color"
			};
			label="RSP-30";
			class color
			{
				label="Flare Color";
				values[]=
				{
					"WHT",
					"GRN",
					"RED"
				};
				alwaysSelectable=1;
				class WHT
				{
					label="White";
					image="#(rgb,8,8,3)color(1,1,1,1)";
				};
				class GRN
				{
					label="Green";
					image="#(rgb,8,8,3)color(0,1,0,1)";
				};
				class RED
				{
					label="Red";
					image="#(rgb,8,8,3)color(1,0,0,1)";
				};
			};
		};
		class rhs_mp7a2_folded
		{
			options[]=
			{
				"camo"
			};
			label="MP7A2";
			class camo
			{
				values[]=
				{
					"BLK",
					"AOR1",
					"Desert",
					"Winter"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_m136
		{
			options[]=
			{
				"ammo"
			};
			label="M136";
			class ammo
			{
				label="Projectile";
				values[]=
				{
					"heat",
					"hedp",
					"hp"
				};
				alwaysSelectable=1;
				class heat
				{
					label="HEAT";
					description="High-Explosive Anti-Tank";
				};
				class hedp
				{
					label="HEDP";
					description="High-Explosive Dual Purpose";
				};
				class hp
				{
					label="HP";
					description="High Penetration";
				};
			};
		};
		class rhs_smaw
		{
			options[]=
			{
				"camo"
			};
			label="SMAW";
			class camo
			{
				values[]=
				{
					"BLK",
					"GRN"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_lerca1200
		{
			options[]=
			{
				"camo"
			};
			label="Lerca 1200";
			class camo
			{
				values[]=
				{
					"BLK",
					"TAN"
				};
				alwaysSelectable=1;
			};
		};
		class rhs_m24_bino
		{
			options[]=
			{
				"ard"
			};
			label="M24 Binoculars";
			class ard
			{
				label="Anti-Reflection Device";
				values[]=
				{
					"off",
					"on"
				};
				alwaysSelectable=1;
				changeingame=1;
				class off
				{
					label="Off";
				};
				class on
				{
					label="On";
				};
			};
		};
		class rhs_tr8
		{
			options[]=
			{
				"pip"
			};
			label="TR-8";
			class pip
			{
				label="Picture-In-Picture";
				values[]=
				{
					"no",
					"yes"
				};
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgGlasses
	{
		class rhs_facewear_6m2
		{
			model="rhs_6m2_face";
			mouthpiece="No";
		};
		class rhs_facewear_6m2_1
		{
			model="rhs_6m2_face";
			mouthpiece="Yes";
		};
		class rhs_balaclava
		{
			model="rhs_balaclava";
			eyehole="Slit";
		};
		class rhs_balaclava1_olive
		{
			model="rhs_balaclava";
			eyehole="Two-Hole";
		};
		class rhs_googles_black
		{
			model="rhs_goggles";
			camo="BLK";
		};
		class rhs_googles_clear
		{
			model="rhs_goggles";
			camo="CLR";
		};
		class rhs_googles_orange
		{
			model="rhs_goggles";
			camo="ORG";
		};
		class rhs_googles_yellow
		{
			model="rhs_goggles";
			camo="YLW";
		};
		class rhsusf_oakley_goggles_blk
		{
			model="rhs_oakley_goggles";
			camo="BLK";
		};
		class rhsusf_oakley_goggles_clr
		{
			model="rhs_oakley_goggles";
			camo="CLR";
		};
		class rhsusf_oakley_goggles_ylw
		{
			model="rhs_oakley_goggles";
			camo="YLW";
		};
		class rhsusf_shemagh_grn
		{
			model="rhs_shemagh";
			camo="GRN";
			position="Chin";
			goggles="No";
		};
		class rhsusf_shemagh2_grn
		{
			model="rhs_shemagh";
			camo="GRN";
			position="Mouth";
			goggles="No";
		};
		class rhsusf_shemagh_gogg_grn
		{
			model="rhs_shemagh";
			camo="GRN";
			position="Chin";
			goggles="Yes";
		};
		class rhsusf_shemagh2_gogg_grn
		{
			model="rhs_shemagh";
			camo="GRN";
			position="Mouth";
			goggles="Yes";
		};
		class rhsusf_shemagh_od
		{
			model="rhs_shemagh";
			camo="OD";
			position="Chin";
			goggles="No";
		};
		class rhsusf_shemagh2_od
		{
			model="rhs_shemagh";
			camo="OD";
			position="Mouth";
			goggles="No";
		};
		class rhsusf_shemagh_gogg_od
		{
			model="rhs_shemagh";
			camo="OD";
			position="Chin";
			goggles="Yes";
		};
		class rhsusf_shemagh2_gogg_od
		{
			model="rhs_shemagh";
			camo="OD";
			position="Mouth";
			goggles="Yes";
		};
		class rhsusf_shemagh_tan
		{
			model="rhs_shemagh";
			camo="TAN";
			position="Chin";
			goggles="No";
		};
		class rhsusf_shemagh2_tan
		{
			model="rhs_shemagh";
			camo="TAN";
			position="Mouth";
			goggles="No";
		};
		class rhsusf_shemagh_gogg_tan
		{
			model="rhs_shemagh";
			camo="TAN";
			position="Chin";
			goggles="Yes";
		};
		class rhsusf_shemagh2_gogg_tan
		{
			model="rhs_shemagh";
			camo="TAN";
			position="Mouth";
			goggles="Yes";
		};
		class rhsusf_shemagh_white
		{
			model="rhs_shemagh";
			camo="WHT";
			position="Chin";
			goggles="No";
		};
		class rhsusf_shemagh2_white
		{
			model="rhs_shemagh";
			camo="WHT";
			position="Mouth";
			goggles="No";
		};
		class rhsusf_shemagh_gogg_white
		{
			model="rhs_shemagh";
			camo="WHT";
			position="Chin";
			goggles="Yes";
		};
		class rhsusf_shemagh2_gogg_white
		{
			model="rhs_shemagh";
			camo="WHT";
			position="Mouth";
			goggles="Yes";
		};
	};
	class CfgVehicles
	{
		class rhssaf_alice_md2camo
		{
			model="rhs_alicepack";
			camo="MDU02";
		};
		class rhsgref_hidf_alicepack
		{
			model="rhs_alicepack";
			camo="OD";
		};
		class rhssaf_alice_smb
		{
			model="rhs_alicepack";
			camo="SMB";
		};
		class rhsgref_ttsko_alicepack
		{
			model="rhs_alicepack";
			camo="TTsKO";
		};
		class rhsgref_wdl_alicepack
		{
			model="rhs_alicepack";
			camo="M81";
		};
		class rhsusf_assault_eagleaiii_coy
		{
			model="rhs_eagleaiii";
			camo="CBR";
		};
		class rhsusf_assault_eagleaiii_ocp
		{
			model="rhs_eagleaiii";
			camo="OEF_CP";
		};
		class rhsusf_assault_eagleaiii_ucp
		{
			model="rhs_eagleaiii";
			camo="UCP";
		};
		class rhsusf_falconii_coy
		{
			model="rhs_falconii";
			camo="CBR";
		};
		class rhsusf_falconii_mc
		{
			model="rhs_falconii";
			camo="MC";
		};
		class rhsusf_falconii
		{
			model="rhs_falconii";
			camo="RGR";
		};
		class rhssaf_kitbag_digital
		{
			model="rhs_kitbag";
			camo="MDU10";
		};
		class rhssaf_kitbag_md2camo
		{
			model="rhs_kitbag";
			camo="MDU02";
		};
		class rhssaf_kitbag_smb
		{
			model="rhs_kitbag";
			camo="SMB";
		};
		class rhs_rd54
		{
			model="rhs_rd54";
			camo="AFGKA";
			vestfit="No";
		};
		class rhs_rd54_vest
		{
			model="rhs_rd54";
			camo="AFGKA";
			vestfit="Yes";
		};
		class rhs_rd54_emr1
		{
			model="rhs_rd54";
			camo="EMR_SUM";
			vestfit="No";
		};
		class rhs_rd54_vest_emr1
		{
			model="rhs_rd54";
			camo="EMR_SUM";
			vestfit="Yes";
		};
		class rhs_rd54_flora2
		{
			model="rhs_rd54";
			camo="FLRA";
			vestfit="No";
		};
		class rhs_rd54_vest_flora2
		{
			model="rhs_rd54";
			camo="FLRA";
			vestfit="Yes";
		};
		class rhs_rd54_flora1
		{
			model="rhs_rd54";
			camo="FLRA_2";
			vestfit="No";
		};
		class rhs_rd54_vest_flora1
		{
			model="rhs_rd54";
			camo="FLRA_2";
			vestfit="Yes";
		};
		class rhs_rk_sht_30_emr
		{
			model="rhs_rk_sht_30";
			camo="EMR_SUM";
			loadout="None";
		};
		class rhs_rk_sht_30_emr_engineer_empty
		{
			model="rhs_rk_sht_30";
			camo="EMR_SUM";
			loadout="Engineer";
		};
		class rhs_rk_sht_30_olive
		{
			model="rhs_rk_sht_30";
			camo="OLI";
			loadout="None";
		};
		class rhs_rk_sht_30_olive_engineer_empty
		{
			model="rhs_rk_sht_30";
			camo="OLI";
			loadout="Engineer";
		};
		class rhs_rpg_2
		{
			model="rhs_rpg_carrier";
			vestfit="Generic";
		};
		class rhs_rpg_6b2
		{
			model="rhs_rpg_carrier";
			vestfit="6B2";
		};
		class rhs_rpg_6b3
		{
			model="rhs_rpg_carrier";
			vestfit="6B3";
		};
		class rhs_tortila_black
		{
			model="rhs_sposn_tortila";
			camo="BLK";
		};
		class rhs_tortila_emr
		{
			model="rhs_sposn_tortila";
			camo="EMR_SUM";
		};
		class rhs_tortila_grey
		{
			model="rhs_sposn_tortila";
			camo="GRY";
		};
		class rhs_tortila_khaki
		{
			model="rhs_sposn_tortila";
			camo="KHK";
		};
		class rhs_tortila_olive
		{
			model="rhs_sposn_tortila";
			camo="OLI";
		};
		class rhsgref_tortila_specter
		{
			model="rhs_sposn_tortila";
			camo="SPCT_SKWO";
		};
		class rhs_assault_umbts
		{
			model="rhs_umbts";
			loadout="None";
		};
		class rhs_assault_umbts_engineer_empty
		{
			model="rhs_umbts";
			loadout="Engineer";
		};
	};
	class CfgWeapons
	{
		class rhs_6b26_green
		{
			model="rhs_6b26";
			camo="GRN";
			goggles="None";
			balaclava="No";
		};
		class rhs_6b26_bala_green
		{
			model="rhs_6b26";
			camo="GRN";
			goggles="None";
			balaclava="Yes";
		};
		class rhs_6b26_ess_green
		{
			model="rhs_6b26";
			camo="GRN";
			goggles="ESS";
			balaclava="No";
		};
		class rhs_6b26_ess_bala_green
		{
			model="rhs_6b26";
			camo="GRN";
			goggles="ESS";
			balaclava="Yes";
		};
		class rhs_6b26_digi
		{
			model="rhs_6b26";
			camo="EMR_SUM";
			goggles="None";
			balaclava="No";
		};
		class rhs_6b26_digi_bala
		{
			model="rhs_6b26";
			camo="EMR_SUM";
			goggles="None";
			balaclava="Yes";
		};
		class rhs_6b26_digi_ess
		{
			model="rhs_6b26";
			camo="EMR_SUM";
			goggles="ESS";
			balaclava="No";
		};
		class rhs_6b26_digi_ess_bala
		{
			model="rhs_6b26";
			camo="EMR_SUM";
			goggles="ESS";
			balaclava="Yes";
		};
		class rhs_6b26
		{
			model="rhs_6b26";
			camo="FLRA";
			goggles="None";
			balaclava="No";
		};
		class rhs_6b26_bala
		{
			model="rhs_6b26";
			camo="FLRA";
			goggles="None";
			balaclava="Yes";
		};
		class rhs_6b26_ess
		{
			model="rhs_6b26";
			camo="FLRA";
			goggles="ESS";
			balaclava="No";
		};
		class rhs_6b26_ess_bala
		{
			model="rhs_6b26";
			camo="FLRA";
			goggles="ESS";
			balaclava="Yes";
		};
		class rhs_6b27m_green
		{
			model="rhs_6b27m";
			camo="GRN";
			goggles="None";
			balaclava="No";
		};
		class rhs_6b27m_green_bala
		{
			model="rhs_6b27m";
			camo="GRN";
			goggles="None";
			balaclava="Yes";
		};
		class rhs_6b27m_green_ess
		{
			model="rhs_6b27m";
			camo="GRN";
			goggles="ESS";
			balaclava="No";
		};
		class rhs_6b27m_green_ess_bala
		{
			model="rhs_6b27m";
			camo="GRN";
			goggles="ESS";
			balaclava="Yes";
		};
		class rhs_6b27m_digi
		{
			model="rhs_6b27m";
			camo="EMR_SUM";
			goggles="None";
			balaclava="No";
		};
		class rhs_6b27m_digi_bala
		{
			model="rhs_6b27m";
			camo="EMR_SUM";
			goggles="None";
			balaclava="Yes";
		};
		class rhs_6b27m_digi_ess
		{
			model="rhs_6b27m";
			camo="EMR_SUM";
			goggles="ESS";
			balaclava="No";
		};
		class rhs_6b27m_digi_ess_bala
		{
			model="rhs_6b27m";
			camo="EMR_SUM";
			goggles="ESS";
			balaclava="Yes";
		};
		class rhs_6b27m
		{
			model="rhs_6b27m";
			camo="FLRA";
			goggles="None";
			balaclava="No";
		};
		class rhs_6b27m_bala
		{
			model="rhs_6b27m";
			camo="FLRA";
			goggles="None";
			balaclava="Yes";
		};
		class rhs_6b27m_ess
		{
			model="rhs_6b27m";
			camo="FLRA";
			goggles="ESS";
			balaclava="No";
		};
		class rhs_6b27m_ess_bala
		{
			model="rhs_6b27m";
			camo="FLRA";
			goggles="ESS";
			balaclava="Yes";
		};
		class rhs_6b27m_ml
		{
			model="rhs_6b27m";
			camo="MTNLES";
			goggles="None";
			balaclava="No";
		};
		class rhs_6b27m_ml_bala
		{
			model="rhs_6b27m";
			camo="MTNLES";
			goggles="None";
			balaclava="Yes";
		};
		class rhs_6b27m_ml_ess
		{
			model="rhs_6b27m";
			camo="MTNLES";
			goggles="ESS";
			balaclava="No";
		};
		class rhs_6b27m_ml_ess_bala
		{
			model="rhs_6b27m";
			camo="MTNLES";
			goggles="ESS";
			balaclava="Yes";
		};
		class rhs_6b28_green
		{
			model="rhs_6b28";
			camo="GRN";
			goggles="None";
			balaclava="No";
		};
		class rhs_6b28_green_bala
		{
			model="rhs_6b28";
			camo="GRN";
			goggles="None";
			balaclava="Yes";
		};
		class rhs_6b28_green_ess
		{
			model="rhs_6b28";
			camo="GRN";
			goggles="ESS";
			balaclava="No";
		};
		class rhs_6b28_green_ess_bala
		{
			model="rhs_6b28";
			camo="GRN";
			goggles="ESS";
			balaclava="Yes";
		};
		class rhs_6b28
		{
			model="rhs_6b28";
			camo="EMR_SUM";
			goggles="None";
			balaclava="No";
		};
		class rhs_6b28_bala
		{
			model="rhs_6b28";
			camo="EMR_SUM";
			goggles="None";
			balaclava="Yes";
		};
		class rhs_6b28_ess
		{
			model="rhs_6b28";
			camo="EMR_SUM";
			goggles="ESS";
			balaclava="No";
		};
		class rhs_6b28_ess_bala
		{
			model="rhs_6b28";
			camo="EMR_SUM";
			goggles="ESS";
			balaclava="Yes";
		};
		class rhs_6b28_flora
		{
			model="rhs_6b28";
			camo="FLRA";
			goggles="None";
			balaclava="No";
		};
		class rhs_6b28_flora_bala
		{
			model="rhs_6b28";
			camo="FLRA";
			goggles="None";
			balaclava="Yes";
		};
		class rhs_6b28_flora_ess
		{
			model="rhs_6b28";
			camo="FLRA";
			goggles="ESS";
			balaclava="No";
		};
		class rhs_6b28_flora_ess_bala
		{
			model="rhs_6b28";
			camo="FLRA";
			goggles="ESS";
			balaclava="Yes";
		};
		class rhs_6b47_bare
		{
			model="rhs_6b47";
			camo="GRN";
			goggles="None";
			headset="None";
			balaclava="No";
		};
		class rhs_6b47
		{
			model="rhs_6b47";
			camo="EMR_SUM";
			goggles="None";
			headset="None";
			balaclava="No";
		};
		class rhs_6b47_6m2_1
		{
			model="rhs_6b47";
			camo="EMR_SUM";
			goggles="None";
			headset="6M2-1";
			balaclava="No";
		};
		class rhs_6b47_6m2
		{
			model="rhs_6b47";
			camo="EMR_SUM";
			goggles="None";
			headset="6M2";
			balaclava="No";
		};
		class rhs_6b47_bala
		{
			model="rhs_6b47";
			camo="EMR_SUM";
			goggles="None";
			headset="None";
			balaclava="Yes";
		};
		class rhs_6b47_ess
		{
			model="rhs_6b47";
			camo="EMR_SUM";
			goggles="ESS";
			headset="None";
			balaclava="No";
		};
		class rhs_6b47_ess_bala
		{
			model="rhs_6b47";
			camo="EMR_SUM";
			goggles="ESS";
			headset="None";
			balaclava="Yes";
		};
		class rhs_6b47_bare_d
		{
			model="rhs_6b47";
			camo="DESPNK";
			goggles="None";
			headset="None";
			balaclava="No";
		};
		class rhs_6b47_emr
		{
			model="rhs_6b47_alt";
			camo="EMR_SUM";
			goggles="None";
			emrvar="1";
		};
		class rhs_6b47_emr_1
		{
			model="rhs_6b47_alt";
			camo="EMR_SUM";
			goggles="None";
			emrvar="2";
		};
		class rhs_6b47_emr_2
		{
			model="rhs_6b47_alt";
			camo="EMR_SUM";
			goggles="None";
			emrvar="3";
		};
		class rhs_6b47_6B50
		{
			model="rhs_6b47_alt";
			camo="EMR_SUM";
			goggles="6B50";
			emrvar="1";
		};
		class rhs_6b7_1m
		{
			model="rhs_6b7_1m";
			camo="GRN";
			goggles="None";
			balaclava="None";
		};
		class rhs_6b7_1m_bala1
		{
			model="rhs_6b7_1m";
			camo="GRN";
			goggles="None";
			balaclava="Two-Hole";
		};
		class rhs_6b7_1m_bala2
		{
			model="rhs_6b7_1m";
			camo="GRN";
			goggles="None";
			balaclava="Slit";
		};
		class rhs_6b7_1m_ess
		{
			model="rhs_6b7_1m";
			camo="GRN";
			goggles="ESS";
			balaclava="None";
		};
		class rhs_6b7_1m_ess_bala
		{
			model="rhs_6b7_1m";
			camo="GRN";
			goggles="ESS";
			balaclava="Two-Hole";
		};
		class rhs_6b7_1m_emr
		{
			model="rhs_6b7_1m";
			camo="EMR_SUM";
			goggles="None";
			balaclava="None";
		};
		class rhs_6b7_1m_bala1_emr
		{
			model="rhs_6b7_1m";
			camo="EMR_SUM";
			goggles="None";
			balaclava="Slit";
		};
		class rhs_6b7_1m_bala2_emr
		{
			model="rhs_6b7_1m";
			camo="EMR_SUM";
			goggles="None";
			balaclava="Two-Hole";
		};
		class rhs_6b7_1m_emr_ess
		{
			model="rhs_6b7_1m";
			camo="EMR_SUM";
			goggles="ESS";
			balaclava="None";
		};
		class rhs_6b7_1m_emr_ess_bala
		{
			model="rhs_6b7_1m";
			camo="EMR_SUM";
			goggles="ESS";
			balaclava="Slit";
		};
		class rhs_6b7_1m_flora
		{
			model="rhs_6b7_1m";
			camo="FLRA";
			goggles="None";
			balaclava="None";
		};
		class rhs_6b7_1m_bala1_flora
		{
			model="rhs_6b7_1m";
			camo="FLRA";
			goggles="None";
			balaclava="Two-Hole";
		};
		class rhs_6b7_1m_bala2_flora
		{
			model="rhs_6b7_1m";
			camo="FLRA";
			goggles="None";
			balaclava="Slit";
		};
		class rhs_6b7_1m_flora_ns3
		{
			model="rhs_6b7_1m";
			camo="FLRA";
			goggles="NS-3";
			balaclava="None";
		};
		class rhs_6b7_1m_olive
		{
			model="rhs_6b7_1m";
			camo="OLI";
			goggles="None";
			balaclava="None";
		};
		class rhs_6b7_1m_bala1_olive
		{
			model="rhs_6b7_1m";
			camo="OLI";
			goggles="None";
			balaclava="Two-Hole";
		};
		class rhs_6b7_1m_bala2_olive
		{
			model="rhs_6b7_1m";
			camo="OLI";
			goggles="None";
			balaclava="Slit";
		};
		class rhs_6m2
		{
			model="rhs_6m2_head";
			mouthpiece="No";
		};
		class rhs_6m2_1
		{
			model="rhs_6m2_head";
			mouthpiece="Yes";
		};
		class rhsusf_ach_bare
		{
			model="rhs_ach";
			camo="GRN";
			goggles="None";
			headset="No";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_bare_ess
		{
			model="rhs_ach";
			camo="GRN";
			goggles="ESS";
			headset="No";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_bare_headset
		{
			model="rhs_ach";
			camo="GRN";
			goggles="None";
			headset="Yes";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_bare_headset_ess
		{
			model="rhs_ach";
			camo="GRN";
			goggles="ESS";
			headset="Yes";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_bare_des
		{
			model="rhs_ach";
			camo="Desert";
			goggles="None";
			headset="No";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_bare_des_ess
		{
			model="rhs_ach";
			camo="Desert";
			goggles="ESS";
			headset="No";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_bare_des_headset
		{
			model="rhs_ach";
			camo="Desert";
			goggles="None";
			headset="Yes";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_bare_des_headset_ess
		{
			model="rhs_ach";
			camo="Desert";
			goggles="ESS";
			headset="Yes";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_bare_semi
		{
			model="rhs_ach";
			camo="SemiArid";
			goggles="None";
			headset="No";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_bare_semi_ess
		{
			model="rhs_ach";
			camo="SemiArid";
			goggles="ESS";
			headset="No";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_bare_semi_headset
		{
			model="rhs_ach";
			camo="SemiArid";
			goggles="None";
			headset="Yes";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_bare_semi_headset_ess
		{
			model="rhs_ach";
			camo="SemiArid";
			goggles="ESS";
			headset="Yes";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_bare_tan
		{
			model="rhs_ach";
			camo="TAN";
			goggles="None";
			headset="No";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_bare_tan_ess
		{
			model="rhs_ach";
			camo="TAN";
			goggles="ESS";
			headset="No";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_bare_tan_headset
		{
			model="rhs_ach";
			camo="TAN";
			goggles="None";
			headset="Yes";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_bare_tan_headset_ess
		{
			model="rhs_ach";
			camo="TAN";
			goggles="ESS";
			headset="Yes";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_bare_wood
		{
			model="rhs_ach";
			camo="Woodland";
			goggles="None";
			headset="No";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_bare_wood_ess
		{
			model="rhs_ach";
			camo="Woodland";
			goggles="ESS";
			headset="No";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_bare_wood_headset
		{
			model="rhs_ach";
			camo="Woodland";
			goggles="None";
			headset="Yes";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_bare_wood_headset_ess
		{
			model="rhs_ach";
			camo="Woodland";
			goggles="ESS";
			headset="Yes";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_helmet_DCU
		{
			model="rhs_ach";
			camo="DCP";
			goggles="None";
			headset="No";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_helmet_DCU_early
		{
			model="rhs_ach";
			camo="DCP_ERL";
			goggles="None";
			headset="No";
			nvgmount="None";
			netting="No";
		};
		class rhsusf_ach_helmet_DCU_early_rhino
		{
			model="rhs_ach";
			camo="DCP_ERL";
			goggles="None";
			headset="No";
			nvgmount="""RhinoB""" \n "netting = ""No""";
		};
		class rhsusf_ach_helmet_M81
		{
			model="rhs_ach";
			camo="M81";
			goggles="None";
			headset="No";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_helmet_ocp
		{
			model="rhs_ach";
			camo="OEF_CP";
			goggles="None";
			headset="No";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_helmet_ocp_alt
		{
			model="rhs_ach";
			camo="OEF_CP";
			goggles="None";
			headset="No";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_helmet_ESS_ocp
		{
			model="rhs_ach";
			camo="OEF_CP";
			goggles="ESS";
			headset="No";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_helmet_ESS_ocp_alt
		{
			model="rhs_ach";
			camo="OEF_CP";
			goggles="ESS";
			headset="No";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_helmet_headset_ocp
		{
			model="rhs_ach";
			camo="OEF_CP";
			goggles="None";
			headset="Yes";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_helmet_headset_ocp_alt
		{
			model="rhs_ach";
			camo="OEF_CP";
			goggles="None";
			headset="Yes";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_helmet_headset_ess_ocp
		{
			model="rhs_ach";
			camo="OEF_CP";
			goggles="ESS";
			headset="Yes";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_helmet_headset_ess_ocp_alt
		{
			model="rhs_ach";
			camo="OEF_CP";
			goggles="ESS";
			headset="Yes";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_helmet_camo_ocp
		{
			model="rhs_ach";
			camo="OEF_CP";
			goggles="None";
			headset="No";
			nvgmount="RhinoT";
			netting="Yes";
		};
		class rhsusf_ach_helmet_ocp_norotos
		{
			model="rhs_ach";
			camo="OEF_CP";
			goggles="None";
			headset="No";
			nvgmount="Norotos";
			netting="No";
		};
		class rhsusf_ach_helmet_ucp
		{
			model="rhs_ach";
			camo="UCP";
			goggles="None";
			headset="No";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_helmet_ucp_alt
		{
			model="rhs_ach";
			camo="UCP";
			goggles="None";
			headset="No";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_helmet_ESS_ucp
		{
			model="rhs_ach";
			camo="UCP";
			goggles="ESS";
			headset="No";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_helmet_ESS_ucp_alt
		{
			model="rhs_ach";
			camo="UCP";
			goggles="ESS";
			headset="No";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_helmet_headset_ucp
		{
			model="rhs_ach";
			camo="UCP";
			goggles="None";
			headset="Yes";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_helmet_headset_ucp_alt
		{
			model="rhs_ach";
			camo="UCP";
			goggles="None";
			headset="Yes";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_helmet_headset_ess_ucp
		{
			model="rhs_ach";
			camo="UCP";
			goggles="ESS";
			headset="Yes";
			nvgmount="RhinoT";
			netting="No";
		};
		class rhsusf_ach_helmet_headset_ess_ucp_alt
		{
			model="rhs_ach";
			camo="UCP";
			goggles="ESS";
			headset="Yes";
			nvgmount="RhinoB";
			netting="No";
		};
		class rhsusf_ach_helmet_camo_ucp
		{
			model="rhs_ach";
			camo="UCP";
			goggles="None";
			headset="No";
			nvgmount="RhinoT";
			netting="Yes";
		};
		class rhsusf_ach_helmet_ucp_norotos
		{
			model="rhs_ach";
			camo="UCP";
			goggles="None";
			headset="No";
			nvgmount="Norotos";
			netting="No";
		};
		class rhsusf_cvc_green_helmet
		{
			model="rhs_acvch";
			camo="GRN";
			goggles="none";
			weather="No";
		};
		class rhsusf_cvc_green_alt_helmet
		{
			model="rhs_acvch";
			camo="GRN";
			goggles="none";
			weather="Yes";
		};
		class rhsusf_cvc_green_ess
		{
			model="rhs_acvch";
			camo="GRN";
			goggles="ESS";
			weather="No";
		};
		class rhsusf_cvc_helmet
		{
			model="rhs_acvch";
			camo="TAN";
			goggles="none";
			weather="No";
		};
		class rhsusf_cvc_alt_helmet
		{
			model="rhs_acvch";
			camo="TAN";
			goggles="none";
			weather="Yes";
		};
		class rhsusf_cvc_ess
		{
			model="rhs_acvch";
			camo="TAN";
			goggles="ESS";
			weather="Yes";
		};
		class rhs_altyn_novisor
		{
			model="rhs_altyn";
			visor="None";
			balaclava="No";
			goggles="None";
		};
		class rhs_altyn_novisor_bala
		{
			model="rhs_altyn";
			visor="None";
			balaclava="Yes";
			goggles="None";
		};
		class rhs_altyn_novisor_ess
		{
			model="rhs_altyn";
			visor="None";
			balaclava="No";
			goggles="ESS";
		};
		class rhs_altyn_novisor_ess_bala
		{
			model="rhs_altyn";
			visor="None";
			balaclava="Yes";
			goggles="ESS";
		};
		class rhs_altyn_visordown
		{
			model="rhs_altyn";
			visor="Down";
			balaclava="No";
			goggles="None";
		};
		class rhs_altyn
		{
			model="rhs_altyn";
			visor="Up";
			balaclava="No";
			goggles="None";
		};
		class rhs_altyn_bala
		{
			model="rhs_altyn";
			visor="Up";
			balaclava="Yes";
			goggles="None";
		};
		class rhssaf_bandana_digital
		{
			model="rhs_bandana";
			camo="MDU10";
		};
		class rhssaf_bandana_digital_desert
		{
			model="rhs_bandana";
			camo="MDU10_DES";
		};
		class rhssaf_bandana_md2camo
		{
			model="rhs_bandana";
			camo="MDU02";
		};
		class rhssaf_bandana_oakleaf
		{
			model="rhs_bandana";
			camo="OAK_SAF";
		};
		class rhssaf_bandana_smb
		{
			model="rhs_bandana";
			camo="SMB";
		};
		class rhs_beanie_green
		{
			model="rhs_beanie";
			camo="GRN";
		};
		class rhs_beanie
		{
			model="rhs_beanie";
			camo="FloraBean";
		};
		class rhs_beret_mp2
		{
			model="rhs_beret_afrf";
			unit="MP";
			variant="2";
		};
		class rhs_beret_mp1
		{
			model="rhs_beret_afrf";
			unit="MP";
			variant="1";
		};
		class rhs_beret_mvd
		{
			model="rhs_beret_afrf";
			unit="MVD";
		};
		class rhs_beret_omon
		{
			model="rhs_beret_afrf";
			unit="OMON";
		};
		class rhs_beret_vdv3
		{
			model="rhs_beret_afrf";
			unit="VDV";
			variant="3";
		};
		class rhs_beret_vdv1
		{
			model="rhs_beret_afrf";
			unit="VDV";
			variant="1";
		};
		class rhs_beret_vdv2
		{
			model="rhs_beret_afrf";
			unit="VDV";
			variant="2";
		};
		class rhs_beret_vdv_early
		{
			model="rhs_beret_afrf";
			unit="VDV";
			variant="Early";
		};
		class rhs_beret_milp
		{
			model="rhs_beret_afrf";
			unit="VP";
		};
		class rhssaf_beret_para
		{
			model="rhs_beret_saf";
			camo="Airborne";
		};
		class rhssaf_beret_green
		{
			model="rhs_beret_saf";
			camo="Army";
		};
		class rhssaf_beret_black
		{
			model="rhs_beret_saf";
			camo="MP";
		};
		class rhssaf_beret_red
		{
			model="rhs_beret_saf";
			camo="Recon";
		};
		class rhssaf_beret_blue_un
		{
			model="rhs_beret_saf";
			camo="UN";
		};
		class rhs_Booniehat_digi
		{
			model="rhs_booniehat";
			camo="EMR_SUM";
		};
		class rhs_Booniehat_flora
		{
			model="rhs_booniehat";
			camo="FLRA";
		};
		class rhsgref_Booniehat_alpen
		{
			model="rhs_booniehat";
			camo="ALP";
		};
		class rhssaf_booniehat_digital
		{
			model="rhs_booniehat";
			camo="MDU10";
		};
		class rhssaf_booniehat_md2camo
		{
			model="rhs_booniehat";
			camo="MDU02";
		};
		class rhssaf_booniehat_woodland
		{
			model="rhs_booniehat";
			camo="WDL_SAF";
		};
		class rhs_Booniehat_m81
		{
			model="rhs_booniehat";
			camo="M81";
		};
		class rhs_booniehat2_marpatd
		{
			model="rhs_booniehat";
			camo="MRPT_D";
		};
		class rhs_booniehat2_marpatwd
		{
			model="rhs_booniehat";
			camo="MRPT_WD";
		};
		class rhs_Booniehat_ocp
		{
			model="rhs_booniehat";
			camo="OEF_CP";
		};
		class rhs_Booniehat_ucp
		{
			model="rhs_booniehat";
			camo="UCP";
		};
		class rhsusf_Bowman
		{
			model="rhs_bowman";
			cap="No";
		};
		class rhsusf_bowman_cap
		{
			model="rhs_bowman";
			cap="Yes";
		};
		class rhsusf_opscore_aor1
		{
			model="rhs_fast_ballistic";
			camo="AOR1";
			headset="No";
			accessory="None";
		};
		class rhsusf_opscore_aor1_pelt
		{
			model="rhs_fast_ballistic";
			camo="AOR1";
			headset="Yes";
			accessory="None";
		};
		class rhsusf_opscore_aor1_pelt_nsw
		{
			model="rhs_fast_ballistic";
			camo="AOR1";
			headset="Yes";
			accessory="NSW";
		};
		class rhsusf_opscore_aor2
		{
			model="rhs_fast_ballistic";
			camo="AOR2";
			headset="No";
			accessory="None";
		};
		class rhsusf_opscore_aor2_pelt
		{
			model="rhs_fast_ballistic";
			camo="AOR2";
			headset="Yes";
			accessory="None";
		};
		class rhsusf_opscore_aor2_pelt_nsw
		{
			model="rhs_fast_ballistic";
			camo="AOR2";
			headset="Yes";
			accessory="NSW";
		};
		class rhsusf_opscore_bk
		{
			model="rhs_fast_ballistic";
			camo="BLK";
			headset="No";
			accessory="None";
		};
		class rhsusf_opscore_bk_pelt
		{
			model="rhs_fast_ballistic";
			camo="BLK";
			headset="Yes";
			accessory="None";
		};
		class rhsusf_opscore_coy_cover
		{
			model="rhs_fast_ballistic";
			camo="CBR";
			headset="No";
			accessory="None";
		};
		class rhsusf_opscore_coy_cover_pelt
		{
			model="rhs_fast_ballistic";
			camo="CBR";
			headset="Yes";
			accessory="None";
		};
		class rhsusf_opscore_fg
		{
			model="rhs_fast_ballistic";
			camo="FOLGRN";
			headset="No";
			accessory="None";
		};
		class rhsusf_opscore_fg_pelt
		{
			model="rhs_fast_ballistic";
			camo="FOLGRN";
			headset="Yes";
			accessory="None";
		};
		class rhsusf_opscore_fg_pelt_cam
		{
			model="rhs_fast_ballistic";
			camo="FOLGRN";
			headset="Yes";
			accessory="Camera";
		};
		class rhsusf_opscore_fg_pelt_nsw
		{
			model="rhs_fast_ballistic";
			camo="FOLGRN";
			headset="Yes";
			accessory="NSW";
		};
		class rhsusf_opscore_mc_cover
		{
			model="rhs_fast_ballistic";
			camo="MC";
			headset="No";
			accessory="None";
		};
		class rhsusf_opscore_mc_cover_pelt
		{
			model="rhs_fast_ballistic";
			camo="MC";
			headset="Yes";
			accessory="None";
		};
		class rhsusf_opscore_mc_cover_pelt_nsw
		{
			model="rhs_fast_ballistic";
			camo="MC";
			headset="Yes";
			accessory="NSW";
		};
		class rhsusf_opscore_mc_cover_pelt_cam
		{
			model="rhs_fast_ballistic";
			camo="MC";
			headset="Yes";
			accessory="NSW & Cam.";
		};
		class rhsusf_opscore_mc
		{
			model="rhs_fast_ballistic";
			camo="MCPaint";
			headset="No";
			accessory="None";
		};
		class rhsusf_opscore_mc_pelt
		{
			model="rhs_fast_ballistic";
			camo="MCPaint";
			headset="Yes";
			accessory="None";
		};
		class rhsusf_opscore_mc_pelt_nsw
		{
			model="rhs_fast_ballistic";
			camo="MCPaint";
			headset="Yes";
			accessory="NSW";
		};
		class rhsusf_opscore_paint
		{
			model="rhs_fast_ballistic";
			camo="Paint";
			headset="No";
			accessory="None";
		};
		class rhsusf_opscore_paint_pelt
		{
			model="rhs_fast_ballistic";
			camo="Paint";
			headset="Yes";
			accessory="None";
		};
		class rhsusf_opscore_paint_pelt_nsw
		{
			model="rhs_fast_ballistic";
			camo="Paint";
			headset="Yes";
			accessory="NSW";
		};
		class rhsusf_opscore_paint_pelt_nsw_cam
		{
			model="rhs_fast_ballistic";
			camo="Paint";
			headset="Yes";
			accessory="NSW & Cam.";
		};
		class rhsusf_opscore_rg_cover
		{
			model="rhs_fast_ballistic";
			camo="RGR";
			headset="No";
			accessory="None";
		};
		class rhsusf_opscore_rg_cover_pelt
		{
			model="rhs_fast_ballistic";
			camo="RGR";
			headset="Yes";
			accessory="None";
		};
		class rhsusf_opscore_ut
		{
			model="rhs_fast_ballistic";
			camo="URBTAN";
			headset="No";
			accessory="None";
		};
		class rhsusf_opscore_ut_pelt
		{
			model="rhs_fast_ballistic";
			camo="URBTAN";
			headset="Yes";
			accessory="None";
		};
		class rhsusf_opscore_ut_pelt_cam
		{
			model="rhs_fast_ballistic";
			camo="URBTAN";
			headset="Yes";
			accessory="Camera";
		};
		class rhsusf_opscore_ut_pelt_nsw
		{
			model="rhs_fast_ballistic";
			camo="URBTAN";
			headset="Yes";
			accessory="NSW";
		};
		class rhsusf_opscore_ut_pelt_nsw_cam
		{
			model="rhs_fast_ballistic";
			camo="URBTAN";
			headset="Yes";
			accessory="NSW & Cam.";
		};
		class rhsusf_opscore_mar_fg
		{
			model="rhs_fast_maritime";
			camo="FOLGRN";
			headset="No";
		};
		class rhsusf_opscore_mar_fg_pelt
		{
			model="rhs_fast_maritime";
			camo="FOLGRN";
			headset="Yes";
		};
		class rhsusf_opscore_mar_ut
		{
			model="rhs_fast_maritime";
			camo="URBTAN";
			headset="No";
		};
		class rhsusf_opscore_mar_ut_pelt
		{
			model="rhs_fast_maritime";
			camo="URBTAN";
			headset="Yes";
		};
		class rhs_fieldcap
		{
			model="rhs_fieldcap";
			camo="FLRA";
			helmet="None";
		};
		class rhs_fieldcap_helm
		{
			model="rhs_fieldcap";
			camo="FLRA";
			helmet="6B27M";
		};
		class rhs_fieldcap_digi
		{
			model="rhs_fieldcap";
			camo="EMR_SUM";
			helmet="None";
		};
		class rhs_fieldcap_helm_digi
		{
			model="rhs_fieldcap";
			camo="EMR_SUM";
			helmet="6B27M";
		};
		class rhs_fieldcap_digi2
		{
			model="rhs_fieldcap";
			camo="EMR_2";
			helmet="None";
		};
		class rhs_fieldcap_izlom
		{
			model="rhs_fieldcap";
			camo="Izlom";
			helmet="None";
		};
		class rhs_fieldcap_ml
		{
			model="rhs_fieldcap";
			camo="MTNLES";
			helmet="None";
		};
		class rhs_fieldcap_helm_ml
		{
			model="rhs_fieldcap";
			camo="MTNLES";
			helmet="6B27M";
		};
		class rhs_fieldcap_khk
		{
			model="rhs_fieldcap";
			camo="KHK";
			helmet="None";
		};
		class rhs_fieldcap_vsr
		{
			model="rhs_fieldcap";
			camo="VSR";
			helmet="None";
		};
		class rhsgref_fieldcap_ttsko_digi
		{
			model="rhs_fieldcap";
			camo="TTsKO_CDF_DIGI";
			helmet="None";
		};
		class rhsgref_fieldcap_ttsko_forest
		{
			model="rhs_fieldcap";
			camo="TTsKO_CDF_FRS";
			helmet="None";
		};
		class rhsgref_fieldcap_ttsko_mountain
		{
			model="rhs_fieldcap";
			camo="TTsKO_CDF_MTN";
			helmet="None";
		};
		class rhsgref_fieldcap_ttsko_urban
		{
			model="rhs_fieldcap";
			camo="TTsKO_CDF_URB";
			helmet="None";
		};
		class rhs_fieldcap_m88
		{
			model="rhs_fieldcap_m88";
			camo="AFGKA";
			facing="Front";
		};
		class rhs_fieldcap_m88_back
		{
			model="rhs_fieldcap_m88";
			camo="AFGKA";
			facing="Back";
		};
		class rhs_fieldcap_m88_grey
		{
			model="rhs_fieldcap_m88";
			camo="GRY";
			facing="Front";
		};
		class rhs_fieldcap_m88_grey_back
		{
			model="rhs_fieldcap_m88";
			camo="GRY";
			facing="Back";
		};
		class rhs_fieldcap_m88_klmk
		{
			model="rhs_fieldcap_m88";
			camo="KLMK";
			facing="Front";
		};
		class rhs_fieldcap_m88_klmk_back
		{
			model="rhs_fieldcap_m88";
			camo="KLMK";
			facing="Back";
		};
		class rhs_fieldcap_m88_moldovan_ttsko_blue
		{
			model="rhs_fieldcap_m88";
			camo="TTsKO_MLDV_BLUE";
			facing="Front";
		};
		class rhs_fieldcap_m88_moldovan_ttsko_blue_back
		{
			model="rhs_fieldcap_m88";
			camo="TTsKO_MLDV_BLUE";
			facing="Back";
		};
		class rhs_fieldcap_m88_moldovan_ttsko_cold
		{
			model="rhs_fieldcap_m88";
			camo="TTsKO CLD";
			facing="Front";
		};
		class rhs_fieldcap_m88_moldovan_ttsko_cold_back
		{
			model="rhs_fieldcap_m88";
			camo="TTsKO CLD";
			facing="Back";
		};
		class rhs_fieldcap_m88_moldovan_ttsko_desat
		{
			model="rhs_fieldcap_m88";
			camo="TTsKO_MLDV_DESAT";
			facing="Front";
		};
		class rhs_fieldcap_m88_moldovan_ttsko_desat_back
		{
			model="rhs_fieldcap_m88";
			camo="TTsKO_MLDV_DESAT";
			facing="Back";
		};
		class rhs_fieldcap_m88_moldovan_ttsko_hot
		{
			model="rhs_fieldcap_m88";
			camo="TTsKO_MLDV_HOT";
			facing="Front";
		};
		class rhs_fieldcap_m88_moldovan_ttsko_hot_back
		{
			model="rhs_fieldcap_m88";
			camo="TTsKO_MLDV_HOT";
			facing="Back";
		};
		class rhs_fieldcap_m88_ttsko
		{
			model="rhs_fieldcap_m88";
			camo="TTsKO";
			facing="Front";
		};
		class rhs_fieldcap_m88_ttsko_back
		{
			model="rhs_fieldcap_m88";
			camo="TTsKO";
			facing="Back";
		};
		class rhs_fieldcap_m88_ttsko_alt
		{
			model="rhs_fieldcap_m88";
			camo="TTsKO_ALT";
			facing="Front";
		};
		class rhs_fieldcap_m88_ttsko_alt_back
		{
			model="rhs_fieldcap_m88";
			camo="TTsKO_ALT";
			facing="Back";
		};
		class rhs_fieldcap_m88_ttsko_vdv
		{
			model="rhs_fieldcap_m88";
			camo="TTsKO_AIR";
			facing="Front";
		};
		class rhs_fieldcap_m88_ttsko_vdv_back
		{
			model="rhs_fieldcap_m88";
			camo="TTsKO_AIR";
			facing="Back";
		};
		class rhs_fieldcap_m88_vsr
		{
			model="rhs_fieldcap_m88";
			camo="VSR";
			facing="Front";
		};
		class rhs_fieldcap_m88_vsr_back
		{
			model="rhs_fieldcap_m88";
			camo="VSR";
			facing="Back";
		};
		class rhs_fieldcap_m88_vsr_2
		{
			model="rhs_fieldcap_m88";
			camo="VSR_2";
			facing="Front";
		};
		class rhs_fieldcap_m88_vsr_2_back
		{
			model="rhs_fieldcap_m88";
			camo="VSR_2";
			facing="Back";
		};
		class rhs_fieldcap_m88_woodland
		{
			model="rhs_fieldcap_m88";
			camo="WDL";
			facing="Front";
		};
		class rhs_fieldcap_m88_woodland_back
		{
			model="rhs_fieldcap_m88";
			camo="WDL";
			facing="Back";
		};
		class rhs_cossack_visor_cap
		{
			model="rhs_furazkha";
			camo="BLK";
		};
		class rhs_cossack_visor_cap_tan
		{
			model="rhs_furazkha";
			camo="KHK";
		};
		class rhsusf_hgu56p_black
		{
			model="rhs_hgu56p";
			camo="BLK";
			mask="No";
			visor="No";
			livery="none";
		};
		class rhsusf_hgu56p_mask_black
		{
			model="rhs_hgu56p";
			camo="BLK";
			mask="Yes";
			visor="No";
			livery="none";
		};
		class rhsusf_hgu56p_visor_black
		{
			model="rhs_hgu56p";
			camo="BLK";
			mask="No";
			visor="Yes";
			livery="none";
		};
		class rhsusf_hgu56p_visor_mask_black
		{
			model="rhs_hgu56p";
			camo="BLK";
			mask="Yes";
			visor="Yes";
			livery="none";
		};
		class rhsusf_hgu56p_mask_black_skull
		{
			model="rhs_hgu56p";
			camo="BLK";
			mask="Yes";
			visor="No";
			livery="Skull";
		};
		class rhsusf_hgu56p_visor_mask_black_skull
		{
			model="rhs_hgu56p";
			camo="BLK";
			mask="Yes";
			visor="Yes";
			livery="Skull";
		};
		class rhsusf_hgu56p_visor_mask_Empire_black
		{
			model="rhs_hgu56p";
			camo="BLK";
			mask="Yes";
			visor="Yes";
			livery="Empire";
		};
		class rhsusf_hgu56p_green
		{
			model="rhs_hgu56p";
			camo="GRN";
			mask="No";
			visor="No";
			livery="none";
		};
		class rhsusf_hgu56p_mask_green
		{
			model="rhs_hgu56p";
			camo="GRN";
			mask="Yes";
			visor="No";
			livery="none";
		};
		class rhsusf_hgu56p_visor_green
		{
			model="rhs_hgu56p";
			camo="GRN";
			mask="No";
			visor="Yes";
			livery="none";
		};
		class rhsusf_hgu56p_visor_mask_green
		{
			model="rhs_hgu56p";
			camo="GRN";
			mask="Yes";
			visor="Yes";
			livery="none";
		};
		class rhsusf_hgu56p_mask_green_mo
		{
			model="rhs_hgu56p";
			camo="GRN";
			mask="Yes";
			visor="No";
			livery="Moustache";
		};
		class rhsusf_hgu56p_visor_mask_green_mo
		{
			model="rhs_hgu56p";
			camo="GRN";
			mask="Yes";
			visor="Yes";
			livery="Moustache";
		};
		class rhsusf_hgu56p
		{
			model="rhs_hgu56p";
			camo="OD";
			mask="No";
			visor="No";
			livery="none";
		};
		class rhsusf_hgu56p_mask
		{
			model="rhs_hgu56p";
			camo="OD";
			mask="Yes";
			visor="No";
			livery="none";
		};
		class rhsusf_hgu56p_visor
		{
			model="rhs_hgu56p";
			camo="OD";
			mask="No";
			visor="Yes";
			livery="none";
		};
		class rhsusf_hgu56p_visor_mask
		{
			model="rhs_hgu56p";
			camo="OD";
			mask="Yes";
			visor="Yes";
			livery="none";
		};
		class rhsusf_hgu56p_mask_mo
		{
			model="rhs_hgu56p";
			camo="OD";
			mask="Yes";
			visor="No";
			livery="Moustache";
		};
		class rhsusf_hgu56p_visor_mask_mo
		{
			model="rhs_hgu56p";
			camo="OD";
			mask="Yes";
			visor="Yes";
			livery="Moustache";
		};
		class rhsusf_hgu56p_mask_skull
		{
			model="rhs_hgu56p";
			camo="OD";
			mask="Yes";
			visor="No";
			livery="Skull";
		};
		class rhsusf_hgu56p_visor_mask_skull
		{
			model="rhs_hgu56p";
			camo="OD";
			mask="Yes";
			visor="Yes";
			livery="Skull";
		};
		class rhsusf_hgu56p_pink
		{
			model="rhs_hgu56p";
			camo="PNK";
			mask="No";
			visor="No";
			livery="none";
		};
		class rhsusf_hgu56p_mask_pink
		{
			model="rhs_hgu56p";
			camo="PNK";
			mask="Yes";
			visor="No";
			livery="none";
		};
		class rhsusf_hgu56p_visor_pink
		{
			model="rhs_hgu56p";
			camo="PNK";
			mask="No";
			visor="Yes";
			livery="none";
		};
		class rhsusf_hgu56p_visor_mask_pink
		{
			model="rhs_hgu56p";
			camo="PNK";
			mask="Yes";
			visor="Yes";
			livery="none";
		};
		class rhsusf_hgu56p_saf
		{
			model="rhs_hgu56p";
			camo="SAF";
			mask="No";
			visor="No";
			livery="none";
		};
		class rhsusf_hgu56p_mask_saf
		{
			model="rhs_hgu56p";
			camo="SAF";
			mask="Yes";
			visor="No";
			livery="none";
		};
		class rhsusf_hgu56p_visor_saf
		{
			model="rhs_hgu56p";
			camo="SAF";
			mask="No";
			visor="Yes";
			livery="none";
		};
		class rhsusf_hgu56p_visor_mask_saf
		{
			model="rhs_hgu56p";
			camo="SAF";
			mask="Yes";
			visor="Yes";
			livery="none";
		};
		class rhsusf_hgu56p_mask_smiley
		{
			model="rhs_hgu56p";
			camo="OD";
			mask="Yes";
			visor="No";
			livery="Smiley";
		};
		class rhsusf_hgu56p_visor_mask_smiley
		{
			model="rhs_hgu56p";
			camo="OD";
			mask="Yes";
			visor="Yes";
			livery="Smiley";
		};
		class rhsusf_hgu56p_tan
		{
			model="rhs_hgu56p";
			camo="TAN";
			mask="No";
			visor="No";
			livery="none";
		};
		class rhsusf_hgu56p_mask_tan
		{
			model="rhs_hgu56p";
			camo="TAN";
			mask="Yes";
			visor="No";
			livery="none";
		};
		class rhsusf_hgu56p_visor_tan
		{
			model="rhs_hgu56p";
			camo="TAN";
			mask="No";
			visor="Yes";
			livery="none";
		};
		class rhsusf_hgu56p_visor_mask_tan
		{
			model="rhs_hgu56p";
			camo="TAN";
			mask="Yes";
			visor="Yes";
			livery="none";
		};
		class rhsusf_hgu56p_usa
		{
			model="rhs_hgu56p";
			camo="USA";
			mask="No";
			visor="No";
			livery="none";
		};
		class rhsusf_hgu56p_visor_usa
		{
			model="rhs_hgu56p";
			camo="USA";
			mask="No";
			visor="Yes";
			livery="none";
		};
		class rhsusf_hgu56p_white
		{
			model="rhs_hgu56p";
			camo="WHT";
			mask="No";
			visor="No";
			livery="none";
		};
		class rhsusf_hgu56p_visor_white
		{
			model="rhs_hgu56p";
			camo="WHT";
			mask="No";
			visor="Yes";
			livery="none";
		};
		class rhsgref_6b27m_ttsko_digi
		{
			model="rhs_kaska";
			camo="TTsKO_CDF_DIGI";
		};
		class rhsgref_6b27m_ttsko_forest
		{
			model="rhs_kaska";
			camo="TTsKO_CDF_FRS";
		};
		class rhsgref_6b27m_ttsko_mountain
		{
			model="rhs_kaska";
			camo="TTsKO_CDF_MTN";
		};
		class rhsgref_6b27m_ttsko_urban
		{
			model="rhs_kaska";
			camo="TTsKO_CDF_URB";
		};
		class rhsusf_lwh_helmet_M1942
		{
			model="rhs_lwh";
			camo="M1942";
			goggles="None";
			headset="No";
		};
		class rhsusf_lwh_helmet_marpatd
		{
			model="rhs_lwh";
			camo="MRPT_D";
			goggles="None";
			headset="No";
		};
		class rhsusf_lwh_helmet_marpatd_ess
		{
			model="rhs_lwh";
			camo="MRPT_D";
			goggles="ESST";
			headset="No";
		};
		class rhsusf_lwh_helmet_marpatd_headset
		{
			model="rhs_lwh";
			camo="MRPT_D";
			goggles="ESST";
			headset="Yes";
		};
		class rhsusf_lwh_helmet_marpatwd
		{
			model="rhs_lwh";
			camo="MRPT_WD";
			goggles="None";
			headset="No";
		};
		class rhsusf_lwh_helmet_marpatwd_blk_ess
		{
			model="rhs_lwh";
			camo="MRPT_WD";
			goggles="ESSB";
			headset="No";
		};
		class rhsusf_lwh_helmet_marpatwd_headset_blk2
		{
			model="rhs_lwh";
			camo="MRPT_WD";
			goggles="None";
			headset="Yes";
		};
		class rhsusf_lwh_helmet_marpatwd_headset_blk
		{
			model="rhs_lwh";
			camo="MRPT_WD";
			goggles="ESSB";
			headset="Yes";
		};
		class rhsusf_lwh_helmet_marpatwd_headset
		{
			model="rhs_lwh";
			camo="MRPT_WD";
			goggles="ESST";
			headset="Yes";
		};
		class rhsusf_lwh_helmet_marpatwd_ess
		{
			model="rhs_lwh";
			camo="MRPT_WD";
			goggles="ESST";
			headset="No";
		};
		class rhsgref_helmet_M1_des
		{
			model="rhs_m1_helm";
			camo="6CDP";
			strap="Down";
		};
		class rhsgref_helmet_M1_erdl
		{
			model="rhs_m1_helm";
			camo="ERDL_H";
			strap="Down";
		};
		class rhsgref_helmet_M1_liner
		{
			model="rhs_m1_helm";
			camo="Liner";
			strap="Up";
		};
		class rhsgref_helmet_M1_mit
		{
			model="rhs_m1_helm";
			camo="Mitchell";
			strap="Up";
		};
		class rhsgref_helmet_M1_bare
		{
			model="rhs_m1_helm";
			camo="OG107";
			strap="Down";
		};
		class rhsgref_helmet_M1_bare_alt01
		{
			model="rhs_m1_helm";
			camo="OG107";
			strap="Up";
		};
		class rhsgref_helmet_M1_painted
		{
			model="rhs_m1_helm";
			camo="Painted";
			strap="Down";
		};
		class rhsgref_helmet_M1_painted_alt01
		{
			model="rhs_m1_helm";
			camo="Painted";
			strap="Up";
		};
		class rhsgref_helmet_m1940
		{
			model="rhs_m40_helm";
			camo="GRY";
			strap="Down";
		};
		class rhsgref_helmet_m1940_alt1
		{
			model="rhs_m40_helm";
			camo="GRY";
			strap="Up";
		};
		class rhsgref_helmet_m1940_camo01
		{
			model="rhs_m40_helm";
			camo="Painted";
			strap="Down";
		};
		class rhsgref_helmet_m1940_camo01_alt1
		{
			model="rhs_m40_helm";
			camo="Painted";
			strap="Up";
		};
		class rhsgref_helmet_m1940_winter
		{
			model="rhs_m40_helm";
			camo="Winter";
			strap="Down";
		};
		class rhsgref_helmet_m1940_winter_alt1
		{
			model="rhs_m40_helm";
			camo="Winter";
			strap="Up";
		};
		class rhsgref_helmet_m1942
		{
			model="rhs_m42_helm";
			camo="GRY";
			strap="Down";
		};
		class rhsgref_helmet_m1942_alt1
		{
			model="rhs_m42_helm";
			camo="GRY";
			strap="Up";
		};
		class rhsgref_helmet_m1942_camo01
		{
			model="rhs_m42_helm";
			camo="Painted";
			strap="Down";
		};
		class rhsgref_helmet_m1942_camo01_alt1
		{
			model="rhs_m42_helm";
			camo="Painted";
			strap="Up";
		};
		class rhsgref_helmet_m1942_winter
		{
			model="rhs_m42_helm";
			camo="Winter";
			strap="Down";
		};
		class rhsgref_helmet_m1942_winter_alt1
		{
			model="rhs_m42_helm";
			camo="Winter";
			strap="Up";
		};
		class rhsgref_helmet_m1942_heergreycover
		{
			model="rhs_m42_helm_cover";
			camo="Mouse";
		};
		class rhsgref_helmet_m1942_heersplintercover
		{
			model="rhs_m42_helm_cover";
			camo="Splitter31";
		};
		class rhsgref_helmet_m1942_heermarshcover
		{
			model="rhs_m42_helm_cover";
			camo="Sumpf44";
		};
		class rhsgref_helmet_m1942_heerwintercover
		{
			model="rhs_m42_helm_cover";
			camo="Winter";
		};
		class rhsgref_hat_m43cap_heer
		{
			model="rhs_m43_cap";
			tilt="No";
		};
		class rhsgref_hat_m43cap_heer1_tilted
		{
			model="rhs_m43_cap";
			tilt="Yes";
		};
		class rhssaf_helmet_m59_85_nocamo
		{
			model="rhs_m59_85";
			camo="None";
		};
		class rhssaf_helmet_m59_85_oakleaf
		{
			model="rhs_m59_85";
			camo="OAK_SAF";
		};
		class rhssaf_helmet_m97_digital
		{
			model="rhs_m97";
			camo="MDU10";
			goggles="None";
			veil="No";
		};
		class rhssaf_helmet_m97_digital_black_ess
		{
			model="rhs_m97";
			camo="MDU10";
			goggles="Covered";
			veil="No";
		};
		class rhssaf_helmet_m97_digital_black_ess_bare
		{
			model="rhs_m97";
			camo="MDU10";
			goggles="Uncovered";
			veil="No";
		};
		class rhssaf_helmet_m97_veil_digital
		{
			model="rhs_m97";
			camo="MDU10";
			goggles="None";
			veil="Yes";
		};
		class rhssaf_helmet_m97_black_nocamo
		{
			model="rhs_m97";
			camo="BLK";
			goggles="None";
			veil="No";
		};
		class rhssaf_helmet_m97_black_nocamo_black_ess
		{
			model="rhs_m97";
			camo="BLK";
			goggles="Covered";
			veil="No";
		};
		class rhssaf_helmet_m97_black_nocamo_black_ess_bare
		{
			model="rhs_m97";
			camo="BLK";
			goggles="Uncovered";
			veil="No";
		};
		class rhssaf_helmet_m97_nostrap_blue
		{
			model="rhs_m97";
			camo="UN";
			goggles="None";
			veil="No";
		};
		class rhssaf_helmet_m97_nostrap_blue_tan_ess
		{
			model="rhs_m97";
			camo="UN";
			goggles="Covered";
			veil="No";
		};
		class rhssaf_helmet_m97_nostrap_blue_tan_ess_bare
		{
			model="rhs_m97";
			camo="UN";
			goggles="Uncovered";
			veil="No";
		};
		class rhssaf_helmet_m97_md2camo
		{
			model="rhs_m97";
			camo="MDU02";
			goggles="None";
			veil="No";
		};
		class rhssaf_helmet_m97_md2camo_black_ess
		{
			model="rhs_m97";
			camo="MDU02";
			goggles="Covered";
			veil="No";
		};
		class rhssaf_helmet_m97_md2camo_black_ess_bare
		{
			model="rhs_m97";
			camo="MDU02";
			goggles="Uncovered";
			veil="No";
		};
		class rhssaf_helmet_m97_veil_md2camo
		{
			model="rhs_m97";
			camo="MDU02";
			goggles="None";
			veil="Yes";
		};
		class rhssaf_helmet_m97_oakleaf
		{
			model="rhs_m97";
			camo="OAK_SAF";
			goggles="None";
			veil="No";
		};
		class rhssaf_helmet_m97_oakleaf_black_ess
		{
			model="rhs_m97";
			camo="OAK_SAF";
			goggles="Covered";
			veil="No";
		};
		class rhssaf_helmet_m97_oakleaf_black_ess_bare
		{
			model="rhs_m97";
			camo="OAK_SAF";
			goggles="Uncovered";
			veil="No";
		};
		class rhssaf_helmet_m97_veil_oakleaf
		{
			model="rhs_m97";
			camo="OAK_SAF";
			goggles="None";
			veil="Yes";
		};
		class rhssaf_helmet_m97_olive_nocamo
		{
			model="rhs_m97";
			camo="OLI";
			goggles="None";
			veil="No";
		};
		class rhssaf_helmet_m97_olive_nocamo_black_ess
		{
			model="rhs_m97";
			camo="OLI";
			goggles="Covered";
			veil="No";
		};
		class rhssaf_helmet_m97_olive_nocamo_black_ess_bare
		{
			model="rhs_m97";
			camo="OLI";
			goggles="Uncovered";
			veil="No";
		};
		class rhssaf_helmet_m97_woodland
		{
			model="rhs_m97";
			camo="M81";
			goggles="None";
			veil="No";
		};
		class rhssaf_helmet_m97_woodland_black_ess
		{
			model="rhs_m97";
			camo="M81";
			goggles="Covered";
			veil="No";
		};
		class rhssaf_helmet_m97_woodland_black_ess_bare
		{
			model="rhs_m97";
			camo="M81";
			goggles="Uncovered";
			veil="No";
		};
		class rhssaf_helmet_m97_veil_woodland
		{
			model="rhs_m97";
			camo="M81";
			goggles="None";
			veil="Yes";
		};
		class rhsusf_mich_bare
		{
			model="rhs_mich2000";
			camo="GRN";
			rail="None";
			nvgmount="Rhino";
			headset="No";
		};
		class rhsusf_mich_bare_alt
		{
			model="rhs_mich2000";
			camo="GRN";
			rail="None";
			nvgmount="Rhino";
			headset="Ear Prot.";
		};
		class rhsusf_mich_bare_headset
		{
			model="rhs_mich2000";
			camo="GRN";
			rail="None";
			nvgmount="Rhino";
			headset="Stan.";
		};
		class rhsusf_mich_bare_norotos
		{
			model="rhs_mich2000";
			camo="GRN";
			rail="None";
			nvgmount="Norotos";
			headset="None";
		};
		class rhsusf_mich_bare_norotos_alt
		{
			model="rhs_mich2000";
			camo="GRN";
			rail="None";
			nvgmount="Norotos";
			headset="Ear Prot.";
		};
		class rhsusf_mich_bare_norotos_alt_headset
		{
			model="rhs_mich2000";
			camo="GRN";
			rail="None";
			nvgmount="Norotos";
			headset="Stan.";
		};
		class rhsusf_mich_bare_norotos_arc
		{
			model="rhs_mich2000";
			camo="GRN";
			rail="ARC";
			nvgmount="Norotos";
			headset="None";
		};
		class rhsusf_mich_bare_norotos_arc_alt
		{
			model="rhs_mich2000";
			camo="GRN";
			rail="ARC";
			nvgmount="Norotos";
			headset="Ear Prot.";
		};
		class rhsusf_mich_bare_norotos_arc_alt_headset
		{
			model="rhs_mich2000";
			camo="GRN";
			rail="ARC";
			nvgmount="Norotos";
			headset="Stan.";
		};
		class rhsusf_mich_bare_norotos_arc_headset
		{
			model="rhs_mich2000";
			camo="GRN";
			rail="ARC";
			nvgmount="Norotos";
			headset="Stan.";
		};
		class rhsusf_mich_bare_norotos_headset
		{
			model="rhs_mich2000";
			camo="GRN";
			rail="None";
			nvgmount="Norotos";
			headset="Stan.";
		};
		class rhsusf_mich_bare_semi
		{
			model="rhs_mich2000";
			camo="SemiArid";
			rail="None";
			nvgmount="Rhino";
			headset="No";
		};
		class rhsusf_mich_bare_alt_semi
		{
			model="rhs_mich2000";
			camo="SemiArid";
			rail="None";
			nvgmount="Rhino";
			headset="Ear Prot.";
		};
		class rhsusf_mich_bare_semi_headset
		{
			model="rhs_mich2000";
			camo="SemiArid";
			rail="None";
			nvgmount="Rhino";
			headset="Stan.";
		};
		class rhsusf_mich_bare_norotos_semi
		{
			model="rhs_mich2000";
			camo="SemiArid";
			rail="None";
			nvgmount="Norotos";
			headset="None";
		};
		class rhsusf_mich_bare_norotos_alt_semi
		{
			model="rhs_mich2000";
			camo="SemiArid";
			rail="None";
			nvgmount="Norotos";
			headset="Ear Prot.";
		};
		class rhsusf_mich_bare_norotos_alt_semi_headset
		{
			model="rhs_mich2000";
			camo="SemiArid";
			rail="None";
			nvgmount="Norotos";
			headset="Stan.";
		};
		class rhsusf_mich_bare_norotos_arc_semi
		{
			model="rhs_mich2000";
			camo="SemiArid";
			rail="ARC";
			nvgmount="Norotos";
			headset="None";
		};
		class rhsusf_mich_bare_norotos_arc_alt_semi
		{
			model="rhs_mich2000";
			camo="SemiArid";
			rail="ARC";
			nvgmount="Norotos";
			headset="Ear Prot.";
		};
		class rhsusf_mich_bare_norotos_arc_alt_semi_headset
		{
			model="rhs_mich2000";
			camo="SemiArid";
			rail="ARC";
			nvgmount="Norotos";
			headset="Stan.";
		};
		class rhsusf_mich_bare_norotos_arc_semi_headset
		{
			model="rhs_mich2000";
			camo="SemiArid";
			rail="ARC";
			nvgmount="Norotos";
			headset="Stan.";
		};
		class rhsusf_mich_bare_norotos_semi_headset
		{
			model="rhs_mich2000";
			camo="SemiArid";
			rail="None";
			nvgmount="Norotos";
			headset="Stan.";
		};
		class rhsusf_mich_bare_tan
		{
			model="rhs_mich2000";
			camo="TAN";
			rail="None";
			nvgmount="Rhino";
			headset="No";
		};
		class rhsusf_mich_bare_alt_tan
		{
			model="rhs_mich2000";
			camo="TAN";
			rail="None";
			nvgmount="Rhino";
			headset="Ear Prot.";
		};
		class rhsusf_mich_bare_tan_headset
		{
			model="rhs_mich2000";
			camo="TAN";
			rail="None";
			nvgmount="Rhino";
			headset="Stan.";
		};
		class rhsusf_mich_bare_norotos_tan
		{
			model="rhs_mich2000";
			camo="TAN";
			rail="None";
			nvgmount="Norotos";
			headset="None";
		};
		class rhsusf_mich_bare_norotos_alt_tan
		{
			model="rhs_mich2000";
			camo="TAN";
			rail="None";
			nvgmount="Norotos";
			headset="Ear Prot.";
		};
		class rhsusf_mich_bare_norotos_alt_tan_headset
		{
			model="rhs_mich2000";
			camo="TAN";
			rail="None";
			nvgmount="Norotos";
			headset="Stan.";
		};
		class rhsusf_mich_bare_norotos_arc_tan
		{
			model="rhs_mich2000";
			camo="TAN";
			rail="ARC";
			nvgmount="Norotos";
			headset="None";
		};
		class rhsusf_mich_bare_norotos_arc_alt_tan
		{
			model="rhs_mich2000";
			camo="Tan";
			rail="ARC";
			nvgmount="Norotos";
			headset="Ear Prot.";
		};
		class rhsusf_mich_bare_norotos_arc_alt_tan_headset
		{
			model="rhs_mich2000";
			camo="TAN";
			rail="ARC";
			nvgmount="Norotos";
			headset="Stan.";
		};
		class rhsusf_mich_bare_norotos_tan_headset
		{
			model="rhs_mich2000";
			camo="TAN";
			rail="None";
			nvgmount="Norotos";
			headset="Stan.";
		};
		class rhsusf_mich_helmet_marpatd
		{
			model="rhs_mich2000";
			camo="MRPT_D";
			rail="None";
			nvgmount="Rhino";
			headset="No";
			belt="Yes";
		};
		class rhsusf_mich_helmet_marpatd_alt
		{
			model="rhs_mich2000";
			camo="MRPT_D";
			rail="None";
			nvgmount="Rhino";
			headset="No";
			belt="No";
		};
		class rhsusf_mich_helmet_marpatd_alt_headset
		{
			model="rhs_mich2000";
			camo="MRPT_D";
			rail="None";
			nvgmount="Rhino";
			headset="Stan.";
			belt="No";
		};
		class rhsusf_mich_helmet_marpatd_headset
		{
			model="rhs_mich2000";
			camo="MRPT_D";
			rail="None";
			nvgmount="Rhino";
			headset="Stan.";
			belt="Yes";
		};
		class rhsusf_mich_helmet_marpatd_norotos
		{
			model="rhs_mich2000";
			camo="MRPT_D";
			rail="None";
			nvgmount="Norotos";
			headset="No";
			belt="No";
		};
		class rhsusf_mich_helmet_marpatd_norotos_arc
		{
			model="rhs_mich2000";
			camo="MRPT_D";
			rail="ARC";
			nvgmount="Norotos";
			headset="No";
			belt="No";
		};
		class rhsusf_mich_helmet_marpatd_norotos_arc_headset
		{
			model="rhs_mich2000";
			camo="MRPT_D";
			rail="ARC";
			nvgmount="Norotos";
			headset="Stan.";
			belt="No";
		};
		class rhsusf_mich_helmet_marpatd_norotos_headset
		{
			model="rhs_mich2000";
			camo="MRPT_D";
			rail="None";
			nvgmount="Norotos";
			headset="Stan.";
			belt="No";
		};
		class rhsusf_mich_helmet_marpatwd
		{
			model="rhs_mich2000";
			camo="MRPT_WD";
			rail="None";
			nvgmount="Rhino";
			headset="No";
			belt="Yes";
		};
		class rhsusf_mich_helmet_marpatwd_alt
		{
			model="rhs_mich2000";
			camo="MRPT_WD";
			rail="None";
			nvgmount="Rhino";
			headset="No";
			belt="No";
		};
		class rhsusf_mich_helmet_marpatwd_alt_headset
		{
			model="rhs_mich2000";
			camo="MRPT_WD";
			rail="None";
			nvgmount="Rhino";
			headset="Stan.";
			belt="No";
		};
		class rhsusf_mich_helmet_marpatwd_headset
		{
			model="rhs_mich2000";
			camo="MRPT_WD";
			rail="None";
			nvgmount="Rhino";
			headset="Stan.";
			belt="Yes";
		};
		class rhsusf_mich_helmet_marpatwd_norotos
		{
			model="rhs_mich2000";
			camo="MRPT_WD";
			rail="None";
			nvgmount="Norotos";
			headset="No";
			belt="No";
		};
		class rhsusf_mich_helmet_marpatwd_norotos_arc
		{
			model="rhs_mich2000";
			camo="MRPT_WD";
			rail="ARC";
			nvgmount="Norotos";
			headset="No";
			belt="No";
		};
		class rhsusf_mich_helmet_marpatwd_norotos_arc_headset
		{
			model="rhs_mich2000";
			camo="MRPT_WD";
			rail="ARC";
			nvgmount="Norotos";
			headset="Stan.";
			belt="No";
		};
		class rhsusf_mich_helmet_marpatwd_norotos_headset
		{
			model="rhs_mich2000";
			camo="MRPT_WD";
			rail="None";
			nvgmount="Norotos";
			headset="Stan.";
			belt="No";
		};
		class rhsgref_helmet_pasgt_3color_desert
		{
			model="rhs_pasgt";
			camo="DCP";
			nvg="none";
		};
		class rhsgref_helmet_pasgt_3color_desert_rhino
		{
			model="rhs_pasgt";
			camo="DCP";
			nvg="rhino";
		};
		class rhsgref_helmet_pasgt_altis_lizard
		{
			model="rhs_pasgt";
			camo="LIZ_ATS";
			nvg="none";
		};
		class rhsgref_helmet_pasgt_erdl
		{
			model="rhs_pasgt";
			camo="ERDL_L";
			nvg="none";
		};
		class rhsgref_helmet_pasgt_erdl_rhino
		{
			model="rhs_pasgt";
			camo="ERDL_L";
			nvg="rhino";
		};
		class rhsgref_helmet_pasgt_flecktarn
		{
			model="rhs_pasgt";
			camo="FLCK";
			nvg="rhino";
		};
		class rhsgref_helmet_pasgt_olive
		{
			model="rhs_pasgt";
			camo="OLI";
			nvg="none";
		};
		class rhsgref_helmet_pasgt_press
		{
			model="rhs_pasgt";
			camo="Press";
			nvg="none";
		};
		class rhsgref_helmet_pasgt_un
		{
			model="rhs_pasgt";
			camo="UN";
			nvg="none";
		};
		class rhsgref_helmet_pasgt_woodland
		{
			model="rhs_pasgt";
			camo="M81";
			nvg="none";
		};
		class rhsgref_helmet_pasgt_woodland_rhino
		{
			model="rhs_pasgt";
			camo="M81";
			nvg="rhino";
		};
		class rhsusf_patrolcap_ocp
		{
			model="rhs_patrolcap";
			camo="OEF_CP";
		};
		class rhsusf_patrolcap_ucp
		{
			model="rhs_patrolcap";
			camo="UCP";
		};
		class rhsusf_protech_helmet
		{
			model="rhs_protech_sf";
			goggles="None";
			nvgmount="None";
		};
		class rhsusf_protech_helmet_ess
		{
			model="rhs_protech_sf";
			goggles="ESS";
			nvgmount="None";
		};
		class rhsusf_protech_helmet_rhino
		{
			model="rhs_protech_sf";
			goggles="None";
			nvgmount="Rhino";
		};
		class rhsusf_protech_helmet_rhino_ess
		{
			model="rhs_protech_sf";
			goggles="ESS";
			nvgmount="Rhino";
		};
		class rhs_ssh68_2
		{
			model="rhs_ssh68";
			camo="GRN";
		};
		class rhsgref_ssh68_emr
		{
			model="rhs_ssh68";
			camo="EMR_SUM";
		};
		class rhsgref_ssh68_ttsko_digi
		{
			model="rhs_ssh68";
			camo="TTsKO_CDF_DIGI";
		};
		class rhsgref_ssh68_ttsko_forest
		{
			model="rhs_ssh68";
			camo="TTsKO_CDF_FRS";
		};
		class rhsgref_ssh68_ttsko_mountain
		{
			model="rhs_ssh68";
			camo="TTsKO_CDF_MTN";
		};
		class rhsgref_ssh68_ttsko_dark
		{
			model="rhs_ssh68";
			camo="TTsKO_CDF_URB";
		};
		class rhsgref_ssh68_un
		{
			model="rhs_ssh68";
			camo="UN";
		};
		class rhsgref_ssh68_vsr
		{
			model="rhs_ssh68";
			camo="VSR";
		};
		class rhs_stsh81
		{
			model="rhs_stsh81";
			camo="GRN";
		};
		class rhs_stsh81_butan
		{
			model="rhs_stsh81";
			camo="TTsKO";
		};
		class rhs_tsh4
		{
			model="rhs_tsh4";
			goggles="None";
			balaclava="No";
		};
		class rhs_tsh4_bala
		{
			model="rhs_tsh4";
			goggles="None";
			balaclava="Yes";
		};
		class rhs_tsh4_ess
		{
			model="rhs_tsh4";
			goggles="ESS";
			balaclava="No";
		};
		class rhs_tsh4_ess_bala
		{
			model="rhs_tsh4";
			goggles="ESS";
			balaclava="Yes";
		};
		class rhs_8point_marpatd
		{
			model="rhs_utilitycap";
			camo="MRPT_D";
		};
		class rhs_8point_marpatwd
		{
			model="rhs_utilitycap";
			camo="MRPT_WD";
		};
		class rhs_vkpo_cap
		{
			model="rhs_vkpo_cap";
			camo="STD";
		};
		class rhs_vkpo_cap_alt
		{
			model="rhs_vkpo_cap";
			camo="ALT";
		};
		class rhs_zsh7a_mike
		{
			model="rhs_zsh7a";
			camo="WHT";
			mask="None";
			visor="Up";
		};
		class rhs_zsh7a_mike_alt
		{
			model="rhs_zsh7a";
			camo="WHT";
			mask="None";
			visor="Down";
		};
		class rhs_zsh7a_mike_green
		{
			model="rhs_zsh7a";
			camo="GRN";
			mask="None";
			visor="Up";
		};
		class rhs_zsh7a_mike_green_alt
		{
			model="rhs_zsh7a";
			camo="GRN";
			mask="None";
			visor="Down";
		};
		class rhs_zsh7a
		{
			model="rhs_zsh7a";
			camo="WHT";
			mask="KM-35";
			visor="Up";
		};
		class rhs_zsh7a_alt
		{
			model="rhs_zsh7a";
			camo="WHT";
			mask="KM-35";
			visor="Down";
		};
		class rhs_uniform_6sh122_v2
		{
			model="rhs_6sh122";
			camo="Fall";
			gloves="No";
		};
		class rhs_uniform_6sh122_gloves_v2
		{
			model="rhs_6sh122";
			camo="Fall";
			gloves="Yes";
		};
		class rhs_uniform_6sh122_v1
		{
			model="rhs_6sh122";
			camo="Spring";
			gloves="No";
		};
		class rhs_uniform_6sh122_gloves_v1
		{
			model="rhs_6sh122";
			camo="Spring";
			gloves="Yes";
		};
		class rhs_uniform_FROG01_d
		{
			model="rhs_FROG";
			camo="MRPT_D";
		};
		class rhs_uniform_FROG01_wd
		{
			model="rhs_FROG";
			camo="MRPT_WD";
		};
		class rhs_uniform_acu_ocp
		{
			model="rhs_acu";
			camo="OCP";
			irflag="No";
		};
		class rhs_uniform_acu_oefcp
		{
			model="rhs_acu";
			camo="OEF_CP";
			irflag="No";
		};
		class rhs_uniform_acu_ucp
		{
			model="rhs_acu";
			camo="UCP";
			irflag="No";
		};
		class rhs_uniform_acu_ucp2
		{
			model="rhs_acu";
			camo="UCP";
			irflag="Yes";
		};
		class rhs_uniform_acu_ucpd
		{
			model="rhs_acu";
			camo="UCP_D";
			irflag="No";
		};
		class rhs_uniform_cu_ocp
		{
			model="rhs_cu";
			camo="OCP";
			unit="User-Defined";
		};
		class rhs_uniform_cu_ocp_101st
		{
			model="rhs_cu";
			camo="OCP";
			unit="101st Air.";
		};
		class rhs_uniform_cu_ocp_10th
		{
			model="rhs_cu";
			camo="OCP";
			unit="10th Mtn.";
		};
		class rhs_uniform_cu_ocp_1stcav
		{
			model="rhs_cu";
			camo="OCP";
			unit="1st Cav.";
		};
		class rhs_uniform_cu_ocp_82nd
		{
			model="rhs_cu";
			camo="OCP";
			unit="82nd Air.";
		};
		class rhs_uniform_cu_ucp
		{
			model="rhs_cu";
			camo="UCP";
			unit="User-Defined";
		};
		class rhs_uniform_cu_ucp_101st
		{
			model="rhs_cu";
			camo="UCP";
			unit="101st Air.";
		};
		class rhs_uniform_cu_ucp_10th
		{
			model="rhs_cu";
			camo="UCP";
			unit="10th Mtn.";
		};
		class rhs_uniform_cu_ucp_1stcav
		{
			model="rhs_cu";
			camo="UCP";
			unit="1st Cav.";
		};
		class rhs_uniform_cu_ucp_82nd
		{
			model="rhs_cu";
			camo="UCP";
			unit="82nd Air.";
		};
		class rhs_uniform_df15
		{
			model="rhs_df15_2";
			camo="BLU";
		};
		class rhs_uniform_df15_tan
		{
			model="rhs_df15_2";
			camo="TAN";
		};
		class rhssaf_uniform_mig29_pilot
		{
			model="rhs_df15_saf";
			insignia="JET";
		};
		class rhssaf_uniform_heli_pilot
		{
			model="rhs_df15_saf";
			insignia="HELI";
		};
		class rhs_uniform_emr_patchless
		{
			model="rhs_emr";
			camo="EMR_SUM";
			unit="Generic";
		};
		class rhs_uniform_vdv_emr
		{
			model="rhs_emr";
			camo="EMR_SUM";
			unit="VDV";
		};
		class rhs_uniform_emr_des_patchless
		{
			model="rhs_emr";
			camo="EMR_DES";
			unit="Generic";
		};
		class rhs_uniform_vdv_emr_des
		{
			model="rhs_emr";
			camo="EMR_DES";
			unit="VDV";
		};
		class rhs_uniform_flora_patchless
		{
			model="rhs_flora";
			camo="FLRA";
			unit="Generic";
		};
		class rhs_uniform_flora_patchless_alt
		{
			model="rhs_flora";
			camo="FLRA_ALT";
			unit="Generic";
		};
		class rhs_uniform_flora
		{
			model="rhs_flora";
			camo="FLRA";
			unit="MSV";
		};
		class rhs_uniform_rva_flora
		{
			model="rhs_flora";
			camo="FLRA";
			unit="RVA";
		};
		class rhs_uniform_vdv_flora
		{
			model="rhs_flora";
			camo="FLRA";
			unit="VDV";
		};
		class rhs_uniform_vmf_flora
		{
			model="rhs_flora";
			camo="FLRA";
			unit="VMF";
		};
		class rhs_uniform_vmf_flora_subdued
		{
			model="rhs_flora";
			camo="FLRA";
			unit="VMF 2";
		};
		class rhs_uniform_mflora_patchless
		{
			model="rhs_flora";
			camo="FLRA_MTN";
			unit="Generic";
		};
		class rhs_uniform_vdv_mflora
		{
			model="rhs_flora";
			camo="FLRA_MTN";
			unit="VDV";
		};
		class rhs_uniform_g3_aor2
		{
			model="rhs_g3";
			camo="AOR2";
		};
		class rhs_uniform_g3_blk
		{
			model="rhs_g3";
			camo="BLK";
		};
		class rhs_uniform_g3_m81
		{
			model="rhs_g3";
			camo="M81";
		};
		class rhs_uniform_g3_mc
		{
			model="rhs_g3";
			camo="MC";
		};
		class rhs_uniform_g3_rgr
		{
			model="rhs_g3";
			camo="RGR";
		};
		class rhs_uniform_g3_tan
		{
			model="rhs_g3";
			camo="TAN";
		};
		class rhs_uniform_gorka_1_a
		{
			model="rhs_gorka_1";
			camo="AFGKA";
		};
		class rhs_uniform_gorka_1_b
		{
			model="rhs_gorka_1";
			camo="Spetsodezhda";
		};
		class rhsgref_uniform_gorka_1_f
		{
			model="rhs_gorka_1";
			camo="FLCK";
		};
		class rhs_uniform_gorka_r_g
		{
			model="rhs_gorka_r";
			camo="GRN";
			gloves="No";
		};
		class rhs_uniform_gorka_r_g_gloves
		{
			model="rhs_gorka_r";
			camo="GRN";
			gloves="Yes";
		};
		class rhs_uniform_gorka_r_y
		{
			model="rhs_gorka_r";
			camo="YLW";
			gloves="No";
		};
		class rhs_uniform_gorka_r_y_gloves
		{
			model="rhs_gorka_r";
			camo="YLW";
			gloves="Yes";
		};
		class rhsgref_uniform_TLA_1
		{
			model="rhs_gue_unif_tna";
			pantscamo="LIZ_TNA";
		};
		class rhsgref_uniform_TLA_2
		{
			model="rhs_gue_unif_tna";
			pantscamo="OLI";
		};
		class rhssaf_uniform_m10_digital
		{
			model="rhs_m10";
			camo="MDU10";
		};
		class rhssaf_uniform_m10_digital_desert
		{
			model="rhs_m10";
			camo="MDU10_DES";
		};
		class rhssaf_uniform_m10_digital_summer
		{
			model="rhs_m10";
			camo="MDU10_SUM";
		};
		class rhssaf_uniform_m10_digital_tan_boots
		{
			model="rhs_m10";
			camo="MDU10_SUM_2";
		};
		class rhsgref_uniform_para_ttsko_mountain
		{
			model="rhs_m10";
			camo="TTsKO_GUE_MTN";
		};
		class rhsgref_uniform_para_ttsko_oxblood
		{
			model="rhs_m10";
			camo="TTsKO_GUE_OX";
		};
		class rhsgref_uniform_para_ttsko_urban
		{
			model="rhs_m10";
			camo="TTsKO_GUE_URB";
		};
		class rhs_uniform_afghanka
		{
			model="rhs_m88";
			camo="AFGKA";
			coat="Standard";
			boots="Standard";
		};
		class rhs_uniform_afghanka_grey
		{
			model="rhs_m88";
			camo="GRY";
			coat="Standard";
			boots="Standard";
		};
		class rhs_uniform_afghanka_klmk
		{
			model="rhs_m88";
			camo="KLMK";
			coat="Standard";
			boots="Standard";
		};
		class rhs_uniform_afghanka_moldovan_ttsko_blue
		{
			model="rhs_m88";
			camo="TTsKO_MLDV_BLUE";
			coat="Standard";
			boots="Standard";
		};
		class rhs_uniform_afghanka_moldovan_ttsko_cold
		{
			model="rhs_m88";
			camo="TTsKO_MLDV_COLD";
			coat="Standard";
			boots="Standard";
		};
		class rhs_uniform_afghanka_moldovan_ttsko_desat
		{
			model="rhs_m88";
			camo="TTsKO_MLDV_DESAT";
			coat="Standard";
			boots="Standard";
		};
		class rhs_uniform_afghanka_moldovan_ttsko_hot
		{
			model="rhs_m88";
			camo="TTsKO_MLDV_HOT";
			coat="Standard";
			boots="Standard";
		};
		class rhs_uniform_afghanka_spetsodezhda
		{
			model="rhs_m88";
			camo="Spetsodezhda";
			coat="Standard";
			boots="Standard";
		};
		class rhs_uniform_afghanka_ttsko
		{
			model="rhs_m88";
			camo="TTsKO";
			coat="Standard";
			boots="Standard";
		};
		class rhs_uniform_afghanka_ttsko_2
		{
			model="rhs_m88";
			camo="TTsKO_ALT";
			coat="Standard";
			boots="Standard";
		};
		class rhs_uniform_afghanka_vsr_1
		{
			model="rhs_m88";
			camo="VSR_2";
			coat="Standard";
			boots="Standard";
		};
		class rhs_uniform_afghanka_vsr_2
		{
			model="rhs_m88";
			camo="VSR";
			coat="Standard";
			boots="Standard";
		};
		class rhs_uniform_afghanka_vsr_3
		{
			model="rhs_m88";
			camo="VSR_3";
			coat="Standard";
			boots="Standard";
		};
		class rhs_uniform_afghanka_wdl
		{
			model="rhs_m88";
			camo="M81";
			coat="Standard";
			boots="Standard";
		};
		class rhs_uniform_afghanka_boots
		{
			model="rhs_m88";
			camo="AFGKA";
			coat="Standard";
			boots="Sapogi";
		};
		class rhs_uniform_afghanka_boots_moldovan_ttsko_cold
		{
			model="rhs_m88";
			camo="TTsKO_MLDV_COLD";
			coat="Standard";
			boots="Sapogi";
		};
		class rhs_uniform_afghanka_boots_moldovan_ttsko_desat
		{
			model="rhs_m88";
			camo="TTsKO_MLDV_DESAT";
			coat="Standard";
			boots="Sapogi";
		};
		class rhs_uniform_afghanka_boots_moldovan_ttsko_hot
		{
			model="rhs_m88";
			camo="TTsKO_MLDV_HOT";
			coat="Standard";
			boots="Sapogi";
		};
		class rhs_uniform_afghanka_boots_spetsodezhda
		{
			model="rhs_m88";
			camo="Spetsodezhda";
			coat="Standard";
			boots="Sapogi";
		};
		class rhs_uniform_afghanka_boots_ttsko
		{
			model="rhs_m88";
			camo="TTsKO";
			coat="Standard";
			boots="Sapogi";
		};
		class rhs_uniform_afghanka_winter
		{
			model="rhs_m88";
			camo="AFGKA";
			coat="Winter";
			boots="Standard";
		};
		class rhs_uniform_afghanka_winter_moldovan_ttsko
		{
			model="rhs_m88";
			camo="TTsKO_MLDV_COLD";
			coat="Winter";
			boots="Standard";
		};
		class rhs_uniform_afghanka_winter_spetsodezhda
		{
			model="rhs_m88";
			camo="Spetsodezhda";
			coat="Winter";
			boots="Standard";
		};
		class rhs_uniform_afghanka_winter_ttsko
		{
			model="rhs_m88";
			camo="TTsKO";
			coat="Winter";
			boots="Standard";
		};
		class rhs_uniform_afghanka_winter_vsr
		{
			model="rhs_m88";
			camo="VSR_2";
			coat="Winter";
			boots="Standard";
		};
		class rhs_uniform_afghanka_winter_vsr_2
		{
			model="rhs_m88";
			camo="VSR";
			coat="Winter";
			boots="Standard";
		};
		class rhs_uniform_afghanka_winter_vsr_3
		{
			model="rhs_m88";
			camo="VSR_3";
			coat="Winter";
			boots="Standard";
		};
		class rhs_uniform_afghanka_winter_boots
		{
			model="rhs_m88";
			camo="AFGKA";
			coat="Winter";
			boots="Sapogi";
		};
		class rhs_uniform_afghanka_winter_boots_moldovan_ttsko
		{
			model="rhs_m88";
			camo="TTsKO_MLDV_COLD";
			coat="Winter";
			boots="Sapogi";
		};
		class rhs_uniform_afghanka_winter_boots_spetsodezhda
		{
			model="rhs_m88";
			camo="Spetsodezhda";
			coat="Winter";
			boots="Sapogi";
		};
		class rhs_uniform_afghanka_winter_boots_ttsko
		{
			model="rhs_m88";
			camo="TTsKO";
			coat="Winter";
			boots="Sapogi";
		};
		class rhs_uniform_afghanka_winter_boots_vsr
		{
			model="rhs_m88";
			camo="VSR_2";
			coat="Winter";
			boots="Sapogi";
		};
		class rhs_uniform_afghanka_winter_boots_vsr_2
		{
			model="rhs_m88";
			camo="VSR";
			coat="Winter";
			boots="Sapogi";
		};
		class rhsgref_uniform_vsr
		{
			model="rhs_m88_cdf";
			camo="VSR";
		};
		class rhsgref_uniform_ttsko_forest
		{
			model="rhs_m88_cdf";
			camo="TTsKO_CDF_FRS";
		};
		class rhsgref_uniform_ttsko_mountain
		{
			model="rhs_m88_cdf";
			camo="TTsKO_CDF_MTN";
		};
		class rhsgref_uniform_ttsko_urban
		{
			model="rhs_m88_cdf";
			camo="TTsKO_CDF_URB";
		};
		class rhs_uniform_afghanka_para
		{
			model="rhs_m88_vdv";
			camo="AFGKA";
		};
		class rhs_uniform_afghanka_para_ttsko
		{
			model="rhs_m88_vdv";
			camo="TTsKO_AIR";
		};
		class rhs_uniform_afghanka_para_ttsko_2
		{
			model="rhs_m88_vdv";
			camo="TTsKO";
		};
		class rhs_uniform_afghanka_para_vsr
		{
			model="rhs_m88_vdv";
			camo="VSR_VDV";
		};
		class rhs_uniform_afghanka_para_vsr_2
		{
			model="rhs_m88_vdv";
			camo="VSR_VDV_2";
		};
		class rhsgref_uniform_3color_desert
		{
			model="rhs_m93";
			camo="DCP";
			pantscamo="match";
		};
		class rhsgref_uniform_alpenflage
		{
			model="rhs_m93";
			camo="ALP";
			pantscamo="match";
		};
		class rhsgref_uniform_altis_lizard
		{
			model="rhs_m93";
			camo="LIZ_ATS";
			pantscamo="match";
		};
		class rhsgref_uniform_altis_lizard_olive
		{
			model="rhs_m93";
			camo="LIZ_ATS";
			pantscamo="OLI";
		};
		class rhsgref_uniform_dpm
		{
			model="rhs_m93";
			camo="DPM";
			pantscamo="match";
		};
		class rhsgref_uniform_dpm_olive
		{
			model="rhs_m93";
			camo="DPM";
			pantscamo="OLI";
		};
		class rhsgref_uniform_ERDL
		{
			model="rhs_m93";
			camo="ERDL_L";
			pantscamo="match";
		};
		class rhsgref_uniform_flecktarn
		{
			model="rhs_m93";
			camo="FLCK";
			pantscamo="OLI";
		};
		class rhsgref_uniform_flecktarn_full
		{
			model="rhs_m93";
			camo="FLCK";
			pantscamo="match";
		};
		class rhssaf_uniform_m93_oakleaf
		{
			model="rhs_m93";
			camo="OAK_SAF";
			pantscamo="match";
		};
		class rhssaf_uniform_m93_oakleaf_summer
		{
			model="rhs_m93";
			camo="OAK_SAF_SUM";
			pantscamo="match";
		};
		class rhsgref_uniform_og107
		{
			model="rhs_m93";
			camo="OG107";
			pantscamo="match";
		};
		class rhsgref_uniform_og107_erdl
		{
			model="rhs_m93";
			camo="OG107";
			pantscamo="ERDL_L";
		};
		class rhsgref_uniform_olive
		{
			model="rhs_m93";
			camo="OLI";
			pantscamo="match";
		};
		class rhsgref_uniform_tigerstripe
		{
			model="rhs_m93";
			camo="TSW";
			pantscamo="match";
		};
		class rhsgref_uniform_reed
		{
			model="rhs_m93";
			camo="URB_RD";
			pantscamo="match";
		};
		class rhsgref_uniform_woodland
		{
			model="rhs_m93";
			camo="M81";
			pantscamo="match";
		};
		class rhsgref_uniform_woodland_olive
		{
			model="rhs_m93";
			camo="M81";
			pantscamo="OLI";
		};
		class rhs_uniform_vkpo
		{
			model="rhs_vkpo";
			camo="STD";
			gloves="No";
		};
		class rhs_uniform_vkpo_gloves
		{
			model="rhs_vkpo";
			camo="STD";
			gloves="Yes";
		};
		class rhs_uniform_vkpo_alt
		{
			model="rhs_vkpo";
			camo="ALT";
			gloves="No";
		};
		class rhs_uniform_vkpo_gloves_alt
		{
			model="rhs_vkpo";
			camo="ALT";
			gloves="Yes";
		};
		class rhs_6b13_Flora
		{
			model="rhs_6b13";
			camo="FLRA";
			loadout="None";
		};
		class rhs_6b13_Flora_6sh92
		{
			model="rhs_6b13";
			camo="FLRA";
			loadout="6sh92";
		};
		class rhs_6b13_Flora_6sh92_headset_mapcase
		{
			model="rhs_6b13";
			camo="FLRA";
			loadout="6sh92_headset_map";
		};
		class rhs_6b13_Flora_6sh92_radio
		{
			model="rhs_6b13";
			camo="FLRA";
			loadout="6sh92_radio";
		};
		class rhs_6b13_Flora_6sh92_vog
		{
			model="rhs_6b13";
			camo="FLRA";
			loadout="6sh92_vog";
		};
		class rhs_6b13_Flora_crewofficer
		{
			model="rhs_6b13";
			camo="FLRA";
			loadout="crew_off";
		};
		class rhs_6b13_EMR
		{
			model="rhs_6b13";
			camo="EMR_SUM";
			loadout="None";
		};
		class rhs_6b13_EMR_6sh92
		{
			model="rhs_6b13";
			camo="EMR_SUM";
			loadout="6sh92";
		};
		class rhs_6b13_EMR_6sh92_headset_mapcase
		{
			model="rhs_6b13";
			camo="EMR_SUM";
			loadout="6sh92_headset_map";
		};
		class rhs_6b13_EMR_6sh92_radio
		{
			model="rhs_6b13";
			camo="EMR_SUM";
			loadout="6sh92_radio";
		};
		class rhs_6b13_EMR_6sh92_vog
		{
			model="rhs_6b13";
			camo="EMR_SUM";
			loadout="6sh92_vog";
		};
		class rhs_6b13_EMR_crewofficer
		{
			model="rhs_6b13";
			camo="EMR_SUM";
			loadout="crew_off";
		};
		class rhs_6b13
		{
			model="rhs_6b13";
			camo="VSR";
			loadout="None";
		};
		class rhs_6b13_6sh92
		{
			model="rhs_6b13";
			camo="VSR";
			loadout="6sh92";
		};
		class rhs_6b13_6sh92_headset_mapcase
		{
			model="rhs_6b13";
			camo="VSR";
			loadout="6sh92_headset_map";
		};
		class rhs_6b13_6sh92_radio
		{
			model="rhs_6b13";
			camo="VSR";
			loadout="6sh92_radio";
		};
		class rhs_6b13_6sh92_vog
		{
			model="rhs_6b13";
			camo="VSR";
			loadout="6sh92_vog";
		};
		class rhs_6b13_crewofficer
		{
			model="rhs_6b13";
			camo="VSR";
			loadout="crew_off";
		};
		class rhs_6b2
		{
			model="rhs_6b2";
			loadout="None";
		};
		class rhs_6b2_AK
		{
			model="rhs_6b2";
			loadout="6sh92";
		};
		class rhs_6b2_chicom
		{
			model="rhs_6b2";
			loadout="chicom";
		};
		class rhs_6b2_holster
		{
			model="rhs_6b2";
			loadout="holster";
		};
		class rhs_6b2_lifchik
		{
			model="rhs_6b2";
			loadout="lifchik";
		};
		class rhs_6b2_rpk
		{
			model="rhs_6b2";
			loadout="rpk";
		};
		class rhs_6b2_SVD
		{
			model="rhs_6b2";
			loadout="sniper";
		};
		class rhs_6b23
		{
			model="rhs_6b23";
			camo="FLRA";
			loadout="None";
			collar="Standard";
		};
		class rhs_6b23_6sh116_flora
		{
			model="rhs_6b23";
			camo="FLRA";
			loadout="6Sh116";
			collar="Standard";
		};
		class rhs_6b23_6sh116_vog_flora
		{
			model="rhs_6b23";
			camo="FLRA";
			loadout="6Sh116/VOG";
			collar="Standard";
		};
		class rhs_6b23_6sh92
		{
			model="rhs_6b23";
			camo="FLRA";
			loadout="6Sh92";
			collar="Standard";
		};
		class rhs_6b23_6sh92_headset
		{
			model="rhs_6b23";
			camo="FLRA";
			loadout="6Sh92/Hdst.";
			collar="Standard";
		};
		class rhs_6b23_6sh92_headset_mapcase
		{
			model="rhs_6b23";
			camo="FLRA";
			loadout="6Sh92/Hdst./Map";
			collar="Standard";
		};
		class rhs_6b23_6sh92_radio
		{
			model="rhs_6b23";
			camo="FLRA";
			loadout="6Sh92/Radio";
			collar="Standard";
		};
		class rhs_6b23_6sh92_vog
		{
			model="rhs_6b23";
			camo="FLRA";
			loadout="6Sh92/VOG";
			collar="Standard";
		};
		class rhs_6b23_6sh92_vog_headset
		{
			model="rhs_6b23";
			camo="FLRA";
			loadout="6Sh92/VOG/Hdst.";
			collar="Standard";
		};
		class rhs_6b23_crewofficer
		{
			model="rhs_6b23";
			camo="FLRA";
			loadout="Off.";
			collar="Standard";
		};
		class rhs_6b23_crew
		{
			model="rhs_6b23";
			camo="FLRA";
			loadout="NCO/Crew";
			collar="Standard";
		};
		class rhs_6b23_engineer
		{
			model="rhs_6b23";
			camo="FLRA";
			loadout="Engi.";
			collar="Standard";
		};
		class rhs_6b23_medic
		{
			model="rhs_6b23";
			camo="FLRA";
			loadout="Medic";
			collar="Standard";
		};
		class rhs_6b23_rifleman
		{
			model="rhs_6b23";
			camo="FLRA";
			loadout="Rifl.";
			collar="Standard";
		};
		class rhs_6b23_sniper
		{
			model="rhs_6b23";
			camo="FLRA";
			loadout="Snip.";
			collar="Standard";
		};
		class rhs_6b23_vydra_3m
		{
			model="rhs_6b23";
			camo="FLRA";
			loadout="Vydra-3M";
			collar="Standard";
		};
		class rhs_6b23_digi
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="None";
			collar="Standard";
		};
		class rhs_6b23_6sh116
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="6Sh116";
			collar="Standard";
		};
		class rhs_6b23_6sh116_vog
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="6Sh116/VOG";
			collar="Standard";
		};
		class rhs_6b23_digi_6sh92
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="6Sh92";
			collar="Standard";
		};
		class rhs_6b23_digi_6sh92_headset
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="6Sh92/Hdst.";
			collar="Standard";
		};
		class rhs_6b23_digi_6sh92_headset_mapcase
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="6Sh92/Hdst./Map";
			collar="Standard";
		};
		class rhs_6b23_digi_6sh92_radio
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="6Sh92/Radio";
			collar="Standard";
		};
		class rhs_6b23_digi_6sh92_vog
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="6Sh92/VOG";
			collar="Standard";
		};
		class rhs_6b23_digi_6sh92_vog_headset
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="6Sh92/VOG/Hdst.";
			collar="Standard";
		};
		class rhs_6b23_digi_crewofficer
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="Off.";
			collar="Standard";
		};
		class rhs_6b23_digi_crew
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="NCO/Crew";
			collar="Standard";
		};
		class rhs_6b23_digi_engineer
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="Engi.";
			collar="Standard";
		};
		class rhs_6b23_digi_medic
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="Medic";
			collar="Standard";
		};
		class rhs_6b23_digi_rifleman
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="Rifl.";
			collar="Standard";
		};
		class rhs_6b23_digi_sniper
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="Snip.";
			collar="Standard";
		};
		class rhs_6b23_digi_vydra_3m
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="Vydra-3M";
			collar="Standard";
		};
		class rhs_6b23_digi_6sh92_spetsnaz2
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="6Sh92";
			collar="Spetsnaz";
		};
		class rhs_6b23_digi_6sh92_headset_spetsnaz
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="6Sh92/Hdst.";
			collar="Spetsnaz";
		};
		class rhs_6b23_digi_6sh92_Spetsnaz
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="6Sh92/Radio";
			collar="Spetsnaz";
		};
		class rhs_6b23_digi_6sh92_Vog_Spetsnaz
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="6Sh92/VOG/Radio";
			collar="Spetsnaz";
		};
		class rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz
		{
			model="rhs_6b23";
			camo="EMR_SUM";
			loadout="6Sh92/VOG/Radio";
			collar="Spetsnaz";
		};
		class rhs_6b23_ML
		{
			model="rhs_6b23";
			camo="MTNLES";
			loadout="None";
			collar="Standard";
		};
		class rhs_6b23_ML_6sh116_flora
		{
			model="rhs_6b23";
			camo="MTNLES";
			loadout="6Sh116";
			collar="Standard";
		};
		class rhs_6b23_ML_6sh116_vog_flora
		{
			model="rhs_6b23";
			camo="MTNLES";
			loadout="6Sh116/VOG";
			collar="Standard";
		};
		class rhs_6b23_ML_6sh92
		{
			model="rhs_6b23";
			camo="MTNLES";
			loadout="6Sh92";
			collar="Standard";
		};
		class rhs_6b23_ML_6sh92_headset
		{
			model="rhs_6b23";
			camo="MTNLES";
			loadout="6Sh92/Hdst.";
			collar="Standard";
		};
		class rhs_6b23_ML_6sh92_headset_mapcase
		{
			model="rhs_6b23";
			camo="MTNLES";
			loadout="6Sh92/Hdst./Map";
			collar="Standard";
		};
		class rhs_6b23_ML_6sh92_radio
		{
			model="rhs_6b23";
			camo="MTNLES";
			loadout="6Sh92/Radio";
			collar="Standard";
		};
		class rhs_6b23_ML_6sh92_vog
		{
			model="rhs_6b23";
			camo="MTNLES";
			loadout="6Sh92/VOG";
			collar="Standard";
		};
		class rhs_6b23_ML_6sh92_vog_headset
		{
			model="rhs_6b23";
			camo="MTNLES";
			loadout="6Sh92/VOG/Hdst.";
			collar="Standard";
		};
		class rhs_6b23_ML_crewofficer
		{
			model="rhs_6b23";
			camo="MTNLES";
			loadout="Off.";
			collar="Standard";
		};
		class rhs_6b23_ML_crew
		{
			model="rhs_6b23";
			camo="MTNLES";
			loadout="NCO/Crew";
			collar="Standard";
		};
		class rhs_6b23_ML_engineer
		{
			model="rhs_6b23";
			camo="MTNLES";
			loadout="Engi.";
			collar="Standard";
		};
		class rhs_6b23_ML_medic
		{
			model="rhs_6b23";
			camo="MTNLES";
			loadout="Medic";
			collar="Standard";
		};
		class rhs_6b23_ML_rifleman
		{
			model="rhs_6b23";
			camo="MTNLES";
			loadout="Rifl.";
			collar="Standard";
		};
		class rhs_6b23_ML_sniper
		{
			model="rhs_6b23";
			camo="MTNLES";
			loadout="Snip.";
			collar="Standard";
		};
		class rhs_6b23_ML_vydra_3m
		{
			model="rhs_6b23";
			camo="MTNLES";
			loadout="Vydra-3M";
			collar="Standard";
		};
		class rhs_6b23_6sh116_od
		{
			model="rhs_6b23";
			camo="OLI";
			loadout="6Sh116";
			collar="Standard";
		};
		class rhs_6b23_6sh116_vog_od
		{
			model="rhs_6b23";
			camo="OLI";
			loadout="6Sh116/VOG";
			collar="Standard";
		};
		class rhs_6b23_6sh116_mixed
		{
			model="rhs_6b23";
			camo="FLRA_EMR";
			loadout="6Sh116";
			collar="Standard";
		};
		class rhs_6b23_6sh116_vog_mixed
		{
			model="rhs_6b23";
			camo="FLRA_EMR";
			loadout="6Sh116/VOG";
			collar="Standard";
		};
		class rhsgref_6b23_khaki_medic
		{
			model="rhs_6b23";
			camo="KHK";
			loadout="Medic";
			collar="Standard";
		};
		class rhsgref_6b23_khaki_nco
		{
			model="rhs_6b23";
			camo="KHK";
			loadout="NCO/Crew";
			collar="Standard";
		};
		class rhsgref_6b23_khaki_officer
		{
			model="rhs_6b23";
			camo="KHK";
			loadout="Off.";
			collar="Standard";
		};
		class rhsgref_6b23_khaki_rifleman
		{
			model="rhs_6b23";
			camo="KHK";
			loadout="Rifl.";
			collar="Standard";
		};
		class rhsgref_6b23_khaki_sniper
		{
			model="rhs_6b23";
			camo="KHK";
			loadout="Snip.";
			collar="Standard";
		};
		class rhsgref_6b23_khaki
		{
			model="rhs_6b23";
			camo="KHK";
			loadout="Engi.";
			collar="Standard";
		};
		class rhsgref_6b23_ttsko_digi_medic
		{
			model="rhs_6b23";
			camo="TTsKO_CDF_DIGI";
			loadout="Medic";
			collar="Standard";
		};
		class rhsgref_6b23_ttsko_digi_nco
		{
			model="rhs_6b23";
			camo="TTsKO_CDF_DIGI";
			loadout="NCO/Crew";
			collar="Standard";
		};
		class rhsgref_6b23_ttsko_digi_officer
		{
			model="rhs_6b23";
			camo="TTsKO_CDF_DIGI";
			loadout="Off.";
			collar="Standard";
		};
		class rhsgref_6b23_ttsko_digi_rifleman
		{
			model="rhs_6b23";
			camo="TTsKO_CDF_DIGI";
			loadout="Rifl.";
			collar="Standard";
		};
		class rhsgref_6b23_ttsko_digi_sniper
		{
			model="rhs_6b23";
			camo="TTsKO_CDF_DIGI";
			loadout="Snip.";
			collar="Standard";
		};
		class rhsgref_6b23_ttsko_digi
		{
			model="rhs_6b23";
			camo="TTsKO_CDF_DIGI";
			loadout="Engi.";
			collar="Standard";
		};
		class rhsgref_6b23_ttsko_forest_rifleman
		{
			model="rhs_6b23";
			camo="TTsKO_CDF_FRS";
			loadout="Rifl.";
			collar="Standard";
		};
		class rhsgref_6b23_ttsko_forest
		{
			model="rhs_6b23";
			camo="TTsKO_CDF_FRS";
			loadout="Engi.";
			collar="Standard";
		};
		class rhsgref_6b23_ttsko_mountain_medic
		{
			model="rhs_6b23";
			camo="TTsKO_CDF_MTN";
			loadout="Medic";
			collar="Standard";
		};
		class rhsgref_6b23_ttsko_mountain_nco
		{
			model="rhs_6b23";
			camo="TTsKO_CDF_MTN";
			loadout="NCO/Crew";
			collar="Standard";
		};
		class rhsgref_6b23_ttsko_mountain_officer
		{
			model="rhs_6b23";
			camo="TTsKO_CDF_MTN";
			loadout="Off.";
			collar="Standard";
		};
		class rhsgref_6b23_ttsko_mountain_rifleman
		{
			model="rhs_6b23";
			camo="TTsKO_CDF_MTN";
			loadout="Rifl.";
			collar="Standard";
		};
		class rhsgref_6b23_ttsko_mountain_sniper
		{
			model="rhs_6b23";
			camo="TTsKO_CDF_MTN";
			loadout="Snip.";
			collar="Standard";
		};
		class rhsgref_6b23_ttsko_mountain
		{
			model="rhs_6b23";
			camo="TTsKO_CDF_MTN";
			loadout="Engi.";
			collar="Standard";
		};
		class rhs_6b3
		{
			model="rhs_6b3";
			loadout="None";
		};
		class rhs_6b3_holster
		{
			model="rhs_6b3";
			loadout="holster";
		};
		class rhs_6b3_off
		{
			model="rhs_6b3";
			loadout="off";
		};
		class rhs_6b3_R148
		{
			model="rhs_6b3";
			loadout="r148";
		};
		class rhs_6b3_AK
		{
			model="rhs_6b3";
			loadout="rifle1";
		};
		class rhs_6b3_AK_2
		{
			model="rhs_6b3";
			loadout="rifle2";
		};
		class rhs_6b3_AK_3
		{
			model="rhs_6b3";
			loadout="rifle3";
		};
		class rhs_6b3_RPK
		{
			model="rhs_6b3";
			loadout="rpk";
		};
		class rhs_6b3_VOG
		{
			model="rhs_6b3";
			loadout="vog1";
		};
		class rhs_6b3_VOG_2
		{
			model="rhs_6b3";
			loadout="vog2";
		};
		class rhs_6b45
		{
			model="rhs_6b45";
			camo="EMR_SUM";
			loadout="None";
		};
		class rhs_6b45_holster
		{
			model="rhs_6b45";
			camo="EMR_SUM";
			loadout="holster";
		};
		class rhs_6b45_light
		{
			model="rhs_6b45";
			camo="EMR_SUM";
			loadout="light";
		};
		class rhs_6b45_mg
		{
			model="rhs_6b45";
			camo="EMR_SUM";
			loadout="mg";
		};
		class rhs_6b45_off
		{
			model="rhs_6b45";
			camo="EMR_SUM";
			loadout="off";
		};
		class rhs_6b45_rifleman
		{
			model="rhs_6b45";
			camo="EMR_SUM";
			loadout="rifle1";
		};
		class rhs_6b45_rifleman_2
		{
			model="rhs_6b45";
			camo="EMR_SUM";
			loadout="rifle2";
		};
		class rhs_6b45_grn
		{
			model="rhs_6b45";
			camo="EMR_SUM";
			loadout="vog";
		};
		class rhs_6b45_desert
		{
			model="rhs_6b45";
			camo="DESPNK";
			loadout="None";
		};
		class rhs_6b5_khaki
		{
			model="rhs_6b5_19";
			camo="KHK";
			loadout="None";
		};
		class rhs_6b5_rifleman_khaki
		{
			model="rhs_6b5_19";
			camo="KHK";
			loadout="6sh46";
		};
		class rhs_6b5_medic_khaki
		{
			model="rhs_6b5_19";
			camo="KHK";
			loadout="medic";
		};
		class rhs_6b5_officer_khaki
		{
			model="rhs_6b5_19";
			camo="KHK";
			loadout="off";
		};
		class rhs_6b5_sniper_khaki
		{
			model="rhs_6b5_19";
			camo="KHK";
			loadout="sniper";
		};
		class rhs_6b5_spetsodezhda
		{
			model="rhs_6b5_19";
			camo="Spetsodezhda";
			loadout="None";
		};
		class rhs_6b5_rifleman_spetsodezhda
		{
			model="rhs_6b5_19";
			camo="Spetsodezhda";
			loadout="6sh46";
		};
		class rhs_6b5_medic_spetsodezhda
		{
			model="rhs_6b5_19";
			camo="Spetsodezhda";
			loadout="medic";
		};
		class rhs_6b5_officer_spetsodezhda
		{
			model="rhs_6b5_19";
			camo="Spetsodezhda";
			loadout="off";
		};
		class rhs_6b5_sniper_spetsodezhda
		{
			model="rhs_6b5_19";
			camo="Spetsodezhda";
			loadout="sniper";
		};
		class rhs_6b5
		{
			model="rhs_6b5_19";
			camo="OLI";
			loadout="None";
		};
		class rhs_6b5_rifleman
		{
			model="rhs_6b5_19";
			camo="OLI";
			loadout="6sh46";
		};
		class rhs_6b5_medic
		{
			model="rhs_6b5_19";
			camo="OLI";
			loadout="medic";
		};
		class rhs_6b5_officer
		{
			model="rhs_6b5_19";
			camo="OLI";
			loadout="off";
		};
		class rhs_6b5_sniper
		{
			model="rhs_6b5_19";
			camo="OLI";
			loadout="sniper";
		};
		class rhs_6b5_ttsko
		{
			model="rhs_6b5_19";
			camo="TTsKO";
			loadout="None";
		};
		class rhs_6b5_rifleman_ttsko
		{
			model="rhs_6b5_19";
			camo="TTsKO";
			loadout="6sh46";
		};
		class rhs_6b5_medic_ttsko
		{
			model="rhs_6b5_19";
			camo="TTsKO";
			loadout="medic";
		};
		class rhs_6b5_officer_ttsko
		{
			model="rhs_6b5_19";
			camo="TTsKO";
			loadout="off";
		};
		class rhs_6b5_sniper_ttsko
		{
			model="rhs_6b5_19";
			camo="TTsKO";
			loadout="sniper";
		};
		class rhs_6b5_vsr
		{
			model="rhs_6b5_19";
			camo="VSR";
			loadout="None";
		};
		class rhs_6b5_rifleman_vsr
		{
			model="rhs_6b5_19";
			camo="VSR";
			loadout="6sh46";
		};
		class rhs_6b5_medic_vsr
		{
			model="rhs_6b5_19";
			camo="VSR";
			loadout="medic";
		};
		class rhs_6b5_officer_vsr
		{
			model="rhs_6b5_19";
			camo="VSR";
			loadout="off";
		};
		class rhs_6b5_sniper_vsr
		{
			model="rhs_6b5_19";
			camo="VSR";
			loadout="sniper";
		};
		class rhs_6sh117_mg
		{
			model="rhs_6sh117";
			loadout="mg";
		};
		class rhs_6sh117_rifleman
		{
			model="rhs_6sh117";
			loadout="rifle";
		};
		class rhs_6sh117_ar
		{
			model="rhs_6sh117";
			loadout="rpk";
		};
		class rhs_6sh117_nco
		{
			model="rhs_6sh117";
			loadout="sl";
		};
		class rhs_6sh117_nco_azart
		{
			model="rhs_6sh117";
			loadout="sl_azart";
		};
		class rhs_6sh117_svd
		{
			model="rhs_6sh117";
			loadout="svd";
		};
		class rhs_6sh117_val
		{
			model="rhs_6sh117";
			loadout="val";
		};
		class rhs_6sh117_grn
		{
			model="rhs_6sh117";
			loadout="vog";
		};
		class rhs_6sh92
		{
			model="rhs_6sh92";
			camo="FLRA";
			loadout="None";
		};
		class rhs_6sh92_headset
		{
			model="rhs_6sh92";
			camo="FLRA";
			loadout="headset";
		};
		class rhs_6sh92_radio
		{
			model="rhs_6sh92";
			camo="FLRA";
			loadout="radio";
		};
		class rhs_6sh92_vog
		{
			model="rhs_6sh92";
			camo="FLRA";
			loadout="vog";
		};
		class rhs_6sh92_vog_headset
		{
			model="rhs_6sh92";
			camo="FLRA";
			loadout="vog_headset";
		};
		class rhs_6sh92_digi
		{
			model="rhs_6sh92";
			camo="EMR_SUM";
			loadout="None";
		};
		class rhs_6sh92_digi_headset
		{
			model="rhs_6sh92";
			camo="EMR_SUM";
			loadout="headset";
		};
		class rhs_6sh92_digi_radio
		{
			model="rhs_6sh92";
			camo="EMR_SUM";
			loadout="radio";
		};
		class rhs_6sh92_digi_vog
		{
			model="rhs_6sh92";
			camo="EMR_SUM";
			loadout="vog";
		};
		class rhs_6sh92_digi_vog_headset
		{
			model="rhs_6sh92";
			camo="EMR_SUM";
			loadout="vog_headset";
		};
		class rhs_6sh92_vsr
		{
			model="rhs_6sh92";
			camo="VSR";
			loadout="None";
		};
		class rhs_6sh92_vsr_headset
		{
			model="rhs_6sh92";
			camo="VSR";
			loadout="headset";
		};
		class rhs_6sh92_vsr_radio
		{
			model="rhs_6sh92";
			camo="VSR";
			loadout="radio";
		};
		class rhs_6sh92_vsr_vog
		{
			model="rhs_6sh92";
			camo="VSR";
			loadout="vog";
		};
		class rhs_6sh92_vsr_vog_headset
		{
			model="rhs_6sh92";
			camo="VSR";
			loadout="vog_headset";
		};
		class rhs_belt_AK4
		{
			model="rhs_belt_equip";
			loadout="6sh46";
		};
		class rhs_belt_AK4_back
		{
			model="rhs_belt_equip";
			loadout="6sh46_alt";
		};
		class rhs_belt_RPK
		{
			model="rhs_belt_equip";
			loadout="auto";
		};
		class rhs_belt_AK_GL
		{
			model="rhs_belt_equip";
			loadout="gl";
		};
		class rhs_belt_holster
		{
			model="rhs_belt_equip";
			loadout="holster";
		};
		class rhs_belt_AK
		{
			model="rhs_belt_equip";
			loadout="rifle";
		};
		class rhs_belt_AK_back
		{
			model="rhs_belt_equip";
			loadout="rifle_alt";
		};
		class rhs_belt_sks
		{
			model="rhs_belt_equip";
			loadout="sks";
		};
		class rhs_belt_SVD
		{
			model="rhs_belt_equip";
			loadout="svd";
		};
		class rhs_chicom
		{
			model="rhs_chicom";
			camo="GRN";
		};
		class rhs_chicom_khk
		{
			model="rhs_chicom";
			camo="KHK";
		};
		class rhsusf_iotv_ocp
		{
			model="rhs_iotv";
			camo="OEF_CP";
			loadout="None";
		};
		class rhsusf_iotv_ucp
		{
			model="rhs_iotv";
			camo="UCP";
			loadout="None";
		};
		class rhsusf_iotv_ocp_Grenadier
		{
			model="rhs_iotv";
			camo="OEF_CP";
			loadout="Grenadier";
		};
		class rhsusf_iotv_ucp_Grenadier
		{
			model="rhs_iotv";
			camo="UCP";
			loadout="Grenadier";
		};
		class rhsusf_iotv_ocp_Medic
		{
			model="rhs_iotv";
			camo="OEF_CP";
			loadout="Medic";
		};
		class rhsusf_iotv_ucp_Medic
		{
			model="rhs_iotv";
			camo="UCP";
			loadout="Medic";
		};
		class rhsusf_iotv_ocp_Repair
		{
			model="rhs_iotv";
			camo="OEF_CP";
			loadout="Repair";
		};
		class rhsusf_iotv_ucp_Repair
		{
			model="rhs_iotv";
			camo="UCP";
			loadout="Repair";
		};
		class rhsusf_iotv_ocp_Rifleman
		{
			model="rhs_iotv";
			camo="OEF_CP";
			loadout="Rifleman";
		};
		class rhsusf_iotv_ucp_Rifleman
		{
			model="rhs_iotv";
			camo="UCP";
			loadout="Rifleman";
		};
		class rhsusf_iotv_ocp_SAW
		{
			model="rhs_iotv";
			camo="OEF_CP";
			loadout="SAW";
		};
		class rhsusf_iotv_ucp_SAW
		{
			model="rhs_iotv";
			camo="UCP";
			loadout="SAW";
		};
		class rhsusf_iotv_ocp_Squadleader
		{
			model="rhs_iotv";
			camo="OEF_CP";
			loadout="Squad Lead.";
		};
		class rhsusf_iotv_ucp_Squadleader
		{
			model="rhs_iotv";
			camo="UCP";
			loadout="Squad Lead.";
		};
		class rhsusf_iotv_ocp_Teamleader
		{
			model="rhs_iotv";
			camo="OEF_CP";
			loadout="Team Lead.";
		};
		class rhsusf_iotv_ucp_Teamleader
		{
			model="rhs_iotv";
			camo="UCP";
			loadout="Team Lead.";
		};
		class rhs_lifchik
		{
			model="rhs_lifchik";
			loadout="stan";
		};
		class rhs_lifchik_light
		{
			model="rhs_lifchik";
			loadout="light";
		};
		class rhs_lifchik_NCO
		{
			model="rhs_lifchik";
			loadout="off";
		};
		class rhs_lifchik_vog
		{
			model="rhs_lifchik";
			loadout="vog";
		};
		class rhsusf_mbav
		{
			model="rhs_mbav";
			loadout="None";
		};
		class rhsusf_mbav_grenadier
		{
			model="rhs_mbav";
			loadout="Grenadier";
		};
		class rhsusf_mbav_light
		{
			model="rhs_mbav";
			loadout="Light";
		};
		class rhsusf_mbav_mg
		{
			model="rhs_mbav";
			loadout="Machinegunner";
		};
		class rhsusf_mbav_medic
		{
			model="rhs_mbav";
			loadout="Medic";
		};
		class rhsusf_mbav_rifleman
		{
			model="rhs_mbav";
			loadout="Rifleman";
		};
		class rhsgref_otv_digi
		{
			model="rhs_otv";
			camo="TTsKO_CDF_DIGI";
		};
		class rhsgref_otv_khaki
		{
			model="rhs_otv";
			camo="KHK";
		};
		class rhssaf_vest_otv_md2camo
		{
			model="rhs_otv";
			camo="MDU02";
		};
		class rhssaf_vest_md12_digital
		{
			model="rhs_pbb_m12";
			camo="MDU10";
			loadout="None";
		};
		class rhssaf_vest_md12_digital_desert
		{
			model="rhs_pbb_m12";
			camo="MDU10_DES";
			loadout="None";
		};
		class rhssaf_vest_md12_m70_rifleman
		{
			model="rhs_pbb_m12";
			camo="MDU10";
			loadout="Rifleman";
		};
		class rhssaf_vest_md98_digital
		{
			model="rhs_pbb_m98";
			camo="MDU10";
			loadout="None";
		};
		class rhssaf_vest_md98_md2camo
		{
			model="rhs_pbb_m98";
			camo="MDU02";
			loadout="None";
		};
		class rhssaf_vest_md98_woodland
		{
			model="rhs_pbb_m98";
			camo="WDL_SAF";
			loadout="None";
		};
		class rhssaf_vest_md98_rifleman
		{
			model="rhs_pbb_m98";
			camo="WDL_SAF";
			loadout="Rifleman";
		};
		class rhssaf_vest_md99_digital
		{
			model="rhs_pbb_m99t";
			camo="MDU10";
			loadout="None";
		};
		class rhssaf_vest_md99_digital_radio
		{
			model="rhs_pbb_m99t";
			camo="MDU10";
			loadout="Radio";
		};
		class rhssaf_vest_md99_digital_rifleman
		{
			model="rhs_pbb_m99t";
			camo="MDU10";
			loadout="Rifleman";
		};
		class rhssaf_vest_md99_digital_rifleman_radio
		{
			model="rhs_pbb_m99t";
			camo="MDU10";
			loadout="Rifl./Radio";
		};
		class rhssaf_vest_md99_md2camo
		{
			model="rhs_pbb_m99t";
			camo="MDU02";
			loadout="None";
		};
		class rhssaf_vest_md99_md2camo_radio
		{
			model="rhs_pbb_m99t";
			camo="MDU02";
			loadout="Radio";
		};
		class rhssaf_vest_md99_md2camo_rifleman
		{
			model="rhs_pbb_m99t";
			camo="MDU02";
			loadout="Rifleman";
		};
		class rhssaf_vest_md99_md2camo_rifleman_radio
		{
			model="rhs_pbb_m99t";
			camo="MDU02";
			loadout="Rifl./Radio";
		};
		class rhssaf_vest_md99_woodland
		{
			model="rhs_pbb_m99t";
			camo="WDL_SAF";
			loadout="None";
		};
		class rhssaf_vest_md99_woodland_radio
		{
			model="rhs_pbb_m99t";
			camo="WDL_SAF";
			loadout="Radio";
		};
		class rhssaf_vest_md99_woodland_rifleman
		{
			model="rhs_pbb_m99t";
			camo="WDL_SAF";
			loadout="Rifleman";
		};
		class rhssaf_vest_md99_woodland_rifleman_radio
		{
			model="rhs_pbb_m99t";
			camo="WDL_SAF";
			loadout="Rifl./Radio";
		};
		class rhsusf_plateframe_sapi
		{
			model="rhs_plateframe";
			loadout="None";
		};
		class rhsusf_plateframe_grenadier
		{
			model="rhs_plateframe";
			loadout="Grenadier";
		};
		class rhsusf_plateframe_light
		{
			model="rhs_plateframe";
			loadout="Light";
		};
		class rhsusf_plateframe_machinegunner
		{
			model="rhs_plateframe";
			loadout="Machinegunner";
		};
		class rhsusf_plateframe_marksman
		{
			model="rhs_plateframe";
			loadout="Marksman";
		};
		class rhsusf_plateframe_medic
		{
			model="rhs_plateframe";
			loadout="Medic";
		};
		class rhsusf_plateframe_rifleman
		{
			model="rhs_plateframe";
			loadout="Rifleman";
		};
		class rhsusf_plateframe_teamleader
		{
			model="rhs_plateframe";
			loadout="Team Lead.";
		};
		class rhsusf_spc
		{
			model="rhs_spc";
			loadout="None";
		};
		class rhsusf_spc_corpsman
		{
			model="rhs_spc";
			loadout="Corpsman";
		};
		class rhsusf_spc_crewman
		{
			model="rhs_spc";
			loadout="Crewman";
		};
		class rhsusf_spc_iar
		{
			model="rhs_spc";
			loadout="IAR";
		};
		class rhsusf_spc_light
		{
			model="rhs_spc";
			loadout="Light";
		};
		class rhsusf_spc_mg
		{
			model="rhs_spc";
			loadout="Machinegunner";
		};
		class rhsusf_spc_marksman
		{
			model="rhs_spc";
			loadout="Marksman";
		};
		class rhsusf_spc_patchless
		{
			model="rhs_spc";
			loadout="Patchless";
		};
		class rhsusf_spc_patchless_radio
		{
			model="rhs_spc";
			loadout="Radio";
		};
		class rhsusf_spc_rifleman
		{
			model="rhs_spc";
			loadout="Rifleman";
		};
		class rhsusf_spc_sniper
		{
			model="rhs_spc";
			loadout="Sniper";
		};
		class rhsusf_spc_squadleader
		{
			model="rhs_spc";
			loadout="Squad Lead.";
		};
		class rhsusf_spc_teamleader
		{
			model="rhs_spc";
			loadout="Team Lead.";
		};
		class rhsusf_spcs_ocp
		{
			model="rhs_spcs";
			camo="OEF_CP";
			loadout="None";
		};
		class rhsusf_spcs_ucp
		{
			model="rhs_spcs";
			camo="UCP";
			loadout="None";
		};
		class rhsusf_spcs_ocp_crewman
		{
			model="rhs_spcs";
			camo="OEF_CP";
			loadout="Crewman";
		};
		class rhsusf_spcs_ucp_crewman
		{
			model="rhs_spcs";
			camo="UCP";
			loadout="Crewman";
		};
		class rhsusf_spcs_ocp_grenadier
		{
			model="rhs_spcs";
			camo="OEF_CP";
			loadout="Grenadier";
		};
		class rhsusf_spcs_ucp_grenadier
		{
			model="rhs_spcs";
			camo="UCP";
			loadout="Grenadier";
		};
		class rhsusf_spcs_ocp_machinegunner
		{
			model="rhs_spcs";
			camo="OEF_CP";
			loadout="Machinegunner";
		};
		class rhsusf_spcs_ucp_machinegunner
		{
			model="rhs_spcs";
			camo="UCP";
			loadout="Machinegunner";
		};
		class rhsusf_spcs_ocp_medic
		{
			model="rhs_spcs";
			camo="OEF_CP";
			loadout="Medic";
		};
		class rhsusf_spcs_ucp_medic
		{
			model="rhs_spcs";
			camo="UCP";
			loadout="Medic";
		};
		class rhsusf_spcs_ocp_rifleman
		{
			model="rhs_spcs";
			camo="OEF_CP";
			loadout="Rifleman";
		};
		class rhsusf_spcs_ucp_rifleman
		{
			model="rhs_spcs";
			camo="UCP";
			loadout="Rifleman";
		};
		class rhsusf_spcs_ocp_rifleman_alt
		{
			model="rhs_spcs";
			camo="OEF_CP";
			loadout="Rifleman Alt";
		};
		class rhsusf_spcs_ucp_rifleman_alt
		{
			model="rhs_spcs";
			camo="UCP";
			loadout="Rifleman Alt";
		};
		class rhsusf_spcs_ocp_saw
		{
			model="rhs_spcs";
			camo="OEF_CP";
			loadout="SAW";
		};
		class rhsusf_spcs_ucp_saw
		{
			model="rhs_spcs";
			camo="UCP";
			loadout="SAW";
		};
		class rhsusf_spcs_ocp_sniper
		{
			model="rhs_spcs";
			camo="OEF_CP";
			loadout="Sniper";
		};
		class rhsusf_spcs_ucp_sniper
		{
			model="rhs_spcs";
			camo="UCP";
			loadout="Sniper";
		};
		class rhsusf_spcs_ocp_squadleader
		{
			model="rhs_spcs";
			camo="OEF_CP";
			loadout="Squad Lead.";
		};
		class rhsusf_spcs_ucp_squadleader
		{
			model="rhs_spcs";
			camo="UCP";
			loadout="Squad Lead.";
		};
		class rhsusf_spcs_ocp_teamleader
		{
			model="rhs_spcs";
			camo="OEF_CP";
			loadout="Team Lead.";
		};
		class rhsusf_spcs_ucp_teamleader
		{
			model="rhs_spcs";
			camo="UCP";
			loadout="Team Lead.";
		};
		class rhsusf_spcs_ocp_teamleader_alt
		{
			model="rhs_spcs";
			camo="OEF_CP";
			loadout="Team Lead. Alt";
		};
		class rhsusf_spcs_ucp_teamleader_alt
		{
			model="rhs_spcs";
			camo="UCP";
			loadout="Team Lead. Alt";
		};
		class rhs_suspender_AK8_chestrig
		{
			model="rhs_sus_equip";
			loadout="ak";
		};
		class rhs_suspender_AK
		{
			model="rhs_sus_equip";
			loadout="rifle";
		};
		class rhs_suspender_AK4
		{
			model="rhs_sus_equip";
			loadout="rifle_light";
		};
		class rhs_suspender_SKS
		{
			model="rhs_sus_equip";
			loadout="sks";
		};
		class rhs_6m2_nvg
		{
			model="rhs_6m2_nvg";
			mouthpiece="No";
		};
		class rhs_6m2_1_nvg
		{
			model="rhs_6m2_nvg";
			mouthpiece="Yes";
		};
		class rhs_weap_ak103
		{
			model="rhs_ak103";
			attachsys="warsaw";
		};
		class rhs_weap_ak103_npz
		{
			model="rhs_ak103";
			attachsys="picatinny";
		};
		class rhs_weap_ak103_zenitco01
		{
			model="rhs_ak103";
			attachsys="zenit";
		};
		class rhs_weap_ak103_zenitco01_b33
		{
			model="rhs_ak103";
			attachsys="zenit_pica";
		};
		class rhs_weap_ak103_1
		{
			model="rhs_ak103_1";
			attachsys="warsaw";
		};
		class rhs_weap_ak103_1_npz
		{
			model="rhs_ak103_1";
			attachsys="picatinny";
		};
		class rhs_weap_ak103_2
		{
			model="rhs_ak103_2";
			attachsys="warsaw";
		};
		class rhs_weap_ak103_2_npz
		{
			model="rhs_ak103_2";
			attachsys="picatinny";
		};
		class rhs_weap_ak103_gp25
		{
			model="rhs_ak103_gp25";
			attachsys="warsaw";
		};
		class rhs_weap_ak103_gp25_npz
		{
			model="rhs_ak103_gp25";
			attachsys="picatinny";
		};
		class rhs_weap_ak104
		{
			model="rhs_ak104";
			attachsys="warsaw";
		};
		class rhs_weap_ak104_npz
		{
			model="rhs_ak104";
			attachsys="picatinny";
		};
		class rhs_weap_ak104_zenitco01
		{
			model="rhs_ak104";
			attachsys="zenit";
		};
		class rhs_weap_ak104_zenitco01_b33
		{
			model="rhs_ak104";
			attachsys="zenit_pica";
		};
		class rhs_weap_ak105
		{
			model="rhs_ak105";
			attachsys="warsaw";
		};
		class rhs_weap_ak105_npz
		{
			model="rhs_ak105";
			attachsys="picatinny";
		};
		class rhs_weap_ak105_zenitco01
		{
			model="rhs_ak105";
			attachsys="zenit";
		};
		class rhs_weap_ak105_zenitco01_b33
		{
			model="rhs_ak105";
			attachsys="zenit_pica";
		};
		class rhs_weap_ak74
		{
			model="rhs_ak74";
			camo="AK_WOOD";
		};
		class rhs_weap_ak74_3
		{
			model="rhs_ak74";
			camo="AK_GRN";
		};
		class rhs_weap_ak74_2
		{
			model="rhs_ak74";
			camo="AK_PLUM";
		};
		class rhs_weap_ak74m
		{
			model="rhs_ak74m";
			camo="AK_BLK";
			attachsys="warsaw";
		};
		class rhs_weap_ak74m_npz
		{
			model="rhs_ak74m";
			camo="AK_BLK";
			attachsys="picatinny";
		};
		class rhs_weap_ak74m_camo
		{
			model="rhs_ak74m";
			camo="AK_CAMO";
			attachsys="warsaw";
		};
		class rhs_weap_ak74m_camo_npz
		{
			model="rhs_ak74m";
			camo="AK_CAMO";
			attachsys="picatinny";
		};
		class rhs_weap_ak74m_desert
		{
			model="rhs_ak74m";
			camo="AK_DES";
			attachsys="warsaw";
		};
		class rhs_weap_ak74m_desert_npz
		{
			model="rhs_ak74m";
			camo="AK_DES";
			attachsys="picatinny";
		};
		class rhs_weap_ak74m_fullplum
		{
			model="rhs_ak74m";
			camo="AK_PLUM";
			attachsys="warsaw";
		};
		class rhs_weap_ak74m_fullplum_npz
		{
			model="rhs_ak74m";
			camo="AK_PLUM";
			attachsys="picatinny";
		};
		class rhs_weap_ak74m_zenitco01
		{
			model="rhs_ak74m";
			camo="AK_BLK";
			attachsys="zenit";
		};
		class rhs_weap_ak74m_zenitco01_b33
		{
			model="rhs_ak74m";
			camo="AK_BLK";
			attachsys="zenit_pica";
		};
		class rhs_weap_ak74m_gp25
		{
			model="rhs_ak74m_gp25";
			camo="AK_BLK";
			attachsys="warsaw";
		};
		class rhs_weap_ak74m_gp25_npz
		{
			model="rhs_ak74m_gp25";
			camo="AK_BLK";
			attachsys="picatinny";
		};
		class rhs_weap_ak74m_fullplum_gp25
		{
			model="rhs_ak74m_gp25";
			camo="AK_PLUM";
			attachsys="warsaw";
		};
		class rhs_weap_ak74m_fullplum_gp25_npz
		{
			model="rhs_ak74m_gp25";
			camo="AK_PLUM";
			attachsys="picatinny";
		};
		class rhs_weap_ak74n
		{
			model="rhs_ak74n";
			camo="AK_WOOD";
			attachsys="warsaw";
		};
		class rhs_weap_ak74n_npz
		{
			model="rhs_ak74n";
			camo="AK_WOOD";
			attachsys="picatinny";
		};
		class rhs_weap_ak74n_2
		{
			model="rhs_ak74n";
			camo="AK_PLUM";
			attachsys="warsaw";
		};
		class rhs_weap_ak74n_2_npz
		{
			model="rhs_ak74n";
			camo="AK_PLUM";
			attachsys="picatinny";
		};
		class rhs_weap_ak74n_gp25
		{
			model="rhs_ak74n_gp25";
			camo="AK_WOOD";
			attachsys="warsaw";
		};
		class rhs_weap_ak74n_gp25_npz
		{
			model="rhs_ak74n_gp25";
			camo="AK_WOOD";
			attachsys="picatinny";
		};
		class rhs_weap_ak74n_2_gp25
		{
			model="rhs_ak74n_gp25";
			camo="AK_PLUM";
			attachsys="warsaw";
		};
		class rhs_weap_ak74n_2_gp25_npz
		{
			model="rhs_ak74n_gp25";
			camo="AK_PLUM";
			attachsys="picatinny";
		};
		class rhs_weap_akmn
		{
			model="rhs_akmn";
			attachsys="warsaw";
		};
		class rhs_weap_akmn_npz
		{
			model="rhs_akmn";
			attachsys="picatinny";
		};
		class rhs_weap_akmn_gp25
		{
			model="rhs_akmn_gp25";
			attachsys="warsaw";
		};
		class rhs_weap_akmn_gp25_npz
		{
			model="rhs_akmn_gp25";
			attachsys="picatinny";
		};
		class rhs_weap_aks74n
		{
			model="rhs_aks74n";
			camo="AK_WOOD";
			attachsys="warsaw";
		};
		class rhs_weap_aks74n_npz
		{
			model="rhs_aks74n";
			camo="AK_WOOD";
			attachsys="picatinny";
		};
		class rhs_weap_aks74n_2
		{
			model="rhs_aks74n";
			camo="AK_PLUM";
			attachsys="warsaw";
		};
		class rhs_weap_aks74n_2_npz
		{
			model="rhs_aks74n";
			camo="AK_PLUM";
			attachsys="picatinny";
		};
		class rhs_weap_aks74n_gp25
		{
			model="rhs_aks74n_gp25";
			attachsys="warsaw";
		};
		class rhs_weap_aks74n_gp25_npz
		{
			model="rhs_aks74n_gp25";
			attachsys="picatinny";
		};
		class rhs_weap_asval
		{
			model="rhs_asval";
			attachsys="warsaw";
			grip="no";
		};
		class rhs_weap_asval_npz
		{
			model="rhs_asval";
			attachsys="picatinny";
			grip="no";
		};
		class rhs_weap_asval_grip
		{
			model="rhs_asval";
			attachsys="warsaw";
			grip="yes";
		};
		class rhs_weap_asval_grip_npz
		{
			model="rhs_asval";
			attachsys="picatinny";
			grip="yes";
		};
		class rhs_weap_hk416d10
		{
			model="rhs_hk416_d10";
			camo="BLK";
			stock="standard";
		};
		class rhs_weap_hk416d10_LMT
		{
			model="rhs_hk416_d10";
			camo="BLK";
			stock="sopmod";
		};
		class rhs_weap_hk416d10_LMT_d
		{
			model="rhs_hk416_d10";
			camo="desert";
			stock="sopmod";
		};
		class rhs_weap_hk416d10_LMT_wd
		{
			model="rhs_hk416_d10";
			camo="woodland";
			stock="sopmod";
		};
		class rhs_weap_hk416d145
		{
			model="rhs_hk416_d145";
			camo="BLK";
		};
		class rhs_weap_hk416d145_d
		{
			model="rhs_hk416_d145";
			camo="desert";
		};
		class rhs_weap_hk416d145_d_2
		{
			model="rhs_hk416_d145";
			camo="desert_net";
		};
		class rhs_weap_hk416d145_wd
		{
			model="rhs_hk416_d145";
			camo="woodland";
		};
		class rhs_weap_hk416d145_wd_2
		{
			model="rhs_hk416_d145";
			camo="woodland_net";
		};
		class rhs_weap_l1a1
		{
			model="rhs_l1a1";
			camo="polymer";
		};
		class rhs_weap_l1a1_wood
		{
			model="rhs_l1a1";
			camo="wood";
		};
		class rhs_weap_M107
		{
			model="rhs_m107";
			camo="BLK";
		};
		class rhs_weap_M107_d
		{
			model="rhs_m107";
			camo="Desert";
		};
		class rhs_weap_M107_w
		{
			model="rhs_m107";
			camo="Woodland";
		};
		class rhs_weap_m14
		{
			model="rhs_m14";
			camo="wood";
			attachsys="none";
		};
		class rhs_weap_m14_d
		{
			model="rhs_m14";
			camo="desert";
			attachsys="none";
		};
		class rhs_weap_m14_fiberglass
		{
			model="rhs_m14";
			camo="fiberglass";
			attachsys="none";
		};
		class rhs_weap_m14_wd
		{
			model="rhs_m14";
			camo="woodland";
			attachsys="none";
		};
		class rhs_weap_m14_rail
		{
			model="rhs_m14";
			camo="wood";
			attachsys="picatinny";
		};
		class rhs_weap_m14_rail_d
		{
			model="rhs_m14";
			camo="desert";
			attachsys="picatinny";
		};
		class rhs_weap_m14_rail_fiberglass
		{
			model="rhs_m14";
			camo="fiberglass";
			attachsys="picatinny";
		};
		class rhs_weap_m14_rail_wd
		{
			model="rhs_m14";
			camo="woodland";
			attachsys="picatinny";
		};
		class rhs_weap_m14_ris
		{
			model="rhs_m14";
			camo="wood";
			attachsys="ris";
		};
		class rhs_weap_m14_ris_d
		{
			model="rhs_m14";
			camo="desert";
			attachsys="ris";
		};
		class rhs_weap_m14_ris_fiberglass
		{
			model="rhs_m14";
			camo="fiberglass";
			attachsys="ris";
		};
		class rhs_weap_m14_ris_wd
		{
			model="rhs_m14";
			camo="woodland";
			attachsys="ris";
		};
		class rhs_weap_m16a4
		{
			model="rhs_m16a4";
			handle="no";
			stock="standard";
		};
		class rhs_weap_m16a4_carryhandle
		{
			model="rhs_m16a4";
			handle="yes";
			stock="standard";
		};
		class rhs_weap_m16a4_imod
		{
			model="rhs_m16a4";
			handle="no";
			stock="imod";
		};
		class rhs_weap_m16a4_carryhandle_M203
		{
			model="rhs_m16a4_m203";
			handle="yes";
			stock="standard";
		};
		class rhs_weap_m16a4_imod_M203
		{
			model="rhs_m16a4_m203";
			handle="no";
			stock="imod";
		};
		class rhs_weap_XM2010
		{
			model="rhs_m2010";
			camo="BLK";
		};
		class rhs_weap_XM2010_wd
		{
			model="rhs_m2010";
			camo="woodland";
		};
		class rhs_weap_XM2010_d
		{
			model="rhs_m2010";
			camo="desert";
		};
		class rhs_weap_XM2010_sa
		{
			model="rhs_m2010";
			camo="semi";
		};
		class rhs_weap_m21a
		{
			model="rhs_m21a";
			attachsys="warsaw";
		};
		class rhs_weap_m21a_pr
		{
			model="rhs_m21a";
			attachsys="picatinny";
		};
		class rhs_weap_m21a_pbg40
		{
			model="rhs_m21a_pbg";
			attachsys="warsaw";
		};
		class rhs_weap_m21a_pr_pbg40
		{
			model="rhs_m21a_pbg";
			attachsys="picatinny";
		};
		class rhs_weap_m21s
		{
			model="rhs_m21s";
			attachsys="warsaw";
		};
		class rhs_weap_m21s_pr
		{
			model="rhs_m21s";
			attachsys="picatinny";
		};
		class rhs_weap_m24sws
		{
			model="rhs_m24";
			camo="BLK";
		};
		class rhs_weap_m24sws_d
		{
			model="rhs_m24";
			camo="desert";
		};
		class rhs_weap_m24sws_wd
		{
			model="rhs_m24";
			camo="woodland";
		};
		class rhs_weap_m27iar
		{
			model="rhs_m27iar";
			grip="none";
		};
		class rhs_weap_m27iar_grip
		{
			model="rhs_m27iar";
			grip="kac";
		};
		class rhs_weap_m38
		{
			model="rhs_m38";
			attachsys="none";
		};
		class rhs_weap_m38_rail
		{
			model="rhs_m38";
			attachsys="picatinny";
		};
		class rhs_weap_m4
		{
			model="rhs_m4";
			handle="no";
			stock="standard";
		};
		class rhs_weap_m4_carryhandle
		{
			model="rhs_m4";
			handle="yes";
			stock="standard";
		};
		class rhs_weap_m4_mstock
		{
			model="rhs_m4";
			handle="no";
			stock="magpull";
		};
		class rhs_weap_m4_carryhandle_mstock
		{
			model="rhs_m4";
			handle="yes";
			stock="magpull";
		};
		class rhs_weap_m40a5
		{
			model="rhs_m40a5";
			camo="BLK";
		};
		class rhs_weap_m40a5_d
		{
			model="rhs_m40a5";
			camo="desert";
		};
		class rhs_weap_m40a5_wd
		{
			model="rhs_m40a5";
			camo="woodland";
		};
		class rhs_weap_m4_m203
		{
			model="rhs_m4_m203";
			handle="no";
		};
		class rhs_weap_m4_carryhandle_m203
		{
			model="rhs_m4_m203";
			handle="yes";
		};
		class rhs_weap_m4_m203S
		{
			model="rhs_m4_m203s";
			handle="no";
		};
		class rhs_weap_m4_carryhandle_m203s
		{
			model="rhs_m4_m203s";
			handle="yes";
		};
		class rhs_weap_m4a1_carryhandle
		{
			model="rhs_m4a1";
			stock="standard";
		};
		class rhs_weap_m4a1_carryhandle_mstock
		{
			model="rhs_m4a1";
			stock="magpull";
		};
		class rhs_weap_m4a1_blockii
		{
			model="rhs_m4a1_blockII";
			camo="standard";
			stock="standard";
		};
		class rhs_weap_m4a1_blockii_KAC
		{
			model="rhs_m4a1_blockII";
			camo="standard";
			stock="sopmod";
		};
		class rhs_weap_m4a1_blockii_bk
		{
			model="rhs_m4a1_blockII";
			camo="BLK";
			stock="standard";
		};
		class rhs_weap_m4a1_blockii_KAC_bk
		{
			model="rhs_m4a1_blockII";
			camo="BLK";
			stock="sopmod";
		};
		class rhs_weap_m4a1_blockii_d
		{
			model="rhs_m4a1_blockII";
			camo="desert";
			stock="standard";
		};
		class rhs_weap_m4a1_blockii_KAC_d
		{
			model="rhs_m4a1_blockII";
			camo="desert";
			stock="sopmod";
		};
		class rhs_weap_m4a1_blockii_wd
		{
			model="rhs_m4a1_blockII";
			camo="woodland";
			stock="standard";
		};
		class rhs_weap_m4a1_blockii_KAC_wd
		{
			model="rhs_m4a1_blockII";
			camo="woodland";
			stock="sopmod";
		};
		class rhs_weap_m4a1_blockii_M203
		{
			model="rhs_m4a1_blockII_m203";
			camo="standard";
		};
		class rhs_weap_m4a1_blockii_M203_bk
		{
			model="rhs_m4a1_blockII_m203";
			camo="BLK";
		};
		class rhs_weap_m4a1_blockii_M203_d
		{
			model="rhs_m4a1_blockII_m203";
			camo="desert";
		};
		class rhs_weap_m4a1_blockii_M203_wd
		{
			model="rhs_m4a1_blockII_m203";
			camo="woodland";
		};
		class rhs_weap_m4a1
		{
			model="rhs_m4a1_pip";
			camo="BLK";
			stock="standard";
		};
		class rhs_weap_m4a1_mstock
		{
			model="rhs_m4a1_pip";
			camo="BLK";
			stock="magpull";
		};
		class rhs_weap_m4a1_d
		{
			model="rhs_m4a1_pip";
			camo="desert";
			stock="standard";
		};
		class rhs_weap_m4a1_d_mstock
		{
			model="rhs_m4a1_pip";
			camo="desert";
			stock="magpull";
		};
		class rhs_weap_m4a1_wd
		{
			model="rhs_m4a1_pip";
			camo="woodland";
			stock="standard";
		};
		class rhs_weap_m4a1_wd_mstock
		{
			model="rhs_m4a1_pip";
			camo="woodland";
			stock="magpull";
		};
		class rhs_weap_m4a1_m203s
		{
			model="rhs_m4a1_pip_m203s";
			camo="BLK";
		};
		class rhs_weap_m4a1_m203s_d
		{
			model="rhs_m4a1_pip_m203s";
			camo="desert";
		};
		class rhs_weap_m4a1_m203s_wd
		{
			model="rhs_m4a1_pip_m203s";
			camo="woodland";
		};
		class rhs_weap_sr25
		{
			model="rhs_mk11";
			camo="BLK";
		};
		class rhs_weap_sr25_d
		{
			model="rhs_mk11";
			camo="desert";
		};
		class rhs_weap_sr25_wd
		{
			model="rhs_mk11";
			camo="woodland";
		};
		class rhs_weap_sr25_ec
		{
			model="rhs_mk11_ec";
			camo="BLK";
		};
		class rhs_weap_sr25_ec_d
		{
			model="rhs_mk11_ec";
			camo="desert";
		};
		class rhs_weap_sr25_ec_wd
		{
			model="rhs_mk11_ec";
			camo="woodland";
		};
		class rhs_weap_mk18
		{
			model="rhs_mk18";
			camo="standard";
			stock="standard";
		};
		class rhs_weap_mk18_KAC
		{
			model="rhs_mk18";
			camo="standard";
			stock="sopmod";
		};
		class rhs_weap_mk18_bk
		{
			model="rhs_mk18";
			camo="BLK";
			stock="standard";
		};
		class rhs_weap_mk18_KAC_bk
		{
			model="rhs_mk18";
			camo="BLK";
			stock="sopmod";
		};
		class rhs_weap_mk18_d
		{
			model="rhs_mk18";
			camo="desert";
			stock="standard";
		};
		class rhs_weap_mk18_KAC_d
		{
			model="rhs_mk18";
			camo="desert";
			stock="sopmod";
		};
		class rhs_weap_mk18_wd
		{
			model="rhs_mk18";
			camo="woodland";
			stock="standard";
		};
		class rhs_weap_mk18_KAC_wd
		{
			model="rhs_mk18";
			camo="woodland";
			stock="sopmod";
		};
		class rhsusf_weap_MP7A2
		{
			model="rhs_mp7a2";
			camo="BLK";
		};
		class rhsusf_weap_MP7A2_aor1
		{
			model="rhs_mp7a2";
			camo="AOR1";
		};
		class rhsusf_weap_MP7A2_desert
		{
			model="rhs_mp7a2";
			camo="Desert";
		};
		class rhsusf_weap_MP7A2_winter
		{
			model="rhs_mp7a2";
			camo="Winter";
		};
		class rhs_weap_rpk74m
		{
			model="rhs_rpk74m";
			attachsys="warsaw";
		};
		class rhs_weap_rpk74m_npz
		{
			model="rhs_rpk74m";
			attachsys="picatinny";
		};
		class rhs_weap_savz58p
		{
			model="rhs_savz58p";
			camo="wood";
			attachsys="none";
		};
		class rhs_weap_savz58p_rail
		{
			model="rhs_savz58p";
			camo="wood";
			attachsys="picatinny";
		};
		class rhs_weap_savz58p_black
		{
			model="rhs_savz58p";
			camo="BLK";
			attachsys="none";
		};
		class rhs_weap_savz58p_rail_black
		{
			model="rhs_savz58p";
			camo="BLK";
			attachsys="picatinny";
		};
		class rhs_weap_savz58v
		{
			model="rhs_savz58v";
			camo="wood";
			attachsys="none";
		};
		class rhs_weap_savz58v_rail
		{
			model="rhs_savz58v";
			camo="wood";
			attachsys="picatinny";
		};
		class rhs_weap_savz58v_black
		{
			model="rhs_savz58v";
			camo="BLK";
			attachsys="none";
		};
		class rhs_weap_savz58v_rail_black
		{
			model="rhs_savz58v";
			camo="BLK";
			attachsys="picatinny";
		};
		class rhs_weap_savz58v_ris
		{
			model="rhs_savz58v";
			camo="BLK";
			attachsys="ris";
		};
		class rhs_weap_SCARH_CQC
		{
			model="rhs_scarh_cqc";
			camo="BLK";
		};
		class rhs_weap_SCARH_FDE_CQC
		{
			model="rhs_scarh_cqc";
			camo="FDE";
		};
		class rhs_weap_SCARH_USA_CQC
		{
			model="rhs_scarh_cqc";
			camo="USA";
		};
		class rhs_weap_SCARH_LB
		{
			model="rhs_scarh_lb";
			camo="BLK";
		};
		class rhs_weap_SCARH_FDE_LB
		{
			model="rhs_scarh_lb";
			camo="FDE";
		};
		class rhs_weap_SCARH_USA_LB
		{
			model="rhs_scarh_lb";
			camo="USA";
		};
		class rhs_weap_SCARH_STD
		{
			model="rhs_scarh_std";
			camo="BLK";
		};
		class rhs_weap_SCARH_FDE_STD
		{
			model="rhs_scarh_std";
			camo="FDE";
		};
		class rhs_weap_SCARH_USA_STD
		{
			model="rhs_scarh_std";
			camo="USA";
		};
		class rhs_weap_m14_socom
		{
			model="rhs_socom16";
			attachsys="picatinny";
		};
		class rhs_weap_m14_socom_rail
		{
			model="rhs_socom16";
			attachsys="picatinny_and_flash";
		};
		class rhs_weap_svdp
		{
			model="rhs_svdm";
			camo="AK_BLK";
			attachsys="warsaw";
		};
		class rhs_weap_svdp_npz
		{
			model="rhs_svdm";
			camo="AK_BLK";
			attachsys="picatinny";
		};
		class rhs_weap_svdp_wd
		{
			model="rhs_svdm";
			camo="SVD_FLRA";
			attachsys="warsaw";
		};
		class rhs_weap_svdp_wd_npz
		{
			model="rhs_svdm";
			camo="SVD_FLRA";
			attachsys="picatinny";
		};
		class rhs_weap_svds
		{
			model="rhs_svds";
			attachsys="warsaw";
		};
		class rhs_weap_svds_npz
		{
			model="rhs_svds";
			attachsys="picatinny";
		};
		class rhs_weap_vhsd2
		{
			model="rhs_vhsd2";
			attachsys="picatinny";
		};
		class rhs_weap_vhsd2_ct15x
		{
			model="rhs_vhsd2";
			attachsys="ct15x";
		};
		class rhs_weap_vhsd2_bg
		{
			model="rhs_vhsd2_bg";
			attachsys="picatinny";
		};
		class rhs_weap_vhsd2_bg_ct15x
		{
			model="rhs_vhsd2_bg";
			attachsys="ct15x";
		};
		class rhs_weap_vss
		{
			model="rhs_vssvin";
			attachsys="warsaw";
			grip="no";
		};
		class rhs_weap_vss_npz
		{
			model="rhs_vssvin";
			attachsys="picatinny";
			grip="no";
		};
		class rhs_weap_vss_grip
		{
			model="rhs_vssvin";
			attachsys="warsaw";
			grip="yes";
		};
		class rhs_weap_vss_grip_npz
		{
			model="rhs_vssvin";
			attachsys="picatinny";
			grip="yes";
		};
		class rhs_weap_cz99
		{
			model="rhs_cz99";
			camo="BLK";
		};
		class rhs_weap_cz99_etched
		{
			model="rhs_cz99";
			camo="engraved";
		};
		class rhs_weap_rsp30_white
		{
			model="rhs_rsp30";
			color="WHT";
		};
		class rhs_weap_rsp30_green
		{
			model="rhs_rsp30";
			color="GRN";
		};
		class rhs_weap_rsp30_red
		{
			model="rhs_rsp30";
			color="RED";
		};
		class rhsusf_weap_MP7A2_folded
		{
			model="rhs_mp7a2_folded";
			camo="BLK";
		};
		class rhsusf_weap_MP7A2_folded_aor1
		{
			model="rhs_mp7a2_folded";
			camo="AOR1";
		};
		class rhsusf_weap_MP7A2_folded_desert
		{
			model="rhs_mp7a2_folded";
			camo="Desert";
		};
		class rhsusf_weap_MP7A2_folded_winter
		{
			model="rhs_mp7a2_folded";
			camo="Winter";
		};
		class rhs_weap_M136
		{
			model="rhs_m136";
			ammo="heat";
		};
		class rhs_weap_M136_hedp
		{
			model="rhs_m136";
			ammo="hedp";
		};
		class rhs_weap_M136_hp
		{
			model="rhs_m136";
			ammo="hp";
		};
		class rhs_weap_smaw
		{
			model="rhs_smaw";
			camo="BLK";
		};
		class rhs_weap_smaw_green
		{
			model="rhs_smaw";
			camo="GRN";
		};
		class rhsusf_bino_lerca_1200_black
		{
			model="rhs_lerca1200";
			camo="BLK";
		};
		class rhsusf_bino_lerca_1200_tan
		{
			model="rhs_lerca1200";
			camo="TAN";
		};
		class rhsusf_bino_m24
		{
			model="rhs_m24_bino";
			ard="off";
		};
		class rhsusf_bino_m24_ARD
		{
			model="rhs_m24_bino";
			ard="on";
		};
		class rhs_tr8_periscope
		{
			model="rhs_tr8";
			pip="no";
		};
		class rhs_tr8_periscope_pip
		{
			model="rhs_tr8";
			pip="yes";
		};
	};
};
