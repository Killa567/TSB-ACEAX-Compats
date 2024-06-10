class CfgPatches
{
	class aceax_acebi_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion="1.0";
		requiredAddons[]=
		{
			"aceax_gearinfo"
		};
		author="TSB";
	};
};

class XtdGearModels
{
	class CfgGlasses
	{
		class acebi_apr_csat
		{
			options[]=
			{
				"camo"
			};
			label="APR [CSAT]";
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
		class acebi_balaclava
		{
			options[]=
			{
				"camo",
				"goggles"
			};
			label="Balaclava";
			class camo
			{
				values[]=
				{
					"BLK",
					"OLI",
					"BlueStripes",
					"Flecktarn",
					"Halloween",
					"OrangePattern",
					"Scarecrow",
					"Skull",
					"Tropentarn"
				};
				alwaysSelectable=1;
			};
			class goggles
			{
				values[]=
				{
					"None",
					"Combat",
					"Low Profile"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_bandana_face
		{
			options[]=
			{
				"camo",
				"glasses"
			};
			label="Bandana";
			class camo
			{
				values[]=
				{
					"BLK",
					"Beast",
					"KHK",
					"OLI",
					"TAN",
					"BlueFlames",
					"BlueFlames2",
					"CandySkull",
					"OrangeFlames",
					"RedFlames",
					"Skull",
					"Syndikat",
					"Skull2",
					"Vampire",
					"Syndikat2"

				};
				alwaysSelectable=1;
			};
			class glasses
			{
				values[]=
				{
					"None",
					"Aviator",
					"Shades",
					"Sport"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_blindfold
		{
			options[]=
			{
				"camo"
			};
			label="Blindfold";
			class camo
			{
				values[]=
				{
					"BLK",
					"WHT"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_combat_goggles
		{
			options[]=
			{
				"camo"
			};
			label="Combat Goggles";
			class camo
			{
				values[]=
				{
					"SND",
					"RGR"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_diving_goggles
		{
			options[]=
			{
				"faction"
			};
			label="Diving Goggles";
			class faction
			{
				values[]=
				{
					"None",
					"AAF",
					"CSAT",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_respirator
		{
			options[]=
			{
				"camo"
			};
			label="Respirator";
			class camo
			{
				values[]=
				{
					"BLU",
					"WHT",
					"YLW"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_safety_goggles
		{
			options[]=
			{
				"earpiece"
			};
			label="Safety Goggles";
			class earpiece
			{
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_shades
		{
			options[]=
			{
				"camo"
			};
			label="Shades";
			class camo
			{
				values[]=
				{
					"BLU",
					"BLK",
					"GRN",
					"RED"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_spectacles
		{
			options[]=
			{
				"camo"
			};
			label="Spectacles";
			class camo
			{
				values[]=
				{
					"CLR",
					"BLK"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_sports_shades
		{
			options[]=
			{
				"camo"
			};
			label="Sports Shades";
			class camo
			{
				values[]=
				{
					"Fire",
					"Poison",
					"Shadow",
					"Style",
					"Vulcan",
					"Yetti"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_square_glasses
		{
			options[]=
			{
				"camo"
			};
			label="Square Glasses";
			class camo
			{
				values[]=
				{
					"CLR",
					"BLK"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_stealth_balaclava
		{
			options[]=
			{
				"camo",
				"goggles"
			};
			label="Stealth Balaclava";
			class camo
			{
				values[]=
				{
					"BLK",
					"CTRG_TROP"
				};
				alwaysSelectable=1;
			};
			class goggles
			{
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_tactical_glasses
		{
			options[]=
			{
				"camo"
			};
			label="Tactical Glasses";
			class camo
			{
				values[]=
				{
					"CLR",
					"BLK"
				};
				alwaysSelectable=1;
			};
		};
	};
	class CfgVehicles
	{
		class acebi_assaultpack
		{
			options[]=
			{
				"camo"
			};
			label="Assault Pack";
			class camo
			{
				values[]=
				{
					"BLK",
					"CBR",
					"AAF",
					"EAF",
					"RGR",
					"HEX",
					"KHK",
					"MTP",
					"SGG",
					"Tropic",
					"M81",
					"DES"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_bergen
		{
			options[]=
			{
				"camo"
			};
			label="Bergen Backpack";
			class camo
			{
				values[]=
				{
					"AAF",
					"HEX",
					"MTP",
					"Tropic"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_carryall
		{
			options[]=
			{
				"camo"
			};
			label="Carryall Backpack";
			class camo
			{
				values[]=
				{
					"BLK",
					"EAF",
					"GRN",
					"HEX",
					"GHEX",
					"THEX",
					"UHEX",
					"KHK",
					"MTP",
					"OLI",
					"M81",
					"DES"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_everydaypack
		{
			options[]=
			{
				"camo"
			};
			label="Everyday Backpack";
			class camo
			{
				values[]=
				{
					"Astra",
					"BLK",
					"Vrana",
					"IDAP"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_gunbag
		{
			options[]=
			{
				"camo"
			};
			label="Gunbag";
			class camo
			{
				values[]=
				{
					"GRN",
					"TAN"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_fieldpack
		{
			options[]=
			{
				"camo"
			};
			label="Field Pack";
			class camo
			{
				values[]=
				{
					"BLK",
					"CBR",
					"GRN",
					"HEX",
					"GHEX",
					"THEX",
					"UHEX",
					"KHK",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_kitbag
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
					"CBR",
					"RGR",
					"MTP",
					"SGG",
					"TAN",
					"DES"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_legstrapbag
		{
			options[]=
			{
				"camo"
			};
			label="Leg Strap Bag";
			class camo
			{
				values[]=
				{
					"BLK",
					"CBR",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_messengerbag
		{
			options[]=
			{
				"camo"
			};
			label="Messenger Bag";
			class camo
			{
				values[]=
				{
					"BLK",
					"CBR",
					"GRY",
					"OLI",
					"IDAP"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_radiopack
		{
			options[]=
			{
				"camo"
			};
			label="Radio Pack";
			class camo
			{
				values[]=
				{
					"BLK",
					"AAF",
					"EAF",
					"HEX",
					"GHEX",
					"UHEX",
					"MTP",
					"Tropic",
					"M81"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_sportspack
		{
			options[]=
			{
				"camo"
			};
			label="Sports Backpack";
			class camo
			{
				values[]=
				{
					"BLU",
					"GRN",
					"RED"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_tacpack
		{
			options[]=
			{
				"camo"
			};
			label="Tactical Backpack";
			class camo
			{
				values[]=
				{
					"BLK",
					"RGR",
					"HEX",
					"MTP",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_viper_harness
		{
			options[]=
			{
				"camo"
			};
			label="Viper Harness";
			class camo
			{
				values[]=
				{
					"BLK",
					"HEX",
					"GHEX",
					"KHK",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_viper_harness_lite
		{
			options[]=
			{
				"camo"
			};
			label="Viper Light Harness";
			class camo
			{
				values[]=
				{
					"BLK",
					"HEX",
					"GHEX",
					"KHK",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_auto_gmg
		{
			options[]=
			{
				"faction"
			};
			label="Dismantled Autonomous GMG";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_auto_hmg
		{
			options[]=
			{
				"faction"
			};
			label="Dismantled Autonomous HMG";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_m2_hmg
		{
			options[]=
			{
				"faction"
			};
			label="Dismantled M2 HMG";
			class faction
			{
				values[]=
				{
					"AAF",
					"FIA",
					"LDF",
					"SYN"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_m2_hmg_raised
		{
			options[]=
			{
				"faction"
			};
			label="Dismantled M2 HMG (Raised)";
			class faction
			{
				values[]=
				{
					"AAF",
					"FIA",
					"LDF",
					"SYN"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_m2_tripod
		{
			options[]=
			{
				"faction"
			};
			label="Folded Tripod M2 HMG";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"FIA",
					"LDF",
					"NATO",
					"SYN"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_m2_tripod_raised
		{
			options[]=
			{
				"faction"
			};
			label="Folded Tripod M2 HMG (Raised)";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"FIA",
					"LDF",
					"NATO",
					"SYN"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mk30_32_tripod
		{
			options[]=
			{
				"faction"
			};
			label="Folded Tripod";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mk30_32_tripod_raised
		{
			options[]=
			{
				"faction"
			};
			label="Folded Tripod (Raised)";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mk30_hmg
		{
			options[]=
			{
				"faction"
			};
			label="Dismantled Mk30 HMG";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mk30_hmg_raised
		{
			options[]=
			{
				"faction"
			};
			label="Dismantled Mk30 HMG (Raised)";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mk32_gmg
		{
			options[]=
			{
				"faction"
			};
			label="Dismantled Mk32 GMG";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mk32_gmg_raised
		{
			options[]=
			{
				"faction"
			};
			label="Dismantled Mk32 GMG (Raised)";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mortar_bipod
		{
			options[]=
			{
				"faction"
			};
			label="Folded Mk6 Mortar Bipod";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mortar_tube
		{
			options[]=
			{
				"faction"
			};
			label="Folded Mk6 Mortar Tube";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_remote_desig
		{
			options[]=
			{
				"faction",
				"camo"
			};
			label="Remote Designator Bag";
			class faction
			{
				values[]=
				{
					"CSAT",
					"NATO"
				};
				alwaysSelectable=1;
			};
			class camo
			{
				values[]=
				{
					"HEX",
					"MTP",
					"M81"
				};
				alwaysSelectable=0;
			};
		};
		class acebi_titan_aa
		{
			options[]=
			{
				"faction"
			};
			label="Static Titan Launcher (AA)";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_titan_at
		{
			options[]=
			{
				"faction"
			};
			label="Static Titan Launcher (AT)";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_al6
		{
			options[]=
			{
				"faction"
			};
			label="UAV Bag (AL-6)";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_al6_medical
		{
			options[]=
			{
				"faction"
			};
			label="UAV Bag (AL-6, Medical)";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"IDAP",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_ar2
		{
			options[]=
			{
				"faction"
			};
			label="UAV Bag (AR-2)";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO",
					"BLK"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_ed1d
		{
			options[]=
			{
				"faction"
			};
			label="UAV Bag (ED-1D)";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_ed1e
		{
			options[]=
			{
				"faction"
			};
			label="UAV Bag (ED-1E)";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
	};
	class CfgWeapons
	{
		class acebi_adv_mod_helm
		{
			options[]=
			{
				"camo",
				"accessory"
			};
			label="Advanced Modular Helmet";
			class camo
			{
				values[]=
				{
					"EAF",
					"OLI"
				};
				alwaysSelectable=1;
			};
			class accessory
			{
				values[]=
				{
					"Headset",
					"Chops",
					"Ear Prot.",
					"None"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_assassin_helm
		{
			options[]=
			{
				"camo"
			};
			label="Assassin Helmet";
			class camo
			{
				values[]=
				{
					"BLK",
					"HEX",
					"GHEX"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_avenger_helm
		{
			options[]=
			{
				"camo"
			};
			label="Avenger Helmet";
			class camo
			{
				values[]=
				{
					"OLI",
					"OD",
					"THEX"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_bandana_head
		{
			options[]=
			{
				"camo",
				"headset"
			};
			label="Bandana";
			class camo
			{
				values[]=
				{
					"BLK",
					"BLU",
					"CBR",
					"KHK",
					"MTP",
					"SGG",
					"SND",
					"Surfer",
					"Surfer/Black",
					"Surfer/Green",
					"WDL"
				};
				alwaysSelectable=1;
			};
			class headset
			{
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_basic_helm
		{
			options[]=
			{
				"camo"
			};
			label="Basic Helmet";
			class camo
			{
				values[]=
				{
					"BLK",
					"BLU",
					"OLI",
					"WHT"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_beanie
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
					"BLK",
					"CBR",
					"RGR",
					"KHK"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_beret_faction
		{
			options[]=
			{
				"faction",
				"rank"
			};
			label="Beret [Faction]";
			class faction
			{
				values[]=
				{
					"Gendarmerie",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
			class rank
			{
				values[]=
				{
					"Unspecified",
					"Colonel"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_booniehat
		{
			options[]=
			{
				"camo",
				"headset"
			};
			label="Booniehat";
			class camo
			{
				values[]=
				{
					"RGR",
					"KHK",
					"MTP",
					"OLI",
					"SND",
					"THEX",
					"Tropic",
					"M81",
					"AAF",
					"EAF"
				};
				alwaysSelectable=1;
			};
			class headset
			{
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_cap
		{
			options[]=
			{
				"camo",
				"headset"
			};
			label="Cap";
			class camo
			{
				values[]=
				{
					"AAF",
					"BI",
					"BLK",
					"Black/IDAP",
					"BLU",
					"CMMG",
					"GRN",
					"HEX",
					"ION",
					"OLI",
					"Orange/IDAP",
					"Police",
					"Press",
					"RED",
					"Surfer",
					"UK",
					"US Black",
					"US MTP",
					"White/IDAP",
					"Lyfe",
					"MaldenTours"
				};
				alwaysSelectable=1;
			};
			class headset
			{
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_combat_helm
		{
			options[]=
			{
				"camo"
			};
			label="Combat Helmet";
			class camo
			{
				values[]=
				{
					"BIHELM_STD",
					"BLK",
					"BIHELM_DES",
					"BIHELM_GRS",
					"SND",
					"BIHELM_SNK",
					"Tropic",
					"M81"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_crew_helm
		{
			options[]=
			{
				"faction",
				"camo"
			};
			label="Crew Helmet";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
			class camo
			{
				values[]=
				{
					"HEX",
					"GHEX",
					"OLI",
					"RGR"
				};
				alwaysSelectable=0;
			};
		};
		class acebi_crew_helm_soft
		{
			options[]=
			{
				"faction"
			};
			label="Crew Helmet (Soft)";
			class faction
			{
				values[]=
				{
					"CSAT",
					"LDF"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_defender_helm
		{
			options[]=
			{
				"camo"
			};
			label="Defender Helmet";
			class camo
			{
				values[]=
				{
					"HEX",
					"GHEX",
					"UHEX"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_ear_protectors
		{
			options[]=
			{
				"camo"
			};
			label="Ear Protectors";
			class camo
			{
				values[]=
				{
					"BLK",
					"ORN",
					"RED",
					"WHT",
					"YLW"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_enhc_combat_helm
		{
			options[]=
			{
				"camo"
			};
			label="Enhanced Combat Helmet";
			class camo
			{
				values[]=
				{
					"BIHELM_STD",
					"BLK",
					"BIHELM_DES",
					"BIHELM_GRS",
					"SND",
					"BIHELM_SNK",
					"Tropic",
					"M81"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_hardhat
		{
			options[]=
			{
				"camo",
				"ears"
			};
			label="Hard Hat";
			class camo
			{
				values[]=
				{
					"BLK",
					"ORN",
					"RED",
					"Vrana",
					"WHT",
					"YLW"
				};
				alwaysSelectable=1;
			};
			class ears
			{
				values[]=
				{
					"None",
					"Ear Proc.",
					"Headset"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_hat
		{
			options[]=
			{
				"camo"
			};
			label="Hat";
			class camo
			{
				values[]=
				{
					"BLU",
					"BRN",
					"Camo",
					"Checker",
					"GRY",
					"TAN"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_headbandage
		{
			options[]=
			{
				"severity"
			};
			label="Head Bandage";
			class severity
			{
				values[]=
				{
					"Clean",
					"Moderate",
					"Severe"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_headset
		{
			options[]=
			{
				"camo"
			};
			label="Headset";
			class camo
			{
				values[]=
				{
					"BLK",
					"ORN",
					"RED",
					"WHT",
					"YLW"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_heli_crew_helm
		{
			options[]=
			{
				"faction"
			};
			label="Heli Crew Helmet";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_heli_pilot_helm
		{
			options[]=
			{
				"faction"
			};
			label="Heli Pilot Helmet";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_light_combat_helm
		{
			options[]=
			{
				"camo"
			};
			label="Light Combat Helmet";
			class camo
			{
				values[]=
				{
					"BIHELM_STD",
					"BLK",
					"BIHELM_DES",
					"BIHELM_GRS",
					"SND",
					"BIHELM_SNK",
					"Tropic",
					"M81"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mil_cap
		{
			options[]=
			{
				"camo"
			};
			label="Military Cap";
			class camo
			{
				values[]=
				{
					"AAF",
					"BLU",
					"Gendarmerie",
					"EAF",
					"GRN",
					"HEX",
					"GHEX",
					"THEX",
					"GRY",
					"MTP",
					"Tropic",
					"M81"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_parade_cap
		{
			options[]=
			{
				"faction"
			};
			label="Parade Cap";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"USA"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_pilot_helm
		{
			options[]=
			{
				"faction"
			};
			label="Pilot Helmet";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_protector_helm
		{
			options[]=
			{
				"camo"
			};
			label="Protector Helmet";
			class camo
			{
				values[]=
				{
					"HEX",
					"GHEX",
					"UHEX"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_press_helm
		{
			options[]=
			{
				"NeckPro"
			};
			label="Press Helmet";
			class NeckPro
			{
				values[]=
				{
					"Yes",
					"No"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_racing_helmet
		{
			options[]=
			{
				"camo"
			};
			label="Racing Helmet";
			class camo
			{
				values[]=
				{
					"BLK",
					"BLU",
					"Bluking",
					"Fuel",
					"GRN",
					"ORN",
					"RED",
					"Redstone",
					"Vrana",
					"WHT",
					"YLW"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_safari_hat
		{
			options[]=
			{
				"camo"
			};
			label="Safari Hat";
			class camo
			{
				values[]=
				{
					"OLI",
					"SND"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_shemag_head
		{
			options[]=
			{
				"camo",
				"headset"
			};
			label="Shemag";
			class camo
			{
				values[]=
				{
					"OLI",
					"TAN",
					"WHT"
				};
				alwaysSelectable=1;
			};
			class headset
			{
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_stealth_combat_helm
		{
			options[]=
			{
				"camo"
			};
			label="Steath Combat Helmet";
			class camo
			{
				values[]=
				{
					"CTRG_ARID",
					"CTRG_TROP"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_straw_hat
		{
			options[]=
			{
				"camo"
			};
			label="Straw Hat";
			class camo
			{
				values[]=
				{
					"Light",
					"Dark"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_viper_helm
		{
			options[]=
			{
				"camo"
			};
			label="Special Purpose Helmet";
			class camo
			{
				values[]=
				{
					"HEX",
					"GHEX"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_aidworker_clothes
		{
			options[]=
			{
				"variant"
			};
			label="Aid Worker Clothes";
			class variant
			{
				values[]=
				{
					"Cargo",
					"Jeans",
					"Polo",
					"Polo/Shorts",
					"Tee",
					"Tee/Shorts"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_bandit_clothes
		{
			options[]=
			{
				"variant"
			};
			label="Bandit Clothes";
			class variant
			{
				label="Variant";
				values[]=
				{
					"Checkered",
					"Polo Shirt",
					"Skull",
					"Tank Top",
					"Tee"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_casual_clothes
		{
			options[]=
			{
				"design"
			};
			label="Casual Clothes";
			class design
			{
				label="Graphic Design";
				values[]=
				{
					"Abstract",
					"Art of War",
					"Blue",
					"Drones",
					"Exhibition",
					"Green",
					"Navy",
					"Robogeddon",
					"WalRob"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_common_clothes
		{
			options[]=
			{
				"camo"
			};
			label="Commoner Clothes";
			class camo
			{
				values[]=
				{
					"BLU",
					"Burgundy",
					"Red-White",
					"Salmon",
					"Striped",
					"Tricolor"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_constr_cover
		{
			options[]=
			{
				"camo"
			};
			label="Construction Coverall";
			class camo
			{
				values[]=
				{
					"BLK",
					"BLU",
					"RED",
					"Vrana"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_ctrg_combat_uniform
		{
			options[]=
			{
				"camo",
				"top",
				"sleeves"
			};
			label="CTRG Combat Uniform";
			class camo
			{
				values[]=
				{
					"CTRG_ARID",
					"CTRG_URB"
				};
				alwaysSelectable=1;
			};
			class top
			{
				label="Top";
				values[]=
				{
					"Standard",
					"Tee"
				};
				alwaysSelectable=1;
			};
			class sleeves
			{
				values[]=
				{
					"Full",
					"Half"
				};
				alwaysSelectable=0;
			};
		};
		class acebi_ctrg_stealth_uniform
		{
			options[]=
			{
				"camo",
				"top",
				"sleeves"
			};
			label="CTRG Stealth Uniform";
			class camo
			{
				values[]=
				{
					"CTRG_ARID",
					"CTRG_TROP"
				};
				alwaysSelectable=1;
			};
			class top
			{
				label="Top";
				values[]=
				{
					"Standard",
					"Tee"
				};
				alwaysSelectable=1;
			};
			class sleeves
			{
				values[]=
				{
					"Full",
					"Half"
				};
				alwaysSelectable=0;
			};
		};
		class acebi_deserter_clothes
		{
			options[]=
			{
				"variant"
			};
			label="Deserter Clothes";
			class variant
			{
				label="Variant";
				values[]=
				{
					"Jacket",
					"Tee"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_driver_cover
		{
			options[]=
			{
				"camo"
			};
			label="Driver Coverall";
			class camo
			{
				values[]=
				{
					"BLK",
					"BLU",
					"Bluking",
					"Fuel",
					"GRN",
					"ORN",
					"RED",
					"Redstone",
					"Vrana",
					"WHT",
					"YLW"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_fatigues_aaf
		{
			options[]=
			{
				"sleeves"
			};
			label="Combat Fatigues [AAF]";
			class sleeves
			{
				values[]=
				{
					"Full",
					"Half"
				};
				alwaysSelectable=0;
			};
		};
		class acebi_fatigues_csat
		{
			options[]=
			{
				"camo"
			};
			label="Fatigues [CSAT]";
			class camo
			{
				values[]=
				{
					"HEX",
					"GHEX",
					"UHEX"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_fatigues_ldf
		{
			options[]=
			{
				"top",
				"sleeves"
			};
			label="Combat Fatigues [LDF]";
			class top
			{
				label="Top";
				values[]=
				{
					"Standard",
					"Sweater",
					"Tank Top"
				};
				alwaysSelectable=1;
			};
			class sleeves
			{
				values[]=
				{
					"Full",
					"Half"
				};
				alwaysSelectable=0;
			};
		};
		class acebi_fatigues_nato
		{
			options[]=
			{
				"camo",
				"top",
				"sleeves"
			};
			label="Combat Fatigues [NATO]";
			class camo
			{
				values[]=
				{
					"MTP",
					"Tropic",
					"M81"
				};
				alwaysSelectable=1;
			};
			class top
			{
				label="Top";
				values[]=
				{
					"Standard",
					"Tee"
				};
				alwaysSelectable=1;
			};
			class sleeves
			{
				values[]=
				{
					"Full",
					"Half"
				};
				alwaysSelectable=0;
			};
		};
		class acebi_formal_suit
		{
			options[]=
			{
				"camo",
				"undershirt"
			};
			label="Formal Suit";
			class camo
			{
				values[]=
				{
					"BLK",
					"BLU",
					"GRY",
					"KHK"
				};
				alwaysSelectable=1;
			};
			class undershirt
			{
				label="Undershirt";
				values[]=
				{
					"Tie",
					"T-Shirt"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_ghillie_full
		{
			options[]=
			{
				"faction",
				"camo"
			};
			label="Full Ghillie";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"NATO"
				};
				alwaysSelectable=1;
			};
			class camo
			{
				values[]=
				{
					"Arid",
					"Jungle",
					"Lush",
					"Semi-Arid"
				};
				alwaysSelectable=0;
			};
		};
		class acebi_ghillie_suit
		{
			options[]=
			{
				"faction",
				"camo"
			};
			label="Ghillie Suit";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"NATO"
				};
				alwaysSelectable=1;
			};
			class camo
			{
				values[]=
				{
					"AAF",
					"HEX",
					"GHEX",
					"MTP",
					"Tropic"
				};
				alwaysSelectable=0;
			};
		};
		class acebi_granit
		{
			options[]=
			{
				"camo"
			};
			label="Granit";
			class camo
			{
				values[]=
				{
					"OD",
					"TAN",
					"THEX",
					"BLK"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_guerilla_apparel
		{
			options[]=
			{
				"camo"
			};
			label="Guerilla Apparel";
			class camo
			{
				values[]=
				{
					"KHK",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_guerilla_outfit
		{
			options[]=
			{
				"camo"
			};
			label="Guerilla Outfit";
			class camo
			{
				values[]=
				{
					"Pattern",
					"Plain/Dark",
					"Plain/Light"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_heli_cover
		{
			options[]=
			{
				"faction"
			};
			label="Heli Pilot Coveralls";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_looter_clothes
		{
			options[]=
			{
				"variant"
			};
			label="Looter Clothes";
			class variant
			{
				label="Variant";
				values[]=
				{
					"Leather Jacket",
					"Tee/Black",
					"Tee/Olive",
					"Tee/Skull",
					"Tee/Sport"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_officer_csat
		{
			options[]=
			{
				"camo"
			};
			label="Officer Fatigues [CSAT]";
			class camo
			{
				values[]=
				{
					"HEX",
					"GHEX"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_parade_uniform
		{
			options[]=
			{
				"faction",
				"decorated"
			};
			label="Parade Uniform";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"LDF",
					"USA"
				};
				alwaysSelectable=1;
			};
			class decorated
			{
				label="Decorated";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_paramil_garb
		{
			options[]=
			{
				"variant"
			};
			label="Paramilitary Garb";
			class variant
			{
				labe="Variant";
				values[]=
				{
					"Jacket",
					"Shirt",
					"Shorts",
					"Tank Top",
					"Tee"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_pilot_cover
		{
			options[]=
			{
				"faction"
			};
			label="Pilot Coveralls";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_sci_outfit_form
		{
			options[]=
			{
				"camo"
			};
			label="Scientist Outfit (Formal)";
			class camo
			{
				values[]=
				{
					"BLU",
					"WHT"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_sci_outfit_inform
		{
			options[]=
			{
				"camo"
			};
			label="Scientist Outfit (Informal)";
			class camo
			{
				values[]=
				{
					"BLK",
					"RED"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_sports_clothes
		{
			options[]=
			{
				"camo"
			};
			label="Sport Clothes";
			class camo
			{
				values[]=
				{
					"Beach",
					"BLU",
					"ORN"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_summer_clothes
		{
			options[]=
			{
				"camo"
			};
			label="Summer Clothes";
			class camo
			{
				values[]=
				{
					"RED",
					"Sky",
					"YLW"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_viper_suit
		{
			options[]=
			{
				"camo"
			};
			label="Special Purpose Suit";
			class camo
			{
				values[]=
				{
					"HEX",
					"GHEX"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_vrsuit
		{
			options[]=
			{
				"faction"
			};
			label="VR Suit";
			class faction
			{
				values[]=
				{
					"AAF",
					"CIV",
					"CSAT",
					"NATO"
				};
				alwaysSelectable=1;
				class CIV
				{
					label="Civilians";
					image="#(rgb,8,8,3)color(0.4,0,0.5,1)";
				};
			};
		};
		class acebi_wetsuit
		{
			options[]=
			{
				"faction"
			};
			label="Wetsuit";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_carrier_gl
		{
			options[]=
			{
				"camo"
			};
			label="Carrier GL Rig";
			class camo
			{
				values[]=
				{
					"BLK",
					"RGR",
					"MTP",
					"Tropic",
					"M81",
					"DES"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_carrier_lite
		{
			options[]=
			{
				"camo",
				"flag"
			};
			label="Carrier Lite";
			class camo
			{
				values[]=
				{
					"BLK",
					"RGR",
					"Tropic",
					"M81",
					"DES"
				};
				alwaysSelectable=1;
			};
			class flag
			{
				values[]=
				{
					"USA",
					"None"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_carrier_rig
		{
			options[]=
			{
				"camo",
				"flag"
			};
			label="Carrier Rig";
			class camo
			{
				values[]=
				{
					"BLK",
					"RGR",
					"Tropic",
					"M81",
					"DES"
				};
				alwaysSelectable=1;
			};
			class flag
			{
				values[]=
				{
					"USA",
					"None"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_carrier_spec
		{
			options[]=
			{
				"camo"
			};
			label="Carrier Special Rig";
			class camo
			{
				values[]=
				{
					"BLK",
					"RGR",
					"MTP",
					"Tropic",
					"M81",
					"DES"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_chest_rig
		{
			options[]=
			{
				"camo"
			};
			label="Chest Rig";
			class camo
			{
				values[]=
				{
					"BLK",
					"RGR",
					"KHK",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_deck_vest
		{
			options[]=
			{
				"camo"
			};
			label="Deck Crew Vest";
			class camo
			{
				values[]=
				{
					"BLU",
					"BRN",
					"GRN",
					"RED",
					"VIO",
					"WHT",
					"YLW"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_eod_vest
		{
			options[]=
			{
				"camo"
			};
			label="EOD Vest";
			class camo
			{
				values[]=
				{
					"BLU",
					"BLU/IDAP",
					"CBR",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_ga_carrier_gl
		{
			options[]=
			{
				"camo"
			};
			label="GA Carrier GL Rig";
			class camo
			{
				values[]=
				{
					"AAF",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_ga_carrier_rig
		{
			options[]=
			{
				"camo"
			};
			label="GA Carrier Rig";
			class camo
			{
				values[]=
				{
					"AAF",
					"UNA"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_ga_carrier_lite
		{
			options[]=
			{
				"camo"
			};
			label="GA Carrier Lite";
			class camo
			{
				values[]=
				{
					"AAF",
					"UNA"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_identification_vest
		{
			options[]=
			{
				"symbol"
			};
			label="Identification Vest";
			class symbol
			{
				values[]=
				{
					"Crystal",
					"IDAP"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_kipchak_vest
		{
			options[]=
			{
				"radio"
			};
			label="Kipchak Vest";
			class radio
			{
				values[]=
				{
					"Standard",
					"Tactical"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_lbv_harness
		{
			options[]=
			{
				"camo"
			};
			label="LBV Harness";
			class camo
			{
				values[]=
				{
					"BRN",
					"GHEX",
					"GRY",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_lbv_harness_grenadier
		{
			options[]=
			{
				"camo"
			};
			label="LBV Grenadier Harness";
			class camo
			{
				values[]=
				{
					"BRN",
					"GHEX",
					"GRY"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_legstrapbag
		{
			options[]=
			{
				"camo"
			};
			label="Leg Strap Bag";
			class camo
			{
				values[]=
				{
					"BLK",
					"CBR",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_ravenvest
		{
			options[]=
			{
				"camo"
			};
			label="Raven Vest";
			class camo
			{
				values[]=
				{
					"BLK",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mod_carrier_gl
		{
			options[]=
			{
				"camo"
			};
			label="Modular Carrier GL Rig";
			class camo
			{
				values[]=
				{
					"EAF",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mod_carrier_lite
		{
			options[]=
			{
				"camo"
			};
			label="Modular Carrier Lite";
			class camo
			{
				values[]=
				{
					"EAF",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mod_carrier_vest
		{
			options[]=
			{
				"camo"
			};
			label="Modular Carrier Vest";
			class camo
			{
				values[]=
				{
					"EAF",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_multipocket_vest
		{
			options[]=
			{
				"camo"
			};
			label="Multi-Pocket Vest";
			class camo
			{
				values[]=
				{
					"BLK",
					"CBR",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_rebreather
		{
			options[]=
			{
				"faction"
			};
			label="Rebreather";
			class faction
			{
				values[]=
				{
					"AAF",
					"CSAT",
					"NATO"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_safetyvest
		{
			options[]=
			{
				"camo"
			};
			label="Safety Vest";
			class camo
			{
				values[]=
				{
					"BLU",
					"ORN",
					"YLW"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_slash_band
		{
			options[]=
			{
				"camo"
			};
			label="Slash Bandolier";
			class camo
			{
				values[]=
				{
					"BLK",
					"CBR",
					"GHEX",
					"RGR",
					"KHK",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_tac_chest_rig
		{
			options[]=
			{
				"camo"
			};
			label="Tactical Chest Rig";
			class camo
			{
				values[]=
				{
					"CBR",
					"GRN",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_tacvest
		{
			options[]=
			{
				"camo"
			};
			label="Tactical Vest";
			class camo
			{
				values[]=
				{
					"BLK",
					"BRN",
					"Camo",
					"KHK",
					"OLI",
					"Stavrou"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_tacvest_police
		{
			options[]=
			{
				"camo"
			};
			label="Tactical Vest [Police]";
			class camo
			{
				values[]=
				{
					"Police",
					"Gendarmerie"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_ak15
		{
			options[]=
			{
				"camo"
			};
			label="AK-15";
			class camo
			{
				values[]=
				{
					"BLK",
					"BISPNZ_A",
					"BISPNZ_L"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_ak15_gl
		{
			options[]=
			{
				"camo"
			};
			label="AK-15 GL";
			class camo
			{
				values[]=
				{
					"BLK",
					"BISPNZ_A",
					"BISPNZ_L"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_ak15k
		{
			options[]=
			{
				"camo"
			};
			label="AK-15K";
			class camo
			{
				values[]=
				{
					"BLK",
					"BISPNZ_A",
					"BISPNZ_L"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_asp1kir
		{
			options[]=
			{
				"camo"
			};
			label="ASP-1 Kir";
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
		class acebi_cyrus
		{
			options[]=
			{
				"camo"
			};
			label="Cyrus";
			class camo
			{
				values[]=
				{
					"BLK",
					"HEX",
					"TAN"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_f2000
		{
			options[]=
			{
				"camo"
			};
			label="F2000";
			class camo
			{
				values[]=
				{
					"AAF",
					"SND"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_f2000_eglm
		{
			options[]=
			{
				"camo"
			};
			label="F2000 EGLM";
			class camo
			{
				values[]=
				{
					"AAF",
					"SND"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_f2000_tac
		{
			options[]=
			{
				"camo"
			};
			label="F2000 Tactical";
			class camo
			{
				values[]=
				{
					"AAF",
					"SND"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_gm6_lynx
		{
			options[]=
			{
				"camo"
			};
			label="GM6 Lynx";
			class camo
			{
				values[]=
				{
					"BLK",
					"HEX",
					"GHEX",
					"SNK"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mk14
		{
			options[]=
			{
				"camo"
			};
			label="Mk14 Mod 1 EBR";
			class camo
			{
				values[]=
				{
					"SND",
					"BLK",
					"SNK"
				};
				alwaysSelectable=1;
			};
		};
		class  acebi_hk121
		{
			options[]=
			{
				"camo"
			};
			label="HK121";
			class camo
			{
				values[]=
				{
					"HEX",
					"TAN"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_hk416a5_11
		{
			options[]=
			{
				"camo"
			};
			label="HK416A5 11in.";
			class camo
			{
				values[]=
				{
					"BLK",
					"KHKG",
					"SND"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_hk416a5_11_gl
		{
			options[]=
			{
				"camo"
			};
			label="HK416A5 11in. GL";
			class camo
			{
				values[]=
				{
					"BLK",
					"KHKG",
					"SND"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_hk416a5_14_5
		{
			options[]=
			{
				"camo"
			};
			label="HK416A5 14.5in.";
			class camo
			{
				values[]=
				{
					"BLK",
					"KHKG",
					"SND"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_hk417a2_20
		{
			options[]=
			{
				"camo"
			};
			label="HK417A2 20in.";
			class camo
			{
				values[]=
				{
					"BLK",
					"KHKG",
					"SND"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_lwmmg
		{
			options[]=
			{
				"camo"
			};
			label="LWMMG";
			class camo
			{
				values[]=
				{
					"BLK",
					"MTP",
					"SND"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_m14
		{
			options[]=
			{
				"camo"
			};
			label="M14";
			class camo
			{
				values[]=
				{
					"Camo",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_m200_int
		{
			options[]=
			{
				"camo"
			};
			label="M200 Intervention";
			class camo
			{
				values[]=
				{
					"BLK",
					"MTP",
					"Tropic"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_msbs_grot
		{
			options[]=
			{
				"camo"
			};
			label="MSBS Grot";
			class camo
			{
				values[]=
				{
					"BLK",
					"OLI",
					"EAF",
					"TAN"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_msbs_grot_gl
		{
			options[]=
			{
				"camo"
			};
			label="MSBS Grot GL";
			class camo
			{
				values[]=
				{
					"BLK",
					"OLI",
					"EAF",
					"TAN"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_msbs_grot_mr
		{
			options[]=
			{
				"camo"
			};
			label="MSBS Grot MR";
			class camo
			{
				values[]=
				{
					"BLK",
					"OLI",
					"EAF",
					"TAN"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_msbs_grot_sg
		{
			options[]=
			{
				"camo"
			};
			label="MSBS Grot SG";
			class camo
			{
				values[]=
				{
					"BLK",
					"OLI",
					"EAF",
					"TAN"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mx
		{
			options[]=
			{
				"camo"
			};
			label="MX";
			class camo
			{
				values[]=
				{
					"SND",
					"BLK",
					"KHKG"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mx_3gl
		{
			options[]=
			{
				"camo"
			};
			label="MX 3GL";
			class camo
			{
				values[]=
				{
					"SND",
					"BLK",
					"KHKG"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mx_lsw
		{
			options[]=
			{
				"camo"
			};
			label="MX LSW";
			class camo
			{
				values[]=
				{
					"SND",
					"BLK",
					"KHKG"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mxc
		{
			options[]=
			{
				"camo"
			};
			label="MXC";
			class camo
			{
				values[]=
				{
					"SND",
					"BLK",
					"KHKG"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_mxm
		{
			options[]=
			{
				"camo"
			};
			label="MXM";
			class camo
			{
				values[]=
				{
					"SND",
					"BLK",
					"KHKG"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_noreen
		{
			options[]=
			{
				"camo"
			};
			label="Noreen ULR";
			class camo
			{
				values[]=
				{
					"BLK",
					"SND",
					"CTRG_ARID"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_p90
		{
			options[]=
			{
				"camo"
			};
			label="P90";
			class camo
			{
				values[]=
				{
					"BLK",
					"AAF",
					"UHEX",
					"KHK"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_p90_tr
		{
			options[]=
			{
				"camo"
			};
			label="P90 TR";
			class camo
			{
				values[]=
				{
					"BLK",
					"AAF",
					"UHEX",
					"KHK"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_ps90
		{
			options[]=
			{
				"camo"
			};
			label="PS90";
			class camo
			{
				values[]=
				{
					"BLK",
					"AAF",
					"UHEX",
					"KHK"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_ps90_tr
		{
			options[]=
			{
				"camo"
			};
			label="PS90 TR";
			class camo
			{
				values[]=
				{
					"BLK",
					"AAF",
					"UHEX",
					"KHK"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_qbu88
		{
			options[]=
			{
				"camo"
			};
			label="QBU-88";
			class camo
			{
				values[]=
				{
					"BLK",
					"HEX",
					"GHEX"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_qbz95_1
		{
			options[]=
			{
				"camo"
			};
			label="QBZ-95-1";
			class camo
			{
				values[]=
				{
					"BLK",
					"HEX",
					"GHEX"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_qbz95_1_gl
		{
			options[]=
			{
				"camo"
			};
			label="QBZ-95-1 GL";
			class camo
			{
				values[]=
				{
					"BLK",
					"HEX",
					"GHEX"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_qbz95_1_lsw
		{
			options[]=
			{
				"camo"
			};
			label="QBZ-95-1 LSW";
			class camo
			{
				values[]=
				{
					"BLK",
					"HEX",
					"GHEX"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_rpk
		{
			options[]=
			{
				"camo"
			};
			label="RPK";
			class camo
			{
				values[]=
				{
					"BLK",
					"BISPNZ_A",
					"BISPNZ_L"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_sig556
		{
			options[]=
			{
				"camo"
			};
			label="SIG 556";
			class camo
			{
				values[]=
				{
					"BLK",
					"MTP",
					"KHKG",
					"SND",
					"M81"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_stoner99
		{
			options[]=
			{
				"camo"
			};
			label="Stoner 99 LMG";
			class camo
			{
				values[]=
				{
					"BLK",
					"SND"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_type115
		{
			options[]=
			{
				"camo"
			};
			label="Type 115";
			class camo
			{
				values[]=
				{
					"BLK",
					"HEX",
					"GHEX"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_fnk45
		{
			options[]=
			{
				"camo"
			};
			label="FNX-45 Tactical";
			class camo
			{
				values[]=
				{
					"TAN",
					"GRN"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_p99
		{
			options[]=
			{
				"camo"
			};
			label="P99";
			class camo
			{
				values[]=
				{
					"TAN",
					"BLK",
					"GRN"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_maaws_0
		{
			options[]=
			{
				"camo"
			};
			label="MAAWS Mk4 Mod 0";
			class camo
			{
				values[]=
				{
					"GRN",
					"OLI",
					"SND"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_maaws_1
		{
			options[]=
			{
				"camo"
			};
			label="MAAWS Mk4 Mod 1";
			class camo
			{
				values[]=
				{
					"GRN",
					"OLI",
					"SND"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_metis
		{
			options[]=
			{
				"camo"
			};
			label="Metis-M";
			class camo
			{
				values[]=
				{
					"BRN",
					"GRN"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_rpg32
		{
			options[]=
			{
				"camo"
			};
			label="RPG-32";
			class camo
			{
				values[]=
				{
					"HEX",
					"GHEX",
					"GRN",
					"CAMO",
					"SND"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_titan_aa
		{
			options[]=
			{
				"camo"
			};
			label="Titan MPRL";
			class camo
			{
				values[]=
				{
					"AAF",
					"EAF",
					"HEX",
					"GHEX",
					"OLI",
					"SND",
					"Tropic"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_titan_at
		{
			options[]=
			{
				"camo"
			};
			label="Titan MPRL Compact";
			class camo
			{
				values[]=
				{
					"CBR",
					"GHEX",
					"OLI",
					"SND",
					"Tropic"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_compact_nvg
		{
			options[]=
			{
				"camo"
			};
			label="Compact NVG";
			class camo
			{
				values[]=
				{
					"RGR",
					"HEX",
					"GHEX",
					"UHEX"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_envg
		{
			options[]=
			{
				"camo"
			};
			label="ENVG-II";
			class camo
			{
				values[]=
				{
					"BLK",
					"OLI",
					"GRY"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_nvg_gen1
		{
			options[]=
			{
				"camo"
			};
			label="NV Goggles (Gen1)";
			class camo
			{
				values[]=
				{
					"BLK",
					"SND",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_nvg_gen2
		{
			options[]=
			{
				"camo"
			};
			label="NV Goggles (Gen2)";
			class camo
			{
				values[]=
				{
					"BLK",
					"SND",
					"OLI"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_nvg_gen3
		{
			options[]=
			{
				"camo",
				"wp"
			};
			label="NV Goggles (Gen3)";
			class camo
			{
				values[]=
				{
					"BLK",
					"SND",
					"OLI",
					"Tropic"
				};
				alwaysSelectable=1;
			};
			class wp
			{
				values[]=
				{
					"Yes",
					"No"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_nvg_gen4
		{
			options[]=
			{
				"camo",
				"wp"
			};
			label="NV Goggles (Gen4)";
			class camo
			{
				values[]=
				{
					"BLK",
					"SND",
					"OLI"
				};
				alwaysSelectable=1;
			};
			class wp
			{
				values[]=
				{
					"Yes",
					"No"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_nvg_wide
		{
			options[]=
			{
				"camo",
				"wp"
			};
			label="NV Goggles (Wide)";
			class camo
			{
				values[]=
				{
					"BLK",
					"SND",
					"OLI"
				};
				alwaysSelectable=1;
			};
			class wp
			{
				values[]=
				{
					"Yes",
					"No"
				};
				alwaysSelectable=1;
			};
		};
		class acebi_las_desig
		{
			options[]=
			{
				"camo"
			};
			label="Laser Designator";
			class camo
			{
				values[]=
				{
					"OD",
					"OLI",
					"SND",
					"HEX",
					"GHEX"
				};
				alwaysSelectable=1;
			};
		};
	};
};
class XtdGearInfos
{
	class CfgGlasses
	{
		class G_AirPurifyingRespirator_02_black_F
		{
			model="acebi_apr_csat";
			camo="BLK";
		};
		class G_AirPurifyingRespirator_02_olive_F
		{
			model="acebi_apr_csat";
			camo="OLI";
		};
		class G_AirPurifyingRespirator_02_sand_F
		{
			model="acebi_apr_csat";
			camo="SND";
		};
		class G_Balaclava_blk
		{
			model="acebi_balaclava";
			camo="BLK";
			goggles="None";
		};
		class G_Balaclava_combat
		{
			model="acebi_balaclava";
			camo="BLK";
			goggles="Combat";
		};
		class G_Balaclava_lowprofile
		{
			model="acebi_balaclava";
			camo="BLK";
			goggles="Low Profile";
		};
		class G_Balaclava_oli
		{
			model="acebi_balaclava";
			camo="OLI";
			goggles="None";
		};
		class G_Balaclava_BlueStrips
		{
			model="acebi_balaclava";
			camo="BlueStripes";
			goggles="None";
		};
		class G_Balaclava_Flecktarn
		{
			model="acebi_balaclava";
			camo="Flecktarn";
			goggles="None";
		};
		class G_Balaclava_Halloween_01
		{
			model="acebi_balaclava";
			camo="Halloween";
			goggles="None";
		};
		class G_Balaclava_Flames1
		{
			model="acebi_balaclava";
			camo="OrangePattern";
			goggles="None";
		};
		class G_Balaclava_Scarecrow_01
		{
			model="acebi_balaclava";
			camo="Scarecrow";
			goggles="None";
		};
		class G_Balaclava_Skull1
		{
			model="acebi_balaclava";
			camo="Skull";
			goggles="None";
		};
		class G_Balaclava_Tropentarn
		{
			model="acebi_balaclava";
			camo="Tropentarn";
			goggles="None";
		};
		class G_Bandanna_aviator
		{
			model="acebi_bandana_face";
			camo="BLK";
			glasses="Aviator";
		};
		class G_Bandanna_beast
		{
			model="acebi_bandana_face";
			camo="Beast";
			glasses="None";
		};
		class G_Bandanna_blk
		{
			model="acebi_bandana_face";
			camo="BLK";
			glasses="None";
		};
		class G_Bandanna_khk
		{
			model="acebi_bandana_face";
			camo="KHK";
			glasses="None";
		};
		class G_Bandanna_oli
		{
			model="acebi_bandana_face";
			camo="OLI";
			glasses="None";
		};
		class G_Bandanna_shades
		{
			model="acebi_bandana_face";
			camo="BLK";
			glasses="Shades";
		};
		class G_Bandanna_sport
		{
			model="acebi_bandana_face";
			camo="BLK";
			glasses="Sport";
		};
		class G_Bandanna_tan
		{
			model="acebi_bandana_face";
			camo="TAN";
			glasses="None";
		};
		class G_Bandanna_BlueFlame1
		{
			model="acebi_bandana_face";
			camo="BlueFlames";
			glasses="None";
		};
		class G_Bandanna_BlueFlame2
		{
			model="acebi_bandana_face";
			camo="BlueFlames2";
			glasses="None";
		};
		class G_Bandanna_CandySkull
		{
			model="acebi_bandana_face";
			camo="CandySkull";
			glasses="None";
		};
		class G_Bandanna_OrangeFlame1
		{
			model="acebi_bandana_face";
			camo="OrangeFlames";
			glasses="None";
		};
		class G_Bandanna_RedFlame1
		{
			model="acebi_bandana_face";
			camo="RedFlames";
			glasses="None";
		};
		class G_Bandanna_Skull1
		{
			model="acebi_bandana_face";
			camo="Skull";
			glasses="None";
		};
		class G_Bandanna_Syndikat1
		{
			model="acebi_bandana_face";
			camo="Syndikat";
			glasses="None";
		};
		class G_Bandanna_Skull2
		{
			model="acebi_bandana_face";
			camo="Skull2";
			glasses="None";
		};
		class G_Bandanna_Vampire_01
		{
			model="acebi_bandana_face";
			camo="Vampire";
			glasses="None";
		};
		class G_Bandanna_Syndikat2
		{
			model="acebi_bandana_face";
			camo="Syndikat2";
			glasses="None";
		};
		class G_Blindfold_01_black_F
		{
			model="acebi_blindfold";
			camo="BLK";
		};
		class G_Blindfold_01_white_F
		{
			model="acebi_blindfold";
			camo="WHT";
		};
		class G_Combat
		{
			model="acebi_combat_goggles";
			camo="SND";
		};
		class G_Combat_Goggles_tna_F
		{
			model="acebi_combat_goggles";
			camo="RGR";
		};
		class G_Diving
		{
			model="acebi_diving_goggles";
			faction="None";
		};
		class G_I_Diving
		{
			model="acebi_diving_goggles";
			faction="AAF";
		};
		class G_O_Diving
		{
			model="acebi_diving_goggles";
			faction="CSAT";
		};
		class G_B_Diving
		{
			model="acebi_diving_goggles";
			faction="NATO";
		};
		class G_Respirator_blue_F
		{
			model="acebi_respirator";
			camo="BLU";
		};
		class G_Respirator_white_F
		{
			model="acebi_respirator";
			camo="WHT";
		};
		class G_Respirator_yellow_F
		{
			model="acebi_respirator";
			camo="YLW";
		};
		class G_EyeProtectors_F
		{
			model="acebi_safety_goggles";
			earpiece="No";
		};
		class G_EyeProtectors_Earpiece_F
		{
			model="acebi_safety_goggles";
			earpiece="Yes";
		};
		class G_Shades_Black
		{
			model="acebi_shades";
			camo="BLK";
		};
		class G_Shades_Blue
		{
			model="acebi_shades";
			camo="BLU";
		};
		class G_Shades_Green
		{
			model="acebi_shades";
			camo="GRN";
		};
		class G_Shades_Red
		{
			model="acebi_shades";
			camo="RED";
		};
		class G_Spectacles_Tinted
		{
			model="acebi_spectacles";
			camo="BLK";
		};
		class G_Spectacles
		{
			model="acebi_spectacles";
			camo="CLR";
		};
		class G_Sport_Red
		{
			model="acebi_sports_shades";
			camo="Fire";
		};
		class G_Sport_Blackyellow
		{
			model="acebi_sports_shades";
			camo="Poison";
		};
		class G_Sport_BlackWhite
		{
			model="acebi_sports_shades";
			camo="Shadow";
		};
		class G_Sport_Checkered
		{
			model="acebi_sports_shades";
			camo="Style";
		};
		class G_Sport_Blackred
		{
			model="acebi_sports_shades";
			camo="Vulcan";
		};
		class G_Sport_Greenblack
		{
			model="acebi_sports_shades";
			camo="Yetti";
		};
		class G_Squares_Tinted
		{
			model="acebi_square_glasses";
			camo="BLK";
		};
		class G_Squares
		{
			model="acebi_square_glasses";
			camo="CLR";
		};
		class G_Balaclava_TI_blk_F
		{
			model="acebi_stealth_balaclava";
			camo="BLK";
			goggles="No";
		};
		class G_Balaclava_TI_G_blk_F
		{
			model="acebi_stealth_balaclava";
			camo="BLK";
			goggles="Yes";
		};
		class G_Balaclava_TI_tna_F
		{
			model="acebi_stealth_balaclava";
			camo="CTRG_TROP";
			goggles="No";
		};
		class G_Balaclava_TI_G_tna_F
		{
			model="acebi_stealth_balaclava";
			camo="CTRG_TROP";
			goggles="Yes";
		};
		class G_Tactical_Clear
		{
			model="acebi_tactical_glasses";
			camo="CLR";
		};
		class G_Tactical_Black
		{
			model="acebi_tactical_glasses";
			camo="BLK";
		};
	};
	class CfgVehicles
	{
		class B_AssaultPack_blk
		{
			model="acebi_assaultpack";
			camo="BLK";
		};
		class B_AssaultPack_cbr
		{
			model="acebi_assaultpack";
			camo="CBR";
		};
		class B_AssaultPack_dgtl
		{
			model="acebi_assaultpack";
			camo="AAF";
		};
		class B_AssaultPack_eaf_F
		{
			model="acebi_assaultpack";
			camo="EAF";
		};
		class B_AssaultPack_rgr
		{
			model="acebi_assaultpack";
			camo="RGR";
		};
		class B_AssaultPack_ocamo
		{
			model="acebi_assaultpack";
			camo="HEX";
		};
		class B_AssaultPack_khk
		{
			model="acebi_assaultpack";
			camo="KHK";
		};
		class B_AssaultPack_mcamo
		{
			model="acebi_assaultpack";
			camo="MTP";
		};
		class B_AssaultPack_sgg
		{
			model="acebi_assaultpack";
			camo="SGG";
		};
		class B_AssaultPack_tna_F
		{
			model="acebi_assaultpack";
			camo="Tropic";
		};
		class B_AssaultPack_wdl_F
		{
			model="acebi_assaultpack";
			camo="M81";
		};
		class B_Bergen_dgtl_F
		{
			model="acebi_bergen";
			camo="AAF";
		};
		class B_Bergen_hex_F
		{
			model="acebi_bergen";
			camo="HEX";
		};
		class B_Bergen_mcamo_F
		{
			model="acebi_bergen";
			camo="MTP";
		};
		class B_Bergen_tna_F
		{
			model="acebi_bergen";
			camo="Tropic";
		};
		class B_Carryall_blk
		{
			model="acebi_carryall";
			camo="BLK";
		};
		class B_Carryall_cbr
		{
			model="acebi_carryall";
			camo="CBR";
		};
		class B_Carryall_eaf_F
		{
			model="acebi_carryall";
			camo="EAF";
		};
		class B_Carryall_ghex_F
		{
			model="acebi_carryall";
			camo="GHEX";
		};
		class B_Carryall_green_F
		{
			model="acebi_carryall";
			camo="GRN";
		};
		class B_Carryall_ocamo
		{
			model="acebi_carryall";
			camo="HEX";
		};
		class B_Carryall_khk
		{
			model="acebi_carryall";
			camo="KHK";
		};
		class B_Carryall_mcamo
		{
			model="acebi_carryall";
			camo="MTP";
		};
		class B_Carryall_oli
		{
			model="acebi_carryall";
			camo="OLI";
		};
		class B_Carryall_taiga_F
		{
			model="acebi_carryall";
			camo="THEX";
		};
		class B_Carryall_oucamo
		{
			model="acebi_carryall";
			camo="UHEX";
		};
		class B_Carryall_wdl_F
		{
			model="acebi_carryall";
			camo="M81";
		};
		class ace_gunbag
		{
			model="acebi_gunbag";
			camo="GRN";
		};
		class ace_gunbag_Tan
		{
			model="acebi_gunbag";
			camo="TAN";
		};
		class B_CivilianBackpack_01_Everyday_Astra_F
		{
			model="acebi_everydaypack";
			camo="Astra";
		};
		class B_CivilianBackpack_01_Everyday_Black_F
		{
			model="acebi_everydaypack";
			camo="BLK";
		};
		class B_CivilianBackpack_01_Everyday_Vrana_F
		{
			model="acebi_everydaypack";
			camo="Vrana";
		};
		class B_CivilianBackpack_01_Everyday_IDAP_F
		{
			model="acebi_everydaypack";
			camo="IDAP";
		};
		class B_FieldPack_blk
		{
			model="acebi_fieldpack";
			camo="BLK";
		};
		class B_FieldPack_cbr
		{
			model="acebi_fieldpack";
			camo="CBR";
		};
		class B_FieldPack_ghex_F
		{
			model="acebi_fieldpack";
			camo="GHEX";
		};
		class B_FieldPack_green_F
		{
			model="acebi_fieldpack";
			camo="GRN";
		};
		class B_FieldPack_ocamo
		{
			model="acebi_fieldpack";
			camo="HEX";
		};
		class B_FieldPack_khk
		{
			model="acebi_fieldpack";
			camo="KHK";
		};
		class B_FieldPack_oli
		{
			model="acebi_fieldpack";
			camo="OLI";
		};
		class B_FieldPack_taiga_F
		{
			model="acebi_fieldpack";
			camo="THEX";
		};
		class B_FieldPack_oucamo
		{
			model="acebi_fieldpack";
			camo="UHEX";
		};
		class B_Kitbag_cbr
		{
			model="acebi_kitbag";
			camo="CBR";
		};
		class B_Kitbag_rgr
		{
			model="acebi_kitbag";
			camo="RGR";
		};
		class B_Kitbag_mcamo
		{
			model="acebi_kitbag";
			camo="MTP";
		};
		class B_Kitbag_sgg
		{
			model="acebi_kitbag";
			camo="SGG";
		};
		class B_Kitbag_tan
		{
			model="acebi_kitbag";
			camo="TAN";
		};
		class V_TacVestIR_blk
		{
			model="acebi_ravenvest";
			camo="BLK";
		};
		class B_LegStrapBag_black_F
		{
			model="acebi_legstrapbag";
			camo="BLK";
		};
		class B_LegStrapBag_coyote_F
		{
			model="acebi_legstrapbag";
			camo="CBR";
		};
		class B_LegStrapBag_olive_F
		{
			model="acebi_legstrapbag";
			camo="OLI";
		};
		class B_Messenger_Black_F
		{
			model="acebi_messengerbag";
			camo="BLK";
		};
		class B_Messenger_Coyote_F
		{
			model="acebi_messengerbag";
			camo="CBR";
		};
		class B_Messenger_Gray_F
		{
			model="acebi_messengerbag";
			camo="GRY";
		};
		class B_Messenger_Olive_F
		{
			model="acebi_messengerbag";
			camo="OLI";
		};
		class B_Messenger_IDAP_F
		{
			model="acebi_messengerbag";
			camo="IDAP";
		};
		class B_RadioBag_01_black_F
		{
			model="acebi_radiopack";
			camo="BLK";
		};
		class B_RadioBag_01_digi_F
		{
			model="acebi_radiopack";
			camo="AAF";
		};
		class B_RadioBag_01_eaf_F
		{
			model="acebi_radiopack";
			camo="EAF";
		};
		class B_RadioBag_01_ghex_F
		{
			model="acebi_radiopack";
			camo="GHEX";
		};
		class B_RadioBag_01_hex_F
		{
			model="acebi_radiopack";
			camo="HEX";
		};
		class B_RadioBag_01_mtp_F
		{
			model="acebi_radiopack";
			camo="MTP";
		};
		class B_RadioBag_01_tropic_F
		{
			model="acebi_radiopack";
			camo="Tropic";
		};
		class B_RadioBag_01_oucamo_F
		{
			model="acebi_radiopack";
			camo="UHEX";
		};
		class B_RadioBag_01_wdl_F
		{
			model="acebi_radiopack";
			camo="M81";
		};
		class B_CivilianBackpack_01_Sport_Blue_F
		{
			model="acebi_sportspack";
			camo="BLU";
		};
		class B_CivilianBackpack_01_Sport_Green_F
		{
			model="acebi_sportspack";
			camo="GRN";
		};
		class B_CivilianBackpack_01_Sport_Red_F
		{
			model="acebi_sportspack";
			camo="RED";
		};
		class B_TacticalPack_blk
		{
			model="acebi_tacpack";
			camo="BLK";
		};
		class B_TacticalPack_rgr
		{
			model="acebi_tacpack";
			camo="RGR";
		};
		class B_TacticalPack_ocamo
		{
			model="acebi_tacpack";
			camo="HEX";
		};
		class B_TacticalPack_mcamo
		{
			model="acebi_tacpack";
			camo="MTP";
		};
		class B_TacticalPack_oli
		{
			model="acebi_tacpack";
			camo="OLI";
		};
		class B_ViperHarness_blk_F
		{
			model="acebi_viper_harness";
			camo="BLK";
		};
		class B_ViperHarness_ghex_F
		{
			model="acebi_viper_harness";
			camo="GHEX";
		};
		class B_ViperHarness_hex_F
		{
			model="acebi_viper_harness";
			camo="HEX";
		};
		class B_ViperHarness_khk_F
		{
			model="acebi_viper_harness";
			camo="KHK";
		};
		class B_ViperHarness_oli_F
		{
			model="acebi_viper_harness";
			camo="OLI";
		};
		class B_ViperLightHarness_blk_F
		{
			model="acebi_viper_harness_lite";
			camo="BLK";
		};
		class B_ViperLightHarness_ghex_F
		{
			model="acebi_viper_harness_lite";
			camo="GHEX";
		};
		class B_ViperLightHarness_hex_F
		{
			model="acebi_viper_harness_lite";
			camo="HEX";
		};
		class B_ViperLightHarness_khk_F
		{
			model="acebi_viper_harness_lite";
			camo="KHK";
		};
		class B_ViperLightHarness_oli_F
		{
			model="acebi_viper_harness_lite";
			camo="OLI";
		};
		class I_GMG_01_A_weapon_F
		{
			model="acebi_auto_gmg";
			faction="AAF";
		};
		class O_GMG_01_A_weapon_F
		{
			model="acebi_auto_gmg";
			faction="CSAT";
		};
		class I_E_GMG_01_A_weapon_F
		{
			model="acebi_auto_gmg";
			faction="LDF";
		};
		class B_GMG_01_A_weapon_F
		{
			model="acebi_auto_gmg";
			faction="NATO";
		};
		class I_HMG_01_A_weapon_F
		{
			model="acebi_auto_hmg";
			faction="AAF";
		};
		class O_HMG_01_A_weapon_F
		{
			model="acebi_auto_hmg";
			faction="CSAT";
		};
		class I_E_HMG_01_A_weapon_F
		{
			model="acebi_auto_hmg";
			faction="LDF";
		};
		class B_HMG_01_A_weapon_F
		{
			model="acebi_auto_hmg";
			faction="NATO";
		};
		class I_HMG_02_high_weapon_F
		{
			model="acebi_m2_hmg";
			faction="AAF";
		};
		class I_G_HMG_02_high_weapon_F
		{
			model="acebi_m2_hmg";
			faction="FIA";
		};
		class I_E_HMG_02_high_weapon_F
		{
			model="acebi_m2_hmg";
			faction="LDF";
		};
		class I_C_HMG_02_high_weapon_F
		{
			model="acebi_m2_hmg";
			faction="SYN";
		};
		class I_HMG_02_weapon_F
		{
			model="acebi_m2_hmg_raised";
			faction="AAF";
		};
		class I_G_HMG_02_weapon_F
		{
			model="acebi_m2_hmg_raised";
			faction="FIA";
		};
		class I_E_HMG_02_weapon_F
		{
			model="acebi_m2_hmg_raised";
			faction="LDF";
		};
		class I_C_HMG_02_weapon_F
		{
			model="acebi_m2_hmg_raised";
			faction="SYN";
		};
		class I_HMG_02_support_F
		{
			model="acebi_m2_tripod";
			faction="AAF";
		};
		class O_HMG_02_support_F
		{
			model="acebi_m2_tripod";
			faction="CSAT";
		};
		class I_G_HMG_02_support_F
		{
			model="acebi_m2_tripod";
			faction="FIA";
		};
		class I_E_HMG_02_support_F
		{
			model="acebi_m2_tripod";
			faction="LDF";
		};
		class B_HMG_02_support_F
		{
			model="acebi_m2_tripod";
			faction="NATO";
		};
		class I_C_HMG_02_support_F
		{
			model="acebi_m2_tripod";
			faction="SYN";
		};
		class I_HMG_02_support_high_F
		{
			model="acebi_m2_tripod_raised";
			faction="AAF";
		};
		class O_HMG_02_support_high_F
		{
			model="acebi_m2_tripod_raised";
			faction="CSAT";
		};
		class I_G_HMG_02_support_high_F
		{
			model="acebi_m2_tripod_raised";
			faction="FIA";
		};
		class I_E_HMG_02_support_high_F
		{
			model="acebi_m2_tripod_raised";
			faction="LDF";
		};
		class B_HMG_02_support_high_F
		{
			model="acebi_m2_tripod_raised";
			faction="NATO";
		};
		class I_C_HMG_02_support_high_F
		{
			model="acebi_m2_tripod_raised";
			faction="SYN";
		};
		class I_HMG_01_support_F
		{
			model="acebi_mk30_32_tripod";
			faction="AAF";
		};
		class O_HMG_01_support_F
		{
			model="acebi_mk30_32_tripod";
			faction="CSAT";
		};
		class I_E_HMG_01_support_F
		{
			model="acebi_mk30_32_tripod";
			faction="LDF";
		};
		class B_HMG_01_support_F
		{
			model="acebi_mk30_32_tripod";
			faction="NATO";
		};
		class I_HMG_01_support_high_F
		{
			model="acebi_mk30_32_tripod_raised";
			faction="AAF";
		};
		class O_HMG_01_support_high_F
		{
			model="acebi_mk30_32_tripod_raised";
			faction="CSAT";
		};
		class I_E_HMG_01_support_high_F
		{
			model="acebi_mk30_32_tripod_raised";
			faction="LDF";
		};
		class B_HMG_01_support_high_F
		{
			model="acebi_mk30_32_tripod_raised";
			faction="NATO";
		};
		class I_HMG_01_weapon_F
		{
			model="acebi_mk30_hmg";
			faction="AAF";
		};
		class O_HMG_01_weapon_F
		{
			model="acebi_mk30_hmg";
			faction="CSAT";
		};
		class I_E_HMG_01_weapon_F
		{
			model="acebi_mk30_hmg";
			faction="LDF";
		};
		class B_HMG_01_weapon_F
		{
			model="acebi_mk30_hmg";
			faction="NATO";
		};
		class I_HMG_01_high_weapon_F
		{
			model="acebi_mk30_hmg_raised";
			faction="AAF";
		};
		class O_HMG_01_high_weapon_F
		{
			model="acebi_mk30_hmg_raised";
			faction="CSAT";
		};
		class I_E_HMG_01_high_weapon_F
		{
			model="acebi_mk30_hmg_raised";
			faction="LDF";
		};
		class B_HMG_01_high_weapon_F
		{
			model="acebi_mk30_hmg_raised";
			faction="NATO";
		};
		class I_GMG_01_weapon_F
		{
			model="acebi_mk32_gmg";
			faction="AAF";
		};
		class O_GMG_01_weapon_F
		{
			model="acebi_mk32_gmg";
			faction="CSAT";
		};
		class I_E_GMG_01_weapon_F
		{
			model="acebi_mk32_gmg";
			faction="LDF";
		};
		class B_GMG_01_weapon_F
		{
			model="acebi_mk32_gmg";
			faction="NATO";
		};
		class I_GMG_01_high_weapon_F
		{
			model="acebi_mk32_gmg_raised";
			faction="AAF";
		};
		class O_GMG_01_high_weapon_F
		{
			model="acebi_mk32_gmg_raised";
			faction="CSAT";
		};
		class I_E_GMG_01_high_weapon_F
		{
			model="acebi_mk32_gmg_raised";
			faction="LDF";
		};
		class B_GMG_01_high_weapon_F
		{
			model="acebi_mk32_gmg_raised";
			faction="NATO";
		};
		class I_Mortar_01_support_F
		{
			model="acebi_mortar_bipod";
			faction="AAF";
		};
		class O_Mortar_01_support_F
		{
			model="acebi_mortar_bipod";
			faction="CSAT";
		};
		class I_E_Mortar_01_support_F
		{
			model="acebi_mortar_bipod";
			faction="LDF";
		};
		class B_Mortar_01_support_F
		{
			model="acebi_mortar_bipod";
			faction="NATO";
		};
		class I_Mortar_01_weapon_F
		{
			model="acebi_mortar_tube";
			faction="AAF";
		};
		class O_Mortar_01_weapon_F
		{
			model="acebi_mortar_tube";
			faction="CSAT";
		};
		class I_E_Mortar_01_weapon_F
		{
			model="acebi_mortar_tube";
			faction="LDF";
		};
		class B_Mortar_01_weapon_F
		{
			model="acebi_mortar_tube";
			faction="NATO";
		};
		class O_Static_Designator_02_weapon_F
		{
			model="acebi_remote_desig";
			faction="CSAT";
			camo="HEX";
		};
		class B_W_Static_Designator_01_weapon_F
		{
			model="acebi_remote_desig";
			faction="NATO";
			camo="M81";
		};
		class B_Static_Designator_01_weapon_F
		{
			model="acebi_remote_desig";
			faction="NATO";
			camo="MTP";
		};
		class I_AA_01_weapon_F
		{
			model="acebi_titan_aa";
			faction="AAF";
		};
		class O_AA_01_weapon_F
		{
			model="acebi_titan_aa";
			faction="CSAT";
		};
		class I_E_AA_01_weapon_F
		{
			model="acebi_titan_aa";
			faction="LDF";
		};
		class B_AA_01_weapon_F
		{
			model="acebi_titan_aa";
			faction="NATO";
		};
		class I_AT_01_weapon_F
		{
			model="acebi_titan_at";
			faction="AAF";
		};
		class O_AT_01_weapon_F
		{
			model="acebi_titan_at";
			faction="CSAT";
		};
		class I_E_AT_01_weapon_F
		{
			model="acebi_titan_at";
			faction="LDF";
		};
		class B_AT_01_weapon_F
		{
			model="acebi_titan_at";
			faction="NATO";
		};
		class I_UAV_06_backpack_F
		{
			model="acebi_al6";
			faction="AAF";
		};
		class O_UAV_06_backpack_F
		{
			model="acebi_al6";
			faction="CSAT";
		};
		class I_E_UAV_06_backpack_F
		{
			model="acebi_al6";
			faction="LDF";
		};
		class B_UAV_06_backpack_F
		{
			model="acebi_al6";
			faction="NATO";
		};
		class I_UAV_06_medical_backpack_F
		{
			model="acebi_al6_medical";
			faction="AAF";
		};
		class O_UAV_06_medical_backpack_F
		{
			model="acebi_al6_medical";
			faction="CSAT";
		};
		class I_E_UAV_06_medical_backpack_F
		{
			model="acebi_al6_medical";
			faction="LDF";
		};
		class C_IDAP_UAV_06_medical_backpack_F
		{
			model="acebi_al6_medical";
			faction="IDAP";
		};
		class B_UAV_06_medical_backpack_F
		{
			model="acebi_al6_medical";
			faction="NATO";
		};
		class I_UAV_01_backpack_F
		{
			model="acebi_ar2";
			faction="AAF";
		};
		class O_UAV_01_backpack_F
		{
			model="acebi_ar2";
			faction="CSAT";
		};
		class I_E_UAV_01_backpack_F
		{
			model="acebi_ar2";
			faction="LDF";
		};
		class B_UAV_01_backpack_F
		{
			model="acebi_ar2";
			faction="NATO";
		};
		class I_UGV_02_Demining_backpack_F
		{
			model="acebi_ed1d";
			faction="AAF";
		};
		class O_UGV_02_Demining_backpack_F
		{
			model="acebi_ed1d";
			faction="CSAT";
		};
		class I_E_UGV_02_Demining_backpack_F
		{
			model="acebi_ed1d";
			faction="LDF";
		};
		class B_UGV_02_Demining_backpack_F
		{
			model="acebi_ed1d";
			faction="NATO";
		};
		class I_UGV_02_Science_backpack_F
		{
			model="acebi_ed1e";
			faction="AAF";
		};
		class O_UGV_02_Science_backpack_F
		{
			model="acebi_ed1e";
			faction="CSAT";
		};
		class I_E_UGV_02_Science_backpack_F
		{
			model="acebi_ed1e";
			faction="LDF";
		};
		class B_UGV_02_Science_backpack_F
		{
			model="acebi_ed1e";
			faction="NATO";
		};
	};
	class CfgWeapons
	{
		class H_HelmetHBK_headset_F
		{
			model="acebi_adv_mod_helm";
			camo="EAF";
			accessory="Headset";
		};
		class H_HelmetHBK_chops_F
		{
			model="acebi_adv_mod_helm";
			camo="EAF";
			accessory="Chops";
		};
		class H_HelmetHBK_ear_F
		{
			model="acebi_adv_mod_helm";
			camo="EAF";
			accessory="Ear Prot.";
		};
		class H_HelmetHBK_F
		{
			model="acebi_adv_mod_helm";
			camo="OLI";
			accessory="None";
		};
		class H_HelmetSpecO_blk
		{
			model="acebi_assassin_helm";
			camo="BLK";
		};
		class H_HelmetSpecO_ghex_F
		{
			model="acebi_assassin_helm";
			camo="GHEX";
		};
		class H_HelmetSpecO_ocamo
		{
			model="acebi_assassin_helm";
			camo="HEX";
		};
		class H_HelmetAggressor_F
		{
			model="acebi_avenger_helm";
			camo="OLI";
		};
		class H_HelmetAggressor_cover_F
		{
			model="acebi_avenger_helm";
			camo="OD";
		};
		class H_HelmetAggressor_cover_taiga_F
		{
			model="acebi_avenger_helm";
			camo="THEX";
		};
		class H_Bandanna_gry
		{
			model="acebi_bandana_head";
			camo="BLK";
			headset="No";
		};
		class H_Bandanna_blu
		{
			model="acebi_bandana_head";
			camo="BLU";
			headset="No";
		};
		class H_Bandanna_cbr
		{
			model="acebi_bandana_head";
			camo="CBR";
			headset="No";
		};
		class H_Bandanna_khk_hs
		{
			model="acebi_bandana_head";
			camo="KHK";
			headset="Yes";
		};
		class H_Bandanna_khk
		{
			model="acebi_bandana_head";
			camo="KHK";
			headset="No";
		};
		class H_Bandanna_mcamo
		{
			model="acebi_bandana_head";
			camo="MTP";
			headset="No";
		};
		class H_Bandanna_sgg
		{
			model="acebi_bandana_head";
			camo="SGG";
			headset="No";
		};
		class H_Bandanna_sand
		{
			model="acebi_bandana_head";
			camo="SND";
			headset="No";
		};
		class H_Bandanna_surfer
		{
			model="acebi_bandana_head";
			camo="Surfer";
			headset="No";
		};
		class H_Bandanna_surfer_blk
		{
			model="acebi_bandana_head";
			camo="Surfer/Black";
			headset="No";
		};
		class H_Bandanna_surfer_grn
		{
			model="acebi_bandana_head";
			camo="Surfer/Green";
			headset="No";
		};
		class H_Bandanna_camo
		{
			model="acebi_bandana_head";
			camo="WDL";
			headset="No";
		};
		class H_PASGT_basic_black_F
		{
			model="acebi_basic_helm";
			camo="BLK";
		};
		class H_PASGT_basic_blue_F
		{
			model="acebi_basic_helm";
			camo="BLU";
		};
		class H_PASGT_basic_olive_F
		{
			model="acebi_basic_helm";
			camo="OLI";
		};
		class H_PASGT_basic_white_F
		{
			model="acebi_basic_helm";
			camo="WHT";
		};
		class H_Watchcap_blk
		{
			model="acebi_beanie";
			camo="BLK";
		};
		class H_Watchcap_cbr
		{
			model="acebi_beanie";
			camo="CBR";
		};
		class H_Watchcap_camo
		{
			model="acebi_beanie";
			camo="RGR";
		};
		class H_Watchcap_khk
		{
			model="acebi_beanie";
			camo="KHK";
		};
		class H_Beret_gen_F
		{
			model="acebi_beret_faction";
			faction="Gendarmerie";
			rank="Unspecified";
		};
		class H_Beret_CSAT_01_F
		{
			model="acebi_beret_faction";
			faction="CSAT";
			rank="Unspecified";
		};
		class H_Beret_EAF_01_F
		{
			model="acebi_beret_faction";
			faction="LDF";
			rank="Unspecified";
		};
		class H_Beret_02
		{
			model="acebi_beret_faction";
			faction="NATO";
			rank="Unspecified";
		};
		class H_Beret_Colonel
		{
			model="acebi_beret_faction";
			faction="NATO";
			rank="Colonel";
		};
		class H_Booniehat_mgrn
		{
			model="acebi_booniehat";
			camo="RGR";
			headset="No";
		};
		class H_Booniehat_khk_hs
		{
			model="acebi_booniehat";
			camo="KHK";
			headset="Yes";
		};
		class H_Booniehat_khk
		{
			model="acebi_booniehat";
			camo="KHK";
			headset="No";
		};
		class H_Booniehat_mcamo
		{
			model="acebi_booniehat";
			camo="MTP";
			headset="No";
		};
		class H_Booniehat_oli
		{
			model="acebi_booniehat";
			camo="OLI";
			headset="No";
		};
		class H_Booniehat_tan
		{
			model="acebi_booniehat";
			camo="SND";
			headset="No";
		};
		class H_Booniehat_taiga
		{
			model="acebi_booniehat";
			camo="THEX";
			headset="No";
		};
		class H_Booniehat_tna_F
		{
			model="acebi_booniehat";
			camo="Tropic";
			headset="No";
		};
		class H_Booniehat_wdl
		{
			model="acebi_booniehat";
			camo="M81";
			headset="No";
		};
		class H_Booniehat_dgtl
		{
			model="acebi_booniehat";
			camo="AAF";
			headset="No";
		};
		class H_Booniehat_eaf
		{
			model="acebi_booniehat";
			camo="EAF";
			headset="No";
		};
		class H_Cap_grn_BI
		{
			model="acebi_cap";
			camo="BI";
			headset="No";
		};
		class H_Cap_blk
		{
			model="acebi_cap";
			camo="BLK";
			headset="No";
		};
		class H_Cap_Black_IDAP_F
		{
			model="acebi_cap";
			camo="Black/IDAP";
			headset="No";
		};
		class H_Cap_blu
		{
			model="acebi_cap";
			camo="BLU";
			headset="No";
		};
		class H_Cap_blk_CMMG
		{
			model="acebi_cap";
			camo="CMMG";
			headset="No";
		};
		class H_Cap_grn
		{
			model="acebi_cap";
			camo="GRN";
			headset="No";
		};
		class H_Cap_blk_ION
		{
			model="acebi_cap";
			camo="ION";
			headset="No";
		};
		class H_Cap_oli
		{
			model="acebi_cap";
			camo="OLI";
			headset="No";
		};
		class H_Cap_oli_hs
		{
			model="acebi_cap";
			camo="OLI";
			headset="Yes";
		};
		class H_Cap_Orange_IDAP_F
		{
			model="acebi_cap";
			camo="Orange/IDAP";
			headset="No";
		};
		class H_Cap_police
		{
			model="acebi_cap";
			camo="Police";
			headset="No";
		};
		class H_Cap_press
		{
			model="acebi_cap";
			camo="Press";
			headset="No";
		};
		class H_Cap_red
		{
			model="acebi_cap";
			camo="RED";
			headset="No";
		};
		class H_Cap_surfer
		{
			model="acebi_cap";
			camo="Surfer";
			headset="No";
		};
		class H_Cap_tan
		{
			model="acebi_cap";
			camo="TAN";
			headset="No";
		};
		class H_Cap_khaki_specops_UK
		{
			model="acebi_cap";
			camo="UK";
			headset="No";
		};
		class H_Cap_usblack
		{
			model="acebi_cap";
			camo="US Black";
			headset="No";
		};
		class H_Cap_tan_specops_US
		{
			model="acebi_cap";
			camo="US MTP";
			headset="No";
		};
		class H_Cap_White_IDAP_F
		{
			model="acebi_cap";
			camo="White/IDAP";
			headset="No";
		};
		class H_Cap_blk_Raven
		{
			model="acebi_cap";
			camo="AAF";
			headset="No";
		};
		class H_Cap_brn_SPECOPS
		{
			model="acebi_cap";
			camo="HEX";
			headset="No";
		};
		class H_Cap_Lyfe
		{
			model="acebi_cap";
			camo="Lyfe";
			headset="No";
		};
		class H_Cap_MaldenTours
		{
			model="acebi_cap";
			camo="MaldenTours";
			headset="No";
		};
		class H_HelmetB
		{
			model="acebi_combat_helm";
			camo="BIHELM_STD";
		};
		class H_HelmetB_black
		{
			model="acebi_combat_helm";
			camo="BLK";
		};
		class H_HelmetB_desert
		{
			model="acebi_combat_helm";
			camo="BIHELM_DES";
		};
		class H_HelmetB_grass
		{
			model="acebi_combat_helm";
			camo="BIHELM_GRS";
		};
		class H_HelmetB_sand
		{
			model="acebi_combat_helm";
			camo="SND";
		};
		class H_HelmetB_snakeskin
		{
			model="acebi_combat_helm";
			camo="BIHELM_SNK";
		};
		class H_HelmetB_tna_F
		{
			model="acebi_combat_helm";
			camo="Tropic";
		};
		class H_HelmetB_plain_wdl
		{
			model="acebi_combat_helm";
			camo="M81";
		};
		class H_HelmetCrew_I
		{
			model="acebi_crew_helm";
			faction="AAF";
			camo="OLI";
		};
		class H_HelmetCrew_O
		{
			model="acebi_crew_helm";
			faction="CSAT";
			camo="HEX";
		};
		class H_HelmetCrew_O_ghex_F
		{
			model="acebi_crew_helm";
			faction="CSAT";
			camo="GHEX";
		};
		class H_HelmetCrew_I_E
		{
			model="acebi_crew_helm";
			faction="LDF";
			camo="OLI";
		};
		class H_HelmetCrew_B
		{
			model="acebi_crew_helm";
			faction="NATO";
			camo="RGR";
		};
		class H_Tank_black_F
		{
			model="acebi_crew_helm_soft";
			faction="CSAT";
		};
		class H_Tank_eaf_F
		{
			model="acebi_crew_helm_soft";
			faction="LDF";
		};
		class H_HelmetLeaderO_ghex_F
		{
			model="acebi_defender_helm";
			camo="GHEX";
		};
		class H_HelmetLeaderO_ocamo
		{
			model="acebi_defender_helm";
			camo="HEX";
		};
		class H_HelmetLeaderO_oucamo
		{
			model="acebi_defender_helm";
			camo="UHEX";
		};
		class H_EarProtectors_black_F
		{
			model="acebi_ear_protectors";
			camo="BLK";
		};
		class H_EarProtectors_orange_F
		{
			model="acebi_ear_protectors";
			camo="ORN";
		};
		class H_EarProtectors_red_F
		{
			model="acebi_ear_protectors";
			camo="RED";
		};
		class H_EarProtectors_white_F
		{
			model="acebi_ear_protectors";
			camo="WHT";
		};
		class H_EarProtectors_yellow_F
		{
			model="acebi_ear_protectors";
			camo="YLW";
		};
		class H_HelmetSpecB
		{
			model="acebi_enhc_combat_helm";
			camo="BIHELM_STD";
		};
		class H_HelmetSpecB_blk
		{
			model="acebi_enhc_combat_helm";
			camo="BLK";
		};
		class H_HelmetSpecB_paint2
		{
			model="acebi_enhc_combat_helm";
			camo="BIHELM_DES";
		};
		class H_HelmetSpecB_paint1
		{
			model="acebi_enhc_combat_helm";
			camo="BIHELM_GRS";
		};
		class H_HelmetSpecB_sand
		{
			model="acebi_enhc_combat_helm";
			camo="SND";
		};
		class H_HelmetSpecB_snakeskin
		{
			model="acebi_enhc_combat_helm";
			camo="BIHELM_SNK";
		};
		class H_HelmetB_Enh_tna_F
		{
			model="acebi_enhc_combat_helm";
			camo="Tropic";
		};
		class H_HelmetSpecB_wdl
		{
			model="acebi_enhc_combat_helm";
			camo="M81";
		};
		class H_Construction_basic_black_F
		{
			model="acebi_hardhat";
			camo="BLK";
			ears="None";
		};
		class H_Construction_earprot_black_F
		{
			model="acebi_hardhat";
			camo="BLK";
			ears="Ear Proc.";
		};
		class H_Construction_headset_black_F
		{
			model="acebi_hardhat";
			camo="BLK";
			ears="Headset";
		};
		class H_Construction_basic_orange_F
		{
			model="acebi_hardhat";
			camo="ORN";
			ears="None";
		};
		class H_Construction_earprot_orange_F
		{
			model="acebi_hardhat";
			camo="ORN";
			ears="Ear Proc.";
		};
		class H_Construction_headset_orange_F
		{
			model="acebi_hardhat";
			camo="ORN";
			ears="Headset";
		};
		class H_Construction_basic_red_F
		{
			model="acebi_hardhat";
			camo="RED";
			ears="None";
		};
		class H_Construction_earprot_red_F
		{
			model="acebi_hardhat";
			camo="RED";
			ears="Ear Proc.";
		};
		class H_Construction_headset_red_F
		{
			model="acebi_hardhat";
			camo="RED";
			ears="Headset";
		};
		class H_Construction_basic_vrana_F
		{
			model="acebi_hardhat";
			camo="Vrana";
			ears="None";
		};
		class H_Construction_earprot_vrana_F
		{
			model="acebi_hardhat";
			camo="Vrana";
			ears="Ear Proc.";
		};
		class H_Construction_headset_vrana_F
		{
			model="acebi_hardhat";
			camo="Vrana";
			ears="Headset";
		};
		class H_Construction_basic_white_F
		{
			model="acebi_hardhat";
			camo="WHT";
			ears="None";
		};
		class H_Construction_earprot_white_F
		{
			model="acebi_hardhat";
			camo="WHT";
			ears="Ear Proc.";
		};
		class H_Construction_headset_white_F
		{
			model="acebi_hardhat";
			camo="WHT";
			ears="Headset";
		};
		class H_Construction_basic_yellow_F
		{
			model="acebi_hardhat";
			camo="YLW";
			ears="None";
		};
		class H_Construction_earprot_yellow_F
		{
			model="acebi_hardhat";
			camo="YLW";
			ears="Ear Proc.";
		};
		class H_Construction_headset_yellow_F
		{
			model="acebi_hardhat";
			camo="YLW";
			ears="Headset";
		};
		class H_Hat_blue
		{
			model="acebi_hat";
			camo="BLU";
		};
		class H_Hat_brown
		{
			model="acebi_hat";
			camo="BRN";
		};
		class H_Hat_camo
		{
			model="acebi_hat";
			camo="Camo";
		};
		class H_Hat_checker
		{
			model="acebi_hat";
			camo="Checker";
		};
		class H_Hat_grey
		{
			model="acebi_hat";
			camo="GRY";
		};
		class H_Hat_tan
		{
			model="acebi_hat";
			camo="TAN";
		};
		class H_HeadBandage_clean_F
		{
			model="acebi_headbandage";
			severity="Clean";
		};
		class H_HeadBandage_stained_F
		{
			model="acebi_headbandage";
			severity="Moderate";
		};
		class H_HeadBandage_bloody_F
		{
			model="acebi_headbandage";
			severity="Severe";
		};
		class H_HeadSet_black_F
		{
			model="acebi_headset";
			camo="BLK";
		};
		class H_HeadSet_orange_F
		{
			model="acebi_headset";
			camo="ORN";
		};
		class H_HeadSet_red_F
		{
			model="acebi_headset";
			camo="RED";
		};
		class H_HeadSet_white_F
		{
			model="acebi_headset";
			camo="WHT";
		};
		class H_HeadSet_yellow_F
		{
			model="acebi_headset";
			camo="YLW";
		};
		class H_CrewHelmetHeli_I
		{
			model="acebi_heli_crew_helm";
			faction="AAF";
		};
		class H_CrewHelmetHeli_O
		{
			model="acebi_heli_crew_helm";
			faction="CSAT";
		};
		class H_CrewHelmetHeli_I_E
		{
			model="acebi_heli_crew_helm";
			faction="LDF";
		};
		class H_CrewHelmetHeli_B
		{
			model="acebi_heli_crew_helm";
			faction="NATO";
		};
		class H_PilotHelmetHeli_I
		{
			model="acebi_heli_pilot_helm";
			faction="AAF";
		};
		class H_PilotHelmetHeli_O
		{
			model="acebi_heli_pilot_helm";
			faction="CSAT";
		};
		class H_PilotHelmetHeli_I_E
		{
			model="acebi_heli_pilot_helm";
			faction="LDF";
		};
		class H_PilotHelmetHeli_B
		{
			model="acebi_heli_pilot_helm";
			faction="NATO";
		};
		class H_HelmetB_light
		{
			model="acebi_light_combat_helm";
			camo="BIHELM_STD";
		};
		class H_HelmetB_light_black
		{
			model="acebi_light_combat_helm";
			camo="BLK";
		};
		class H_HelmetB_light_desert
		{
			model="acebi_light_combat_helm";
			camo="BIHELM_DES";
		};
		class H_HelmetB_light_grass
		{
			model="acebi_light_combat_helm";
			camo="BIHELM_GRS";
		};
		class H_HelmetB_light_sand
		{
			model="acebi_light_combat_helm";
			camo="SND";
		};
		class H_HelmetB_light_snakeskin
		{
			model="acebi_light_combat_helm";
			camo="BIHELM_SNK";
		};
		class H_HelmetB_light_tna_F
		{
			model="acebi_light_combat_helm";
			camo="Tropic";
		};
		class H_HelmetB_light_wdl
		{
			model="acebi_light_combat_helm";
			camo="M81";
		};
		class H_MilCap_blue
		{
			model="acebi_mil_cap";
			camo="BLU";
		};
		class H_MilCap_gen_F
		{
			model="acebi_mil_cap";
			camo="Gendarmerie";
		};
		class H_MilCap_ghex_F
		{
			model="acebi_mil_cap";
			camo="GHEX";
		};
		class H_MilCap_grn
		{
			model="acebi_mil_cap";
			camo="GRN";
		};
		class H_MilCap_gry
		{
			model="acebi_mil_cap";
			camo="GRY";
		};
		class H_MilCap_ocamo
		{
			model="acebi_mil_cap";
			camo="HEX";
		};
		class H_MilCap_mcamo
		{
			model="acebi_mil_cap";
			camo="MTP";
		};
		class H_MilCap_taiga
		{
			model="acebi_mil_cap";
			camo="THEX";
		};
		class H_MilCap_tna_F
		{
			model="acebi_mil_cap";
			camo="Tropic";
		};
		class H_MilCap_wdl
		{
			model="acebi_mil_cap";
			camo="M81";
		};
		class H_MilCap_dgtl
		{
			model="acebi_mil_cap";
			camo="AAF";
		};
		class H_MilCap_eaf
		{
			model="acebi_mil_cap";
			camo="EAF";
		};
		class H_ParadeDressCap_01_AAF_F
		{
			model="acebi_parade_cap";
			faction="AAF";
		};
		class H_ParadeDressCap_01_CSAT_F
		{
			model="acebi_parade_cap";
			faction="CSAT";
		};
		class H_ParadeDressCap_01_LDF_F
		{
			model="acebi_parade_cap";
			faction="LDF";
		};
		class H_ParadeDressCap_01_US_F
		{
			model="acebi_parade_cap";
			faction="USA";
		};
		class H_PilotHelmetFighter_I
		{
			model="acebi_pilot_helm";
			faction="AAF";
		};
		class H_PilotHelmetFighter_O
		{
			model="acebi_pilot_helm";
			faction="CSAT";
		};
		class H_PilotHelmetFighter_I_E
		{
			model="acebi_pilot_helm";
			faction="LDF";
		};
		class H_PilotHelmetFighter_B
		{
			model="acebi_pilot_helm";
			faction="NATO";
		};
		class H_HelmetO_ghex_F
		{
			model="acebi_protector_helm";
			camo="GHEX";
		};
		class H_HelmetO_ocamo
		{
			model="acebi_protector_helm";
			camo="HEX";
		};
		class H_HelmetO_oucamo
		{
			model="acebi_protector_helm";
			camo="UHEX";
		};
		class H_PASGT_basic_blue_press_F
		{
			model="acebi_press_helm";
			NeckPro="No";
		};
		class H_PASGT_neckprot_blue_press_F
		{
			model="acebi_press_helm";
			NeckPro="Yes";
		};
		class H_RacingHelmet_1_black_F
		{
			model="acebi_racing_helmet";
			camo="BLK";
		};
		class H_RacingHelmet_1_blue_F
		{
			model="acebi_racing_helmet";
			camo="BLU";
		};
		class H_RacingHelmet_2_F
		{
			model="acebi_racing_helmet";
			camo="Bluking";
		};
		class H_RacingHelmet_1_F
		{
			model="acebi_racing_helmet";
			camo="Fuel";
		};
		class H_RacingHelmet_1_green_F
		{
			model="acebi_racing_helmet";
			camo="GRN";
		};
		class H_RacingHelmet_1_orange_F
		{
			model="acebi_racing_helmet";
			camo="ORN";
		};
		class H_RacingHelmet_1_red_F
		{
			model="acebi_racing_helmet";
			camo="RED";
		};
		class H_RacingHelmet_3_F
		{
			model="acebi_racing_helmet";
			camo="Redstone";
		};
		class H_RacingHelmet_4_F
		{
			model="acebi_racing_helmet";
			camo="Vrana";
		};
		class H_RacingHelmet_1_white_F
		{
			model="acebi_racing_helmet";
			camo="WHT";
		};
		class H_RacingHelmet_1_yellow_F
		{
			model="acebi_racing_helmet";
			camo="YLW";
		};
		class H_Hat_Safari_olive_F
		{
			model="acebi_safari_hat";
			camo="OLI";
		};
		class H_Hat_Safari_sand_F
		{
			model="acebi_safari_hat";
			camo="SND";
		};
		class H_Shemag_olive
		{
			model="acebi_shemag_head";
			camo="OLI";
			headset="No";
		};
		class H_Shemag_olive_hs
		{
			model="acebi_shemag_head";
			camo="OLI";
			headset="Yes";
		};
		class H_ShemagOpen_tan
		{
			model="acebi_shemag_head";
			camo="TAN";
			headset="No";
		};
		class H_ShemagOpen_khk
		{
			model="acebi_shemag_head";
			camo="WHT";
			headset="No";
		};
		class H_HelmetB_TI_tna_F
		{
			model="acebi_stealth_combat_helm";
			camo="CTRG_TROP";
		};
		class H_HelmetB_TI_arid_F
		{
			model="acebi_stealth_combat_helm";
			camo="CTRG_ARID";
		};
		class H_StrawHat
		{
			model="acebi_straw_hat";
			camo="Light";
		};
		class H_StrawHat_dark
		{
			model="acebi_straw_hat";
			camo="Dark";
		};
		class H_HelmetO_ViperSP_ghex_F
		{
			model="acebi_viper_helm";
			camo="GHEX";
		};
		class H_HelmetO_ViperSP_hex_F
		{
			model="acebi_viper_helm";
			camo="HEX";
		};
		class U_C_IDAP_Man_cargo_F
		{
			model="acebi_aidworker_clothes";
			variant="Cargo";
		};
		class U_C_IDAP_Man_Jeans_F
		{
			model="acebi_aidworker_clothes";
			variant="Jeans";
		};
		class U_C_IDAP_Man_casual_F
		{
			model="acebi_aidworker_clothes";
			variant="Polo";
		};
		class U_C_IDAP_Man_shorts_F
		{
			model="acebi_aidworker_clothes";
			variant="Polo/Shorts";
		};
		class U_C_IDAP_Man_Tee_F
		{
			model="acebi_aidworker_clothes";
			variant="Tee";
		};
		class U_C_IDAP_Man_TeeShorts_F
		{
			model="acebi_aidworker_clothes";
			variant="Tee/Shorts";
		};
		class U_I_C_Soldier_Bandit_4_F
		{
			model="acebi_bandit_clothes";
			variant="Checkered";
		};
		class U_I_C_Soldier_Bandit_1_F
		{
			model="acebi_bandit_clothes";
			variant="Polo Shirt";
		};
		class U_I_C_Soldier_Bandit_2_F
		{
			model="acebi_bandit_clothes";
			variant="Skull";
		};
		class U_I_C_Soldier_Bandit_5_F
		{
			model="acebi_bandit_clothes";
			variant="Tank Top";
		};
		class U_I_C_Soldier_Bandit_3_F
		{
			model="acebi_bandit_clothes";
			variant="Tee";
		};
		class U_C_ArtTShirt_01_v6_F
		{
			model="acebi_casual_clothes";
			design="Abstract";
		};
		class U_C_ArtTShirt_01_v1_F
		{
			model="acebi_casual_clothes";
			design="Art of War";
		};
		class U_C_Man_casual_2_F
		{
			model="acebi_casual_clothes";
			design="Blue";
		};
		class U_C_ArtTShirt_01_v2_F
		{
			model="acebi_casual_clothes";
			design="Drones";
		};
		class U_C_ArtTShirt_01_v4_F
		{
			model="acebi_casual_clothes";
			design="Exhibition";
		};
		class U_C_Man_casual_3_F
		{
			model="acebi_casual_clothes";
			design="Green";
		};
		class U_C_Man_casual_1_F
		{
			model="acebi_casual_clothes";
			design="Navy";
		};
		class U_C_ArtTShirt_01_v5_F
		{
			model="acebi_casual_clothes";
			design="Robogeddon";
		};
		class U_C_ArtTShirt_01_v3_F
		{
			model="acebi_casual_clothes";
			design="WalRob";
		};
		class U_C_Poloshirt_blue
		{
			model="acebi_common_clothes";
			camo="BLU";
		};
		class U_C_Poloshirt_burgundy
		{
			model="acebi_common_clothes";
			camo="Burgundy";
		};
		class U_C_Poloshirt_redwhite
		{
			model="acebi_common_clothes";
			camo="Red-White";
		};
		class U_C_Poloshirt_salmon
		{
			model="acebi_common_clothes";
			camo="Salmon";
		};
		class U_C_Poloshirt_stripped
		{
			model="acebi_common_clothes";
			camo="Striped";
		};
		class U_C_Poloshirt_tricolour
		{
			model="acebi_common_clothes";
			camo="Tricolor";
		};
		class U_C_ConstructionCoverall_Black_F
		{
			model="acebi_constr_cover";
			camo="BLK";
		};
		class U_C_ConstructionCoverall_Blue_F
		{
			model="acebi_constr_cover";
			camo="BLU";
		};
		class U_C_ConstructionCoverall_Red_F
		{
			model="acebi_constr_cover";
			camo="RED";
		};
		class U_C_ConstructionCoverall_Vrana_F
		{
			model="acebi_constr_cover";
			camo="Vrana";
		};
		class U_B_CTRG_1
		{
			model="acebi_ctrg_combat_uniform";
			camo="CTRG_ARID";
			top="Standard";
			sleeves="Full";
		};
		class U_B_CTRG_3
		{
			model="acebi_ctrg_combat_uniform";
			camo="CTRG_ARID";
			top="Standard";
			sleeves="Half";
		};
		class U_B_CTRG_2
		{
			model="acebi_ctrg_combat_uniform";
			camo="CTRG_ARID";
			top="Tee";
		};
		class U_B_CTRG_Soldier_urb_1_F
		{
			model="acebi_ctrg_combat_uniform";
			camo="CTRG_URB";
			top="Standard";
			sleeves="Full";
		};
		class U_B_CTRG_Soldier_urb_3_F
		{
			model="acebi_ctrg_combat_uniform";
			camo="CTRG_URB";
			top="Standard";
			sleeves="Half";
		};
		class U_B_CTRG_Soldier_urb_2_F
		{
			model="acebi_ctrg_combat_uniform";
			camo="CTRG_URB";
			top="Tee";
		};
		class U_B_CTRG_Soldier_F
		{
			model="acebi_ctrg_stealth_uniform";
			camo="CTRG_TROP";
			top="Standard";
			sleeves="Full";
		};
		class U_B_CTRG_Soldier_Arid_F
		{
			model="acebi_ctrg_stealth_uniform";
			camo="CTRG_ARID";
			top="Standard";
			sleeves="Full";
		};
		class U_B_CTRG_Soldier_3_F
		{
			model="acebi_ctrg_stealth_uniform";
			camo="CTRG_TROP";
			top="Standard";
			sleeves="Half";
		};
		class U_B_CTRG_Soldier_3_Arid_F
		{
			model="acebi_ctrg_stealth_uniform";
			camo="CTRG_ARID";
			top="Standard";
			sleeves="Half";
		};
		class U_B_CTRG_Soldier_2_F
		{
			model="acebi_ctrg_stealth_uniform";
			camo="CTRG_TROP";
			top="Tee";
		};
		class U_B_CTRG_Soldier_2_Arid_F
		{
			model="acebi_ctrg_stealth_uniform";
			camo="CTRG_ARID";
			top="Tee";
		};
		class U_I_L_Uniform_01_camo_F
		{
			model="acebi_deserter_clothes";
			variant="Jacket";
		};
		class U_I_L_Uniform_01_deserter_F
		{
			model="acebi_deserter_clothes";
			variant="Tee";
		};
		class U_C_Driver_1_black
		{
			model="acebi_driver_cover";
			camo="BLK";
		};
		class U_C_Driver_1_blue
		{
			model="acebi_driver_cover";
			camo="BLU";
		};
		class U_C_Driver_2
		{
			model="acebi_driver_cover";
			camo="Bluking";
		};
		class U_C_Driver_1
		{
			model="acebi_driver_cover";
			camo="Fuel";
		};
		class U_C_Driver_1_green
		{
			model="acebi_driver_cover";
			camo="GRN";
		};
		class U_C_Driver_1_orange
		{
			model="acebi_driver_cover";
			camo="ORN";
		};
		class U_C_Driver_1_red
		{
			model="acebi_driver_cover";
			camo="RED";
		};
		class U_C_Driver_3
		{
			model="acebi_driver_cover";
			camo="Redstone";
		};
		class U_C_Driver_4
		{
			model="acebi_driver_cover";
			camo="Vrana";
		};
		class U_C_Driver_1_white
		{
			model="acebi_driver_cover";
			camo="WHT";
		};
		class U_C_Driver_1_yellow
		{
			model="acebi_driver_cover";
			camo="YLW";
		};
		class U_I_CombatUniform
		{
			model="acebi_fatigues_aaf";
			top="Standard";
			sleeves="Full";
		};
		class U_I_CombatUniform_shortsleeve
		{
			model="acebi_fatigues_aaf";
			top="Standard";
			sleeves="Half";
		};
		class U_O_T_Soldier_F
		{
			model="acebi_fatigues_csat";
			camo="GHEX";
		};
		class U_O_CombatUniform_ocamo
		{
			model="acebi_fatigues_csat";
			camo="HEX";
		};
		class U_O_CombatUniform_oucamo
		{
			model="acebi_fatigues_csat";
			camo="UHEX";
		};
		class U_I_E_Uniform_01_shortsleeve_F
		{
			model="acebi_fatigues_ldf";
			top="Standard";
			sleeves="Half";
		};
		class U_I_E_Uniform_01_sweater_F
		{
			model="acebi_fatigues_ldf";
			top="Sweater";
		};
		class U_I_E_Uniform_01_tanktop_F
		{
			model="acebi_fatigues_ldf";
			top="Tank Top";
		};
		class U_I_E_Uniform_01_F
		{
			model="acebi_fatigues_ldf";
			top="Standard";
			sleeves="Full";
		};
		class U_B_CombatUniform_mcam
		{
			model="acebi_fatigues_nato";
			camo="MTP";
			top="Standard";
			sleeves="Full";
		};
		class U_B_CombatUniform_mcam_tshirt
		{
			model="acebi_fatigues_nato";
			camo="MTP";
			top="Tee";
		};
		class U_B_T_Soldier_F
		{
			model="acebi_fatigues_nato";
			camo="Tropic";
			top="Standard";
			sleeves="Full";
		};
		class U_B_T_Soldier_AR_F
		{
			model="acebi_fatigues_nato";
			camo="Tropic";
			top="Tee";
		};
		class U_B_CombatUniform_mcam_wdl_f
		{
			model="acebi_fatigues_nato";
			camo="M81";
			top="Standard";
			sleeves="Full";
		};
		class U_B_CombatUniform_tshirt_mcam_wdl_f
		{
			model="acebi_fatigues_nato";
			camo="M81";
			top="Tee";
		};
		class U_B_CombatUniform_mcam_vest
		{
			model="acebi_fatigues_nato";
			camo="MTP";
			top="Standard";
			sleeves="Half";
		};
		class U_B_T_Soldier_SL_F
		{
			model="acebi_fatigues_nato";
			camo="Tropic";
			top="Standard";
			sleeves="Half";
		};
		class U_B_CombatUniform_vest_mcam_wdl_f
		{
			model="acebi_fatigues_nato";
			camo="M81";
			top="Standard";
			sleeves="Half";
		};
		class U_C_FormalSuit_01_black_F
		{
			model="acebi_formal_suit";
			camo="BLK";
			undershirt="Tie";
		};
		class U_C_FormalSuit_01_blue_F
		{
			model="acebi_formal_suit";
			camo="BLU";
			undershirt="Tie";
		};
		class U_C_FormalSuit_01_gray_F
		{
			model="acebi_formal_suit";
			camo="GRY";
			undershirt="Tie";
		};
		class U_C_FormalSuit_01_khaki_F
		{
			model="acebi_formal_suit";
			camo="KHK";
			undershirt="Tie";
		};
		class U_C_FormalSuit_01_tshirt_black_F
		{
			model="acebi_formal_suit";
			camo="BLK";
			undershirt="T-Shirt";
		};
		class U_C_FormalSuit_01_tshirt_gray_F
		{
			model="acebi_formal_suit";
			camo="GRY";
			undershirt="T-Shirt";
		};
		class U_I_FullGhillie_ard
		{
			model="acebi_ghillie_full";
			camo="Arid";
			faction="AAF";
		};
		class U_O_FullGhillie_ard
		{
			model="acebi_ghillie_full";
			camo="Arid";
			faction="CSAT";
		};
		class U_B_FullGhillie_ard
		{
			model="acebi_ghillie_full";
			camo="Arid";
			faction="NATO";
		};
		class U_O_T_FullGhillie_tna_F
		{
			model="acebi_ghillie_full";
			camo="Jungle";
			faction="CSAT";
		};
		class U_B_T_FullGhillie_tna_F
		{
			model="acebi_ghillie_full";
			camo="Jungle";
			faction="NATO";
		};
		class U_I_FullGhillie_lsh
		{
			model="acebi_ghillie_full";
			camo="Lush";
			faction="AAF";
		};
		class U_O_FullGhillie_lsh
		{
			model="acebi_ghillie_full";
			camo="Lush";
			faction="CSAT";
		};
		class U_B_FullGhillie_lsh
		{
			model="acebi_ghillie_full";
			camo="Lush";
			faction="NATO";
		};
		class U_I_FullGhillie_sard
		{
			model="acebi_ghillie_full";
			camo="Semi-Arid";
			faction="AAF";
		};
		class U_O_FullGhillie_sard
		{
			model="acebi_ghillie_full";
			camo="Semi-Arid";
			faction="CSAT";
		};
		class U_B_FullGhillie_sard
		{
			model="acebi_ghillie_full";
			camo="Semi-Arid";
			faction="NATO";
		};
		class U_O_T_Sniper_F
		{
			model="acebi_ghillie_suit";
			camo="GHEX";
			faction="CSAT";
		};
		class U_B_T_Sniper_F
		{
			model="acebi_ghillie_suit";
			camo="Tropic";
			faction="NATO";
		};
		class U_I_GhillieSuit
		{
			model="acebi_ghillie_suit";
			camo="AAF";
			faction="AAF";
		};
		class U_O_GhillieSuit
		{
			model="acebi_ghillie_suit";
			camo="HEX";
			faction="CSAT";
		};
		class U_B_GhillieSuit
		{
			model="acebi_ghillie_suit";
			camo="MTP";
			faction="NATO";
		};
		class U_O_R_Gorka_01_F
		{
			model="acebi_granit";
			camo="OD";
		};
		class U_O_R_Gorka_01_brown_F
		{
			model="acebi_granit";
			camo="TAN";
		};
		class U_O_R_Gorka_01_camo_F
		{
			model="acebi_granit";
			camo="THEX";
		};
		class U_O_R_Gorka_01_black_F
		{
			model="acebi_granit";
			camo="BLK";
		};
		class U_BG_Guerilla1_1
		{
			model="acebi_guerilla_apparel";
			camo="KHK";
		};
		class U_BG_Guerilla1_2_F
		{
			model="acebi_guerilla_apparel";
			camo="OLI";
		};
		class U_BG_Guerilla2_2
		{
			model="acebi_guerilla_outfit";
			camo="Pattern";
		};
		class U_BG_Guerilla2_1
		{
			model="acebi_guerilla_outfit";
			camo="Plain/Dark";
		};
		class U_BG_Guerilla2_3
		{
			model="acebi_guerilla_outfit";
			camo="Plain/Light";
		};
		class U_I_HeliPilotCoveralls
		{
			model="acebi_heli_cover";
			faction="AAF";
		};
		class U_I_E_Uniform_01_coveralls_F
		{
			model="acebi_heli_cover";
			faction="CSAT";
		};
		class U_B_HeliPilotCoveralls
		{
			model="acebi_heli_cover";
			faction="NATO";
		};
		class U_C_E_LooterJacket_01_F
		{
			model="acebi_looter_clothes";
			variant="Leather Jacket";
		};
		class U_I_L_Uniform_01_tshirt_black_F
		{
			model="acebi_looter_clothes";
			variant="Tee/Black";
		};
		class U_I_L_Uniform_01_tshirt_olive_F
		{
			model="acebi_looter_clothes";
			variant="Tee/Olive";
		};
		class U_I_L_Uniform_01_tshirt_skull_F
		{
			model="acebi_looter_clothes";
			variant="Tee/Skull";
		};
		class U_I_L_Uniform_01_tshirt_sport_F
		{
			model="acebi_looter_clothes";
			variant="Tee/Sport";
		};
		class U_O_T_Officer_F
		{
			model="acebi_officer_csat";
			camo="GHEX";
		};
		class U_O_OfficerUniform_ocamo
		{
			model="acebi_officer_csat";
			camo="HEX";
		};
		class U_I_ParadeUniform_01_AAF_decorated_F
		{
			model="acebi_parade_uniform";
			faction="AAF";
			decorated="Yes";
		};
		class U_O_ParadeUniform_01_CSAT_decorated_F
		{
			model="acebi_parade_uniform";
			faction="CSAT";
			decorated="Yes";
		};
		class U_I_E_ParadeUniform_01_LDF_decorated_F
		{
			model="acebi_parade_uniform";
			faction="LDF";
			decorated="Yes";
		};
		class U_B_ParadeUniform_01_US_decorated_F
		{
			model="acebi_parade_uniform";
			faction="USA";
			decorated="Yes";
		};
		class U_I_ParadeUniform_01_AAF_F
		{
			model="acebi_parade_uniform";
			faction="AAF";
			decorated="No";
		};
		class U_O_ParadeUniform_01_CSAT_F
		{
			model="acebi_parade_uniform";
			faction="CSAT";
			decorated="No";
		};
		class U_I_E_ParadeUniform_01_LDF_F
		{
			model="acebi_parade_uniform";
			faction="LDF";
			decorated="No";
		};
		class U_B_ParadeUniform_01_US_F
		{
			model="acebi_parade_uniform";
			faction="USA";
			decorated="No";
		};
		class U_I_C_Soldier_Para_2_F
		{
			model="acebi_paramil_garb";
			variant="Jacket";
		};
		class U_I_C_Soldier_Para_3_F
		{
			model="acebi_paramil_garb";
			variant="Shirt";
		};
		class U_I_C_Soldier_Para_5_F
		{
			model="acebi_paramil_garb";
			variant="Shorts";
		};
		class U_I_C_Soldier_Para_4_F
		{
			model="acebi_paramil_garb";
			variant="Tank Top";
		};
		class U_I_C_Soldier_Para_1_F
		{
			model="acebi_paramil_garb";
			variant="Tee";
		};
		class U_I_pilotCoveralls
		{
			model="acebi_pilot_cover";
			faction="AAF";
		};
		class U_O_pilotCoveralls
		{
			model="acebi_pilot_cover";
			faction="CSAT";
		};
		class U_B_pilotCoveralls
		{
			model="acebi_pilot_cover";
			faction="NATO";
		};
		class U_C_Uniform_Scientist_01_F
		{
			model="acebi_sci_outfit_form";
			camo="BLU";
		};
		class U_C_Uniform_Scientist_01_formal_F
		{
			model="acebi_sci_outfit_form";
			camo="WHT";
		};
		class U_C_Uniform_Scientist_02_F
		{
			model="acebi_sci_outfit_inform";
			camo="BLK";
		};
		class U_C_Uniform_Scientist_02_formal_F
		{
			model="acebi_sci_outfit_inform";
			camo="RED";
		};
		class U_C_man_sport_1_F
		{
			model="acebi_sports_clothes";
			camo="Beach";
		};
		class U_C_man_sport_3_F
		{
			model="acebi_sports_clothes";
			camo="BLU";
		};
		class U_C_man_sport_2_F
		{
			model="acebi_sports_clothes";
			camo="ORN";
		};
		class U_C_Man_casual_6_F
		{
			model="acebi_summer_clothes";
			camo="RED";
		};
		class U_C_Man_casual_4_F
		{
			model="acebi_summer_clothes";
			camo="Sky";
		};
		class U_C_Man_casual_5_F
		{
			model="acebi_summer_clothes";
			camo="YLW";
		};
		class U_O_V_Soldier_Viper_F
		{
			model="acebi_viper_suit";
			camo="GHEX";
		};
		class U_O_V_Soldier_Viper_hex_F
		{
			model="acebi_viper_suit";
			camo="HEX";
		};
		class U_I_Protagonist_VR
		{
			model="acebi_vrsuit";
			faction="AAF";
		};
		class U_C_Protagonist_VR
		{
			model="acebi_vrsuit";
			faction="CIV";
		};
		class U_O_Protagonist_VR
		{
			model="acebi_vrsuit";
			faction="CSAT";
		};
		class U_B_Protagonist_VR
		{
			model="acebi_vrsuit";
			faction="NATO";
		};
		class U_I_Wetsuit
		{
			model="acebi_wetsuit";
			faction="AAF";
		};
		class U_O_Wetsuit
		{
			model="acebi_wetsuit";
			faction="CSAT";
		};
		class U_B_Wetsuit
		{
			model="acebi_wetsuit";
			faction="NATO";
		};
		class V_PlateCarrierGL_blk
		{
			model="acebi_carrier_gl";
			camo="BLK";
		};
		class V_PlateCarrierGL_rgr
		{
			model="acebi_carrier_gl";
			camo="RGR";
		};
		class V_PlateCarrierGL_mtp
		{
			model="acebi_carrier_gl";
			camo="MTP";
		};
		class V_PlateCarrierGL_tna_F
		{
			model="acebi_carrier_gl";
			camo="Tropic";
		};
		class V_PlateCarrierGL_wdl
		{
			model="acebi_carrier_gl";
			camo="M81";
		};
		class V_PlateCarrier1_blk
		{
			model="acebi_carrier_lite";
			camo="BLK";
			flag="USA";
		};
		class V_PlateCarrier1_rgr
		{
			model="acebi_carrier_lite";
			camo="RGR";
			flag="USA";
		};
		class V_PlateCarrier1_rgr_noflag_F
		{
			model="acebi_carrier_lite";
			camo="RGR";
			flag="None";
		};
		class V_PlateCarrier1_tna_F
		{
			model="acebi_carrier_lite";
			camo="Tropic";
			flag="USA";
		};
		class V_PlateCarrier1_wdl
		{
			model="acebi_carrier_lite";
			camo="M81";
			flag="USA";
		};
		class V_PlateCarrier2_blk
		{
			model="acebi_carrier_rig";
			camo="BLK";
			flag="USA";
		};
		class V_PlateCarrier2_rgr
		{
			model="acebi_carrier_rig";
			camo="RGR";
			flag="USA";
		};
		class V_PlateCarrier2_rgr_noflag_F
		{
			model="acebi_carrier_rig";
			camo="RGR";
			flag="None";
		};
		class V_PlateCarrier2_tna_F
		{
			model="acebi_carrier_rig";
			camo="Tropic";
			flag="USA";
		};
		class V_PlateCarrier2_wdl
		{
			model="acebi_carrier_rig";
			camo="M81";
			flag="USA";
		};
		class V_PlateCarrierSpec_blk
		{
			model="acebi_carrier_spec";
			camo="BLK";
		};
		class V_PlateCarrierSpec_rgr
		{
			model="acebi_carrier_spec";
			camo="RGR";
		};
		class V_PlateCarrierSpec_mtp
		{
			model="acebi_carrier_spec";
			camo="MTP";
		};
		class V_PlateCarrierSpec_tna_F
		{
			model="acebi_carrier_spec";
			camo="Tropic";
		};
		class V_PlateCarrierSpec_wdl
		{
			model="acebi_carrier_spec";
			camo="M81";
		};
		class V_Chestrig_blk
		{
			model="acebi_chest_rig";
			camo="BLK";
		};
		class V_Chestrig_rgr
		{
			model="acebi_chest_rig";
			camo="RGR";
		};
		class V_Chestrig_khk
		{
			model="acebi_chest_rig";
			camo="KHK";
		};
		class V_Chestrig_oli
		{
			model="acebi_chest_rig";
			camo="OLI";
		};
		class V_DeckCrew_blue_F
		{
			model="acebi_deck_vest";
			camo="BLU";
		};
		class V_DeckCrew_brown_F
		{
			model="acebi_deck_vest";
			camo="BRN";
		};
		class V_DeckCrew_green_F
		{
			model="acebi_deck_vest";
			camo="GRN";
		};
		class V_DeckCrew_red_F
		{
			model="acebi_deck_vest";
			camo="RED";
		};
		class V_DeckCrew_violet_F
		{
			model="acebi_deck_vest";
			camo="VIO";
		};
		class V_DeckCrew_white_F
		{
			model="acebi_deck_vest";
			camo="WHT";
		};
		class V_DeckCrew_yellow_F
		{
			model="acebi_deck_vest";
			camo="YLW";
		};
		class V_EOD_blue_F
		{
			model="acebi_eod_vest";
			camo="BLU";
		};
		class V_EOD_IDAP_blue_F
		{
			model="acebi_eod_vest";
			camo="BLU/IDAP";
		};
		class V_EOD_coyote_F
		{
			model="acebi_eod_vest";
			camo="CBR";
		};
		class V_EOD_olive_F
		{
			model="acebi_eod_vest";
			camo="OLI";
		};
		class V_PlateCarrierIAGL_dgtl
		{
			model="acebi_ga_carrier_gl";
			camo="AAF";
		};
		class V_PlateCarrierIAGL_oli
		{
			model="acebi_ga_carrier_gl";
			camo="OLI";
		};
		class V_PlateCarrierIA2_dgtl
		{
			model="acebi_ga_carrier_rig";
			camo="AAF";
		};
		class V_PlateCarrierIA1_dgtl
		{
			model="acebi_ga_carrier_lite";
			camo="AAF";
		};
		class V_Plain_crystal_F
		{
			model="acebi_identification_vest";
			symbol="Crystal";
		};
		class V_Plain_medical_F
		{
			model="acebi_identification_vest";
			symbol="IDAP";
		};
		class V_SmershVest_01_F
		{
			model="acebi_kipchak_vest";
			radio="Standard";
		};
		class V_SmershVest_01_radio_F
		{
			model="acebi_kipchak_vest";
			radio="Tactical";
		};
		class V_HarnessO_brn
		{
			model="acebi_lbv_harness";
			camo="CBR";
		};
		class V_HarnessO_ghex_F
		{
			model="acebi_lbv_harness";
			camo="GHEX";
		};
		class V_HarnessO_gry
		{
			model="acebi_lbv_harness";
			camo="GRY";
		};
		class V_HarnessOGL_brn
		{
			model="acebi_lbv_harness_grenadier";
			camo="BRN";
		};
		class V_HarnessOGL_ghex_F
		{
			model="acebi_lbv_harness_grenadier";
			camo="GHEX";
		};
		class V_HarnessOGL_gry
		{
			model="acebi_lbv_harness_grenadier";
			camo="GRY";
		};
		class V_LegStrapBag_black_F
		{
			model="acebi_legstrapbag";
			camo="BLK";
		};
		class V_LegStrapBag_coyote_F
		{
			model="acebi_legstrapbag";
			camo="CBR";
		};
		class V_LegStrapBag_olive_F
		{
			model="acebi_legstrapbag";
			camo="OLI";
		};
		class V_CarrierRigKBT_01_heavy_EAF_F
		{
			model="acebi_mod_carrier_gl";
			camo="EAF";
		};
		class V_CarrierRigKBT_01_heavy_Olive_F
		{
			model="acebi_mod_carrier_gl";
			camo="OLI";
		};
		class V_CarrierRigKBT_01_EAF_F
		{
			model="acebi_mod_carrier_vest";
			camo="EAF";
		};
		class V_CarrierRigKBT_01_Olive_F
		{
			model="acebi_mod_carrier_vest";
			camo="OLI";
		};
		class V_CarrierRigKBT_01_light_EAF_F
		{
			model="acebi_mod_carrier_lite";
			camo="EAF";
		};
		class V_CarrierRigKBT_01_light_Olive_F
		{
			model="acebi_mod_carrier_lite";
			camo="OLI";
		};
		class V_Pocketed_black_F
		{
			model="acebi_multipocket_vest";
			camo="BLK";
		};
		class V_Pocketed_coyote_F
		{
			model="acebi_multipocket_vest";
			camo="CBR";
		};
		class V_Pocketed_olive_F
		{
			model="acebi_multipocket_vest";
			camo="OLI";
		};
		class V_RebreatherIA
		{
			model="acebi_rebreather";
			faction="AAF";
		};
		class V_RebreatherIR
		{
			model="acebi_rebreather";
			faction="CSAT";
		};
		class V_RebreatherB
		{
			model="acebi_rebreather";
			faction="NATO";
		};
		class V_Safety_blue_F
		{
			model="acebi_safetyvest";
			camo="BLU";
		};
		class V_Safety_orange_F
		{
			model="acebi_safetyvest";
			camo="ORN";
		};
		class V_Safety_yellow_F
		{
			model="acebi_safetyvest";
			camo="YLW";
		};
		class V_BandollierB_blk
		{
			model="acebi_slash_band";
			camo="BLK";
		};
		class V_BandollierB_cbr
		{
			model="acebi_slash_band";
			camo="CBR";
		};
		class V_BandollierB_ghex_F
		{
			model="acebi_slash_band";
			camo="GHEX";
		};
		class V_BandollierB_rgr
		{
			model="acebi_slash_band";
			camo="RGR";
		};
		class V_BandollierB_khk
		{
			model="acebi_slash_band";
			camo="KHK";
		};
		class V_BandollierB_oli
		{
			model="acebi_slash_band";
			camo="OLI";
		};
		class V_TacChestrig_cbr_F
		{
			model="acebi_tac_chest_rig";
			camo="CBR";
		};
		class V_TacChestrig_grn_F
		{
			model="acebi_tac_chest_rig";
			camo="GRN";
		};
		class V_TacChestrig_oli_F
		{
			model="acebi_tac_chest_rig";
			camo="OLI";
		};
		class V_TacVest_blk
		{
			model="acebi_tacvest";
			camo="BLK";
		};
		class V_TacVest_brn
		{
			model="acebi_tacvest";
			camo="BRN";
		};
		class V_TacVest_camo
		{
			model="acebi_tacvest";
			camo="Camo";
		};
		class V_TacVest_khk
		{
			model="acebi_tacvest";
			camo="KHK";
		};
		class V_TacVest_oli
		{
			model="acebi_tacvest";
			camo="OLI";
		};
		class V_I_G_resistanceLeader_F
		{
			model="acebi_tacvest";
			camo="Stavrou";
		};
		class V_TacVest_blk_POLICE
		{
			model="acebi_tacvest_police";
			camo="Police";
		};
		class V_TacVest_gen_F
		{
			model="acebi_tacvest_police";
			camo="Gendarmerie";
		};
		class arifle_AK12_F
		{
			model="acebi_ak15";
			camo="BLK";
		};
		class arifle_AK12_arid_F
		{
			model="acebi_ak15";
			camo="BISPNZ_A";
		};
		class arifle_AK12_lush_F
		{
			model="acebi_ak15";
			camo="BISPNZ_L";
		};
		class arifle_AK12_GL_F
		{
			model="acebi_ak15_gl";
			camo="BLK";
		};
		class arifle_AK12_GL_arid_F
		{
			model="acebi_ak15_gl";
			camo="BISPNZ_A";
		};
		class arifle_AK12_GL_lush_F
		{
			model="acebi_ak15_gl";
			camo="BISPNZ_L";
		};
		class arifle_AK12U_F
		{
			model="acebi_ak15k";
			camo="BLK";
		};
		class arifle_AK12U_arid_F
		{
			model="acebi_ak15k";
			camo="BISPNZ_A";
		};
		class arifle_AK12U_lush_F
		{
			model="acebi_ak15k";
			camo="BISPNZ_L";
		};
		class srifle_DMR_04_F
		{
			model="acebi_asp1kir";
			camo="BLK";
		};
		class srifle_DMR_04_Tan_F
		{
			model="acebi_asp1kir";
			camo="TAN";
		};
		class srifle_DMR_05_blk_F
		{
			model="acebi_cyrus";
			camo="BLK";
		};
		class srifle_DMR_05_hex_F
		{
			model="acebi_cyrus";
			camo="HEX";
		};
		class srifle_DMR_05_tan_F
		{
			model="acebi_cyrus";
			camo="TAN";
		};
		class arifle_Mk20_plain_F
		{
			model="acebi_f2000";
			camo="SND";
		};
		class arifle_Mk20_F
		{
			model="acebi_f2000";
			camo="AAF";
		};
		class arifle_Mk20_GL_plain_F
		{
			model="acebi_f2000_eglm";
			camo="SND";
		};
		class arifle_Mk20_GL_F
		{
			model="acebi_f2000_eglm";
			camo="AAF";
		};
		class arifle_Mk20C_plain_F
		{
			model="acebi_f2000_tac";
			camo="SND";
		};
		class arifle_Mk20C_F
		{
			model="acebi_f2000_tac";
			camo="AAF";
		};
		class srifle_GM6_F
		{
			model="acebi_gm6_lynx";
			camo="BLK";
		};
		class srifle_GM6_camo_F
		{
			model="acebi_gm6_lynx";
			camo="HEX";
		};
		class srifle_GM6_ghex_F
		{
			model="acebi_gm6_lynx";
			camo="GHEX";
		};
		class srifle_EBR_F
		{
			model="acebi_mk14";
			camo="SND";
		};
		class MMG_01_hex_F
		{
			model="acebi_hk121";
			camo="HEX";
		};
		class MMG_01_tan_F
		{
			model="acebi_hk121";
			camo="TAN";
		};
		class arifle_SPAR_01_blk_F
		{
			model="acebi_hk416a5_11";
			camo="BLK";
		};
		class arifle_SPAR_01_khk_F
		{
			model="acebi_hk416a5_11";
			camo="KHKG";
		};
		class arifle_SPAR_01_snd_F
		{
			model="acebi_hk416a5_11";
			camo="SND";
		};
		class arifle_SPAR_01_GL_blk_F
		{
			model="acebi_hk416a5_11_gl";
			camo="BLK";
		};
		class arifle_SPAR_01_GL_khk_F
		{
			model="acebi_hk416a5_11_gl";
			camo="KHKG";
		};
		class arifle_SPAR_01_GL_snd_F
		{
			model="acebi_hk416a5_11_gl";
			camo="SND";
		};
		class arifle_SPAR_02_blk_F
		{
			model="acebi_hk416a5_14_5";
			camo="BLK";
		};
		class arifle_SPAR_02_khk_F
		{
			model="acebi_hk416a5_14_5";
			camo="KHKG";
		};
		class arifle_SPAR_02_snd_F
		{
			model="acebi_hk416a5_14_5";
			camo="SND";
		};
		class arifle_SPAR_03_blk_F
		{
			model="acebi_hk417a2_20";
			camo="BLK";
		};
		class arifle_SPAR_03_khk_F
		{
			model="acebi_hk417a2_20";
			camo="KHKG";
		};
		class arifle_SPAR_03_snd_F
		{
			model="acebi_hk417a2_20";
			camo="SND";
		};
		class MMG_02_black_F
		{
			model="acebi_lwmmg";
			camo="BLK";
		};
		class MMG_02_camo_F
		{
			model="acebi_lwmmg";
			camo="MTP";
		};
		class MMG_02_sand_F
		{
			model="acebi_lwmmg";
			camo="SND";
		};
		class srifle_DMR_06_camo_F
		{
			model="acebi_m14";
			camo="Camo";
		};
		class srifle_DMR_06_olive_F
		{
			model="acebi_m14";
			camo="OLI";
		};
		class srifle_LRR_F
		{
			model="acebi_m200_int";
			camo="BLK";
		};
		class srifle_LRR_camo_F
		{
			model="acebi_m200_int";
			camo="MTP";
		};
		class srifle_LRR_tna_F
		{
			model="acebi_m200_int";
			camo="Tropic";
		};
		class arifle_MSBS65_F
		{
			model="acebi_msbs_grot";
			camo="OLI";
		};
		class arifle_MSBS65_black_F
		{
			model="acebi_msbs_grot";
			camo="BLK";
		};
		class arifle_MSBS65_camo_F
		{
			model="acebi_msbs_grot";
			camo="EAF";
		};
		class arifle_MSBS65_sand_F
		{
			model="acebi_msbs_grot";
			camo="TAN";
		};
		class arifle_MSBS65_GL_F
		{
			model="acebi_msbs_grot_gl";
			camo="OLI";
		};
		class arifle_MSBS65_GL_black_F
		{
			model="acebi_msbs_grot_gl";
			camo="BLK";
		};
		class arifle_MSBS65_GL_camo_F
		{
			model="acebi_msbs_grot_gl";
			camo="EAF";
		};
		class arifle_MSBS65_GL_sand_F
		{
			model="acebi_msbs_grot_gl";
			camo="TAN";
		};
		class arifle_MSBS65_Mark_F
		{
			model="acebi_msbs_grot_mr";
			camo="OLI";
		};
		class arifle_MSBS65_Mark_black_F
		{
			model="acebi_msbs_grot_mr";
			camo="BLK";
		};
		class arifle_MSBS65_Mark_camo_F
		{
			model="acebi_msbs_grot_mr";
			camo="EAF";
		};
		class arifle_MSBS65_Mark_sand_F
		{
			model="acebi_msbs_grot_mr";
			camo="TAN";
		};
		class arifle_MSBS65_UBS_F
		{
			model="acebi_msbs_grot_sg";
			camo="OLI";
		};
		class arifle_MSBS65_UBS_black_F
		{
			model="acebi_msbs_grot_sg";
			camo="BLK";
		};
		class arifle_MSBS65_UBS_camo_F
		{
			model="acebi_msbs_grot_sg";
			camo="EAF";
		};
		class arifle_MSBS65_UBS_sand_F
		{
			model="acebi_msbs_grot_sg";
			camo="TAN";
		};
		class arifle_MX_F
		{
			model="acebi_mx";
			camo="SND";
		};
		class arifle_MX_Black_F
		{
			model="acebi_mx";
			camo="BLK";
		};
		class arifle_MX_khk_F
		{
			model="acebi_mx";
			camo="KHKG";
		};
		class arifle_MX_GL_F
		{
			model="acebi_mx_3gl";
			camo="SND";
		};
		class arifle_MX_GL_Black_F
		{
			model="acebi_mx_3gl";
			camo="BLK";
		};
		class arifle_MX_GL_khk_F
		{
			model="acebi_mx_3gl";
			camo="KHKG";
		};
		class arifle_MX_SW_F
		{
			model="acebi_mx_lsw";
			camo="SND";
		};
		class arifle_MX_SW_Black_F
		{
			model="acebi_mx_lsw";
			camo="BLK";
		};
		class arifle_MX_SW_khk_F
		{
			model="acebi_mx_lsw";
			camo="KHKG";
		};
		class arifle_MXC_F
		{
			model="acebi_mxc";
			camo="SND";
		};
		class arifle_MXC_Black_F
		{
			model="acebi_mxc";
			camo="BLK";
		};
		class arifle_MXC_khk_F
		{
			model="acebi_mxc";
			camo="KHKG";
		};
		class arifle_MXM_F
		{
			model="acebi_mxm";
			camo="SND";
		};
		class arifle_MXM_Black_F
		{
			model="acebi_mxm";
			camo="BLK";
		};
		class arifle_MXM_khk_F
		{
			model="acebi_mxm";
			camo="KHKG";
		};
		class srifle_DMR_02_F
		{
			model="acebi_noreen";
			camo="BLK";
		};
		class srifle_DMR_02_camo_F
		{
			model="acebi_noreen";
			camo="CTRG_ARID";
		};
		class srifle_DMR_02_sniper_F
		{
			model="acebi_noreen";
			camo="SND";
		};
		class SMG_03C_black
		{
			model="acebi_p90";
			camo="BLK";
		};
		class SMG_03C_camo
		{
			model="acebi_p90";
			camo="AAF";
		};
		class SMG_03C_hex
		{
			model="acebi_p90";
			camo="UHEX";
		};
		class SMG_03C_khaki
		{
			model="acebi_p90";
			camo="KHK";
		};
		class SMG_03C_TR_black
		{
			model="acebi_p90_tr";
			camo="BLK";
		};
		class SMG_03C_TR_camo
		{
			model="acebi_p90_tr";
			camo="AAF";
		};
		class SMG_03C_TR_hex
		{
			model="acebi_p90_tr";
			camo="UHEX";
		};
		class SMG_03C_TR_khaki
		{
			model="acebi_p90_tr";
			camo="KHK";
		};
		class SMG_03_black
		{
			model="acebi_ps90";
			camo="BLK";
		};
		class SMG_03_camo
		{
			model="acebi_ps90";
			camo="AAF";
		};
		class SMG_03_hex
		{
			model="acebi_ps90";
			camo="UHEX";
		};
		class SMG_03_khaki
		{
			model="acebi_ps90";
			camo="KHK";
		};
		class SMG_03_TR_black
		{
			model="acebi_ps90_tr";
			camo="BLK";
		};
		class SMG_03_TR_camo
		{
			model="acebi_ps90_tr";
			camo="AAF";
		};
		class SMG_03_TR_hex
		{
			model="acebi_ps90_tr";
			camo="UHEX";
		};
		class SMG_03_TR_khaki
		{
			model="acebi_ps90_tr";
			camo="KHK";
		};
		class srifle_DMR_07_blk_F
		{
			model="acebi_qbu88";
			camo="BLK";
		};
		class srifle_DMR_07_ghex_F
		{
			model="acebi_qbu88";
			camo="GHEX";
		};
		class srifle_DMR_07_hex_F
		{
			model="acebi_qbu88";
			camo="HEX";
		};
		class arifle_CTAR_blk_F
		{
			model="acebi_qbz95_1";
			camo="BLK";
		};
		class arifle_CTAR_ghex_F
		{
			model="acebi_qbz95_1";
			camo="GHEX";
		};
		class arifle_CTAR_hex_F
		{
			model="acebi_qbz95_1";
			camo="HEX";
		};
		class arifle_CTAR_GL_blk_F
		{
			model="acebi_qbz95_1_gl";
			camo="BLK";
		};
		class arifle_CTAR_GL_ghex_F
		{
			model="acebi_qbz95_1_gl";
			camo="GHEX";
		};
		class arifle_CTAR_GL_hex_F
		{
			model="acebi_qbz95_1_gl";
			camo="HEX";
		};
		class arifle_CTARS_blk_F
		{
			model="acebi_qbz95_1_lsw";
			camo="BLK";
		};
		class arifle_CTARS_ghex_F
		{
			model="acebi_qbz95_1_lsw";
			camo="GHEX";
		};
		class arifle_CTARS_hex_F
		{
			model="acebi_qbz95_1_lsw";
			camo="HEX";
		};
		class arifle_RPK12_F
		{
			model="acebi_rpk";
			camo="BLK";
		};
		class arifle_RPK12_arid_F
		{
			model="acebi_rpk";
			camo="BISPNZ_A";
		};
		class arifle_RPK12_lush_F
		{
			model="acebi_rpk";
			camo="BISPNZ_L";
		};
		class srifle_DMR_03_F
		{
			model="acebi_sig556";
			camo="BLK";
		};
		class srifle_DMR_03_multicam_F
		{
			model="acebi_sig556";
			camo="MTP";
		};
		class srifle_DMR_03_khaki_F
		{
			model="acebi_sig556";
			camo="KHKG";
		};
		class srifle_DMR_03_tan_F
		{
			model="acebi_sig556";
			camo="SND";
		};
		class srifle_DMR_03_woodland_F
		{
			model="acebi_sig556";
			camo="M81";
		};
		class LMG_Mk200_F
		{
			model="acebi_stoner99";
			camo="SND";
		};
		class LMG_Mk200_black_F
		{
			model="acebi_stoner99";
			camo="BLK";
		};
		class arifle_ARX_blk_F
		{
			model="acebi_type115";
			camo="BLK";
		};
		class arifle_ARX_ghex_F
		{
			model="acebi_type115";
			camo="GHEX";
		};
		class arifle_ARX_hex_F
		{
			model="acebi_type115";
			camo="HEX";
		};
		class hgun_Pistol_heavy_01_F
		{
			model="acebi_fnk45";
			camo="TAN";
		};
		class hgun_Pistol_heavy_01_green_F
		{
			model="acebi_fnk45";
			camo="GRN";
		};
		class hgun_P07_F
		{
			model="acebi_p99";
			camo="TAN";
		};
		class hgun_P07_blk_F
		{
			model="acebi_p99";
			camo="BLK";
		};
		class hgun_P07_khk_F
		{
			model="acebi_p99";
			camo="GRN";
		};
		class launch_MRAWS_green_rail_F
		{
			model="acebi_maaws_0";
			camo="GRN";
		};
		class launch_MRAWS_olive_rail_F
		{
			model="acebi_maaws_0";
			camo="OLI";
		};
		class launch_MRAWS_sand_rail_F
		{
			model="acebi_maaws_0";
			camo="SND";
		};
		class launch_MRAWS_green_F
		{
			model="acebi_maaws_1";
			camo="GRN";
		};
		class launch_MRAWS_olive_F
		{
			model="acebi_maaws_1";
			camo="OLI";
		};
		class launch_MRAWS_sand_F
		{
			model="acebi_maaws_1";
			camo="SND";
		};
		class launch_O_Vorona_brown_F
		{
			model="acebi_metis";
			camo="BRN";
		};
		class launch_O_Vorona_green_F
		{
			model="acebi_metis";
			camo="GRN";
		};
		class launch_RPG32_F
		{
			model="acebi_rpg32";
			camo="HEX";
		};
		class launch_RPG32_ghex_F
		{
			model="acebi_rpg32";
			camo="GHEX";
		};
		class launch_RPG32_green_F
		{
			model="acebi_rpg32";
			camo="GRN";
		};
		class launch_RPG32_camo_F
		{
			model="acebi_rpg32";
			camo="CAMO";
		};
		class launch_I_Titan_F
		{
			model="acebi_titan_aa";
			camo="AAF";
		};
		class launch_I_Titan_eaf_F
		{
			model="acebi_titan_aa";
			camo="EAF";
		};
		class launch_O_Titan_F
		{
			model="acebi_titan_aa";
			camo="HEX";
		};
		class launch_O_Titan_ghex_F
		{
			model="acebi_titan_aa";
			camo="GHEX";
		};
		class launch_B_Titan_olive_F
		{
			model="acebi_titan_aa";
			camo="OLI";
		};
		class launch_B_Titan_F
		{
			model="acebi_titan_aa";
			camo="SND";
		};
		class launch_B_Titan_tna_F
		{
			model="acebi_titan_aa";
			camo="Tropic";
		};
		class launch_I_Titan_short_F
		{
			model="acebi_titan_at";
			camo="OLI";
		};
		class launch_O_Titan_short_F
		{
			model="acebi_titan_at";
			camo="CBR";
		};
		class launch_O_Titan_short_ghex_F
		{
			model="acebi_titan_at";
			camo="GHEX";
		};
		class launch_B_Titan_short_F
		{
			model="acebi_titan_at";
			camo="SND";
		};
		class launch_B_Titan_short_tna_F
		{
			model="acebi_titan_at";
			camo="Tropic";
		};
		class O_NVGoggles_ghex_F
		{
			model="acebi_compact_nvg";
			camo="GHEX";
		};
		class O_NVGoggles_grn_F
		{
			model="acebi_compact_nvg";
			camo="RGR";
		};
		class O_NVGoggles_hex_F
		{
			model="acebi_compact_nvg";
			camo="HEX";
		};
		class O_NVGoggles_urb_F
		{
			model="acebi_compact_nvg";
			camo="UHEX";
		};
		class NVGogglesB_blk_F
		{
			model="acebi_envg";
			camo="BLK";
		};
		class NVGogglesB_grn_F
		{
			model="acebi_envg";
			camo="OLI";
		};
		class NVGogglesB_gry_F
		{
			model="acebi_envg";
			camo="GRY";
		};
		class ACE_NVG_Gen1
		{
			model="acebi_nvg_gen1";
			camo="BLK";
		};
		class ACE_NVG_Gen1_Brown
		{
			model="acebi_nvg_gen1";
			camo="SND";
		};
		class ACE_NVG_Gen1_Green
		{
			model="acebi_nvg_gen1";
			camo="OLI";
		};
		class ACE_NVG_Gen2_Black
		{
			model="acebi_nvg_gen2";
			camo="BLK";
		};
		class ACE_NVG_Gen2_Brown
		{
			model="acebi_nvg_gen2";
			camo="SND";
		};
		class ACE_NVG_Gen2
		{
			model="acebi_nvg_gen2";
			camo="OLI";
		};
		class NVGoggles_OPFOR
		{
			model="acebi_nvg_gen3";
			camo="BLK";
			wp="No";
		};
		class NVGoggles
		{
			model="acebi_nvg_gen3";
			camo="SND";
			wp="No";
		};
		class NVGoggles_INDEP
		{
			model="acebi_nvg_gen3";
			camo="OLI";
			wp="No";
		};
		class NVGoggles_tna_F
		{
			model="acebi_nvg_gen3";
			camo="Tropic";
			wp="No";
		};
		class ACE_NVGoggles_OPFOR_WP
		{
			model="acebi_nvg_gen3";
			camo="BLK";
			wp="Yes";
		};
		class ACE_NVGoggles_WP
		{
			model="acebi_nvg_gen3";
			camo="SND";
			wp="Yes";
		};
		class ACE_NVGoggles_INDEP_WP
		{
			model="acebi_nvg_gen3";
			camo="OLI";
			wp="Yes";
		};
		class ACE_NVG_Gen4_Black
		{
			model="acebi_nvg_gen4";
			camo="BLK";
			wp="No";
		};
		class ACE_NVG_Gen4
		{
			model="acebi_nvg_gen4";
			camo="SND";
			wp="No";
		};
		class ACE_NVG_Gen4_Green
		{
			model="acebi_nvg_gen4";
			camo="OLI";
			wp="No";
		};
		class ACE_NVG_Gen4_Black_WP
		{
			model="acebi_nvg_gen4";
			camo="BLK";
			wp="Yes";
		};
		class ACE_NVG_Gen4_WP
		{
			model="acebi_nvg_gen4";
			camo="SND";
			wp="Yes";
		};
		class ACE_NVG_Gen4_Green_WP
		{
			model="acebi_nvg_gen4";
			camo="OLI";
			wp="Yes";
		};
		class ACE_NVG_Wide_Black
		{
			model="acebi_nvg_wide";
			camo="BLK";
			wp="No";
		};
		class ACE_NVG_Wide
		{
			model="acebi_nvg_wide";
			camo="SND";
			wp="No";
		};
		class ACE_NVG_Wide_Green
		{
			model="acebi_nvg_wide";
			camo="OLI";
			wp="No";
		};
		class ACE_NVG_Wide_Black_WP
		{
			model="acebi_nvg_wide";
			camo="BLK";
			wp="Yes";
		};
		class ACE_NVG_Wide_WP
		{
			model="acebi_nvg_wide";
			camo="SND";
			wp="Yes";
		};
		class ACE_NVG_Wide_Green_WP
		{
			model="acebi_nvg_wide";
			camo="OLI";
			wp="Yes";
		};
		class Laserdesignator_02_ghex_F
		{
			model="acebi_las_desig";
			camo="GHEX";
		};
		class Laserdesignator_02
		{
			model="acebi_las_desig";
			camo="HEX";
		};
		class Laserdesignator_01_khk_F
		{
			model="acebi_las_desig";
			camo="OD";
		};
		class Laserdesignator_03
		{
			model="acebi_las_desig";
			camo="OLI";
		};
		class Laserdesignator
		{
			model="acebi_las_desig";
			camo="SND";
		};
	};
};
