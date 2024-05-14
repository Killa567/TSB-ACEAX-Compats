class CfgPatches
{
	class aceax_compat_usp
	{
		name="compat_usp";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"aceax_gearinfo"
		};
		author="AUTHOR";
		version="0.1.0.0";
		versionStr="0.1.0.0";
		versionAr[]={0,1,0,0};
		skipWhenMissingDependencies = 1;
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class USP_ACC_GPNVG18
		{
			options[]=
			{
				"camo"
			};
			label="[USP] L3 GPNVG-18";
			class camo
			{
				alwaysSelectable=1;
				values[]=
				{
					"BLK",
					"TAN"
				};
			};
		};
		class USP_PVS31
		{
			label="[USP] L3 PVS-31";
			author="SGTdanny";
			options[]=
			{
				"Colour",
				"NVGColour",
				"Position",
				"Wrap",
				"LensCover"
			};
			class Colour
			{
				label="Colour";
				alwaysSelectable=0;
				values[]=
				{
					"BLK",
					"TAN"
				};
			};
			class NVGColour
			{
				label="NVG Colour";
				alwaysSelectable=1;
				values[]=
				{
					"GP",
					"WP"
				};
			};
			class Position
			{
				label="Position";
				alwaysSelectable=1;
				values[]=
				{
					"STD",
					"HI",
					"MD",
					"LO",
					"ML",
					"MR"
				};
			};
			class Wrap
			{
				label="Wrap";
				alwaysSelectable=0;
				values[]=
				{
					"No",
					"Yes"
				};
			};
			class LensCover
			{
				label="Lens Cover";
				alwaysSelectable=0;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class USP_ACC_GPNVG18
		{
			model="USP_ACC_GPNVG18";
			camo="BLK";
		};
		class USP_ACC_GPNVG18_TAN
		{
			model="USP_ACC_GPNVG18";
			camo="TAN";
		};
////////////////////////////////////////31 
		class USP_PVS31
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="STD";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_BLK2
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="STD";
			Wrap="Yes";
			LensCover="No";
		};
		class USP_PVS31_TAN
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="GP";
			Position="STD";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_TAN2
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="GP";
			Position="STD";
			Wrap="Yes";
			LensCover="No";
		};
		class USP_PVS31_WP
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="STD";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_WP_BLK2
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="STD";
			Wrap="Yes";
			LensCover="No";
		};
		class USP_PVS31_WP_TAN
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="WP";
			Position="STD";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_WP_TAN2
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="WP";
			Position="STD";
			Wrap="Yes";
			LensCover="No";
		};
////////////////////////////////////////31 HI
		class USP_PVS31_HIGH
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="HI";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_HIGH_BLK2
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="HI";
			Wrap="Yes";
			LensCover="No";
		};
		class USP_PVS31_HIGH_TAN
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="GP";
			Position="HI";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_HIGH_TAN2
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="GP";
			Position="HI";
			Wrap="Yes";
			LensCover="No";
		};
		class USP_PVS31_WP_HIGH
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="HI";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_WP_HIGH_BLK2
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="HI";
			Wrap="Yes";
			LensCover="No";
		};
		class USP_PVS31_WP_HIGH_TAN
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="WP";
			Position="HI";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_WP_HIGH_TAN2
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="WP";
			Position="HI";
			Wrap="Yes";
			LensCover="No";
		};
////////////////////////////////////////31 MD
		class USP_PVS31_MID
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="MD";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_MID_BLK2
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="MD";
			Wrap="Yes";
			LensCover="No";
		};
		class USP_PVS31_MID_TAN
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="GP";
			Position="MD";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_MID_TAN2
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="GP";
			Position="MD";
			Wrap="Yes";
			LensCover="No";
		};
		class USP_PVS31_WP_MID
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="MD";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_WP_MID_BLK2
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="MD";
			Wrap="Yes";
			LensCover="No";
		};
		class USP_PVS31_WP_MID_TAN
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="WP";
			Position="MD";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_WP_MID_TAN2
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="WP";
			Position="MD";
			Wrap="Yes";
			LensCover="No";
		};
////////////////////////////////////////31 LO
		class USP_PVS31_LOW
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="LO";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_LOW_BLK2
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="LO";
			Wrap="Yes";
			LensCover="No";
		};
		class USP_PVS31_LOW_TAN
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="GP";
			Position="LO";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_LOW_TAN2
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="GP";
			Position="LO";
			Wrap="Yes";
			LensCover="No";
		};
		class USP_PVS31_WP_LOW
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="LO";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_WP_LOW_BLK2
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="LO";
			Wrap="Yes";
			LensCover="No";
		};
		class USP_PVS31_WP_LOW_TAN
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="WP";
			Position="LO";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_WP_LOW_TAN2
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="WP";
			Position="LO";
			Wrap="Yes";
			LensCover="No";
		};
////////////////////////////////////////31 Monocles
		class USP_PVS31_MONOL
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="ML";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_WP_MONOL
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="ML";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_MONOR
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="MR";
			Wrap="No";
			LensCover="No";
		};
		class USP_PVS31_WP_MONOR
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="MR";
			Wrap="No";
			LensCover="No";
		};
////////////////////////////////////////31 TAR
		class USP_PVS31_TAR
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="STD";
			Wrap="No";
			LensCover="Yes";
		};
		class USP_PVS31_TAR_BLK2
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="STD";
			Wrap="Yes";
			LensCover="Yes";
		};
		class USP_PVS31_TAR_TAN
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="GP";
			Position="STD";
			Wrap="No";
			LensCover="Yes";
		};
		class USP_PVS31_TAR_TAN2
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="GP";
			Position="STD";
			Wrap="Yes";
			LensCover="Yes";
		};
		class USP_PVS31_WP_TAR
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="STD";
			Wrap="No";
			LensCover="Yes";
		};
		class USP_PVS31_WP_TAR_BLK2
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="STD";
			Wrap="Yes";
			LensCover="Yes";
		};
		class USP_PVS31_WP_TAR_TAN
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="WP";
			Position="STD";
			Wrap="No";
			LensCover="Yes";
		};
		class USP_PVS31_WP_TAR_TAN2
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="WP";
			Position="STD";
			Wrap="Yes";
			LensCover="Yes";
		};
////////////////////////////////////////31 TAR HI
		class USP_PVS31_TAR_HIGH
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="HI";
			Wrap="No";
			LensCover="Yes";
		};
		class USP_PVS31_TAR_HIGH_BLK2
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="HI";
			Wrap="Yes";
			LensCover="Yes";
		};
		class USP_PVS31_TAR_HIGH_TAN
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="GP";
			Position="HI";
			Wrap="No";
			LensCover="Yes";
		};
		class USP_PVS31_TAR_HIGH_TAN2
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="GP";
			Position="HI";
			Wrap="Yes";
			LensCover="Yes";
		};
		class USP_PVS31_WP_TAR_HIGH
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="HI";
			Wrap="No";
			LensCover="Yes";
		};
		class USP_PVS31_WP_TAR_HIGH_BLK2
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="HI";
			Wrap="Yes";
			LensCover="Yes";
		};
		class USP_PVS31_WP_TAR_HIGH_TAN
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="WP";
			Position="HI";
			Wrap="No";
			LensCover="Yes";
		};
		class USP_PVS31_WP_TAR_HIGH_TAN2
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="WP";
			Position="HI";
			Wrap="Yes";
			LensCover="Yes";
		};	
////////////////////////////////////////31 TAR MD
		class USP_PVS31_TAR_MID
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="MD";
			Wrap="No";
			LensCover="Yes";
		};
		class USP_PVS31_TAR_MID_BLK2
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="MD";
			Wrap="Yes";
			LensCover="Yes";
		};
		class USP_PVS31_TAR_MID_TAN
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="GP";
			Position="MD";
			Wrap="No";
			LensCover="Yes";
		};
		class USP_PVS31_TAR_MID_TAN2
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="GP";
			Position="MD";
			Wrap="Yes";
			LensCover="Yes";
		};
		class USP_PVS31_WP_TAR_MID
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="MD";
			Wrap="No";
			LensCover="Yes";
		};
		class USP_PVS31_WP_TAR_MID_BLK2
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="MD";
			Wrap="Yes";
			LensCover="Yes";
		};
		class USP_PVS31_WP_TAR_MID_TAN
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="WP";
			Position="MD";
			Wrap="No";
			LensCover="Yes";
		};
		class USP_PVS31_WP_TAR_MID_TAN2
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="WP";
			Position="MD";
			Wrap="Yes";
			LensCover="Yes";
		};
////////////////////////////////////////31 TAR LO
		class USP_PVS31_TAR_LOW
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="LO";
			Wrap="No";
			LensCover="Yes";
		};
		class USP_PVS31_TAR_LOW_BLK2
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="GP";
			Position="LO";
			Wrap="Yes";
			LensCover="Yes";
		};
		class USP_PVS31_TAR_LOW_TAN
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="GP";
			Position="LO";
			Wrap="No";
			LensCover="Yes";
		};
		class USP_PVS31_TAR_LOW_TAN2
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="GP";
			Position="LO";
			Wrap="Yes";
			LensCover="Yes";
		};
		class USP_PVS31_WP_TAR_LOW
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="LO";
			Wrap="No";
			LensCover="Yes";
		};
		class USP_PVS31_WP_TAR_LOW_BLK2
		{
			model="USP_PVS31";
			Colour="BLK";
			NVGColour="WP";
			Position="LO";
			Wrap="Yes";
			LensCover="Yes";
		};
		class USP_PVS31_WP_TAR_LOW_TAN
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="WP";
			Position="LO";
			Wrap="No";
			LensCover="Yes";
		};
		class USP_PVS31_WP_TAR_LOW_TAN2
		{
			model="USP_PVS31";
			Colour="TAN";
			NVGColour="WP";
			Position="LO";
			Wrap="Yes";
			LensCover="Yes";
		};	
	};
};
