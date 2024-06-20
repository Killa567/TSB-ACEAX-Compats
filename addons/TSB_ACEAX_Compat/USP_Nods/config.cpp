class CfgPatches
{
	class TSB_ACEAX_Compat_USP
	{
		name="TSB_ACEAX_Compat_USP";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"aceax_gearinfo",
			"USP_Gear_NVG"
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
	class CfgWeapons
	{
		class USP_PVS14
		{
			label="[USP] L3 PVS-14";
			author="SGTdanny";
			options[]=
			{
				"NVGColour",
				"LensCover"
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
			class LensCover
			{
				label="Lens Cover"
				alwaysSelectable=1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class USP_PVS15
		{
			label="[USP] L3 PVS-15";
			author="SGTdanny";
			options[]=
			{
				"NVGColour",
				"LensCover"
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
			class LensCover
			{
				label="Lens Cover"
				alwaysSelectable=1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class USP_ACC_GPNVG18
		{
			label="[USP] L3 GPNVG-18";
			author="SGTdanny";
			options[]=
			{
				"Colour",
				"NVGColour",
				"MountColour",
				"Position",
				"LensCover"
			};
			class Colour
			{
				label="Colour";
				alwaysSelectable=1;
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
			class MountColour
			{
				label="Mout Colour";
				alwaysSelectable=0;
				values[]=
				{
					"BLK",
					"TAN"
				};
			};
			class Position
			{
				label="Position";
				alwaysSelectable=1;
				values[]=
				{
					"1",
					"2"
				};
			};
			class LensCover
			{
				label="Lens Cover";
				alwaysSelectable=1;
				values[]=
				{
					"No",
					"Yes"
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
////////////////////////////////////////14
		class USP_PVS14
		{
			model="USP_PVS14";
			NVGColour="GP";
			LensCover="No";
		};
		class USP_PVS14_WP
		{
			model="USP_PVS14";
			NVGColour="WP";
			LensCover="No";
		};
		class USP_PVS14_TAR
		{
			model="USP_PVS14";
			NVGColour="GP";
			LensCover="Yes";
		};
		class USP_PVS14_WP_TAR
		{
			model="USP_PVS14";
			NVGColour="WP";
			LensCover="Yes";
		};
////////////////////////////////////////15
		class USP_PVS15
		{
			model="USP_PVS15";
			NVGColour="GP";
			LensCover="No";
		};
		class USP_PVS15_WP
		{
			model="USP_PVS15";
			NVGColour="WP";
			LensCover="No";
		};
		class USP_PVS15_TAR
		{
			model="USP_PVS15";
			NVGColour="GP";
			LensCover="Yes";
		};
		class USP_PVS15_WP_TAR
		{
			model="USP_PVS15";
			NVGColour="WP";
			LensCover="Yes";
		};
////////////////////////////////////////18
		class USP_GPNVG18_BLK
		{
			model="USP_ACC_GPNVG18";
			Colour="BLK";
			NVGColour="GP";
			MountColour="BLK";
			Position="1";
			LensCover="No";
		};
		class USP_GPNVG18_BLK2
		{
			model="USP_ACC_GPNVG18";
			Colour="BLK";
			NVGColour="GP";
			MountColour="TAN";
			Position="1";
			LensCover="No";
		};
		class USP_GPNVG18_TAN
		{
			model="USP_ACC_GPNVG18";
			Colour="TAN";
			NVGColour="GP";
			MountColour="BLK";
			Position="1";
			LensCover="No";
		};
		class USP_GPNVG18_TAN2
		{
			model="USP_ACC_GPNVG18";
			Colour="TAN";
			NVGColour="GP";
			MountColour="TAN";
			Position="1";
			LensCover="No";
		};
		class USP_GPNVG18_WP_BLK
		{
			model="USP_ACC_GPNVG18";
			Colour="BLK";
			NVGColour="WP";
			MountColour="BLK";
			Position="1";
			LensCover="No";
		};
		class USP_GPNVG18_WP_BLK2
		{
			model="USP_ACC_GPNVG18";
			Colour="BLK";
			NVGColour="WP";
			MountColour="TAN";
			Position="1";
			LensCover="No";
		};
		class USP_GPNVG18_WP_TAN
		{
			model="USP_ACC_GPNVG18";
			Colour="TAN";
			NVGColour="WP";
			MountColour="BLK";
			Position="1";
			LensCover="No";
		};
		class USP_GPNVG18_WP_TAN2
		{
			model="USP_ACC_GPNVG18";
			Colour="TAN";
			NVGColour="WP";
			MountColour="TAN";
			Position="1";
			LensCover="No";
		};
////////////////////////////////////////18GM
		class USP_GPNVG18_GM_BLK
		{
			model="USP_ACC_GPNVG18";
			Colour="BLK";
			NVGColour="GP";
			MountColour="BLK";
			Position="2";
			LensCover="No";
		};
		class USP_GPNVG18_GM_TAN
		{
			model="USP_ACC_GPNVG18";
			Colour="TAN";
			NVGColour="GP";
			MountColour="TAN";
			Position="2";
			LensCover="No";
		};
		class USP_GPNVG18_WP_GM_BLK
		{
			model="USP_ACC_GPNVG18";
			Colour="BLK";
			NVGColour="WP";
			MountColour="BLK";
			Position="2";
			LensCover="No";
		};
		class USP_GPNVG18_WP_GM_TAN
		{
			model="USP_ACC_GPNVG18";
			Colour="TAN";
			NVGColour="WP";
			MountColour="TAN";
			Position="2";
			LensCover="No";
		};
		class USP_GPNVG18_GM_TAR_BLK
		{
			model="USP_ACC_GPNVG18";
			Colour="BLK";
			NVGColour="GP";
			MountColour="BLK";
			Position="2";
			LensCover="Yes";
		};
		class USP_GPNVG18_GM_TAR_TAN
		{
			model="USP_ACC_GPNVG18";
			Colour="TAN";
			NVGColour="GP";
			MountColour="TAN";
			Position="2";
			LensCover="Yes";
		};
		class USP_GPNVG18_WP_GM_TAR_BLK
		{
			model="USP_ACC_GPNVG18";
			Colour="BLK";
			NVGColour="WP";
			MountColour="BLK";
			Position="2";
			LensCover="Yes";
		};
		class USP_GPNVG18_WP_GM_TAR_TAN
		{
			model="USP_ACC_GPNVG18";
			Colour="TAN";
			NVGColour="WP";
			MountColour="TAN";
			Position="2";
			LensCover="Yes";
		};
////////////////////////////////////////18TAR
		class USP_GPNVG18_TAR_BLK
		{
			model="USP_ACC_GPNVG18";
			Colour="BLK";
			NVGColour="GP";
			MountColour="BLK";
			Position="1";
			LensCover="Yes";
		};
		class USP_GPNVG18_TAR_BLK2
		{
			model="USP_ACC_GPNVG18";
			Colour="BLK";
			NVGColour="GP";
			MountColour="TAN";
			Position="1";
			LensCover="Yes";
		};
		class USP_GPNVG18_TAR_TAN
		{
			model="USP_ACC_GPNVG18";
			Colour="TAN";
			NVGColour="GP";
			MountColour="BLK";
			Position="1";
			LensCover="Yes";
		};
		class USP_GPNVG18_TAR_TAN2
		{
			model="USP_ACC_GPNVG18";
			Colour="TAN";
			NVGColour="GP";
			MountColour="TAN";
			Position="1";
			LensCover="Yes";
		};
		class USP_GPNVG18_WP_TAR_BLK
		{
			model="USP_ACC_GPNVG18";
			Colour="BLK";
			NVGColour="WP";
			MountColour="BLK";
			Position="1";
			LensCover="Yes";
		};
		class USP_GPNVG18_WP_TAR_BLK2
		{
			model="USP_ACC_GPNVG18";
			Colour="BLK";
			NVGColour="WP";
			MountColour="TAN";
			Position="1";
			LensCover="Yes";
		};
		class USP_GPNVG18_WP_TAR_TAN
		{
			model="USP_ACC_GPNVG18";
			Colour="TAN";
			NVGColour="WP";
			MountColour="BLK";
			Position="1";
			LensCover="Yes";
		};
		class USP_GPNVG18_WP_TAR_TAN2
		{
			model="USP_ACC_GPNVG18";
			Colour="TAN";
			NVGColour="WP";
			MountColour="TAN";
			Position="1";
			LensCover="Yes";
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
