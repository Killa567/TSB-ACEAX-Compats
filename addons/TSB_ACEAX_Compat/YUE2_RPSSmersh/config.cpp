class CfgPatches
{
	class TSB_RPS_Smersh_ACEAX_Compat
	{
		name="TSB_ACEAX_Compat_Smersh";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"aceax_gearinfo",
			"YuE_RPS_Smersh"
		};
		author="SGTdanny";
		version="0.1.0.0";
		versionStr="0.1.0.0";
		versionAr[]={0,1,0,0};
		skipWhenMissingDependencies = 1;
	};
};
class XtdGearModels
{
	class cfgWeapons
	{
		class Vest_Smersh
		{
			label="Smersh";
			author="SGTdanny";
			options[]=
			{
				"Camo",
				"Variant",
				"VOG",
				"Bag"
			};
			class Camo
			{
				label="Camo";
				alwaySelectable=1;
				values[]=
				{
					"ATACS",
					"Black",
					"EMR",
					"Flora",
					"Green",
					"Khaki",
					"Olive"
				};
				class ATACS
				{
					label="A-TACS";
					image="TSB_ACEAX_Compat\data\ATACSFG.paa";
				};
				class Black
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa";
				};
				class EMR
				{
					label="EMR";
					image="TSB_ACEAX_Compat\data\EMRS.paa";
				};
				class Flora
				{
					label="Flora";
					image="TSB_ACEAX_Compat\data\Flora.paa";
				};
				class Green
				{
					label="Green";
					image="TSB_ACEAX_Compat\data\Olive_D.paa";
				};
				class Khaki
				{
					label="Khaki";
					image="TSB_ACEAX_Compat\data\Khaki.paa";
				};
				class Olive
				{
					label="Flora";
					image="TSB_ACEAX_Compat\data\Olive_S.paa";
				};
			};
			class Variant
			{
				label="Variant";
				alwaySelectable=1;
				values[]=
				{
					"AK",
					"PK",
					"SVD"
				};
				class AK
				{
					label="AK";
				};
				class PK
				{
					label="PK";
				};
				class SVD
				{
					label="SVD";
				};
			};
			class VOG
			{
				label="VOG";
				alwaySelectable=1;
				values[]=
				{
					"NoVOG",
					"Front",
					"Sides",
					"Rear"
				};
				class NoVOG
				{
					label="No Vog";
				};
				class Front
				{
					label="Front";
				};
				class Sides
				{
					label="Sides";
				};
				class Rear
				{
					label="Rear";
				};
			};
			class Bag
			{
				label="Bag";
				values[]=
				{
					"NoBag",
					"Top",
					"Bottom"
				};
				class NoBag
				{
					label="No Bag";
				};
				class Top
				{
					label="Top";
				};
				class Bottom
				{
					label="Bottom";
				};
			};
		};
	};
	class cfgVehicles
	{
		class Vest_Smersh
		{
			label="Smersh";
			author="SGTdanny";
			options[]=
			{
				"Camo",
				"Variant",
				"VOG",
				"Bag"
			};
			class Camo
			{
				label="Camo";
				alwaySelectable=1;
				values[]=
				{
					"ATACS",
					"Black",
					"EMR",
					"Flora",
					"Green",
					"Khaki",
					"Olive"
				};
				class ATACS
				{
					label="A-TACS";
					image="TSB_ACEAX_Compat\data\ATACSFG.paa";
				};
				class Black
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa";
				};
				class EMR
				{
					label="EMR";
					image="TSB_ACEAX_Compat\data\EMRS.paa";
				};
				class Flora
				{
					label="Flora";
					image="TSB_ACEAX_Compat\data\Flora.paa";
				};
				class Green
				{
					label="Green";
					image="TSB_ACEAX_Compat\data\Olive_D.paa";
				};
				class Khaki
				{
					label="Khaki";
					image="TSB_ACEAX_Compat\data\Khaki.paa";
				};
				class Olive
				{
					label="Flora";
					image="TSB_ACEAX_Compat\data\Olive_S.paa";
				};
			};
			class Variant
			{
				label="Variant";
				alwaySelectable=1;
				values[]=
				{
					"AK",
					"PK",
					"SVD"
				};
				class AK
				{
					label="AK";
				};
				class PK
				{
					label="PK";
				};
				class SVD
				{
					label="SVD";
				};
			};
			class VOG
			{
				label="VOG";
				alwaySelectable=1;
				values[]=
				{
					"NoVOG",
					"Front",
					"Sides",
					"Rear"
				};
				class NoVOG
				{
					label="No Vog";
				};
				class Front
				{
					label="Front";
				};
				class Sides
				{
					label="Sides";
				};
				class Rear
				{
					label="Rear";
				};
			};
			class Bag
			{
				label="Bag";
				values[]=
				{
					"NoBag",
					"Top",
					"Bottom"
				};
				class NoBag
				{
					label="No Bag";
				};
				class Top
				{
					label="Top";
				};
				class Bottom
				{
					label="Bottom";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class cfgWeapons
	{
//////////////////////////////////////////////////////ATACS
		class RPS_Smersh12_a
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh13_a
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh4_a
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="Front";
			Bag="Bottom";
		};
		class RPS_Smersh2_a
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="Sides";
			Bag="Bottom";
		};
		class RPS_Smersh14_a
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh9_a
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="Front";
			Bag="Top";
		};
		class RPS_Smersh1_a
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="Rear";
			Bag="Top";
		};
		class RPS_Smersh7_a
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="Sides";
			Bag="Top";
		};
		class RPS_Smersh11_a
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="Rear";
			Bag="NoBag";
		};
		class RPS_Smersh10_a
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="Front";
			Bag="NoBag";
		};
		class RPS_Smersh8_a
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="Sides";
			Bag="NoBag";
		};
		class RPS_Smersh6_a
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="PK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh3_a
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="PK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh5_a
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="PK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh17_a
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="SVD";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh15_a
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh16_a
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Top";
		};
//////////////////////////////////////////////////////Black
		class RPS_Smersh12_b
		{
			model="Vest_Smersh";
			Camo="Black";
			Variant="AK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh13_b
		{
			model="Vest_Smersh";
			Camo="Black";
			Variant="AK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh4_b
		{
			model="Vest_Smersh";
			Camo="Black";
			Variant="AK";
			VOG="Front";
			Bag="Bottom";
		};
		class RPS_Smersh2_b
		{
			model="Vest_Smersh";
			Camo="Black";
			Variant="AK";
			VOG="Sides";
			Bag="Bottom";
		};
		class RPS_Smersh14_b
		{
			model="Vest_Smersh";
			Camo="Black";
			Variant="AK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh9_b
		{
			model="Vest_Smersh";
			Camo="Black";
			Variant="AK";
			VOG="Front";
			Bag="Top";
		};
		class RPS_Smersh1_b
		{
			model="Vest_Smersh";
			Camo="Black";
			Variant="AK";
			VOG="Rear";
			Bag="Top";
		};
		class RPS_Smersh7_b
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="AK";
			VOG="Sides";
			Bag="Top";
		};
		class RPS_Smersh11_b
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="AK";
			VOG="Rear";
			Bag="NoBag";
		};
		class RPS_Smersh10_b
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="AK";
			VOG="Front";
			Bag="NoBag";
		};
		class RPS_Smersh8_b
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="AK";
			VOG="Sides";
			Bag="NoBag";
		};
		class RPS_Smersh6_b
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="PK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh3_b
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="PK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh5_b
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="PK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh17_b
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="SVD";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh15_b
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh16_b
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Top";
		};
//////////////////////////////////////////////////////EMR
		class RPS_Smersh12_E
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh13_E
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh4_E
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="Front";
			Bag="Bottom";
		};
		class RPS_Smersh2_E
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="Sides";
			Bag="Bottom";
		};
		class RPS_Smersh14_E
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh9_E
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="Front";
			Bag="Top";
		};
		class RPS_Smersh1_E
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="Rear";
			Bag="Top";
		};
		class RPS_Smersh7_E
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="Sides";
			Bag="Top";
		};
		class RPS_Smersh11_E
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="Rear";
			Bag="NoBag";
		};
		class RPS_Smersh10_E
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="Front";
			Bag="NoBag";
		};
		class RPS_Smersh8_E
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="Sides";
			Bag="NoBag";
		};
		class RPS_Smersh6_E
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="PK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh3_E
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="PK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh5_E
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="PK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh17_E
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="SVD";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh15_E
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh16_E
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Top";
		};
//////////////////////////////////////////////////////Flora
		class RPS_Smersh12_f
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh13_f
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh4_f
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="Front";
			Bag="Bottom";
		};
		class RPS_Smersh2_f
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="Sides";
			Bag="Bottom";
		};
		class RPS_Smersh14_f
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh9_f
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="Front";
			Bag="Top";
		};
		class RPS_Smersh1_f
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="Rear";
			Bag="Top";
		};
		class RPS_Smersh7_f
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="Sides";
			Bag="Top";
		};
		class RPS_Smersh11_f
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="Rear";
			Bag="NoBag";
		};
		class RPS_Smersh10_f
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="Front";
			Bag="NoBag";
		};
		class RPS_Smersh8_f
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="Sides";
			Bag="NoBag";
		};
		class RPS_Smersh6_f
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="PK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh3_f
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="PK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh5_f
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="PK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh17_f
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="SVD";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh15_f
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh16_f
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Top";
		};
//////////////////////////////////////////////////////Green
		class RPS_Smersh12_d
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh13_d
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh4_d
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="Front";
			Bag="Bottom";
		};
		class RPS_Smersh2_d
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="Sides";
			Bag="Bottom";
		};
		class RPS_Smersh14_d
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh9_d
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="Front";
			Bag="Top";
		};
		class RPS_Smersh1_d
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="Rear";
			Bag="Top";
		};
		class RPS_Smersh7_d
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="Sides";
			Bag="Top";
		};
		class RPS_Smersh11_d
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="Rear";
			Bag="NoBag";
		};
		class RPS_Smersh10_d
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="Front";
			Bag="NoBag";
		};
		class RPS_Smersh8_d
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="Sides";
			Bag="NoBag";
		};
		class RPS_Smersh6_d
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="PK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh3_d
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="PK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh5_d
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="PK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh17_d
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="SVD";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh15_d
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh16_d
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Top";
		};
//////////////////////////////////////////////////////Khaki
		class RPS_Smersh12_sh
		{
			model="Vest_Smersh";
			Camo="Khaki";
			Variant="AK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh13_sh
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh4_sh
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="Front";
			Bag="Bottom";
		};
		class RPS_Smersh2_sh
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="Sides";
			Bag="Bottom";
		};
		class RPS_Smersh14_sh
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh9_sh
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="Front";
			Bag="Top";
		};
		class RPS_Smersh1_sh
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="Rear";
			Bag="Top";
		};
		class RPS_Smersh7_sh
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="Sides";
			Bag="Top";
		};
		class RPS_Smersh11_sh
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="Rear";
			Bag="NoBag";
		};
		class RPS_Smersh10_sh
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="Front";
			Bag="NoBag";
		};
		class RPS_Smersh8_sh
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="Sides";
			Bag="NoBag";
		};
		class RPS_Smersh6_sh
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="PK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh3_sh
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="PK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh5_sh
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="PK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh17_sh
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="SVD";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh15_sh
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh16_sh
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Top";
		};
//////////////////////////////////////////////////////Olive
		class RPS_Smersh12
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh13
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh4
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="Front";
			Bag="Bottom";
		};
		class RPS_Smersh2
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="Sides";
			Bag="Bottom";
		};
		class RPS_Smersh14
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh9
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="Front";
			Bag="Top";
		};
		class RPS_Smersh1
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="Rear";
			Bag="Top";
		};
		class RPS_Smersh7
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="Sides";
			Bag="Top";
		};
		class RPS_Smersh11
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="Rear";
			Bag="NoBag";
		};
		class RPS_Smersh10
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="Front";
			Bag="NoBag";
		};
		class RPS_Smersh8
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="Sides";
			Bag="NoBag";
		};
		class RPS_Smersh6
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="PK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh3
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="PK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh5
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="PK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh17
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="SVD";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh15
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh16
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Top";
		};
	};
//////////////////////////////////////////////////////End of Smerch Vest
	class cfgVehicles
	{
//////////////////////////////////////////////////////ATACS
		class RPS_Smersh12_a_bp
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh13_a_bp
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh4_a_bp
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="Front";
			Bag="Bottom";
		};
		class RPS_Smersh2_a_bp
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="Sides";
			Bag="Bottom";
		};
		class RPS_Smersh14_a_bp
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh9_a_bp
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="Front";
			Bag="Top";
		};
		class RPS_Smersh1_a_bp
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="Rear";
			Bag="Top";
		};
		class RPS_Smersh7_a_bp
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="Sides";
			Bag="Top";
		};
		class RPS_Smersh11_a_bp
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="Rear";
			Bag="NoBag";
		};
		class RPS_Smersh10_a_bp
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="Front";
			Bag="NoBag";
		};
		class RPS_Smersh8_a_bp
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="AK";
			VOG="Sides";
			Bag="NoBag";
		};
		class RPS_Smersh6_a_bp
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="PK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh3_a_bp
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="PK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh5_a_bp
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="PK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh17_a_bp
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="SVD";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh15_a_bp
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh16_a_bp
		{
			model="Vest_Smersh";
			Camo="ATACS";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Top";
		};
//////////////////////////////////////////////////////Black
		class RPS_Smersh12_b_bp
		{
			model="Vest_Smersh";
			Camo="Black";
			Variant="AK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh13_b_bp
		{
			model="Vest_Smersh";
			Camo="Black";
			Variant="AK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh4_b_bp
		{
			model="Vest_Smersh";
			Camo="Black";
			Variant="AK";
			VOG="Front";
			Bag="Bottom";
		};
		class RPS_Smersh2_b_bp
		{
			model="Vest_Smersh";
			Camo="Black";
			Variant="AK";
			VOG="Sides";
			Bag="Bottom";
		};
		class RPS_Smersh14_b_bp
		{
			model="Vest_Smersh";
			Camo="Black";
			Variant="AK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh9_b_bp
		{
			model="Vest_Smersh";
			Camo="Black";
			Variant="AK";
			VOG="Front";
			Bag="Top";
		};
		class RPS_Smersh1_b_bp
		{
			model="Vest_Smersh";
			Camo="Black";
			Variant="AK";
			VOG="Rear";
			Bag="Top";
		};
		class RPS_Smersh7_b_bp
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="AK";
			VOG="Sides";
			Bag="Top";
		};
		class RPS_Smersh11_b_bp
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="AK";
			VOG="Rear";
			Bag="NoBag";
		};
		class RPS_Smersh10_b_bp
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="AK";
			VOG="Front";
			Bag="NoBag";
		};
		class RPS_Smersh8_b_bp
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="AK";
			VOG="Sides";
			Bag="NoBag";
		};
		class RPS_Smersh6_b_bp
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="PK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh3_b_bp
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="PK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh5_b_bp
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="PK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh17_b_bp
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="SVD";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh15_b_bp
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh16_b_bp
		{
			model="Vest_Smersh";
			 Camo="Black";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Top";
		};
//////////////////////////////////////////////////////EMR
		class RPS_Smersh12_E_bp
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh13_E_bp
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh4_E_bp
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="Front";
			Bag="Bottom";
		};
		class RPS_Smersh2_E_bp
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="Sides";
			Bag="Bottom";
		};
		class RPS_Smersh14_E_bp
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh9_E_bp
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="Front";
			Bag="Top";
		};
		class RPS_Smersh1_E_bp
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="Rear";
			Bag="Top";
		};
		class RPS_Smersh7_E_bp
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="Sides";
			Bag="Top";
		};
		class RPS_Smersh11_E_bp
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="Rear";
			Bag="NoBag";
		};
		class RPS_Smersh10_E_bp
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="Front";
			Bag="NoBag";
		};
		class RPS_Smersh8_E_bp
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="AK";
			VOG="Sides";
			Bag="NoBag";
		};
		class RPS_Smersh6_E_bp
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="PK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh3_E_bp
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="PK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh5_E_bp
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="PK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh17_E_bp
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="SVD";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh15_E_bp
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh16_E_bp
		{
			model="Vest_Smersh";
			Camo="EMR";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Top";
		};
//////////////////////////////////////////////////////Flora
		class RPS_Smersh12_f_bp
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh13_f_bp
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh4_f_bp
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="Front";
			Bag="Bottom";
		};
		class RPS_Smersh2_f_bp
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="Sides";
			Bag="Bottom";
		};
		class RPS_Smersh14_f_bp
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh9_f_bp
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="Front";
			Bag="Top";
		};
		class RPS_Smersh1_f_bp
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="Rear";
			Bag="Top";
		};
		class RPS_Smersh7_f_bp
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="Sides";
			Bag="Top";
		};
		class RPS_Smersh11_f_bp
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="Rear";
			Bag="NoBag";
		};
		class RPS_Smersh10_f_bp
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="Front";
			Bag="NoBag";
		};
		class RPS_Smersh8_f_bp
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="AK";
			VOG="Sides";
			Bag="NoBag";
		};
		class RPS_Smersh6_f_bp
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="PK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh3_f_bp
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="PK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh5_f_bp
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="PK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh17_f_bp
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="SVD";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh15_f_bp
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh16_f_bp
		{
			model="Vest_Smersh";
			Camo="Flora";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Top";
		};
//////////////////////////////////////////////////////Green
		class RPS_Smersh12_d_bp
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh13_d_bp
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh4_d_bp
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="Front";
			Bag="Bottom";
		};
		class RPS_Smersh2_d_bp
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="Sides";
			Bag="Bottom";
		};
		class RPS_Smersh14_d_bp
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh9_d_bp
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="Front";
			Bag="Top";
		};
		class RPS_Smersh1_d_bp
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="Rear";
			Bag="Top";
		};
		class RPS_Smersh7_d_bp
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="Sides";
			Bag="Top";
		};
		class RPS_Smersh11_d_bp
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="Rear";
			Bag="NoBag";
		};
		class RPS_Smersh10_d_bp
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="Front";
			Bag="NoBag";
		};
		class RPS_Smersh8_d_bp
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="AK";
			VOG="Sides";
			Bag="NoBag";
		};
		class RPS_Smersh6_d_bp
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="PK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh3_d_bp
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="PK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh5_d_bp
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="PK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh17_d_bp
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="SVD";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh15_d_bp
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh16_d_bp
		{
			model="Vest_Smersh";
			Camo="Green";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Top";
		};
//////////////////////////////////////////////////////Khaki
		class RPS_Smersh12_sh_bp
		{
			model="Vest_Smersh";
			Camo="Khaki";
			Variant="AK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh13_sh_bp
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh4_sh_bp
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="Front";
			Bag="Bottom";
		};
		class RPS_Smersh2_sh_bp
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="Sides";
			Bag="Bottom";
		};
		class RPS_Smersh14_sh_bp
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh9_sh_bp
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="Front";
			Bag="Top";
		};
		class RPS_Smersh1_sh_bp
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="Rear";
			Bag="Top";
		};
		class RPS_Smersh7_sh_bp
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="Sides";
			Bag="Top";
		};
		class RPS_Smersh11_sh_bp
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="Rear";
			Bag="NoBag";
		};
		class RPS_Smersh10_sh_bp
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="Front";
			Bag="NoBag";
		};
		class RPS_Smersh8_sh_bp
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="AK";
			VOG="Sides";
			Bag="NoBag";
		};
		class RPS_Smersh6_sh_bp
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="PK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh3_sh_bp
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="PK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh5_sh_bp
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="PK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh17_sh_bp
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="SVD";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh15_sh_bp
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh16_sh_bp
		{
			model="Vest_Smersh";
			 Camo="Khaki";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Top";
		};
//////////////////////////////////////////////////////Olive
		class RPS_Smersh12_bp
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh13_bp
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh4_bp
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="Front";
			Bag="Bottom";
		};
		class RPS_Smersh2_bp
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="Sides";
			Bag="Bottom";
		};
		class RPS_Smersh14_bp
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh9_bp
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="Front";
			Bag="Top";
		};
		class RPS_Smersh1_bp
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="Rear";
			Bag="Top";
		};
		class RPS_Smersh7_bp
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="Sides";
			Bag="Top";
		};
		class RPS_Smersh11_bp
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="Rear";
			Bag="NoBag";
		};
		class RPS_Smersh10_bp
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="Front";
			Bag="NoBag";
		};
		class RPS_Smersh8_bp
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="AK";
			VOG="Sides";
			Bag="NoBag";
		};
		class RPS_Smersh6_bp
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="PK";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh3_bp
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="PK";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh5_bp
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="PK";
			VOG="NoVOG";
			Bag="Top";
		};
		class RPS_Smersh17_bp
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="SVD";
			VOG="NoVOG";
			Bag="NoBag";
		};
		class RPS_Smersh15_bp
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Bottom";
		};
		class RPS_Smersh16_bp
		{
			model="Vest_Smersh";
			 Camo="Olive";
			Variant="SVD";
			VOG="NoVOG";
			Bag="Top";
		};
	};
};