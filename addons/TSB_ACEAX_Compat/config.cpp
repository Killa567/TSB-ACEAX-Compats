#define true	1
#define false	0

#define private		0
#define protected		1
#define public		2

class CfgPatches
{
	class TSB_ACEAX_Compat
	{
		name="TSB_ACEAX_Compat";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"aceax_gearinfo"
		};
		author="Killa567/Frost993/SGTdanny";
	};
};
class XtdGearModels
{
	class CamoBase
	{
		class SND
		{
			label="Sand";
			image="#(rgb,8,8,3)color(0.886,0.843,0.765,1)";
		};
		class SGG
		{
			label="Sage";
			image="#(rgb,8,8,3)color(0.53,0.62,0.51,1)";
		};
		class KHKG
		{
			label="Khaki G.";
			description="Khaki Green";
			image="#(rgb,8,8,3)color(0.6,0.64,0.5,1)";
		};
		class HEX
		{
			label="Hex";
			image="z\aceax\addons\gearinfo\data\camo\csat.paa";
		};
		class GHEX
		{
			label="Grn. Hex";
			description="Green Hex";
			image="z\aceax\addons\gearinfo\data\camo\csat_tna.paa";
		};
		class UHEX
		{
			label="Urb. Hex";
			description="Urban Hex";
			image="z\aceax\addons\gearinfo\data\camo\csat_ou.paa";
		};
		class BIHELM_STD
		{
			label="Standard";
			image="TSB_ACEAX_Compat\data\bihelm_std.paa";
		};
		class BIHELM_DES
		{
			label="Desert";
			image="TSB_ACEAX_Compat\data\bihelm_des.paa";
		};
		class BIHELM_GRS
		{
			label="Grass";
			image="TSB_ACEAX_Compat\data\bihelm_grs.paa";
		};
		class BIHELM_SNK
		{
			label="Snakeskin";
			image="TSB_ACEAX_Compat\data\bihelm_snk.paa";
		};
		class CTRG_ARID
		{
			label="Arid Daz.";
			description="CTRG Arid Dazzle";
			image="TSB_ACEAX_Compat\data\ctrg_arid.paa";
		};
		class CTRG_URB
		{
			label="Urb. Daz.";
			description="CTRG Urban Dazzle";
			image="TSB_ACEAX_Compat\data\ctrg_urb.paa";
		};
		class CTRG_TROP
		{
			label="Trop. Daz.";
			description="CTRG Tropic Dazzle";
			image="TSB_ACEAX_Compat\data\ctrg_trop.paa";
		};
		class BISPNZ_A
		{
			label="Arid";
			image="TSB_ACEAX_Compat\data\bihelm_spnz_a.paa";
		};
		class BISPNZ_L
		{
			label="Lush";
			image="TSB_ACEAX_Compat\data\bihelm_spnz_l.paa";
		};
		class THEX
		{
			label="Tai. Hex";
			description="Taiga Hex";
			image="TSB_ACEAX_Compat\data\rus_taiga.paa";
		};
		class SNK
		{
			label="Snake";
			image="TSB_ACEAX_Compat\data\snake.paa";
		};
	};
};