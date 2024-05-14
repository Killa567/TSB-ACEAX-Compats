class CfgPatches
{
	class TSB_ACEAX_Compat_DHI
	{
		name="TSB_ACEAX_Compat_DHI";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"US_Military_Uniforms",
			"aceax_gearinfo"
		};
		author="Killa567";
		skipWhenMissingDependencies = 1;
	};
};
class CfgWeapons
{
	class Uniform_base;
	class ItemCore;
	class UniformItem;
	class usm_bdu_wdl;
	class usm_bdu_blk: usm_bdu_wdl
	{
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="usm_bdu_blk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class usm_bdu_dcu: usm_bdu_wdl
	{
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="usm_bdu_dcu";
			containerClass="Supply40";
			mass=40;
		};
	};
	class usm_bdu_dcu_m: usm_bdu_wdl
	{
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="usm_bdu_dcu_m";
			containerClass="Supply40";
			mass=40;
		};
	};
	class usm_bdu_odg: usm_bdu_wdl
	{
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="usm_bdu_odg";
			containerClass="Supply40";
			mass=40;
		};
	};
	class usm_bdu_ubn: usm_bdu_wdl
	{
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="usm_bdu_ubn";
			containerClass="Supply40";
			mass=40;
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class DHI_BDU
		{
			label="BDU [DHI]";
			author="Killa567";
			options[]=
			{
				"camo",
				"Blouse",
				"Sleeves"
			};
			class camo
			{
				values[]=
				{
					"Black",
					"blue",
					"DCU",
					"DCU_Special",
					"DCU_Marines",
					"Desert",
					"Desert_Special",
					"Desert_Special_2",
					"Desert_Marines",
					"ERDL",
					"Grey",
					"Port_DPM",
					"Tak_Liz",
					"Tan",
					"Temp_Woodland",
					"Tiger",
					"Urban_Tiger",
					"Woodland",
					"Woodland_Special",
					"Woodland_USMC",
					"OD",
					"Urban"
				};
				class Black
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa";
				};
				class blue
				{
					label="Blue";
					image="TSB_ACEAX_Compat\data\Blue.paa";
				};
				class DCU
				{
					label="DCU";
					image="TSB_ACEAX_Compat\data\DCU.paa";
				};
				class DCU_Special
				{
					label="DCU Special";
					image="TSB_ACEAX_Compat\data\DCU_Special.paa";
				};
				class DCU_Marines
				{
					label="DCU USMC";
					image="TSB_ACEAX_Compat\data\DCU.paa";
				};
				class Desert
				{
					label="Desert";
					image="TSB_ACEAX_Compat\data\Desert.paa";
				};
				class Desert_Special
				{
					label="Desert Special";
					image="TSB_ACEAX_Compat\data\Desert.paa";
				};
				class Desert_Special_2
				{
					label="Desert Special 2";
					image="TSB_ACEAX_Compat\data\Desert.paa";
				};
				class Desert_Marines
				{
					label="Desert USMC";
					image="TSB_ACEAX_Compat\data\Desert.paa";
				};
				class ERDL
				{
					label="ERDL";
					image="TSB_ACEAX_Compat\data\ERDL.paa";
				};
				class Grey
				{
					label="Grey";
					image="TSB_ACEAX_Compat\data\Grey2.paa";
				};
				class Port_DPM
				{
					label="Portugese DPM";
					image="TSB_ACEAX_Compat\data\Port_DPM.paa";
				};
				class Tak_Liz
				{
					label="Takistan Lizard";
					image="TSB_ACEAX_Compat\data\Takistan_Lizard.paa";
				};
				class Tan
				{
					label="Tan";
				};
				class Temp_Woodland
				{
					label="Temperate Woodland";
					image="TSB_ACEAX_Compat\data\Temp_Woodland.paa";
				};
				class Tiger
				{
					label="Tiger Stripe";
					image="TSB_ACEAX_Compat\data\Tiger.paa";
				};
				class Urban_Tiger
				{
					label="Urban Tiger Stripe";
					image="TSB_ACEAX_Compat\data\Urban_Tiger.paa";
				};
				class Woodland
				{
					label="Woodland";
					image="TSB_ACEAX_Compat\data\Woodland.paa";
				};
				class Woodland_Special
				{
					label="Woodland Special";
					image="TSB_ACEAX_Compat\data\Woodland.paa";
				};
				class Woodland_USMC
				{
					label="Woodland USMC";
					image="TSB_ACEAX_Compat\data\Woodland.paa";
				};
				class OD
				{
					label="Olive Drab";
				};
				class Urban
				{
					label="Urban";
					image="TSB_ACEAX_Compat\data\Urban.paa";
				};
			};
			class Blouse
			{
				values[]=
				{
					"Normal",
					"Tucked_In",
					"T_Shirt",
					"M56"
				};
				class Normal
				{
					label="Normal";
					changeingame=0;
				};
				class Tucked_In
				{
					label="TuckedIn";
					changeingame=0;
				};
				class T_Shirt
				{
					label="T-Shirt";
					changeingame=0;
				};
				class M56
				{
					label="M56 Jacket";
					changeingame=0;
				};
			};
			class Sleeves
			{
				values[]=
				{
					"Full",
					"Rolled_High",
					"Rolled_Low"
				};
				class Full
				{
					label="Full";
					changeingame=1;
				};
				class Rolled_High
				{
					label="Rolled High";
					actionLabel="Roll sleeves High";
					icon="\z\aceax\addons\gearinfo\data\ui\sleeves_quarter.paa";
					changeingame=1;
				};
				class Rolled_Low
				{
					label="Rolled Low";
					actionLabel="Roll sleeves Low";
					icon="\z\aceax\addons\gearinfo\data\ui\sleeves_half.paa";
					changeingame=1;
				};
			};
		};
		class DHI_Headwrap
		{
			label="Headwrap [DHI]";
			author="Killa567";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[]=
				{
					"Black",
					"Dark_OD",
					"DCU",
					"Tan",
					"Tiger",
					"Desert",
					"OD"
				};
				class Black
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa";
				};
				class Dark_OD
				{
					label="Dark Green";
					image="TSB_ACEAX_Compat\data\Dark_OD.paa";
				};
				class DCU
				{
					label="DCU";
					image="TSB_ACEAX_Compat\data\DCU.paa";
				};
				class Desert
				{
					label="Desert";
					image="TSB_ACEAX_Compat\data\Desert.paa";
				};
				class Tiger
				{
					label="Tiger Stripe";
					image="TSB_ACEAX_Compat\data\Tiger.paa";
				};
				class OD
				{
					label="Olive Drab";
				};
				class Tan
				{
					label="Tan";
				};
			};
		};
		class DHI_8Point
		{
			label="8 Point Cap [DHI]";
			author="Killa567";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[]=
				{
					"Black",
					"blue",
					"DCU",
					"DCU_Marines",
					"Desert",
					"Desert_Marines",
					"ERDL",
					"Grey",
					"Port_DPM",
					"Tak_Liz",
					"Tan",
					"Tiger",
					"Urban_Tiger",
					"Woodland",
					"Woodland_USMC",
					"OD",
					"Urban"
				};
				class Black
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa";
				};
				class blue
				{
					label="Blue";
					image="TSB_ACEAX_Compat\data\Blue.paa";
				};
				class DCU
				{
					label="DCU";
					image="TSB_ACEAX_Compat\data\DCU.paa";
				};
				class DCU_Marines
				{
					label="DCU USMC";
					image="TSB_ACEAX_Compat\data\DCU.paa";
				};
				class Desert
				{
					label="Desert";
					image="TSB_ACEAX_Compat\data\Desert.paa";
				};
				class Desert_Marines
				{
					label="Desert USMC";
					image="TSB_ACEAX_Compat\data\Desert.paa";
				};
				class ERDL
				{
					label="ERDL";
					image="TSB_ACEAX_Compat\data\ERDL.paa";
				};
				class Grey
				{
					label="Grey";
					image="TSB_ACEAX_Compat\data\Grey2.paa";
				};
				class Port_DPM
				{
					label="Portugese DPM";
					image="TSB_ACEAX_Compat\data\Port_DPM.paa";
				};
				class Tak_Liz
				{
					label="Takistan Lizard";
					image="TSB_ACEAX_Compat\data\Takistan_Lizard.paa";
				};
				class Tan
				{
					label="Tan";
				};
				class Tiger
				{
					label="Tiger Stripe";
					image="TSB_ACEAX_Compat\data\Tiger.paa";
				};
				class Urban_Tiger
				{
					label="Urban Tiger Stripe";
					image="TSB_ACEAX_Compat\data\Urban_Tiger.paa";
				};
				class Woodland
				{
					label="Woodland";
					image="TSB_ACEAX_Compat\data\Woodland.paa";
				};
				class Woodland_USMC
				{
					label="Woodland USMC";
					image="TSB_ACEAX_Compat\data\Woodland.paa";
				};
				class OD
				{
					label="Olive Drab";
				};
				class Urban
				{
					label="Urban";
					image="TSB_ACEAX_Compat\data\Urban.paa";
				};
			};
		};
		class DHI_cap
		{
			label="Cap [DHI]";
			author="Killa567";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[]=
				{
					"Black",
					"blue",
					"DCU",
					"Desert",
					"ERDL",
					"Grey",
					"Port_DPM",
					"Tak_Liz",
					"Tan",
					"Tiger",
					"Urban_Tiger",
					"Woodland",
					"OD",
					"Urban"
				};
				class Black
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa";
				};
				class blue
				{
					label="Blue";
					image="TSB_ACEAX_Compat\data\Blue.paa";
				};
				class DCU
				{
					label="DCU";
					image="TSB_ACEAX_Compat\data\DCU.paa";
				};
				class Desert
				{
					label="Desert";
					image="TSB_ACEAX_Compat\data\Desert.paa";
				};
				class ERDL
				{
					label="ERDL";
					image="TSB_ACEAX_Compat\data\ERDL.paa";
				};
				class Grey
				{
					label="Grey";
					image="TSB_ACEAX_Compat\data\Grey2.paa";
				};
				class Port_DPM
				{
					label="Portugese DPM";
					image="TSB_ACEAX_Compat\data\Port_DPM.paa";
				};
				class Tak_Liz
				{
					label="Takistan Lizard";
					image="TSB_ACEAX_Compat\data\Takistan_Lizard.paa";
				};
				class Tan
				{
					label="Tan";
				};
				class Tiger
				{
					label="Tiger Stripe";
					image="TSB_ACEAX_Compat\data\Tiger.paa";
				};
				class Urban_Tiger
				{
					label="Urban Tiger Stripe";
					image="TSB_ACEAX_Compat\data\Urban_Tiger.paa";
				};
				class Woodland
				{
					label="Woodland";
					image="TSB_ACEAX_Compat\data\Woodland.paa";
				};
				class OD
				{
					label="Olive Drab";
				};
				class Urban
				{
					label="Urban";
					image="TSB_ACEAX_Compat\data\Urban.paa";
				};
			};
		};
		class DHI_boonie
		{
			label="Boonie [DHI]";
			author="Killa567";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[]=
				{
					"Black",
					"blue",
					"DCU",
					"Desert",
					"ERDL",
					"Grey",
					"Port_DPM",
					"Tak_Liz",
					"Tan",
					"Tiger",
					"Urban_Tiger",
					"Woodland",
					"OD",
					"Urban"
				};
				class Black
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa";
				};
				class blue
				{
					label="Blue";
					image="TSB_ACEAX_Compat\data\Blue.paa";
				};
				class DCU
				{
					label="DCU";
					image="TSB_ACEAX_Compat\data\DCU.paa";
				};
				class Desert
				{
					label="Desert";
					image="TSB_ACEAX_Compat\data\Desert.paa";
				};
				class ERDL
				{
					label="ERDL";
					image="TSB_ACEAX_Compat\data\ERDL.paa";
				};
				class Grey
				{
					label="Grey";
					image="TSB_ACEAX_Compat\data\Grey2.paa";
				};
				class Port_DPM
				{
					label="Portugese DPM";
					image="TSB_ACEAX_Compat\data\Port_DPM.paa";
				};
				class Tak_Liz
				{
					label="Takistan Lizard";
					image="TSB_ACEAX_Compat\data\Takistan_Lizard.paa";
				};
				class Tan
				{
					label="Tan";
				};
				class Tiger
				{
					label="Tiger Stripe";
					image="TSB_ACEAX_Compat\data\Tiger.paa";
				};
				class Urban_Tiger
				{
					label="Urban Tiger Stripe";
					image="TSB_ACEAX_Compat\data\Urban_Tiger.paa";
				};
				class Woodland
				{
					label="Woodland";
					image="TSB_ACEAX_Compat\data\Woodland.paa";
				};
				class OD
				{
					label="Olive Drab";
				};
				class Urban
				{
					label="Urban";
					image="TSB_ACEAX_Compat\data\Urban.paa";
				};
			};
		};
		class DHI_M1
		{
			label="M1 Helmet [DHI]";
			author="Killa567";
			options[]=
			{
				"camo",
				"Chin_Strap"
			};
			class camo
			{
				values[]=
				{
					"Mitchel",
					"Desert",
					"ERDL",
					"Woodland"
				};
				class Mitchel
				{
					label="Mitchel";
					image="TSB_ACEAX_Compat\data\Mitchel.paa";
				};
				class Desert
				{
					label="Desert";
					image="TSB_ACEAX_Compat\data\Desert.paa";
				};
				class ERDL
				{
					label="ERDL";
					image="TSB_ACEAX_Compat\data\ERDL.paa";
				};
				class Woodland
				{
					label="Woodland";
					image="TSB_ACEAX_Compat\data\Woodland.paa";
				};
			};
			class Chin_Strap
			{
				values[]=
				{
					"On",
					"Off"
				};
				class On
				{
					label="On";
					changeingame=1;
				};
				class Off
				{
					label="Off";
					changeingame=1;
				};
			};
		};
		class DHI_PASGT
		{
			label="PASGT Helmet [DHI]";
			author="Killa567";
			options[]=
			{
				"camo",
				"Accessories"
			};
			class camo
			{
				values[]=
				{
					"Black",
					"blue",
					"DCU",
					"DCU_Marines",
					"Desert",
					"Desert_Marines",
					"Grey",
					"Tan",
					"Scrim",
					"Woodland",
					"UN",
					"Woodland_USMC",
					"OD",
					"Urban"
				};
				class Black
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa";
				};
				class blue
				{
					label="Blue";
					image="TSB_ACEAX_Compat\data\Blue.paa";
				};
				class DCU
				{
					label="DCU";
					image="TSB_ACEAX_Compat\data\DCU.paa";
				};
				class DCU_Marines
				{
					label="DCU USMC";
					image="TSB_ACEAX_Compat\data\DCU.paa";
				};
				class Desert
				{
					label="Desert";
					image="TSB_ACEAX_Compat\data\Desert.paa";
				};
				class Desert_Marines
				{
					label="Desert USMC";
					image="TSB_ACEAX_Compat\data\Desert.paa";
				};
				class Grey
				{
					label="Grey";
					image="TSB_ACEAX_Compat\data\Grey2.paa";
				};
				class Tan
				{
					label="Tan";
				};
				class Woodland
				{
					label="Woodland";
					image="TSB_ACEAX_Compat\data\Woodland.paa";
				};
				class Woodland_USMC
				{
					label="Woodland USMC";
					image="TSB_ACEAX_Compat\data\Woodland.paa";
				};
				class OD
				{
					label="Olive Drab";
				};
				class Urban
				{
					label="Urban";
					image="TSB_ACEAX_Compat\data\Urban.paa";
				};
				class UN
				{
					label="UN";
					image="TSB_ACEAX_Compat\data\UN.paa";
				};
				class Scrim
				{
					label="Scrim";
					image="TSB_ACEAX_Compat\data\Woodland.paa";
				};
			};
			class Accessories
			{
				values[]=
				{
					"Cateyes",
					"SDW",
					"Rhino",
					"Strap"
				};
				class Cateyes
				{
					label="Cateyes";
					changeingame=1;
				};
				class SDW
				{
					label="SDW";
					changeingame=1;
				};
				class Rhino
				{
					label="Rhino";
					changeingame=1;
				};
				class Strap
				{
					label="Strap";
					changeingame=1;
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class usm_bdu_wdl
		{
			model="DHI_BDU";
			camo="Woodland";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_blu
		{
			model="DHI_BDU";
			camo="blue";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_dcu2
		{
			model="DHI_BDU";
			camo="DCU_Special";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_des
		{
			model="DHI_BDU";
			camo="Desert";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_des3
		{
			model="DHI_BDU";
			camo="Desert_Special_2";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_des2
		{
			model="DHI_BDU";
			camo="Desert_Special";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_des_m
		{
			model="DHI_BDU";
			camo="Desert_Marines";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_ERDL
		{
			model="DHI_BDU";
			camo="ERDL";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_gry
		{
			model="DHI_BDU";
			camo="Grey";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_portliz
		{
			model="DHI_BDU";
			camo="Port_DPM";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_taki
		{
			model="DHI_BDU";
			camo="Tak_Liz";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_tan
		{
			model="DHI_BDU";
			camo="Tan";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_wwdl
		{
			model="DHI_BDU";
			camo="Temp_Woodland";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_tgrstp
		{
			model="DHI_BDU";
			camo="Tiger";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_ubntgrstp
		{
			model="DHI_BDU";
			camo="Urban_Tiger";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_wdl2
		{
			model="DHI_BDU";
			camo="Woodland_Special";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_wdl_m
		{
			model="DHI_BDU";
			camo="Woodland_USMC";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_blk
		{
			model="DHI_BDU";
			camo="Black";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_dcu
		{
			model="DHI_BDU";
			camo="DCU";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_dcu_m
		{
			model="DHI_BDU";
			camo="DCU_Marines";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_odg
		{
			model="DHI_BDU";
			camo="OD";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_ubn
		{
			model="DHI_BDU";
			camo="Urban";
			Blouse="Normal";
			Sleeves="Full";
		};
		class usm_bdu_btisrl_wdl
		{
			model="DHI_BDU";
			camo="Woodland";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_blk
		{
			model="DHI_BDU";
			camo="Black";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_blu
		{
			model="DHI_BDU";
			camo="blue";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_dcu
		{
			model="DHI_BDU";
			camo="DCU";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_dcu2
		{
			model="DHI_BDU";
			camo="DCU_Special";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_dcu_m
		{
			model="DHI_BDU";
			camo="DCU_Marines";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_des
		{
			model="DHI_BDU";
			camo="Desert";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_des3
		{
			model="DHI_BDU";
			camo="Desert_Special_2";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_des2
		{
			model="DHI_BDU";
			camo="Desert_Special";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_des_m
		{
			model="DHI_BDU";
			camo="Desert_Marines";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_ERDL
		{
			model="DHI_BDU";
			camo="ERDL";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_gry
		{
			model="DHI_BDU";
			camo="Grey";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_odg
		{
			model="DHI_BDU";
			camo="OD";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_portliz
		{
			model="DHI_BDU";
			camo="Port_DPM";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_taki
		{
			model="DHI_BDU";
			camo="Tak_Liz";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_tan
		{
			model="DHI_BDU";
			camo="Tan";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_tgrstp
		{
			model="DHI_BDU";
			camo="Tiger";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_ubn
		{
			model="DHI_BDU";
			camo="Urban";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_ubntgrstp
		{
			model="DHI_BDU";
			camo="Urban_Tiger";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_wdl2
		{
			model="DHI_BDU";
			camo="Woodland_Special";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_btisrl_wdl_m
		{
			model="DHI_BDU";
			camo="Woodland_USMC";
			Blouse="Tucked_In";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bti_wdl
		{
			model="DHI_BDU";
			camo="Woodland";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_blk
		{
			model="DHI_BDU";
			camo="Black";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_blu
		{
			model="DHI_BDU";
			camo="blue";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_dcu
		{
			model="DHI_BDU";
			camo="DCU";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_dcu2
		{
			model="DHI_BDU";
			camo="DCU_Special";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_dcu_m
		{
			model="DHI_BDU";
			camo="DCU_Marines";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_des
		{
			model="DHI_BDU";
			camo="Desert";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_des3
		{
			model="DHI_BDU";
			camo="Desert_Special_2";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_des2
		{
			model="DHI_BDU";
			camo="Desert_Special";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_des_m
		{
			model="DHI_BDU";
			camo="Desert_Marines";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_ERDL
		{
			model="DHI_BDU";
			camo="ERDL";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_gry
		{
			model="DHI_BDU";
			camo="Grey";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_odg
		{
			model="DHI_BDU";
			camo="OD";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_portliz
		{
			model="DHI_BDU";
			camo="Port_DPM";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_taki
		{
			model="DHI_BDU";
			camo="Tak_Liz";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_tan
		{
			model="DHI_BDU";
			camo="Tan";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_tgrstp
		{
			model="DHI_BDU";
			camo="Tiger";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_ubn
		{
			model="DHI_BDU";
			camo="Urban";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_ubntgrstp
		{
			model="DHI_BDU";
			camo="Urban_Tiger";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_wdl2
		{
			model="DHI_BDU";
			camo="Woodland_Special";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_bti_wdl_m
		{
			model="DHI_BDU";
			camo="Woodland_USMC";
			Blouse="Tucked_In";
			Sleeves="Full";
		};
		class usm_bdu_srh_wdl
		{
			model="DHI_BDU";
			camo="Woodland";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_blk
		{
			model="DHI_BDU";
			camo="Black";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_blu
		{
			model="DHI_BDU";
			camo="blue";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_dcu
		{
			model="DHI_BDU";
			camo="DCU";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_dcu2
		{
			model="DHI_BDU";
			camo="DCU_Special";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_dcu_m
		{
			model="DHI_BDU";
			camo="DCU_Marines";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_des
		{
			model="DHI_BDU";
			camo="Desert";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_des3
		{
			model="DHI_BDU";
			camo="Desert_Special_2";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_des2
		{
			model="DHI_BDU";
			camo="Desert_Special";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_des_m
		{
			model="DHI_BDU";
			camo="Desert_Marines";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_ERDL
		{
			model="DHI_BDU";
			camo="ERDL";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_gry
		{
			model="DHI_BDU";
			camo="Grey";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_odg
		{
			model="DHI_BDU";
			camo="OD";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_portliz
		{
			model="DHI_BDU";
			camo="Port_DPM";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_taki
		{
			model="DHI_BDU";
			camo="Tak_Liz";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_tan
		{
			model="DHI_BDU";
			camo="Tan";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_tgrstp
		{
			model="DHI_BDU";
			camo="Tiger";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_ubn
		{
			model="DHI_BDU";
			camo="Urban";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_ubntgrstp
		{
			model="DHI_BDU";
			camo="Urban_Tiger";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_wdl2
		{
			model="DHI_BDU";
			camo="Woodland_Special";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srh_wdl_m
		{
			model="DHI_BDU";
			camo="Woodland_USMC";
			Blouse="Normal";
			Sleeves="Rolled_High";
		};
		class usm_bdu_srl_wdl
		{
			model="DHI_BDU";
			camo="Woodland";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_blk
		{
			model="DHI_BDU";
			camo="Black";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_blu
		{
			model="DHI_BDU";
			camo="blue";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_dcu
		{
			model="DHI_BDU";
			camo="DCU";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_dcu2
		{
			model="DHI_BDU";
			camo="DCU_Special";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_dcu_m
		{
			model="DHI_BDU";
			camo="DCU_Marines";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_des
		{
			model="DHI_BDU";
			camo="Desert";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_des3
		{
			model="DHI_BDU";
			camo="Desert_Special_2";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_des2
		{
			model="DHI_BDU";
			camo="Desert_Special";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_des_m
		{
			model="DHI_BDU";
			camo="Desert_Marines";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_ERDL
		{
			model="DHI_BDU";
			camo="ERDL";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_gry
		{
			model="DHI_BDU";
			camo="Grey";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_odg
		{
			model="DHI_BDU";
			camo="OD";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_portliz
		{
			model="DHI_BDU";
			camo="Port_DPM";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_taki
		{
			model="DHI_BDU";
			camo="Tak_Liz";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_tan
		{
			model="DHI_BDU";
			camo="Tan";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_tgrstp
		{
			model="DHI_BDU";
			camo="Tiger";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_ubn
		{
			model="DHI_BDU";
			camo="Urban";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_ubntgrstp
		{
			model="DHI_BDU";
			camo="Urban_Tiger";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_wdl2
		{
			model="DHI_BDU";
			camo="Woodland_Special";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_srl_wdl_m
		{
			model="DHI_BDU";
			camo="Woodland_USMC";
			Blouse="Normal";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_wdl
		{
			model="DHI_BDU";
			camo="Woodland";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_blk
		{
			model="DHI_BDU";
			camo="Black";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_blu
		{
			model="DHI_BDU";
			camo="blue";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_dcu
		{
			model="DHI_BDU";
			camo="DCU";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_dcu2
		{
			model="DHI_BDU";
			camo="DCU_Special";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_dcu_m
		{
			model="DHI_BDU";
			camo="DCU_Marines";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_des
		{
			model="DHI_BDU";
			camo="Desert";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_des3
		{
			model="DHI_BDU";
			camo="Desert_Special_2";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_des2
		{
			model="DHI_BDU";
			camo="Desert_Special";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_des_m
		{
			model="DHI_BDU";
			camo="Desert_Marines";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_ERDL
		{
			model="DHI_BDU";
			camo="ERDL";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_gry
		{
			model="DHI_BDU";
			camo="Grey";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_odg
		{
			model="DHI_BDU";
			camo="OD";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_portliz
		{
			model="DHI_BDU";
			camo="Port_DPM";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_taki
		{
			model="DHI_BDU";
			camo="Tak_Liz";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_tan
		{
			model="DHI_BDU";
			camo="Tan";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_tgrstp
		{
			model="DHI_BDU";
			camo="Tiger";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_ubn
		{
			model="DHI_BDU";
			camo="Urban";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_ubntgrstp
		{
			model="DHI_BDU";
			camo="Urban_Tiger";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_wdl2
		{
			model="DHI_BDU";
			camo="Woodland_Special";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdu_bnu_wdl_m
		{
			model="DHI_BDU";
			camo="Woodland_USMC";
			Blouse="T_Shirt";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_wdl
		{
			model="DHI_BDU";
			camo="Woodland";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_blk
		{
			model="DHI_BDU";
			camo="Black";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_blu
		{
			model="DHI_BDU";
			camo="blue";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_dcu
		{
			model="DHI_BDU";
			camo="DCU";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_dcu2
		{
			model="DHI_BDU";
			camo="DCU_Special";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_dcu_m
		{
			model="DHI_BDU";
			camo="DCU_Marines";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_des
		{
			model="DHI_BDU";
			camo="Desert";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_des3
		{
			model="DHI_BDU";
			camo="Desert_Special_2";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_des2
		{
			model="DHI_BDU";
			camo="Desert_Special";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_des_m
		{
			model="DHI_BDU";
			camo="Desert_Marines";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_ERDL
		{
			model="DHI_BDU";
			camo="ERDL";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_gry
		{
			model="DHI_BDU";
			camo="Grey";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_odg
		{
			model="DHI_BDU";
			camo="OD";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_portliz
		{
			model="DHI_BDU";
			camo="Port_DPM";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_taki
		{
			model="DHI_BDU";
			camo="Tak_Liz";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_tan
		{
			model="DHI_BDU";
			camo="Tan";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_tgrstp
		{
			model="DHI_BDU";
			camo="Tiger";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_ubn
		{
			model="DHI_BDU";
			camo="Urban";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_ubntgrstp
		{
			model="DHI_BDU";
			camo="Urban_Tiger";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_wdl2
		{
			model="DHI_BDU";
			camo="Woodland_Special";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_bdum65_wdl_m
		{
			model="DHI_BDU";
			camo="Woodland_USMC";
			Blouse="M56";
			Sleeves="Rolled_Low";
		};
		class usm_headwrap_odg1
		{
			model="DHI_Headwrap";
			camo="OD";
		};
		class usm_headwrap_blk
		{
			model="DHI_Headwrap";
			camo="Black";
		};
		class usm_headwrap_odg2
		{
			model="DHI_Headwrap";
			camo="Dark_OD";
		};
		class usm_headwrap_dcu
		{
			model="DHI_Headwrap";
			camo="DCU";
		};
		class usm_headwrap_tan
		{
			model="DHI_Headwrap";
			camo="Tan";
		};
		class usm_headwrap_tgrstp
		{
			model="DHI_Headwrap";
			camo="Tiger";
		};
		class usm_headwrap_des
		{
			model="DHI_Headwrap";
			camo="Desert";
		};
		class usm_bdu_8point_wdl
		{
			model="DHI_8Point";
			camo="Woodland";
		};
		class usm_bdu_8point_wdl_m
		{
			model="DHI_8Point";
			camo="Woodland_USMC";
		};
		class usm_bdu_8point_dcu
		{
			model="DHI_8Point";
			camo="DCU";
		};
		class usm_bdu_8point_dcu_m
		{
			model="DHI_8Point";
			camo="DCU_Marines";
		};
		class usm_bdu_8point_des
		{
			model="DHI_8Point";
			camo="Desert";
		};
		class usm_bdu_8point_des_m
		{
			model="DHI_8Point";
			camo="Desert_Marines";
		};
		class usm_bdu_8point_blk
		{
			model="DHI_8Point";
			camo="Black";
		};
		class usm_bdu_8point_blu
		{
			model="DHI_8Point";
			camo="blue";
		};
		class usm_bdu_8point_gry
		{
			model="DHI_8Point";
			camo="Grey";
		};
		class usm_bdu_8point_tan
		{
			model="DHI_8Point";
			camo="Tan";
		};
		class usm_bdu_8point_odg
		{
			model="DHI_8Point";
			camo="OD";
		};
		class usm_bdu_8point_ubn
		{
			model="DHI_8Point";
			camo="Urban";
		};
		class usm_bdu_8point_ubntgrstp
		{
			model="DHI_8Point";
			camo="Urban_Tiger";
		};
		class usm_bdu_8point_tgrstp
		{
			model="DHI_8Point";
			camo="Tiger";
		};
		class usm_bdu_8point_portliz
		{
			model="DHI_8Point";
			camo="Port_DPM";
		};
		class usm_bdu_8point_erdl
		{
			model="DHI_8Point";
			camo="ERDL";
		};
		class usm_bdu_8point_taki
		{
			model="DHI_8Point";
			camo="Tak_Liz";
		};
		class usm_bdu_cap_wdl
		{
			model="DHI_cap";
			camo="Woodland";
		};
		class usm_bdu_cap_dcu
		{
			model="DHI_cap";
			camo="DCU";
		};
		class usm_bdu_cap_des
		{
			model="DHI_cap";
			camo="Desert";
		};
		class usm_bdu_cap_blk
		{
			model="DHI_cap";
			camo="Black";
		};
		class usm_bdu_cap_blu
		{
			model="DHI_cap";
			camo="blue";
		};
		class usm_bdu_cap_gry
		{
			model="DHI_cap";
			camo="Grey";
		};
		class usm_bdu_cap_tan
		{
			model="DHI_cap";
			camo="Tan";
		};
		class usm_bdu_cap_odg
		{
			model="DHI_cap";
			camo="OD";
		};
		class usm_bdu_cap_ubn
		{
			model="DHI_cap";
			camo="Urban";
		};
		class usm_bdu_cap_ubntgrstp
		{
			model="DHI_cap";
			camo="Urban_Tiger";
		};
		class usm_bdu_cap_tgrstp
		{
			model="DHI_cap";
			camo="Tiger";
		};
		class usm_bdu_cap_portliz
		{
			model="DHI_cap";
			camo="Port_DPM";
		};
		class usm_bdu_cap_erdl
		{
			model="DHI_cap";
			camo="ERDL";
		};
		class usm_bdu_cap_taki
		{
			model="DHI_cap";
			camo="Tak_Liz";
		};
		class usm_bdu_boonie_wdl
		{
			model="DHI_boonie";
			camo="Woodland";
		};
		class usm_bdu_boonie_dcu
		{
			model="DHI_boonie";
			camo="DCU";
		};
		class usm_bdu_boonie_des
		{
			model="DHI_boonie";
			camo="Desert";
		};
		class usm_bdu_boonie_blk
		{
			model="DHI_boonie";
			camo="Black";
		};
		class usm_bdu_boonie_blu
		{
			model="DHI_boonie";
			camo="blue";
		};
		class usm_bdu_boonie_gry
		{
			model="DHI_boonie";
			camo="Grey";
		};
		class usm_bdu_boonie_tan
		{
			model="DHI_boonie";
			camo="Tan";
		};
		class usm_bdu_boonie_odg
		{
			model="DHI_boonie";
			camo="OD";
		};
		class usm_bdu_boonie_ubn
		{
			model="DHI_boonie";
			camo="Urban";
		};
		class usm_bdu_boonie_ubntgrstp
		{
			model="DHI_boonie";
			camo="Urban_Tiger";
		};
		class usm_bdu_boonie_tgrstp
		{
			model="DHI_boonie";
			camo="Tiger";
		};
		class usm_bdu_boonie_portliz
		{
			model="DHI_boonie";
			camo="Port_DPM";
		};
		class usm_bdu_boonie_erdl
		{
			model="DHI_boonie";
			camo="ERDL";
		};
		class usm_bdu_boonie_taki
		{
			model="DHI_boonie";
			camo="Tak_Liz";
		};
		class usm_helmet_m1_wdl
		{
			model="DHI_M1";
			camo="Woodland";
			Chin_Strap="On";
		};
		class usm_helmet_m1_mit
		{
			model="DHI_M1";
			camo="Mitchel";
			Chin_Strap="On";
		};
		class usm_helmet_m1_ERDL
		{
			model="DHI_M1";
			camo="ERDL";
			Chin_Strap="On";
		};
		class usm_helmet_m1_des
		{
			model="DHI_M1";
			camo="Desert";
			Chin_Strap="On";
		};
		class usm_helmet_m1v2_wdl
		{
			model="DHI_M1";
			camo="Woodland";
			Chin_Strap="Off";
		};
		class usm_helmet_m1v2_mit
		{
			model="DHI_M1";
			camo="Mitchel";
			Chin_Strap="Off";
		};
		class usm_helmet_m1v2_ERDL
		{
			model="DHI_M1";
			camo="ERDL";
			Chin_Strap="Off";
		};
		class usm_helmet_m1v2_des
		{
			model="DHI_M1";
			camo="Desert";
			Chin_Strap="Off";
		};
		class usm_helmet_pasgt_ce_wdl
		{
			model="DHI_PASGT";
			camo="Woodland";
			Accessories="Cateyes";
		};
		class usm_helmet_pasgt_ceswd_wdl
		{
			model="DHI_PASGT";
			camo="Woodland";
			Accessories="SDW";
		};
		class usm_helmet_pasgt_rm_wdl
		{
			model="DHI_PASGT";
			camo="Woodland";
			Accessories="Rhino";
		};
		class usm_helmet_pasgt_rms_wdl
		{
			model="DHI_PASGT";
			camo="Woodland";
			Accessories="Strap";
		};
		class usm_helmet_pasgt_ce_blk
		{
			model="DHI_PASGT";
			camo="Black";
			Accessories="Cateyes";
		};
		class usm_helmet_pasgt_ceswd_blk
		{
			model="DHI_PASGT";
			camo="Black";
			Accessories="SDW";
		};
		class usm_helmet_pasgt_rm_blk
		{
			model="DHI_PASGT";
			camo="Black";
			Accessories="Rhino";
		};
		class usm_helmet_pasgt_rms_blk
		{
			model="DHI_PASGT";
			camo="Black";
			Accessories="Strap";
		};
		class usm_helmet_pasgt_ce_blu
		{
			model="DHI_PASGT";
			camo="blue";
			Accessories="Cateyes";
		};
		class usm_helmet_pasgt_ceswd_blu
		{
			model="DHI_PASGT";
			camo="blue";
			Accessories="SDW";
		};
		class usm_helmet_pasgt_rm_blu
		{
			model="DHI_PASGT";
			camo="blue";
			Accessories="Rhino";
		};
		class usm_helmet_pasgt_rms_blu
		{
			model="DHI_PASGT";
			camo="blue";
			Accessories="Strap";
		};
		class usm_helmet_pasgt_ce_dcu
		{
			model="DHI_PASGT";
			camo="DCU";
			Accessories="Cateyes";
		};
		class usm_helmet_pasgt_ceswd_dcu
		{
			model="DHI_PASGT";
			camo="DCU";
			Accessories="SDW";
		};
		class usm_helmet_pasgt_rm_dcu
		{
			model="DHI_PASGT";
			camo="DCU";
			Accessories="Rhino";
		};
		class usm_helmet_pasgt_rms_dcu
		{
			model="DHI_PASGT";
			camo="DCU";
			Accessories="Strap";
		};
		class usm_helmet_pasgt_ce_des
		{
			model="DHI_PASGT";
			camo="Desert";
			Accessories="Cateyes";
		};
		class usm_helmet_pasgt_ceswd_des
		{
			model="DHI_PASGT";
			camo="Desert";
			Accessories="SDW";
		};
		class usm_helmet_pasgt_rm_des
		{
			model="DHI_PASGT";
			camo="Desert";
			Accessories="Rhino";
		};
		class usm_helmet_pasgt_rms_des
		{
			model="DHI_PASGT";
			camo="Desert";
			Accessories="Strap";
		};
		class usm_helmet_pasgt_ce_gry
		{
			model="DHI_PASGT";
			camo="Grey";
			Accessories="Cateyes";
		};
		class usm_helmet_pasgt_ceswd_gry
		{
			model="DHI_PASGT";
			camo="Grey";
			Accessories="SDW";
		};
		class usm_helmet_pasgt_rm_gry
		{
			model="DHI_PASGT";
			camo="Grey";
			Accessories="Rhino";
		};
		class usm_helmet_pasgt_rms_gry
		{
			model="DHI_PASGT";
			camo="Grey";
			Accessories="Strap";
		};
		class usm_helmet_pasgt_ce_odg
		{
			model="DHI_PASGT";
			camo="OD";
			Accessories="Cateyes";
		};
		class usm_helmet_pasgt_ceswd_odg
		{
			model="DHI_PASGT";
			camo="OD";
			Accessories="SDW";
		};
		class usm_helmet_pasgt_rm_odg
		{
			model="DHI_PASGT";
			camo="OD";
			Accessories="Rhino";
		};
		class usm_helmet_pasgt_rms_odg
		{
			model="DHI_PASGT";
			camo="OD";
			Accessories="Strap";
		};
		class usm_helmet_pasgt_ce_tan
		{
			model="DHI_PASGT";
			camo="Tan";
			Accessories="Cateyes";
		};
		class usm_helmet_pasgt_ceswd_tan
		{
			model="DHI_PASGT";
			camo="Tan";
			Accessories="SDW";
		};
		class usm_helmet_pasgt_rm_tan
		{
			model="DHI_PASGT";
			camo="Tan";
			Accessories="Rhino";
		};
		class usm_helmet_pasgt_rms_tan
		{
			model="DHI_PASGT";
			camo="Tan";
			Accessories="Strap";
		};
		class usm_helmet_pasgt_ce_ubn
		{
			model="DHI_PASGT";
			camo="Urban";
			Accessories="Cateyes";
		};
		class usm_helmet_pasgt_ceswd_ubn
		{
			model="DHI_PASGT";
			camo="Urban";
			Accessories="SDW";
		};
		class usm_helmet_pasgt_rm_ubn
		{
			model="DHI_PASGT";
			camo="Urban";
			Accessories="Rhino";
		};
		class usm_helmet_pasgt_rms_ubn
		{
			model="DHI_PASGT";
			camo="Urban";
			Accessories="Strap";
		};
		class usm_helmet_pasgt_m_ce_dcu
		{
			model="DHI_PASGT";
			camo="DCU_Marines";
			Accessories="Cateyes";
		};
		class usm_helmet_pasgt_m_ceswd_dcu
		{
			model="DHI_PASGT";
			camo="DCU_Marines";
			Accessories="SDW";
		};
		class usm_helmet_pasgt_m_rm_dcu
		{
			model="DHI_PASGT";
			camo="DCU_Marines";
			Accessories="Rhino";
		};
		class usm_helmet_pasgt_m_rms_dcu
		{
			model="DHI_PASGT";
			camo="DCU_Marines";
			Accessories="Strap";
		};
		class usm_helmet_pasgt_m_ce_des
		{
			model="DHI_PASGT";
			camo="Desert_Marines";
			Accessories="Cateyes";
		};
		class usm_helmet_pasgt_m_ceswd_des
		{
			model="DHI_PASGT";
			camo="Desert_Marines";
			Accessories="SDW";
		};
		class usm_helmet_pasgt_m_rm_des
		{
			model="DHI_PASGT";
			camo="Desert_Marines";
			Accessories="Rhino";
		};
		class usm_helmet_pasgt_m_rms_des
		{
			model="DHI_PASGT";
			camo="Desert_Marines";
			Accessories="Strap";
		};
		class usm_helmet_pasgt_m_ce_wdl
		{
			model="DHI_PASGT";
			camo="Woodland_USMC";
			Accessories="Cateyes";
		};
		class usm_helmet_pasgt_m_ceswd_wdl
		{
			model="DHI_PASGT";
			camo="Woodland_USMC";
			Accessories="SDW";
		};
		class usm_helmet_pasgt_m_rm_wdl
		{
			model="DHI_PASGT";
			camo="Woodland_USMC";
			Accessories="Rhino";
		};
		class usm_helmet_pasgt_m_rms_wdl
		{
			model="DHI_PASGT";
			camo="Woodland_USMC";
			Accessories="Strap";
		};
		class usm_helmet_pasgt_scrim_wdl
		{
			model="DHI_PASGT";
			camo="Scrim";
			Accessories="Cateyes";
		};
		class usm_helmet_pasgt_unb
		{
			model="DHI_PASGT";
			camo="UN";
			Accessories="Cateyes";
		};
	};
};
