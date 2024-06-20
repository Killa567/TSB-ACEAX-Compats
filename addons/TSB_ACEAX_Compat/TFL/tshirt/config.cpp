class CfgPatches
{
	class TSB_ACEAX_Compat_tfl_tshirt
	{
		name="TSB_ACEAX_Compat_tfl_tshirt";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"aceax_gearinfo",
			"tfl_g3_thirt"
		};
		author="TSB";
		version="0.1.0.0";
		versionStr="0.1.0.0";
		versionAr[]={0,1,0,0};
		skipWhenMissingDependencies = 1;
	};
};
class XtdGearModels
{
	class CamoBase;
	class CfgWeapons
	{
		class tfl_tshirt
		{
			label="[TFL] G3 T-Shirt";
			author="TFL";
			options[]=
			{
				"tshirt",
				"tuck",
				"pants",
				"pads",
				"sleeve",
				"gloves"
			};
			class tshirt
			{
				label="T-Shirt";
				values[]=
				{
					"USA",
					"Arc",
					"Ass",
					"Aus",
					"Blue",
					"Cash",
					"Cum",
					"Grill",
					"gry",
					"IKEA",
					"Lopez",
					"Newport",
					"Dirtman",
					"ODA",
					"Rat",
					"Virgin",
					"Wasteman",
					"Yoda",
					"York"
				};
				class gry
				{
					label="Grey";
				};
			};
			class tuck
			{
				label="Tuck (ACE)";
				changeingame=1;
				values[]=
				{
					"yes",
					"no"
				};
				class yes
				{
					label="Yes";
					description="Tucked T-Shirt";
					icon="TSB_ACEAX_Compat\TFL\tshirt\data\tucked.paa";
					actionlabel="Tuck in T-Shirt";
				};
				class no
				{
					label="No";
					description="Untucked T-Shirt";
					icon="TSB_ACEAX_Compat\TFL\tshirt\data\untucked.paa";
					actionlabel="Untuck T-Shirt";
				};
			};
			class pants: CamoBase
			{
				label="Pants";
				values[]=
				{
					"mc",
					"mca",
					"mcb",
					"mct",
					"m81",
					"aor1",
					"aor2",
					"blk",
					"gry",
					"cb",
					"rg",
					"tsw",
					"tsd",
					"marp",
					"rdbs"
				};
				class mcd;
				class mca: mcd
				{
					label="MCA";
					description="MC Arid";
				};
				class cb
				{
					label="CB";
					description="Coyote Brown";
					image="TSB_ACEAX_Compat\TFL\tshirt\data\cb.paa";
				};
				class rg
				{
					label="RG";
					description="Ranger Green";
					image="TSB_ACEAX_Compat\TFL\tshirt\data\rg.paa";
				};
				class marp
				{
					label="MARPAT";
					image="TSB_ACEAX_Compat\TFL\tshirt\data\marp.paa";
				};
				class rdbs
				{
					label="RDBS";
					image="TSB_ACEAX_Compat\TFL\tshirt\data\rdbs.paa";
				};
			};
			class pads
			{
				label="Knee Pads";
				values[]=
				{
					"on",
					"off",
					"left",
					"right"
				};
				class on
				{
					label="On";
				};
				class off
				{
					label="Off";
				};
				class left
				{
					label="Left";
				};
				class right
				{
					label="Right";
				};
			};
			class sleeve
			{
				label="Undershirt";
				values[]=
				{
					"yes",
					"no"
				};
				class yes
				{
					label="Yes";
				};
				class no
				{
					label="No";
				};
			};
			class gloves
			{
				label="Gloves (ACE)";
				changeingame=1;
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="On";
					description="Wear Gloves";
					icon="TSB_ACEAX_Compat\TFL\tshirt\data\gloves.paa";
					actionlabel="Wear Gloves";
				};
				class off
				{
					label="Off";
					description="Remove Gloves";
					icon="TSB_ACEAX_Compat\TFL\tshirt\data\nogloves.paa";
					actionlabel="Remove Gloves";
				};
			};
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class tfl_new_arc_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_arc_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_arc_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_arc_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_arc_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_arc_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_arc_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_arc_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ass_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ass_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ass_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ass_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ass_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ass_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ass_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ass_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_aus_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_aus_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_aus_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_aus_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_aus_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_aus_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_aus_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_aus_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_blue_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_blue_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_blue_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_blue_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_blue_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_blue_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_blue_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_blue_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cash_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cash_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cash_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cash_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cash_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cash_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cash_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cash_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cum_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cum_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cum_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cum_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cum_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cum_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cum_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cum_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_dirtman_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_dirtman_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_dirtman_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_dirtman_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_dirtman_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_dirtman_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_dirtman_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_dirtman_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_grill_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_grill_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_grill_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_grill_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_grill_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_grill_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_grill_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_grill_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_gry_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_gry_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_gry_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_gry_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_gry_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_gry_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_gry_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_gry_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ikea_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ikea_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ikea_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ikea_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ikea_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ikea_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ikea_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ikea_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_lopez_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_lopez_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_lopez_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_lopez_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_lopez_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_lopez_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_lopez_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_lopez_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_newport_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_newport_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_newport_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_newport_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_newport_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_newport_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_newport_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_newport_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_oda_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_oda_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_oda_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_oda_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_oda_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_oda_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_oda_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_oda_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_rat_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_rat_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_rat_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_rat_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_rat_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_rat_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_rat_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_rat_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_usa_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_usa_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_usa_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_usa_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_usa_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_usa_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_usa_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_usa_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_virgin_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_virgin_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_virgin_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_virgin_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_virgin_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_virgin_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_virgin_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_virgin_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_wasteman_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_wasteman_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_wasteman_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_wasteman_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_wasteman_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_wasteman_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_wasteman_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_wasteman_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_yoda_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_yoda_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_yoda_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_yoda_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_yoda_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_yoda_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_yoda_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_yoda_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_york_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_york_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_york_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_york_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_york_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_york_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_york_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_york_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_arc_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_arc_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_arc_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_arc_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_arc_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_arc_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_arc_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_arc_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ass_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ass_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ass_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ass_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ass_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ass_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ass_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ass_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_aus_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_aus_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_aus_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_aus_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_aus_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_aus_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_aus_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_aus_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_blue_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_blue_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_blue_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_blue_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_blue_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_blue_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_blue_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_blue_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cash_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cash_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cash_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cash_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cash_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cash_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cash_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cash_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cum_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cum_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cum_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cum_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cum_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cum_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cum_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cum_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_dirtman_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_dirtman_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_dirtman_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_dirtman_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_dirtman_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_dirtman_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_dirtman_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_dirtman_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_grill_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_grill_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_grill_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_grill_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_grill_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_grill_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_grill_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_grill_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_gry_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_gry_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_gry_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_gry_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_gry_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_gry_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_gry_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_gry_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ikea_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ikea_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ikea_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ikea_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ikea_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ikea_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ikea_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ikea_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_lopez_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_lopez_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_lopez_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_lopez_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_lopez_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_lopez_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_lopez_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_lopez_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_newport_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_newport_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_newport_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_newport_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_newport_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_newport_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_newport_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_newport_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_oda_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_oda_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_oda_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_oda_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_oda_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_oda_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_oda_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_oda_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_rat_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_rat_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_rat_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_rat_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_rat_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_rat_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_rat_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_rat_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_usa_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_usa_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_usa_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_usa_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_usa_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_usa_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_usa_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_usa_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_virgin_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_virgin_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_virgin_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_virgin_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_virgin_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_virgin_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_virgin_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_virgin_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_wasteman_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_wasteman_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_wasteman_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_wasteman_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_wasteman_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_wasteman_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_wasteman_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_wasteman_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_yoda_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_yoda_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_yoda_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_yoda_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_yoda_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_yoda_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_yoda_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_yoda_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_york_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_york_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_york_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_york_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_york_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_york_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_york_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_york_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_aor2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_aor2_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_aor2_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_aor2_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_aor2_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_aor2_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_aor2_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_aor2_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="aor2";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_arc_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_arc_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_arc_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_arc_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_arc_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_arc_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_arc_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_arc_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ass_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ass_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ass_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ass_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ass_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ass_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ass_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ass_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_aus_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_aus_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_aus_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_aus_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_aus_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_aus_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_aus_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_aus_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_blue_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_blue_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_blue_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_blue_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_blue_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_blue_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_blue_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_blue_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cash_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cash_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cash_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cash_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cash_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cash_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cash_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cash_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cum_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cum_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cum_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cum_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cum_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cum_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cum_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cum_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_dirtman_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_dirtman_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_dirtman_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_dirtman_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_dirtman_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_dirtman_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_dirtman_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_dirtman_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_grill_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_grill_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_grill_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_grill_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_grill_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_grill_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_grill_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_grill_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_gry_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_gry_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_gry_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_gry_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_gry_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_gry_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_gry_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_gry_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ikea_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ikea_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ikea_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ikea_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ikea_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ikea_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ikea_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ikea_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_lopez_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_lopez_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_lopez_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_lopez_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_lopez_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_lopez_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_lopez_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_lopez_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_newport_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_newport_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_newport_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_newport_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_newport_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_newport_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_newport_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_newport_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_oda_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_oda_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_oda_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_oda_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_oda_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_oda_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_oda_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_oda_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_rat_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_rat_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_rat_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_rat_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_rat_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_rat_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_rat_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_rat_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_usa_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_usa_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_usa_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_usa_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_usa_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_usa_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_usa_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_usa_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_virgin_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_virgin_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_virgin_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_virgin_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_virgin_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_virgin_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_virgin_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_virgin_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_wasteman_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_wasteman_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_wasteman_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_wasteman_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_wasteman_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_wasteman_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_wasteman_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_wasteman_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_yoda_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_yoda_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_yoda_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_yoda_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_yoda_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_yoda_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_yoda_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_yoda_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_york_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_york_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_york_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_york_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_york_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_york_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_york_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_york_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_blk_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_blk_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_blk_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_blk_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_blk_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_blk_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_blk_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_blk_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="blk";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_arc_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_arc_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_arc_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_arc_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_arc_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_arc_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_arc_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_arc_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ass_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ass_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ass_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ass_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ass_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ass_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ass_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ass_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_aus_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_aus_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_aus_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_aus_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_aus_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_aus_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_aus_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_aus_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_blue_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_blue_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_blue_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_blue_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_blue_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_blue_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_blue_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_blue_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cash_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cash_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cash_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cash_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cash_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cash_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cash_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cash_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cum_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cum_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cum_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cum_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cum_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cum_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cum_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cum_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_dirtman_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_dirtman_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_dirtman_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_dirtman_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_dirtman_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_dirtman_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_dirtman_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_dirtman_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_grill_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_grill_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_grill_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_grill_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_grill_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_grill_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_grill_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_grill_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_gry_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_gry_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_gry_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_gry_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_gry_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_gry_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_gry_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_gry_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ikea_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ikea_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ikea_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ikea_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ikea_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ikea_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ikea_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ikea_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_lopez_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_lopez_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_lopez_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_lopez_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_lopez_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_lopez_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_lopez_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_lopez_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_newport_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_newport_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_newport_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_newport_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_newport_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_newport_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_newport_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_newport_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_oda_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_oda_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_oda_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_oda_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_oda_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_oda_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_oda_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_oda_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_rat_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_rat_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_rat_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_rat_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_rat_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_rat_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_rat_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_rat_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_usa_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_usa_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_usa_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_usa_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_usa_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_usa_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_usa_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_usa_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_virgin_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_virgin_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_virgin_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_virgin_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_virgin_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_virgin_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_virgin_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_virgin_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_wasteman_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_wasteman_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_wasteman_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_wasteman_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_wasteman_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_wasteman_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_wasteman_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_wasteman_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_yoda_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_yoda_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_yoda_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_yoda_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_yoda_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_yoda_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_yoda_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_yoda_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_york_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_york_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_york_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_york_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_york_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_york_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_york_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_york_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_cb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_cb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_cb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_cb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_cb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_cb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_cb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_cb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="cb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_arc_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_arc_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_arc_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_arc_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_arc_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_arc_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_arc_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_arc_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ass_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ass_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ass_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ass_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ass_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ass_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ass_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ass_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_aus_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_aus_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_aus_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_aus_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_aus_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_aus_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_aus_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_aus_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_blue_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_blue_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_blue_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_blue_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_blue_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_blue_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_blue_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_blue_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cash_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cash_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cash_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cash_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cash_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cash_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cash_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cash_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cum_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cum_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cum_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cum_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cum_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cum_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cum_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cum_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_dirtman_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_dirtman_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_dirtman_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_dirtman_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_dirtman_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_dirtman_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_dirtman_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_dirtman_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_grill_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_grill_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_grill_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_grill_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_grill_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_grill_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_grill_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_grill_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_gry_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_gry_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_gry_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_gry_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_gry_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_gry_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_gry_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_gry_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ikea_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ikea_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ikea_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ikea_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ikea_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ikea_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ikea_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ikea_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_lopez_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_lopez_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_lopez_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_lopez_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_lopez_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_lopez_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_lopez_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_lopez_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_newport_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_newport_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_newport_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_newport_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_newport_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_newport_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_newport_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_newport_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_oda_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_oda_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_oda_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_oda_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_oda_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_oda_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_oda_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_oda_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_rat_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_rat_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_rat_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_rat_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_rat_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_rat_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_rat_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_rat_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_usa_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_usa_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_usa_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_usa_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_usa_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_usa_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_usa_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_usa_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_virgin_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_virgin_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_virgin_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_virgin_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_virgin_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_virgin_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_virgin_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_virgin_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_wasteman_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_wasteman_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_wasteman_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_wasteman_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_wasteman_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_wasteman_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_wasteman_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_wasteman_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_yoda_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_yoda_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_yoda_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_yoda_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_yoda_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_yoda_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_yoda_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_yoda_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_york_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_york_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_york_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_york_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_york_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_york_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_york_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_york_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_dtgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_dtgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_dtgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_dtgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_dtgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_dtgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_dtgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_dtgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="tsd";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_arc_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_arc_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_arc_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_arc_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_arc_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_arc_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_arc_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_arc_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ass_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ass_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ass_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ass_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ass_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ass_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ass_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ass_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_aus_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_aus_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_aus_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_aus_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_aus_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_aus_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_aus_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_aus_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_blue_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_blue_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_blue_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_blue_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_blue_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_blue_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_blue_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_blue_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cash_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cash_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cash_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cash_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cash_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cash_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cash_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cash_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cum_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cum_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cum_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cum_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cum_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cum_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cum_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cum_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_dirtman_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_dirtman_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_dirtman_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_dirtman_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_dirtman_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_dirtman_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_dirtman_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_dirtman_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_grill_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_grill_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_grill_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_grill_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_grill_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_grill_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_grill_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_grill_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_gry_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_gry_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_gry_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_gry_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_gry_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_gry_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_gry_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_gry_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ikea_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ikea_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ikea_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ikea_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ikea_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ikea_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ikea_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ikea_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_lopez_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_lopez_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_lopez_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_lopez_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_lopez_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_lopez_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_lopez_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_lopez_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_newport_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_newport_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_newport_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_newport_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_newport_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_newport_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_newport_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_newport_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_oda_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_oda_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_oda_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_oda_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_oda_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_oda_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_oda_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_oda_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_rat_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_rat_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_rat_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_rat_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_rat_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_rat_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_rat_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_rat_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_usa_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_usa_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_usa_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_usa_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_usa_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_usa_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_usa_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_usa_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_virgin_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_virgin_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_virgin_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_virgin_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_virgin_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_virgin_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_virgin_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_virgin_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_wasteman_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_wasteman_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_wasteman_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_wasteman_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_wasteman_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_wasteman_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_wasteman_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_wasteman_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_yoda_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_yoda_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_yoda_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_yoda_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_yoda_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_yoda_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_yoda_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_yoda_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_york_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_york_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_york_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_york_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_york_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_york_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_york_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_york_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_gry_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_gry_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_gry_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_gry_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_gry_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_gry_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_gry_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_gry_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="gry";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_arc_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_arc_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_arc_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_arc_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_arc_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_arc_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_arc_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_arc_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ass_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ass_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ass_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ass_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ass_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ass_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ass_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ass_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_aus_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_aus_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_aus_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_aus_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_aus_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_aus_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_aus_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_aus_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_blue_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_blue_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_blue_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_blue_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_blue_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_blue_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_blue_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_blue_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cash_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cash_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cash_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cash_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cash_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cash_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cash_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cash_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cum_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cum_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cum_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cum_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cum_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cum_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cum_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cum_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_dirtman_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_dirtman_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_dirtman_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_dirtman_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_dirtman_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_dirtman_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_dirtman_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_dirtman_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_grill_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_grill_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_grill_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_grill_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_grill_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_grill_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_grill_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_grill_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_gry_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_gry_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_gry_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_gry_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_gry_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_gry_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_gry_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_gry_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ikea_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ikea_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ikea_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ikea_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ikea_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ikea_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ikea_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ikea_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_lopez_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_lopez_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_lopez_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_lopez_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_lopez_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_lopez_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_lopez_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_lopez_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_newport_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_newport_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_newport_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_newport_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_newport_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_newport_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_newport_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_newport_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_oda_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_oda_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_oda_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_oda_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_oda_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_oda_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_oda_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_oda_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_rat_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_rat_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_rat_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_rat_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_rat_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_rat_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_rat_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_rat_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_usa_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_usa_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_usa_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_usa_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_usa_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_usa_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_usa_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_usa_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_virgin_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_virgin_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_virgin_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_virgin_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_virgin_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_virgin_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_virgin_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_virgin_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_wasteman_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_wasteman_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_wasteman_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_wasteman_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_wasteman_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_wasteman_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_wasteman_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_wasteman_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_yoda_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_yoda_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_yoda_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_yoda_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_yoda_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_yoda_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_yoda_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_yoda_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_york_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_york_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_york_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_york_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_york_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_york_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_york_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_york_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_m81_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_m81_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_m81_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_m81_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_m81_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_m81_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_m81_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_m81_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="m81";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_arc_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_arc_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_arc_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_arc_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_arc_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_arc_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_arc_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_arc_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ass_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ass_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ass_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ass_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ass_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ass_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ass_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ass_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_aus_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_aus_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_aus_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_aus_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_aus_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_aus_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_aus_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_aus_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_blue_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_blue_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_blue_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_blue_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_blue_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_blue_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_blue_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_blue_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cash_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cash_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cash_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cash_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cash_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cash_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cash_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cash_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cum_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cum_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cum_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cum_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cum_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cum_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cum_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cum_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_dirtman_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_dirtman_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_dirtman_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_dirtman_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_dirtman_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_dirtman_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_dirtman_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_dirtman_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_grill_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_grill_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_grill_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_grill_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_grill_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_grill_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_grill_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_grill_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_gry_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_gry_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_gry_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_gry_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_gry_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_gry_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_gry_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_gry_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ikea_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ikea_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ikea_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ikea_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ikea_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ikea_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ikea_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ikea_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_lopez_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_lopez_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_lopez_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_lopez_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_lopez_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_lopez_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_lopez_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_lopez_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_newport_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_newport_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_newport_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_newport_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_newport_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_newport_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_newport_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_newport_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_oda_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_oda_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_oda_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_oda_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_oda_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_oda_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_oda_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_oda_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_rat_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_rat_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_rat_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_rat_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_rat_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_rat_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_rat_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_rat_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_usa_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_usa_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_usa_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_usa_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_usa_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_usa_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_usa_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_usa_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_virgin_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_virgin_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_virgin_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_virgin_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_virgin_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_virgin_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_virgin_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_virgin_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_wasteman_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_wasteman_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_wasteman_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_wasteman_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_wasteman_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_wasteman_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_wasteman_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_wasteman_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_yoda_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_yoda_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_yoda_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_yoda_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_yoda_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_yoda_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_yoda_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_yoda_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_york_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_york_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_york_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_york_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_york_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_york_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_york_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_york_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_marpat_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_marpat_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_marpat_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_marpat_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_marpat_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_marpat_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_marpat_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_marpat_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="marp";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_arc_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_arc_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_arc_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_arc_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_arc_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_arc_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_arc_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_arc_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ass_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ass_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ass_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ass_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ass_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ass_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ass_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ass_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_aus_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_aus_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_aus_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_aus_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_aus_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_aus_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_aus_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_aus_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_blue_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_blue_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_blue_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_blue_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_blue_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_blue_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_blue_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_blue_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cash_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cash_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cash_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cash_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cash_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cash_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cash_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cash_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cum_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cum_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cum_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cum_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cum_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cum_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cum_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cum_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_dirtman_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_dirtman_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_dirtman_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_dirtman_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_dirtman_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_dirtman_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_dirtman_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_dirtman_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_grill_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_grill_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_grill_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_grill_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_grill_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_grill_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_grill_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_grill_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_gry_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_gry_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_gry_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_gry_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_gry_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_gry_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_gry_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_gry_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ikea_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ikea_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ikea_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ikea_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ikea_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ikea_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ikea_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ikea_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_lopez_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_lopez_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_lopez_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_lopez_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_lopez_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_lopez_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_lopez_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_lopez_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_newport_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_newport_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_newport_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_newport_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_newport_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_newport_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_newport_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_newport_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_oda_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_oda_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_oda_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_oda_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_oda_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_oda_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_oda_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_oda_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_rat_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_rat_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_rat_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_rat_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_rat_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_rat_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_rat_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_rat_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_usa_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_usa_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_usa_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_usa_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_usa_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_usa_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_usa_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_usa_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_virgin_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_virgin_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_virgin_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_virgin_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_virgin_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_virgin_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_virgin_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_virgin_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_wasteman_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_wasteman_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_wasteman_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_wasteman_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_wasteman_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_wasteman_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_wasteman_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_wasteman_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_yoda_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_yoda_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_yoda_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_yoda_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_yoda_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_yoda_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_yoda_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_yoda_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_york_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_york_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_york_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_york_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_york_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_york_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_york_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_york_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_mc_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_mc_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_mc_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_mc_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_mc_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_mc_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_mc_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_mc_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mc";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_arc_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_arc_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_arc_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_arc_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_arc_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_arc_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_arc_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_arc_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ass_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ass_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ass_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ass_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ass_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ass_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ass_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ass_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_aus_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_aus_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_aus_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_aus_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_aus_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_aus_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_aus_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_aus_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_blue_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_blue_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_blue_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_blue_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_blue_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_blue_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_blue_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_blue_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cash_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cash_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cash_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cash_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cash_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cash_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cash_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cash_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cum_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cum_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cum_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cum_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cum_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cum_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cum_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cum_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_dirtman_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_dirtman_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_dirtman_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_dirtman_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_dirtman_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_dirtman_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_dirtman_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_dirtman_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_grill_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_grill_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_grill_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_grill_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_grill_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_grill_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_grill_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_grill_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_gry_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_gry_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_gry_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_gry_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_gry_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_gry_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_gry_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_gry_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ikea_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ikea_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ikea_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ikea_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ikea_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ikea_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ikea_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ikea_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_lopez_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_lopez_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_lopez_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_lopez_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_lopez_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_lopez_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_lopez_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_lopez_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_newport_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_newport_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_newport_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_newport_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_newport_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_newport_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_newport_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_newport_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_oda_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_oda_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_oda_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_oda_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_oda_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_oda_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_oda_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_oda_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_rat_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_rat_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_rat_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_rat_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_rat_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_rat_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_rat_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_rat_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_usa_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_usa_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_usa_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_usa_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_usa_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_usa_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_usa_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_usa_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_virgin_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_virgin_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_virgin_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_virgin_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_virgin_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_virgin_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_virgin_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_virgin_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_wasteman_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_wasteman_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_wasteman_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_wasteman_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_wasteman_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_wasteman_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_wasteman_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_wasteman_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_yoda_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_yoda_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_yoda_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_yoda_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_yoda_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_yoda_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_yoda_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_yoda_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_york_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_york_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_york_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_york_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_york_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_york_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_york_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_york_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_mca_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_mca_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_mca_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_mca_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_mca_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_mca_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_mca_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_mca_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mca";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_arc_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_arc_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_arc_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_arc_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_arc_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_arc_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_arc_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_arc_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ass_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ass_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ass_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ass_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ass_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ass_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ass_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ass_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_aus_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_aus_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_aus_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_aus_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_aus_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_aus_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_aus_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_aus_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_blue_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_blue_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_blue_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_blue_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_blue_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_blue_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_blue_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_blue_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cash_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cash_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cash_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cash_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cash_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cash_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cash_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cash_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cum_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cum_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cum_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cum_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cum_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cum_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cum_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cum_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_dirtman_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_dirtman_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_dirtman_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_dirtman_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_dirtman_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_dirtman_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_dirtman_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_dirtman_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_grill_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_grill_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_grill_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_grill_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_grill_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_grill_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_grill_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_grill_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_gry_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_gry_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_gry_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_gry_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_gry_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_gry_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_gry_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_gry_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ikea_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ikea_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ikea_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ikea_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ikea_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ikea_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ikea_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ikea_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_lopez_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_lopez_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_lopez_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_lopez_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_lopez_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_lopez_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_lopez_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_lopez_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_newport_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_newport_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_newport_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_newport_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_newport_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_newport_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_newport_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_newport_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_oda_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_oda_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_oda_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_oda_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_oda_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_oda_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_oda_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_oda_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_rat_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_rat_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_rat_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_rat_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_rat_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_rat_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_rat_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_rat_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_usa_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_usa_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_usa_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_usa_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_usa_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_usa_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_usa_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_usa_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_virgin_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_virgin_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_virgin_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_virgin_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_virgin_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_virgin_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_virgin_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_virgin_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_wasteman_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_wasteman_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_wasteman_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_wasteman_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_wasteman_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_wasteman_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_wasteman_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_wasteman_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_yoda_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_yoda_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_yoda_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_yoda_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_yoda_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_yoda_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_yoda_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_yoda_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_york_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_york_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_york_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_york_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_york_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_york_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_york_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_york_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_mcb_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_mcb_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_mcb_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_mcb_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_mcb_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_mcb_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_mcb_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_mcb_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mcb";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_arc_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_arc_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_arc_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_arc_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_arc_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_arc_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_arc_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_arc_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ass_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ass_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ass_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ass_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ass_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ass_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ass_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ass_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_aus_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_aus_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_aus_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_aus_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_aus_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_aus_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_aus_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_aus_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_blue_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_blue_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_blue_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_blue_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_blue_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_blue_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_blue_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_blue_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cash_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cash_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cash_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cash_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cash_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cash_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cash_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cash_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cum_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cum_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cum_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cum_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cum_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cum_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cum_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cum_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_dirtman_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_dirtman_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_dirtman_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_dirtman_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_dirtman_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_dirtman_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_dirtman_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_dirtman_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_grill_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_grill_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_grill_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_grill_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_grill_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_grill_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_grill_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_grill_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_gry_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_gry_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_gry_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_gry_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_gry_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_gry_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_gry_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_gry_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ikea_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ikea_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ikea_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ikea_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ikea_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ikea_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ikea_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ikea_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_lopez_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_lopez_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_lopez_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_lopez_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_lopez_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_lopez_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_lopez_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_lopez_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_newport_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_newport_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_newport_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_newport_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_newport_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_newport_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_newport_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_newport_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_oda_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_oda_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_oda_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_oda_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_oda_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_oda_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_oda_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_oda_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_rat_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_rat_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_rat_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_rat_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_rat_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_rat_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_rat_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_rat_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_usa_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_usa_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_usa_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_usa_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_usa_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_usa_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_usa_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_usa_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_virgin_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_virgin_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_virgin_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_virgin_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_virgin_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_virgin_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_virgin_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_virgin_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_wasteman_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_wasteman_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_wasteman_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_wasteman_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_wasteman_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_wasteman_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_wasteman_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_wasteman_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_yoda_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_yoda_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_yoda_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_yoda_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_yoda_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_yoda_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_yoda_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_yoda_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_york_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_york_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_york_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_york_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_york_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_york_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_york_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_york_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_mct_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_mct_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_mct_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_mct_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_mct_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_mct_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_mct_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="mct";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_arc_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_arc_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_arc_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_arc_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_arc_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_arc_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_arc_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_arc_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ass_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ass_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ass_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ass_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ass_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ass_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ass_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ass_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_aus_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_aus_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_aus_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_aus_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_aus_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_aus_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_aus_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_aus_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_blue_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_blue_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_blue_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_blue_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_blue_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_blue_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_blue_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_blue_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cash_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cash_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cash_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cash_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cash_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cash_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cash_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cash_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cum_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cum_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cum_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cum_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cum_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cum_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cum_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cum_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_dirtman_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_dirtman_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_dirtman_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_dirtman_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_dirtman_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_dirtman_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_dirtman_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_dirtman_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_grill_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_grill_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_grill_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_grill_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_grill_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_grill_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_grill_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_grill_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_gry_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_gry_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_gry_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_gry_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_gry_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_gry_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_gry_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_gry_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ikea_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ikea_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ikea_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ikea_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ikea_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ikea_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ikea_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ikea_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_lopez_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_lopez_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_lopez_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_lopez_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_lopez_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_lopez_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_lopez_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_lopez_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_newport_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_newport_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_newport_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_newport_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_newport_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_newport_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_newport_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_newport_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_oda_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_oda_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_oda_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_oda_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_oda_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_oda_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_oda_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_oda_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_rat_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_rat_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_rat_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_rat_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_rat_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_rat_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_rat_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_rat_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_usa_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_usa_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_usa_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_usa_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_usa_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_usa_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_usa_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_usa_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_virgin_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_virgin_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_virgin_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_virgin_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_virgin_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_virgin_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_virgin_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_virgin_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_wasteman_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_wasteman_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_wasteman_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_wasteman_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_wasteman_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_wasteman_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_wasteman_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_wasteman_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_yoda_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_yoda_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_yoda_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_yoda_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_yoda_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_yoda_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_yoda_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_yoda_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_york_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_york_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_york_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_york_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_york_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_york_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_york_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_york_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_rdbs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_rdbs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_rdbs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_rdbs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_rdbs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_rdbs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_rdbs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_rdbs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="rdbs";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_arc_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_arc_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_arc_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_arc_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_arc_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_arc_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_arc_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_arc_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ass_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ass_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ass_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ass_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ass_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ass_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ass_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ass_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_aus_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_aus_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_aus_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_aus_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_aus_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_aus_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_aus_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_aus_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_blue_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_blue_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_blue_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_blue_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_blue_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_blue_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_blue_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_blue_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cash_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cash_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cash_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cash_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cash_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cash_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cash_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cash_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cum_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cum_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cum_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cum_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cum_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cum_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cum_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cum_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_dirtman_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_dirtman_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_dirtman_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_dirtman_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_dirtman_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_dirtman_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_dirtman_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_dirtman_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_grill_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_grill_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_grill_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_grill_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_grill_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_grill_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_grill_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_grill_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_gry_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_gry_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_gry_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_gry_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_gry_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_gry_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_gry_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_gry_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ikea_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ikea_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ikea_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ikea_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ikea_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ikea_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ikea_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ikea_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_lopez_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_lopez_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_lopez_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_lopez_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_lopez_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_lopez_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_lopez_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_lopez_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_newport_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_newport_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_newport_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_newport_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_newport_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_newport_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_newport_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_newport_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_oda_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_oda_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_oda_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_oda_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_oda_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_oda_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_oda_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_oda_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_rat_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_rat_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_rat_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_rat_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_rat_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_rat_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_rat_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_rat_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_usa_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_usa_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_usa_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_usa_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_usa_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_usa_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_usa_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_usa_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_virgin_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_virgin_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_virgin_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_virgin_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_virgin_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_virgin_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_virgin_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_virgin_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_wasteman_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_wasteman_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_wasteman_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_wasteman_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_wasteman_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_wasteman_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_wasteman_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_wasteman_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_yoda_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_yoda_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_yoda_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_yoda_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_yoda_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_yoda_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_yoda_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_yoda_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_york_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_york_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_york_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_york_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_york_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_york_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_york_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_york_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_rg_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_rg_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_rg_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_rg_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_rg_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_rg_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_rg_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_rg_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="rg";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_arc_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_arc_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_arc_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_arc_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_arc_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_arc_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_arc_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_arc_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_arc_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_arc_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ass_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ass_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ass_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ass_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ass_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ass_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ass_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ass_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ass_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ass_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_aus_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_aus_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_aus_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_aus_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_aus_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_aus_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_aus_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_aus_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_aus_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_aus_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_blue_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_blue_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_blue_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_blue_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_blue_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_blue_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_blue_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_blue_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_blue_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_blue_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cash_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cash_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cash_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cash_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cash_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cash_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cash_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cash_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cash_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cash_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_cum_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_cum_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_cum_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_cum_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_cum_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_cum_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_cum_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_cum_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_cum_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_cum_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_dirtman_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_dirtman_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_dirtman_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_dirtman_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_dirtman_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_dirtman_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_dirtman_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_dirtman_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_dirtman_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_dirtman_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_grill_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_grill_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_grill_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_grill_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_grill_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_grill_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_grill_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_grill_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_grill_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_grill_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_gry_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_gry_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_gry_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_gry_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_gry_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_gry_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_gry_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_gry_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_gry_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_gry_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="gry";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_ikea_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_ikea_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_ikea_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_ikea_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_ikea_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_ikea_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_ikea_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_ikea_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_ikea_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_ikea_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="IKEA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_lopez_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_lopez_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_lopez_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_lopez_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_lopez_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_lopez_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_lopez_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_lopez_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_lopez_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_lopez_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Lopez";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_newport_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_newport_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_newport_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_newport_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_newport_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_newport_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_newport_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_newport_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_newport_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_newport_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Newport";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_oda_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_oda_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_oda_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_oda_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_oda_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_oda_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_oda_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_oda_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_oda_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_oda_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="ODA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_rat_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_rat_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_rat_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_rat_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_rat_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_rat_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_rat_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_rat_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_rat_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_rat_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Rat";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_usa_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_usa_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_usa_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_usa_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_usa_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_usa_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_usa_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_usa_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_usa_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_usa_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="USA";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_virgin_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_virgin_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_virgin_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_virgin_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_virgin_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_virgin_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_virgin_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_virgin_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_virgin_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_virgin_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Virgin";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_wasteman_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_wasteman_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_wasteman_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_wasteman_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_wasteman_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_wasteman_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_wasteman_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_wasteman_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_wasteman_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_wasteman_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Wasteman";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_yoda_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_yoda_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_yoda_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_yoda_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_yoda_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_yoda_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_yoda_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_yoda_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_yoda_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_yoda_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Yoda";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_york_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_york_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_york_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_york_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_york_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_york_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_york_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_york_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="no";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_tgr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_tgr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_tgr_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_tgr_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_tgr_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_tgr_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_sleeve_york_tgr_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_sleeve_york_tgr_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="York";
			tuck="no";
			sleeve="yes";
			pants="tsw";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_tuck_arc_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_tuck_arc_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_tuck_arc_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_tuck_arc_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_tuck_arc_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_tuck_arc_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_tuck_arc_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_tuck_arc_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_arc_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_arc_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_arc_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_arc_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_arc_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_arc_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_arc_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_arc_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Arc";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_tuck_ass_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_tuck_ass_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_tuck_ass_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_tuck_ass_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_tuck_ass_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_tuck_ass_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_tuck_ass_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_tuck_ass_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_ass_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_ass_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_ass_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_ass_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_ass_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_ass_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_ass_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_ass_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Ass";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_tuck_aus_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_tuck_aus_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_tuck_aus_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_tuck_aus_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_tuck_aus_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_tuck_aus_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_tuck_aus_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_tuck_aus_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_aus_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_aus_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_aus_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_aus_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_aus_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_aus_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_aus_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_aus_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Aus";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_tuck_blue_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_tuck_blue_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_tuck_blue_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_tuck_blue_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_tuck_blue_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_tuck_blue_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_tuck_blue_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_tuck_blue_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_blue_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_blue_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_blue_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_blue_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_blue_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_blue_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_blue_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_blue_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Blue";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_tuck_cash_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_tuck_cash_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_tuck_cash_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_tuck_cash_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_tuck_cash_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_tuck_cash_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_tuck_cash_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_tuck_cash_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_cash_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_cash_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_cash_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_cash_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_cash_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_cash_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_cash_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_cash_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cash";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_tuck_cum_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_tuck_cum_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_tuck_cum_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_tuck_cum_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_tuck_cum_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_tuck_cum_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_tuck_cum_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_tuck_cum_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_cum_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_cum_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_cum_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_cum_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_cum_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_cum_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_cum_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_cum_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Cum";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_tuck_dirtman_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_tuck_dirtman_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_tuck_dirtman_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_tuck_dirtman_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_tuck_dirtman_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_tuck_dirtman_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_tuck_dirtman_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_tuck_dirtman_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_dirtman_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_dirtman_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_dirtman_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_dirtman_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_dirtman_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_dirtman_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_dirtman_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_dirtman_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Dirtman";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_tuck_grill_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_tuck_grill_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_tuck_grill_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_tuck_grill_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_tuck_grill_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_tuck_grill_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_tuck_grill_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_tuck_grill_aor1_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="yes";
			sleeve="no";
			pants="aor1";
			pads="left";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_grill_aor1_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_grill_aor1_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_grill_aor1_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_grill_aor1_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_grill_aor1_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_grill_aor1_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="right";
			gloves="on";
		};
	};
	class tfl_new_tuck_sleeve_grill_aor1_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_tshirt";
			tshirt="Grill";
			tuck="yes";
			sleeve="yes";
			pants="aor1";
			pads="left";
			gloves="off";
		};
	};
	class tfl_new_tuck_sleeve_grill_aor1_npr_uniform_g: Uniform_Base
	{
		{
		};
	};