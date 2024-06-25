class CfgPatches
{
	class TSB_RSTarzan_ACEAX_Compat
	{
		name="TSB_ACEAX_Compat_RSTarzan";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"aceax_gearinfo",
			"YuE_Vest"
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
		class Vest_6SH92
		{
			label="6Sh92-5";
			author="SGTdanny";
			options[]=
			{
				"Camo",
				"Variant"
			};
			class Camo
			{
				label="Camo";
				alwaysSelectable=1;
				values[]=
				{
					"FloraMountain",
					"Flora",
					"Khaki",
					"VSR98"
				};
				class FloraMountain
				{
					label="Flora Mountain";
					image="TSB_ACEAX_Compat\data\MountainFlora.paa";
				};
				class Flora
				{
					label="Flora";
					image="TSB_ACEAX_Compat\data\Flora.paa";
				};
				class Khaki
				{
					label="Khaki";
					image="TSB_ACEAX_Compat\data\Khaki.paa";
				};
				class VSR98
				{
					label="VSR-98";
					image="TSB_ACEAX_Compat\data\VSR98.paa";
				};
			};
			class Variant
			{
				label="Variant";
				alwaysSelectable=1;
				values[]=
				{
					"AK",
					"SVD",
					"SVDGreen",
					"VOG"
				};
				class AK
				{
					label="AK";
				};
				class SVD
				{
					label="SVD";
				};
				class SVDGreen
				{
					label="SVD Green";
				};
				class VOG
				{
					label="VOG";
				};
			};
		};
		class Vest_M22
		{
			label="M22";
			author="SGTdanny";
			options[]=
			{
				"Camo"
			};
			class Camo
			{
				label="Camo";
				alwaysSelectable=1;
				values[]=
				{
					"Black",
					"EMR",
					"Flora",
					"Olive",
					"Woodland"
				};
				class Black
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa"
				};
				class EMR
				{
					label="EMR";
					image="TSB_ACEAX_Compat\data\EMRS.paa"
				};
				class Flora
				{
					label="Flora";
					image="TSB_ACEAX_Compat\data\Flora.paa"
				};
				class Olive
				{
					label="Olive";
					image="TSB_ACEAX_Compat\data\RussianGreen.paa"
				};
				class Woodland
				{
					label="Woodland";
					image="TSB_ACEAX_Compat\data\Woodland.paa"
				};
			};
		};
		class Vest_M23
		{
			label="M23";
			author="SGTdanny";
			options[]=
			{
				"Camo"
			};
			class Camo
			{
				label="Camo";
				alwaysSelectable=1;
				values[]=
				{
					"Black",
					"EMR",
					"Flora",
					"Olive",
					"Woodland"
				};
				class Black
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa"
				};
				class EMR
				{
					label="EMR";
					image="TSB_ACEAX_Compat\data\EMRS.paa"
				};
				class Flora
				{
					label="Flora";
					image="TSB_ACEAX_Compat\data\Flora.paa"
				};
				class Olive
				{
					label="Olive";
					image="TSB_ACEAX_Compat\data\RussianGreen.paa"
				};
				class Woodland
				{
					label="Woodland";
					image="TSB_ACEAX_Compat\data\Woodland.paa"
				};
			};
		};
	};
	class cfgVehicles
	{
		class Vest_6SH92
		{
			label="6Sh92-5";
			author="SGTdanny";
			options[]=
			{
				"Camo",
				"Variant"
			};
			class Camo
			{
				label="Camo";
				alwaysSelectable=1;
				values[]=
				{
					"FloraMountain",
					"Flora",
					"Khaki",
					"VSR98"
				};
				class FloraMountain
				{
					label="Flora Mountain";
					image="TSB_ACEAX_Compat\data\MountainFlora.paa";
				};
				class Flora
				{
					label="Flora";
					image="TSB_ACEAX_Compat\data\Flora.paa";
				};
				class Khaki
				{
					label="Khaki";
					image="TSB_ACEAX_Compat\data\Khaki.paa";
				};
				class VSR98
				{
					label="VSR-98";
					image="TSB_ACEAX_Compat\data\VSR98.paa";
				};
			};
			class Variant
			{
				label="Variant";
				alwaysSelectable=1;
				values[]=
				{
					"AK",
					"SVD",
					"SVDGreen",
					"VOG"
				};
				class AK
				{
					label="AK";
				};
				class SVD
				{
					label="SVD";
				};
				class SVDGreen
				{
					label="SVD Green";
				};
				class VOG
				{
					label="VOG";
				};
			};
		};
		class Vest_M22
		{
			label="M22";
			author="SGTdanny";
			options[]=
			{
				"Camo"
			};
			class Camo
			{
				label="Camo";
				alwaysSelectable=1;
				values[]=
				{
					"Black",
					"EMR",
					"Flora",
					"Olive",
					"Woodland"
				};
				class Black
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa"
				};
				class EMR
				{
					label="EMR";
					image="TSB_ACEAX_Compat\data\EMRS.paa"
				};
				class Flora
				{
					label="Flora";
					image="TSB_ACEAX_Compat\data\Flora.paa"
				};
				class Olive
				{
					label="Olive";
					image="TSB_ACEAX_Compat\data\RussianGreen.paa"
				};
				class Woodland
				{
					label="Woodland";
					image="TSB_ACEAX_Compat\data\Woodland.paa"
				};
			};
		};
		class Vest_M23
		{
			label="M23";
			author="SGTdanny";
			options[]=
			{
				"Camo"
			};
			class Camo
			{
				label="Camo";
				alwaysSelectable=1;
				values[]=
				{
					"Black",
					"EMR",
					"Flora",
					"Olive",
					"Woodland"
				};
				class Black
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa"
				};
				class EMR
				{
					label="EMR";
					image="TSB_ACEAX_Compat\data\EMRS.paa"
				};
				class Flora
				{
					label="Flora";
					image="TSB_ACEAX_Compat\data\Flora.paa"
				};
				class Olive
				{
					label="Olive";
					image="TSB_ACEAX_Compat\data\RussianGreen.paa"
				};
				class Woodland
				{
					label="Woodland";
					image="TSB_ACEAX_Compat\data\Woodland.paa"
				};
			};
		};
	};
};
class XtdGearInfos
{
	class cfgWeapons
	{
		////////////////////////////////////////FloraMountain
		class RS_6sh92_5f2
		{
			model="Vest_6SH92";
			Camo="FloraMountain";
			Variant="AK";
		};
		class RS_6sh92_5f2svd
		{
			model="Vest_6SH92";
			Camo="FloraMountain";
			Variant="SVD";
		};
		class RS_6sh92_5f2svdG
		{
			model="Vest_6SH92";
			Camo="FloraMountain";
			Variant="SVDGreen";
		};
		class RS_6sh92_5gpf2
		{
			model="Vest_6SH92";
			Camo="FloraMountain";
			Variant="VOG";
		};
		////////////////////////////////////////Flora
		class RS_6sh92_5
		{
			model="Vest_6SH92";
			Camo="Flora";
			Variant="AK";
		};
		class RS_6sh92_5svd
		{
			model="Vest_6SH92";
			Camo="Flora";
			Variant="SVD";
		};
		class RS_6sh92_5svdG
		{
			model="Vest_6SH92";
			Camo="Flora";
			Variant="SVDGreen";
		};
		class RS_6sh92_5gp
		{
			model="Vest_6SH92";
			Camo="Flora";
			Variant="VOG";
		};
		////////////////////////////////////////Khaki
		class RS_6sh92_5Ol
		{
			model="Vest_6SH92";
			Camo="Khaki";
			Variant="AK";
		};
		class RS_6sh92_5Olsvd
		{
			model="Vest_6SH92";
			Camo="Khaki";
			Variant="SVD";
		};
		class RS_6sh92_5OlsvdG
		{
			model="Vest_6SH92";
			Camo="Khaki";
			Variant="SVDGreen";
		};
		class RS_6sh92_5gpOl
		{
			model="Vest_6SH92";
			Camo="Khaki";
			Variant="VOG";
		};
		////////////////////////////////////////
		class RS_6sh92_5fd
		{
			model="Vest_6SH92";
			Camo="VSR98";
			Variant="AK";
		};
		class RS_6sh92_5fdsvd
		{
			model="Vest_6SH92";
			Camo="VSR98";
			Variant="SVD";
		};
		class RS_6sh92_5fdsvdG
		{
			model="Vest_6SH92";
			Camo="VSR98";
			Variant="SVDGreen";
		};
		class RS_6sh92_5gpfd
		{
			model="Vest_6SH92";
			Camo="VSR98";
			Variant="VOG";
		};
		////////////////////////////////////////M22
		class RS_Tarzan_b
		{
			model="Vest_M22";
			Camo="Black";
		};
		class RS_Tarzan_E
		{
			model="Vest_M22";
			Camo="EMR";
		};
		class RS_Tarzan_f
		{
			model="Vest_M22";
			Camo="Flora";
		};
		class RS_Tarzan_g
		{
			model="Vest_M22";
			Camo="Olive";
		};
		class RS_Tarzan
		{
			model="Vest_M22";
			Camo="Woodland";
		};
		////////////////////////////////////////M23
		class RS_Pioneer_B
		{
			model="Vest_M23";
			Camo="Black";
		};
		class RS_Pioneer_EMP
		{
			model="Vest_M23";
			Camo="EMR";
		};
		class RS_Pioneer_F
		{
			model="Vest_M23";
			Camo="Flora";
		};
		class RS_Pioneer_G
		{
			model="Vest_M23";
			Camo="Olive";
		};
		class RS_Pioneer
		{
			model="Vest_M23";
			Camo="Woodland";
		};
	};
	class cfgVehicles
	{
		////////////////////////////////////////FloraMountain
		class RS_6sh92_5f2_bp
		{
			model="Vest_6SH92";
			Camo="FloraMountain";
			Variant="AK";
		};
		class RS_6sh92_5f2svd_bp
		{
			model="Vest_6SH92";
			Camo="FloraMountain";
			Variant="SVD";
		};
		class RS_6sh92_5f2svdG_bp
		{
			model="Vest_6SH92";
			Camo="FloraMountain";
			Variant="SVDGreen";
		};
		class RS_6sh92_5gpf2_bp
		{
			model="Vest_6SH92";
			Camo="FloraMountain";
			Variant="VOG";
		};
		////////////////////////////////////////Flora
		class RS_6sh92_5_bp
		{
			model="Vest_6SH92";
			Camo="Flora";
			Variant="AK";
		};
		class RS_6sh92_5svd_bp
		{
			model="Vest_6SH92";
			Camo="Flora";
			Variant="SVD";
		};
		class RS_6sh92_5svdG_bp
		{
			model="Vest_6SH92";
			Camo="Flora";
			Variant="SVDGreen";
		};
		class RS_6sh92_5gp_bp
		{
			model="Vest_6SH92";
			Camo="Flora";
			Variant="VOG";
		};
		////////////////////////////////////////Khaki
		class RS_6sh92_5Ol_bp
		{
			model="Vest_6SH92";
			Camo="Khaki";
			Variant="AK";
		};
		class RS_6sh92_5Olsvd_bp
		{
			model="Vest_6SH92";
			Camo="Khaki";
			Variant="SVD";
		};
		class RS_6sh92_5OlsvdG_bp
		{
			model="Vest_6SH92";
			Camo="Khaki";
			Variant="SVDGreen";
		};
		class RS_6sh92_5gpOl_bp
		{
			model="Vest_6SH92";
			Camo="Khaki";
			Variant="VOG";
		};
		////////////////////////////////////////
		class RS_6sh92_5fd_bp
		{
			model="Vest_6SH92";
			Camo="VSR98";
			Variant="AK";
		};
		class RS_6sh92_5fdsvd_bp
		{
			model="Vest_6SH92";
			Camo="VSR98";
			Variant="SVD";
		};
		class RS_6sh92_5fdsvdG_bp
		{
			model="Vest_6SH92";
			Camo="VSR98";
			Variant="SVDGreen";
		};
		class RS_6sh92_5gpfd_bp
		{
			model="Vest_6SH92";
			Camo="VSR98";
			Variant="VOG";
		};
		////////////////////////////////////////M22
		class RS_Tarzan_b_bp
		{
			model="Vest_M22";
			Camo="Black";
		};
		class RS_Tarzan_E_bp
		{
			model="Vest_M22";
			Camo="EMR";
		};
		class RS_Tarzan_f_bp
		{
			model="Vest_M22";
			Camo="Flora";
		};
		class RS_Tarzan_g_bp
		{
			model="Vest_M22";
			Camo="Olive";
		};
		class RS_Tarzan_bp
		{
			model="Vest_M22";
			Camo="Woodland";
		};
		////////////////////////////////////////M23
		class RS_Pioneer_B_bp
		{
			model="Vest_M23";
			Camo="Black";
		};
		class RS_Pioneer_EMP_bp
		{
			model="Vest_M23";
			Camo="EMR";
		};
		class RS_Pioneer_F_bp
		{
			model="Vest_M23";
			Camo="Flora";
		};
		class RS_Pioneer_G_bp
		{
			model="Vest_M23";
			Camo="Olive";
		};
		class RS_Pioneer_bp
		{
			model="Vest_M23";
			Camo="Woodland";
		};
	};
};