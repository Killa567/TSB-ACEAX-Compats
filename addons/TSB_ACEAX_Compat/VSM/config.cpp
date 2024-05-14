#define true	1
#define false	0

#define private		0
#define protected		1
#define public		2

class CfgPatches
{
	class TSB_ACEAX_Compat_VSM
	{
		name="TSB_ACEAX_Compat_VSM";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"aceax_gearinfo"
		};
		author="Killa567";
		skipWhenMissingDependencies = 1;
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class VSM_BDU
		{
			label="Battle Dress Uniform [VSM]";
			author="Killa567";
			options[]=
			{
				"camo",
				"Pants"
			};
			class camo
			{
				values[]=
				{
					"AOR1",
					"DTS",
					"M81",
					"Multicam",
					"MulticamT",
					"OCP",
					"PJH"
				};
				class AOR1
				{
					label="AOR1";
					image="TSB_ACEAX_Compat\data\AOR1.paa";
				};
				class DTS
				{
					label="Desert Tiger";
					image="TSB_ACEAX_Compat\data\DTS.paa";
				};
				class M81
				{
					label="M81";
					image="TSB_ACEAX_Compat\data\M81.paa";
				};
				class Multicam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class MulticamT
				{
					label="Multicam Tropic";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class OCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP.paa";
				};
				class PJH
				{
					label="Project Honor";
					image="TSB_ACEAX_Compat\data\PJH.paa";
				};
			};
			class Pants
			{
				values[]=
				{
					"Normal",
					"OD",
					"Tan"
				};
				class Normal
				{
					label="Normal";
				};
				class OD
				{
					label="Olive Drab Pants";
				};
				class Tan
				{
					label="Tan";
				};
			};
		};
		class VSM_MAS
		{
			label="Massif Combat Unifrom [VSM]";
			author="Killa567";
			options[]=
			{
				"camo",
				"Pants",
				"Top",
				"Sleeves"
			};
			class camo
			{
				values[]=
				{
					"AOR1",
					"DTS",
					"M81",
					"Multicam",
					"MulticamT",
					"OCP",
					"PJH",
					"ALP",
					"AOR2",
					"OD",
					"TAN"
				};
				class AOR1
				{
					label="AOR1";
					image="TSB_ACEAX_Compat\data\AOR1.paa";
				};
				class DTS
				{
					label="Desert Tiger";
					image="TSB_ACEAX_Compat\data\DTS.paa";
				};
				class M81
				{
					label="M81";
					image="TSB_ACEAX_Compat\data\M81.paa";
				};
				class Multicam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class MulticamT
				{
					label="Multicam Tropic";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class OCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP.paa";
				};
				class PJH
				{
					label="Project Honor";
					image="TSB_ACEAX_Compat\data\PJH.paa";
				};
				class ALP
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
			};
			class Pants
			{
				values[]=
				{
					"Normal",
					"OD",
					"Tan"
				};
				class Normal
				{
					label="Normal";
				};
				class OD
				{
					label="Olive";
				};
				class TAN
				{
					label="Tan";
				};
			};
			class Top
			{
				values[]=
				{
					"Normal",
					"OD",
					"Tan",
					"Tee"
				};
				class Normal
				{
					label="Normal";
				};
				class OD
				{
					label="Olive";
				};
				class TAN
				{
					label="Tan";
				};
				class Tee
				{
					label="T-Shirt";
				};
			};
			class Sleeves
			{
				values[]=
				{
					"Full",
					"Rolled"
				};
				class Full
				{
					label="Full";
					actionLabel="Roll Sleeves";
					changeingame=1;
				};
				class Rolled
				{
					label="Rolled";
					actionLabel="Roll Sleeves";
					icon="\z\aceax\addons\gearinfo\data\ui\sleeves_half.paa";
					changeingame=1;
				};
			};
		};
		class VSM_G3
		{
			label="Crye G3s [VSM]";
			author="Killa567";
			options[]=
			{
				"camo",
				"Pants",
				"Top",
				"Sleeves"
			};
			class camo
			{
				values[]=
				{
					"AOR1",
					"DTS",
					"M81",
					"Multicam",
					"MulticamT",
					"OCP",
					"PJH",
					"ALP",
					"AOR2",
					"OD",
					"TAN",
					"Grey",
					"MCB",
					"SCORP",
					"ALPV2",
					"MCBV2",
					"ARD"
				};
				class AOR1
				{
					label="AOR1";
					image="TSB_ACEAX_Compat\data\AOR1.paa";
				};
				class DTS
				{
					label="Desert Tiger";
					image="TSB_ACEAX_Compat\data\DTS.paa";
				};
				class M81
				{
					label="M81";
					image="TSB_ACEAX_Compat\data\M81.paa";
				};
				class Multicam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class MulticamT
				{
					label="Multicam Tropic";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class OCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP.paa";
				};
				class PJH
				{
					label="Project Honor";
					image="TSB_ACEAX_Compat\data\PJH.paa";
				};
				class ALP
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class Grey
				{
					label="Grey";
					image="TSB_ACEAX_Compat\data\Grey.paa";
				};
				class MCB
				{
					label="MC Black";
					image="TSB_ACEAX_Compat\data\MCB.paa";
				};
				class SCORP
				{
					label="Scorpion";
					image="TSB_ACEAX_Compat\data\SCORP.paa";
				};
				class MCBV2
				{
					label="MC Black V2";
					image="TSB_ACEAX_Compat\data\MCB.paa";
				};
				class ALPV2
				{
					label="Alpine V2";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class ARD
				{
					label="Arid";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
			};
			class Pants
			{
				values[]=
				{
					"Normal",
					"OD",
					"TAN",
					"Grey"
				};
				class Normal
				{
					label="Normal";
				};
				class OD
				{
					label="Olive";
				};
				class TAN
				{
					label="Tan";
				};
				class Grey
				{
					label="Grey";
				};
			};
			class Top
			{
				values[]=
				{
					"Normal",
					"OD",
					"TAN",
					"Tee",
					"Grey",
					"BBU",
					"BlBU",
					"BrBU",
					"TBU"
				};
				class Normal
				{
					label="Normal";
				};
				class OD
				{
					label="Olive";
				};
				class TAN
				{
					label="Tan";
				};
				class Tee
				{
					label="T-Shirt";
				};
				class Grey
				{
					label="Grey";
				};
				class BBU
				{
					label="Black Button Up";
				};
				class BlBU
				{
					label="Blue Button Up";
				};
				class BrBU
				{
					label="Brow Button Up";
				};
				class TBU
				{
					label="Tan Button Up";
				};
			};
			class Sleeves
			{
				values[]=
				{
					"Full",
					"Rolled"
				};
				class Full
				{
					label="Full";
					actionLabel="Roll Sleeves";
					changeingame=1;
				};
				class Rolled
				{
					label="Rolled";
					actionLabel="Roll Sleeves";
					icon="\z\aceax\addons\gearinfo\data\ui\sleeves_half.paa";
					changeingame=1;
				};
			};
		};
		class VSM_DT_FAPC
		{
			label="DT FAPC [VSM]";
			author="Killa567";
			options[]=
			{
				"camo",
				"Pouches"
			};
			class camo
			{
				values[]=
				{
					"AOR1",
					"DTS",
					"M81",
					"Multicam",
					"MulticamT",
					"OCP",
					"PJH",
					"ALP",
					"AOR2",
					"OD",
					"TAN",
					"MCB",
					"ARD"
				};
				class AOR1
				{
					label="AOR1";
					image="TSB_ACEAX_Compat\data\AOR1.paa";
				};
				class DTS
				{
					label="Desert Tiger";
					image="TSB_ACEAX_Compat\data\DTS.paa";
				};
				class M81
				{
					label="M81";
					image="TSB_ACEAX_Compat\data\M81.paa";
				};
				class Multicam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class MulticamT
				{
					label="Multicam Tropic";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class OCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP.paa";
				};
				class PJH
				{
					label="Project Honor";
					image="TSB_ACEAX_Compat\data\PJH.paa";
				};
				class ALP
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class MCB
				{
					label="MC Black";
					image="TSB_ACEAX_Compat\data\MCB.paa";
				};
				class ARD
				{
					label="Arid";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
			};
			class Pouches
			{
				values[]=
				{
					"Breacher",
					"Gunner",
					"Operator"
				};
				class Breacher
				{
					label="Breacher";
				};
				class Gunner
				{
					label="Gunner";
				};
				class Operator
				{
					label="Operator";
				};
			};
		};
		class VSM_LBT_ARM
		{
			label="LBT Armatus [VSM]";
			author="Killa567";
			options[]=
			{
				"camo",
				"Pouches"
			};
			class camo
			{
				values[]=
				{
					"AOR1",
					"DTS",
					"M81",
					"Multicam",
					"MulticamT",
					"OCP",
					"PJH",
					"ALP",
					"AOR2",
					"OD",
					"TAN",
					"ARD"
				};
				class AOR1
				{
					label="AOR1";
					image="TSB_ACEAX_Compat\data\AOR1.paa";
				};
				class DTS
				{
					label="Desert Tiger";
					image="TSB_ACEAX_Compat\data\DTS.paa";
				};
				class M81
				{
					label="M81";
					image="TSB_ACEAX_Compat\data\M81.paa";
				};
				class Multicam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class MulticamT
				{
					label="Multicam Tropic";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class OCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP.paa";
				};
				class PJH
				{
					label="Project Honor";
					image="TSB_ACEAX_Compat\data\PJH.paa";
				};
				class ALP
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class ARD
				{
					label="Arid";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
			};
			class Pouches
			{
				values[]=
				{
					"Breacher",
					"Gunner",
					"Operator"
				};
				class Breacher
				{
					label="Breacher";
				};
				class Gunner
				{
					label="Gunner";
				};
				class Operator
				{
					label="Operator";
				};
			};
		};
		class VSM_LBT6094
		{
			label="LBT6094 [VSM]";
			author="Killa567";
			options[]=
			{
				"camo",
				"Pouches"
			};
			class camo
			{
				values[]=
				{
					"AOR1",
					"DTS",
					"M81",
					"Multicam",
					"MulticamT",
					"OCP",
					"PJH",
					"ALP",
					"AOR2",
					"OD",
					"TAN",
					"MCB",
					"ARD"
				};
				class AOR1
				{
					label="AOR1";
					image="TSB_ACEAX_Compat\data\AOR1.paa";
				};
				class DTS
				{
					label="Desert Tiger";
					image="TSB_ACEAX_Compat\data\DTS.paa";
				};
				class M81
				{
					label="M81";
					image="TSB_ACEAX_Compat\data\M81.paa";
				};
				class Multicam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class MulticamT
				{
					label="Multicam Tropic";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class OCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP.paa";
				};
				class PJH
				{
					label="Project Honor";
					image="TSB_ACEAX_Compat\data\PJH.paa";
				};
				class ALP
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class MCB
				{
					label="MC Black";
					image="TSB_ACEAX_Compat\data\MCB.paa";
				};
				class ARD
				{
					label="Arid";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
			};
			class Pouches
			{
				values[]=
				{
					"Breacher",
					"Gunner",
					"Operator"
				};
				class Breacher
				{
					label="Breacher";
				};
				class Gunner
				{
					label="Gunner";
				};
				class Operator
				{
					label="Operator";
				};
			};
		};
		class VSM_Paraclete
		{
			label="Paraclete [VSM]";
			author="Killa567";
			options[]=
			{
				"camo",
				"Pouches"
			};
			class camo
			{
				values[]=
				{
					"AOR1",
					"DTS",
					"M81",
					"Multicam",
					"MulticamT",
					"OCP",
					"PJH",
					"ALP",
					"AOR2",
					"OD",
					"TAN",
					"MCB",
					"ARD"
				};
				class AOR1
				{
					label="AOR1";
					image="TSB_ACEAX_Compat\data\AOR1.paa";
				};
				class DTS
				{
					label="Desert Tiger";
					image="TSB_ACEAX_Compat\data\DTS.paa";
				};
				class M81
				{
					label="M81";
					image="TSB_ACEAX_Compat\data\M81.paa";
				};
				class Multicam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class MulticamT
				{
					label="Multicam Tropic";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class OCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP.paa";
				};
				class PJH
				{
					label="Project Honor";
					image="TSB_ACEAX_Compat\data\PJH.paa";
				};
				class ALP
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class MCB
				{
					label="MC Black";
					image="TSB_ACEAX_Compat\data\MCB.paa";
				};
				class ARD
				{
					label="Arid";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
			};
			class Pouches
			{
				values[]=
				{
					"Breacher",
					"Gunner",
					"Operator"
				};
				class Breacher
				{
					label="Breacher";
				};
				class Gunner
				{
					label="Gunner";
				};
				class Operator
				{
					label="Operator";
				};
			};
		};
		class VSM_PC
		{
			label="Plate Carrier [VSM]";
			author="Killa567";
			options[]=
			{
				"camo",
				"Pouches"
			};
			class camo
			{
				values[]=
				{
					"TAN",
					"OD"
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
			};
			class Pouches
			{
				values[]=
				{
					"Normal",
					"Light",
					"Special"
				};
				class Normal
				{
					label="Normal";
				};
				class Light
				{
					label="Light";
				};
				class Special
				{
					label="Special";
				};
			};
		};
		class VSM_IOTV
		{
			label="IOTV [VSM]";
			author="Killa567";
			options[]=
			{
				"camo",
				"Pouches"
			};
			class camo
			{
				values[]=
				{
					"TAN",
					"OD"
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
			};
			class Pouches
			{
				values[]=
				{
					"Normal",
					"Light"
				};
				class Normal
				{
					label="Normal";
				};
				class Light
				{
					label="Light";
				};
			};
		};
		class VSM_MBSS
		{
			label="MBSS [VSM]";
			author="Killa567";
			options[]=
			{
				"camo",
				"PACA"
			};
			class camo
			{
				values[]=
				{
					"DTS",
					"BLK",
					"WTF",
					"ALP",
					"AOR2",
					"OD",
					"TAN",
					"MCB",
					"ARD",
					"CB"
				};
				class DTS
				{
					label="Desert Tiger";
					image="TSB_ACEAX_Compat\data\DTS.paa";
				};
				class CB
				{
					label="Coyote";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class ALP
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class MCB
				{
					label="MC Black";
					image="TSB_ACEAX_Compat\data\MCB.paa";
				};
				class ARD
				{
					label="Arid";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class BLK
				{
					label="MC Black";
					image="TSB_ACEAX_Compat\data\MCB.paa";
				};
				class WTF
				{
					label="WTF";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
			};
			class PACA
			{
				values[]=
				{
					"Yes",
					"No"
				};
				class Yes
				{
					label="Yes";
				};
				class No
				{
					label="No";
				};
			};
		};
		class VSM_1961A
		{
			label="LBT 1961A [VSM]";
			author="Killa567";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[]=
				{
					"DTS",
					"BLK",
					"ALP",
					"AOR2",
					"OD",
					"TAN",
					"ARD",
					"GRN"
				};
				class DTS
				{
					label="Desert Tiger";
					image="TSB_ACEAX_Compat\data\DTS.paa";
				};
				class ALP
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class ARD
				{
					label="Arid";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class BLK
				{
					label="MC Black";
					image="TSB_ACEAX_Compat\data\MCB.paa";
				};
				class GRN
				{
					label="Green";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
			};
		};
		class VSM_MICH
		{
			label="MICH 2000 [VSM]";
			author="Killa567";
			options[]=
			{
				"camo",
				"Type"
			};
			class camo
			{
				values[]=
				{
					"AOR1",
					"M81",
					"Multicam",
					"MulticamT",
					"OCP",
					"PJH",
					"OD",
					"TAN",
					"ODS",
					"TANS"
				};
				class AOR1
				{
					label="AOR1";
					image="TSB_ACEAX_Compat\data\AOR1.paa";
				};
				class M81
				{
					label="M81";
					image="TSB_ACEAX_Compat\data\M81.paa";
				};
				class Multicam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class MulticamT
				{
					label="Multicam Tropic";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class OCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP.paa";
				};
				class PJH
				{
					label="Project Honor";
					image="TSB_ACEAX_Compat\data\PJH.paa";
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class ODS
				{
					label="OD Spray";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class TANS
				{
					label="Tan Spray";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
			};
			class Type
			{
				values[]=
				{
					"One",
					"Two"
				};
				class One
				{
					label="One";
				};
				class Two
				{
					label="Two";
				};
			};
		};
		class VSM_ECH
		{
			label="ECH [VSM]";
			author="Killa567";
			options[]=
			{
				"camo",
				"Type"
			};
			class camo
			{
				values[]=
				{
					"OD",
					"TAN"
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
			};
			class Type
			{
				values[]=
				{
					"Light",
					"Normal"
				};
				class Light
				{
					label="Light";
				};
				class Normal
				{
					label="Normal";
				};
			};
		};
		class VSM_OPS
		{
			label="Opscore [VSM]";
			author="Killa567";
			options[]=
			{
				"camo",
				"Type"
			};
			class camo
			{
				values[]=
				{
					"AOR1",
					"M81",
					"Multicam",
					"MulticamT",
					"OCP",
					"PJH",
					"ALP",
					"OD",
					"TAN",
					"Grey",
					"MCB",
					"BLK",
					"WHT",
					"AOR2",
					"ARD",
					"ODS",
					"TANS"
				};
				class AOR1
				{
					label="AOR1";
					image="TSB_ACEAX_Compat\data\AOR1.paa";
				};
				class M81
				{
					label="M81";
					image="TSB_ACEAX_Compat\data\M81.paa";
				};
				class Multicam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class MulticamT
				{
					label="Multicam Tropic";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class OCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP.paa";
				};
				class PJH
				{
					label="Project Honor";
					image="TSB_ACEAX_Compat\data\PJH.paa";
				};
				class ALP
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class Grey
				{
					label="Grey";
					image="TSB_ACEAX_Compat\data\Grey.paa";
				};
				class MCB
				{
					label="MC Black";
					image="TSB_ACEAX_Compat\data\MCB.paa";
				};
				class BLK
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\blk.paa";
				};
				class WHT
				{
					label="White";
					image="TSB_ACEAX_Compat\data\wht.paa";
				};
				class ARD
				{
					label="Arid";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
				class ODS
				{
					label="OD Spray";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class TANS
				{
					label="Tan Spray";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
			};
			class Type
			{
				values[]=
				{
					"One",
					"Two"
				};
				class One
				{
					label="One";
				};
				class Two
				{
					label="Two";
				};
			};
		};
		class VSM_MODH
		{
			label="Modular Helmet [VSM]";
			author="Killa567";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[]=
				{
					"DTS",
					"ALP",
					"AOR2",
					"ARD"
				};
				class DTS
				{
					label="Desert Tiger";
					image="TSB_ACEAX_Compat\data\DTS.paa";
				};
				class ALP
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class ARD
				{
					label="Arid";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
			};
		};
		class VSM_SHE
		{
			label="Shemagh [VSM]";
			author="Killa567";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[]=
				{
					"OD",
					"TAN",
					"ODS",
					"TANS"
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class ODS
				{
					label="OD Pattern";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class TANS
				{
					label="Tan Pattern";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
			};
		};
		class VSM_CAP
		{
			label="CAP [VSM]";
			author="Killa567";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[]=
				{
					"AOR1",
					"DTS",
					"M81",
					"Multicam",
					"MulticamT",
					"OCP",
					"PJH",
					"ALP",
					"AOR2",
					"ARD"
				};
				class AOR1
				{
					label="AOR1";
					image="TSB_ACEAX_Compat\data\AOR1.paa";
				};
				class DTS
				{
					label="Desert Tiger";
					image="TSB_ACEAX_Compat\data\DTS.paa";
				};
				class M81
				{
					label="M81";
					image="TSB_ACEAX_Compat\data\M81.paa";
				};
				class Multicam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class MulticamT
				{
					label="Multicam Tropic";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class OCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP.paa";
				};
				class PJH
				{
					label="Project Honor";
					image="TSB_ACEAX_Compat\data\PJH.paa";
				};
				class ALP
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class ARD
				{
					label="Arid";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
			};
		};
		class VSM_Boonie
		{
			label="Boonie [VSM]";
			author="Killa567";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[]=
				{
					"AOR1",
					"DTS",
					"M81",
					"Multicam",
					"MulticamT",
					"OCP",
					"PJH",
					"AOR2",
					"ARD"
				};
				class AOR1
				{
					label="AOR1";
					image="TSB_ACEAX_Compat\data\AOR1.paa";
				};
				class DTS
				{
					label="Desert Tiger";
					image="TSB_ACEAX_Compat\data\DTS.paa";
				};
				class M81
				{
					label="M81";
					image="TSB_ACEAX_Compat\data\M81.paa";
				};
				class Multicam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class MulticamT
				{
					label="Multicam Tropic";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class OCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP.paa";
				};
				class PJH
				{
					label="Project Honor";
					image="TSB_ACEAX_Compat\data\PJH.paa";
				};
				class ARD
				{
					label="Arid";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
			};
		};
		class VSM_Bowman
		{
			label="Bowman [VSM]";
			author="Killa567";
			options[]=
			{
				"camo",
				"Balaclava"
			};
			class camo
			{
				values[]=
				{
					"OD",
					"TAN",
					"BLK",
					"None"
				};
				class None
				{
					label="None";
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class BLK
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\blk.paa";
				};
			};
			class Balaclava
			{
				values[]=
				{
					"Yes",
					"No"
				};
				class Yes
				{
					label="Yes";
				};
				class No
				{
					label="No";
				};
			};
		};
		class VSM_Beanie
		{
			label="Bowman [VSM]";
			author="Killa567";
			options[]=
			{
				"camo",
				"Balaclava"
			};
			class camo
			{
				values[]=
				{
					"OD",
					"TAN",
					"BLK"
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class BLK
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\blk.paa";
				};
			};
		};
		class VSM_BHAT
		{
			label="Backwards Hat [VSM]";
			author="Killa567";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[]=
				{
					"OD",
					"TAN",
					"BLK",
					"CMMG",
					"ION",
					"SERO",
					"US"
				};
				class CMMG
				{
					label="CMMG";
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class BLK
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\blk.paa";
				};
				class SERO
				{
					label="Sero";
				};
				class ION
				{
					label="ION";
				};
				class US
				{
					label="US";
				};
			};
		};
	};
	class CfgVehicles
	{
		class VSM_CAR
		{
			label="Carryall [VSM]";
			author="Killa567";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[]=
				{
					"AOR1",
					"DTS",
					"M81",
					"Multicam",
					"MulticamT",
					"OCP",
					"PJH",
					"ALP",
					"AOR2",
					"OD",
					"TAN",
					"ARD",
					"MCB"
				};
				class AOR1
				{
					label="AOR1";
					image="TSB_ACEAX_Compat\data\AOR1.paa";
				};
				class DTS
				{
					label="Desert Tiger";
					image="TSB_ACEAX_Compat\data\DTS.paa";
				};
				class M81
				{
					label="M81";
					image="TSB_ACEAX_Compat\data\M81.paa";
				};
				class Multicam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class MulticamT
				{
					label="Multicam Tropic";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class OCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP.paa";
				};
				class PJH
				{
					label="Project Honor";
					image="TSB_ACEAX_Compat\data\PJH.paa";
				};
				class ALP
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class ARD
				{
					label="Arid";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
				class MCB
				{
					label="MC Black";
					image="TSB_ACEAX_Compat\data\MCB.paa";
				};
			};
		};
		class VSM_KIT
		{
			label="Kitbag [VSM]";
			author="Killa567";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[]=
				{
					"AOR1",
					"DTS",
					"M81",
					"Multicam",
					"MulticamT",
					"OCP",
					"PJH",
					"ALP",
					"AOR2",
					"OD",
					"TAN",
					"ARD",
					"MCB"
				};
				class AOR1
				{
					label="AOR1";
					image="TSB_ACEAX_Compat\data\AOR1.paa";
				};
				class DTS
				{
					label="Desert Tiger";
					image="TSB_ACEAX_Compat\data\DTS.paa";
				};
				class M81
				{
					label="M81";
					image="TSB_ACEAX_Compat\data\M81.paa";
				};
				class Multicam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class MulticamT
				{
					label="Multicam Tropic";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class OCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP.paa";
				};
				class PJH
				{
					label="Project Honor";
					image="TSB_ACEAX_Compat\data\PJH.paa";
				};
				class ALP
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class ARD
				{
					label="Arid";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
				class MCB
				{
					label="MC Black";
					image="TSB_ACEAX_Compat\data\MCB.paa";
				};
			};
		};
		class VSM_Com
		{
			label="Compact Bag [VSM]";
			author="Killa567";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[]=
				{
					"AOR1",
					"DTS",
					"M81",
					"Multicam",
					"MulticamT",
					"OCP",
					"PJH",
					"ALP",
					"AOR2",
					"OD",
					"TAN",
					"ARD",
					"MCB"
				};
				class AOR1
				{
					label="AOR1";
					image="TSB_ACEAX_Compat\data\AOR1.paa";
				};
				class DTS
				{
					label="Desert Tiger";
					image="TSB_ACEAX_Compat\data\DTS.paa";
				};
				class M81
				{
					label="M81";
					image="TSB_ACEAX_Compat\data\M81.paa";
				};
				class Multicam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class MulticamT
				{
					label="Multicam Tropic";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class OCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP.paa";
				};
				class PJH
				{
					label="Project Honor";
					image="TSB_ACEAX_Compat\data\PJH.paa";
				};
				class ALP
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class TAN
				{
					label="Tan";
					image="TSB_ACEAX_Compat\data\Tan.paa";
				};
				class OD
				{
					label="OD";
					image="TSB_ACEAX_Compat\data\OD.paa";
				};
				class ARD
				{
					label="Arid";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
				class MCB
				{
					label="MC Black";
					image="TSB_ACEAX_Compat\data\MCB.paa";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class Uniform_base;
		class ItemCore;
		class Vest_Camo_Base;
		class VSM_AOR1_BDU_Camo
		{
			model="VSM_BDU";
			camo="AOR1";
			Pants="Normal";
		};
		class VSM_AOR1_BDU_tan_pants_Camo
		{
			model="VSM_BDU";
			camo="AOR1";
			Pants="Tan";
		};
		class VSM_AOR1_BDU_od_pants_Camo
		{
			model="VSM_BDU";
			camo="AOR1";
			Pants="OD";
		};
		class DTS_BDU_Camo
		{
			model="VSM_BDU";
			camo="DTS";
			Pants="Normal";
		};
		class VSM_M81_BDU_Camo
		{
			model="VSM_BDU";
			camo="M81";
			Pants="Normal";
		};
		class VSM_M81_BDU_tan_pants_Camo
		{
			model="VSM_BDU";
			camo="M81";
			Pants="Tan";
		};
		class VSM_M81_BDU_od_pants_Camo
		{
			model="VSM_BDU";
			camo="M81";
			Pants="OD";
		};
		class VSM_Multicam_BDU_Camo
		{
			model="VSM_BDU";
			camo="Multicam";
			Pants="Normal";
		};
		class VSM_Multicam_BDU_tan_pants_Camo
		{
			model="VSM_BDU";
			camo="Multicam";
			Pants="Tan";
		};
		class VSM_Multicam_BDU_od_pants_Camo
		{
			model="VSM_BDU";
			camo="Multicam";
			Pants="OD";
		};
		class VSM_MulticamTropic_BDU_Camo
		{
			model="VSM_BDU";
			camo="MulticamT";
			Pants="Normal";
		};
		class VSM_MulticamTropic_BDU_tan_pants_Camo
		{
			model="VSM_BDU";
			camo="MulticamT";
			Pants="Tan";
		};
		class VSM_MulticamTropic_BDU_od_pants_Camo
		{
			model="VSM_BDU";
			camo="MulticamT";
			Pants="OD";
		};
		class VSM_OCP_BDU_Camo
		{
			model="VSM_BDU";
			camo="OCP";
			Pants="Normal";
		};
		class VSM_OCP_BDU_tan_pants_Camo
		{
			model="VSM_BDU";
			camo="OCP";
			Pants="Tan";
		};
		class VSM_OCP_BDU_od_pants_Camo
		{
			model="VSM_BDU";
			camo="OCP";
			Pants="OD";
		};
		class VSM_ProjectHonor_BDU_Camo
		{
			model="VSM_BDU";
			camo="PJH";
			Pants="Normal";
		};
		class VSM_ProjectHonor_BDU_tan_pants_Camo
		{
			model="VSM_BDU";
			camo="PJH";
			Pants="Tan";
		};
		class VSM_ProjectHonor_BDU_od_pants_Camo
		{
			model="VSM_BDU";
			camo="PJH";
			Pants="OD";
		};
		class Alpine_Massif_Camo
		{
			model="VSM_MAS";
			camo="ALP";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_AOR1_od_pants_Camo
		{
			model="VSM_MAS";
			camo="AOR1";
			Pants="OD";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_AOR1_od_shirt_Camo
		{
			model="VSM_MAS";
			camo="AOR1";
			Pants="Normal";
			Top="OD";
			Sleeves="Full";
		};
		class VSM_AOR1_tan_pants_Camo
		{
			model="VSM_MAS";
			camo="AOR1";
			Pants="Tan";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_AOR1_tan_shirt_Camo
		{
			model="VSM_MAS";
			camo="AOR1";
			Pants="Normal";
			Top="TAN";
			Sleeves="Full";
		};
		class VSM_AOR1_Camo
		{
			model="VSM_MAS";
			camo="AOR1";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class AOR2_camo
		{
			model="VSM_MAS";
			camo="AOR2";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class DTS_Massif_Camo
		{
			model="VSM_MAS";
			camo="DTS";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_M81_od_pants_Camo
		{
			model="VSM_MAS";
			camo="M81";
			Pants="OD";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_M81_od_shirt_Camo
		{
			model="VSM_MAS";
			camo="M81";
			Pants="Normal";
			Top="OD";
			Sleeves="Full";
		};
		class VSM_M81_tan_pants_Camo
		{
			model="VSM_MAS";
			camo="M81";
			Pants="Tan";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_M81_tan_shirt_Camo
		{
			model="VSM_MAS";
			camo="M81";
			Pants="Normal";
			Top="TAN";
			Sleeves="Full";
		};
		class VSM_M81_Camo
		{
			model="VSM_MAS";
			camo="M81";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_Multicam_od_pants_Camo
		{
			model="VSM_MAS";
			camo="Multicam";
			Pants="OD";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_Multicam_od_shirt_Camo
		{
			model="VSM_MAS";
			camo="Multicam";
			Pants="Normal";
			Top="OD";
			Sleeves="Full";
		};
		class VSM_Multicam_tan_pants_Camo
		{
			model="VSM_MAS";
			camo="Multicam";
			Pants="Tan";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_Multicam_tan_shirt_Camo
		{
			model="VSM_MAS";
			camo="Multicam";
			Pants="Normal";
			Top="TAN";
			Sleeves="Full";
		};
		class VSM_Multicam_Camo
		{
			model="VSM_MAS";
			camo="Multicam";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_MulticamTropic_od_pants_Camo
		{
			model="VSM_MAS";
			camo="MulticamT";
			Pants="OD";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_MulticamTropic_od_shirt_Camo
		{
			model="VSM_MAS";
			camo="MulticamT";
			Pants="Normal";
			Top="OD";
			Sleeves="Full";
		};
		class VSM_MulticamTropic_tan_pants_Camo
		{
			model="VSM_MAS";
			camo="MulticamT";
			Pants="Tan";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_MulticamTropic_tan_shirt_Camo
		{
			model="VSM_MAS";
			camo="MulticamT";
			Pants="Normal";
			Top="TAN";
			Sleeves="Full";
		};
		class VSM_MulticamTropic_Camo
		{
			model="VSM_MAS";
			camo="MulticamT";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OCP_od_pants_Camo
		{
			model="VSM_MAS";
			camo="OCP";
			Pants="OD";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OCP_od_shirt_Camo
		{
			model="VSM_MAS";
			camo="OCP";
			Pants="Normal";
			Top="OD";
			Sleeves="Full";
		};
		class VSM_OCP_tan_pants_Camo
		{
			model="VSM_MAS";
			camo="OCP";
			Pants="Tan";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OCP_tan_shirt_Camo
		{
			model="VSM_MAS";
			camo="OCP";
			Pants="Normal";
			Top="TAN";
			Sleeves="Full";
		};
		class VSM_OCP_Camo
		{
			model="VSM_MAS";
			camo="OCP";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OGA_od_pants_Camo
		{
			model="VSM_MAS";
			camo="TAN";
			Pants="OD";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OGA_Camo
		{
			model="VSM_MAS";
			camo="TAN";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OGA_od_tan_pants_Camo
		{
			model="VSM_MAS";
			camo="OD";
			Pants="Tan";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OGA_od_Camo
		{
			model="VSM_MAS";
			camo="OD";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_od_pants_Camo
		{
			model="VSM_MAS";
			camo="PJH";
			Pants="OD";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_od_shirt_Camo
		{
			model="VSM_MAS";
			camo="PHJ";
			Pants="Normal";
			Top="OD";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_tan_pants_Camo
		{
			model="VSM_MAS";
			camo="PJH";
			Pants="Tan";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_tan_shirt_Camo
		{
			model="VSM_MAS";
			camo="PJH";
			Pants="Normal";
			Top="TAN";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_Camo
		{
			model="VSM_MAS";
			camo="PJH";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class Alpine_Massif_Camo_SS
		{
			model="VSM_MAS";
			camo="ALP";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_AOR1_od_pants_Camo_SS
		{
			model="VSM_MAS";
			camo="AOR1";
			Pants="OD";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_AOR1_od_shirt_Camo_SS
		{
			model="VSM_MAS";
			camo="AOR1";
			Pants="Normal";
			Top="OD";
			Sleeves="Rolled";
		};
		class VSM_AOR1_tan_pants_Camo_SS
		{
			model="VSM_MAS";
			camo="AOR1";
			Pants="Tan";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_AOR1_tan_shirt_Camo_SS
		{
			model="VSM_MAS";
			camo="AOR1";
			Pants="Normal";
			Top="TAN";
			Sleeves="Rolled";
		};
		class VSM_AOR1_Camo_SS
		{
			model="VSM_MAS";
			camo="AOR1";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class AOR2_SS_camo
		{
			model="VSM_MAS";
			camo="AOR2";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class DTS_Massif_SS_Camo
		{
			model="VSM_MAS";
			camo="DTS";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_M81_od_pants_Camo_SS
		{
			model="VSM_MAS";
			camo="M81";
			Pants="OD";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_M81_od_shirt_Camo_SS
		{
			model="VSM_MAS";
			camo="M81";
			Pants="Normal";
			Top="OD";
			Sleeves="Rolled";
		};
		class VSM_M81_tan_pants_Camo_SS
		{
			model="VSM_MAS";
			camo="M81";
			Pants="Tan";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_M81_tan_shirt_Camo_SS
		{
			model="VSM_MAS";
			camo="M81";
			Pants="Normal";
			Top="TAN";
			Sleeves="Rolled";
		};
		class VSM_M81_Camo_SS
		{
			model="VSM_MAS";
			camo="M81";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_Multicam_od_pants_Camo_SS
		{
			model="VSM_MAS";
			camo="Multicam";
			Pants="OD";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_Multicam_od_shirt_Camo_SS
		{
			model="VSM_MAS";
			camo="Multicam";
			Pants="Normal";
			Top="OD";
			Sleeves="Rolled";
		};
		class VSM_Multicam_tan_pants_Camo_SS
		{
			model="VSM_MAS";
			camo="Multicam";
			Pants="Tan";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_Multicam_tan_shirt_Camo_SS
		{
			model="VSM_MAS";
			camo="Multicam";
			Pants="Normal";
			Top="TAN";
			Sleeves="Rolled";
		};
		class VSM_Multicam_Camo_SS
		{
			model="VSM_MAS";
			camo="Multicam";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_MulticamTropic_od_pants_Camo_SS
		{
			model="VSM_MAS";
			camo="MulticamT";
			Pants="OD";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_MulticamTropic_od_shirt_Camo_SS
		{
			model="VSM_MAS";
			camo="MulticamT";
			Pants="Normal";
			Top="OD";
			Sleeves="Rolled";
		};
		class VSM_MulticamTropic_tan_pants_Camo_SS
		{
			model="VSM_MAS";
			camo="MulticamT";
			Pants="Tan";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_MulticamTropic_tan_shirt_Camo_SS
		{
			model="VSM_MAS";
			camo="MulticamT";
			Pants="Normal";
			Top="TAN";
			Sleeves="Rolled";
		};
		class VSM_MulticamTropic_Camo_SS
		{
			model="VSM_MAS";
			camo="MulticamT";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OCP_od_pants_Camo_SS
		{
			model="VSM_MAS";
			camo="OCP";
			Pants="OD";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OCP_od_shirt_Camo_SS
		{
			model="VSM_MAS";
			camo="OCP";
			Pants="Normal";
			Top="OD";
			Sleeves="Rolled";
		};
		class VSM_OCP_tan_pants_Camo_SS
		{
			model="VSM_MAS";
			camo="OCP";
			Pants="Tan";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OCP_tan_shirt_Camo_SS
		{
			model="VSM_MAS";
			camo="OCP";
			Pants="Normal";
			Top="Tee";
			Sleeves="Rolled";
		};
		class VSM_OCP_Camo_SS
		{
			model="VSM_MAS";
			camo="OCP";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OGA_od_pants_Camo_SS
		{
			model="VSM_MAS";
			camo="TAN";
			Pants="OD";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OGA_Camo_SS
		{
			model="VSM_MAS";
			camo="TAN";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OGA_od_tan_pants_Camo_SS
		{
			model="VSM_MAS";
			camo="OD";
			Pants="Tan";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OGA_od_Camo_SS
		{
			model="VSM_MAS";
			camo="OD";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_ProjectHonor_od_pants_Camo_SS
		{
			model="VSM_MAS";
			camo="PJH";
			Pants="OD";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_od_shirt_Camo_SS
		{
			model="VSM_MAS";
			camo="PHJ";
			Pants="Normal";
			Top="OD";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_tan_pants_Camo_SS
		{
			model="VSM_MAS";
			camo="PJH";
			Pants="Tan";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_tan_shirt_Camo_SS
		{
			model="VSM_MAS";
			camo="PJH";
			Pants="Normal";
			Top="TAN";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_Camo_SS
		{
			model="VSM_MAS";
			camo="PJH";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_AOR1_Camo_TShirt
		{
			model="VSM_MAS";
			camo="AOR1";
			Pants="Normal";
			Top="Tee";
			Sleeves="Full";
		};
		class AOR2_Camo_TShirt
		{
			model="VSM_MAS";
			camo="AOR2";
			Pants="Normal";
			Top="Tee";
			Sleeves="Full";
		};
		class VSM_M81_Camo_TShirt
		{
			model="VSM_MAS";
			camo="M81";
			Pants="Normal";
			Top="Tee";
			Sleeves="Full";
		};
		class VSM_Multicam_Camo_TShirt
		{
			model="VSM_MAS";
			camo="Multicam";
			Pants="Normal";
			Top="Tee";
			Sleeves="Full";
		};
		class VSM_MulticamTropic_Camo_TShirt
		{
			model="VSM_MAS";
			camo="MulticamT";
			Pants="Normal";
			Top="Tee";
			Sleeves="Full";
		};
		class VSM_OCP_Camo_TShirt
		{
			model="VSM_MAS";
			camo="OCP";
			Pants="Normal";
			Top="Tee";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_Camo_TShirt
		{
			model="VSM_MAS";
			camo="PJH";
			Pants="Normal";
			Top="Tee";
			Sleeves="Full";
		};
		class DTS_Crye_Camo
		{
			model="VSM_G3";
			camo="DTS";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class DTS_Crye_SS_Camo
		{
			model="VSM_G3";
			camo="DTS";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class Alpine_Crye_Camo
		{
			model="VSM_G3";
			camo="ALP";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_AOR1_Crye_grey_pants_Camo
		{
			model="VSM_G3";
			camo="AOR1";
			Pants="Grey";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_AOR1_Crye_grey_shirt_Camo
		{
			model="VSM_G3";
			camo="AOR1";
			Pants="Normal";
			Top="Grey";
			Sleeves="Full";
		};
		class VSM_AOR1_Crye_od_pants_Camo
		{
			model="VSM_G3";
			camo="AOR1";
			Pants="OD";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_AOR1_Crye_od_shirt_Camo
		{
			model="VSM_G3";
			camo="AOR1";
			Pants="Normal";
			Top="OD";
			Sleeves="Full";
		};
		class VSM_AOR1_Crye_tan_pants_Camo
		{
			model="VSM_G3";
			camo="AOR1";
			Pants="TAN";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_AOR1_Crye_tan_shirt_Camo
		{
			model="VSM_G3";
			camo="AOR1";
			Pants="Normal";
			Top="TAN";
			Sleeves="Full";
		};
		class VSM_AOR1_Crye_Camo
		{
			model="VSM_G3";
			camo="AOR1";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class AOR_2_Grey_Crye_Camo
		{
			model="VSM_G3";
			camo="AOR2";
			Pants="Normal";
			Top="OD";
			Sleeves="Full";
		};
		class AOR_2_Crye_Camo
		{
			model="VSM_G3";
			camo="AOR2";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class Arid_Arid_Camo
		{
			model="VSM_G3";
			camo="ARD";
			Pants="Normal";
			Top="TAN";
			Sleeves="Full";
		};
		class Arid_Crye_Camo
		{
			model="VSM_G3";
			camo="ARD";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_M81_Crye_grey_pants_Camo
		{
			model="VSM_G3";
			camo="M81";
			Pants="Grey";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_M81_Crye_grey_shirt_Camo
		{
			model="VSM_G3";
			camo="M81";
			Pants="Normal";
			Top="Grey";
			Sleeves="Full";
		};
		class VSM_M81_Crye_od_pants_Camo
		{
			model="VSM_G3";
			camo="M81";
			Pants="OD";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_M81_Crye_od_shirt_Camo
		{
			model="VSM_G3";
			camo="M81";
			Pants="Normal";
			Top="OD";
			Sleeves="Full";
		};
		class VSM_M81_Crye_tan_pants_Camo
		{
			model="VSM_G3";
			camo="M81";
			Pants="TAN";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_M81_Crye_tan_shirt_Camo
		{
			model="VSM_G3";
			camo="M81";
			Pants="Normal";
			Top="TAN";
			Sleeves="Full";
		};
		class VSM_M81_Crye_Camo
		{
			model="VSM_G3";
			camo="M81";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class Black_Black_Camo
		{
			model="VSM_G3";
			camo="MCBV2";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class black_Crye_Camo
		{
			model="VSM_G3";
			camo="MCB";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_Multicam_Crye_grey_pants_Camo
		{
			model="VSM_G3";
			camo="Multicam";
			Pants="Grey";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_Multicam_Crye_grey_shirt_Camo
		{
			model="VSM_G3";
			camo="Multicam";
			Pants="Normal";
			Top="Grey";
			Sleeves="Full";
		};
		class VSM_Multicam_Crye_od_pants_Camo
		{
			model="VSM_G3";
			camo="Multicam";
			Pants="OD";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_Multicam_Crye_od_shirt_Camo
		{
			model="VSM_G3";
			camo="Multicam";
			Pants="Normal";
			Top="OD";
			Sleeves="Full";
		};
		class VSM_Multicam_Crye_tan_pants_Camo
		{
			model="VSM_G3";
			camo="Multicam";
			Pants="TAN";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_Multicam_Crye_tan_shirt_Camo
		{
			model="VSM_G3";
			camo="Multicam";
			Pants="Normal";
			Top="TAN";
			Sleeves="Full";
		};
		class VSM_Multicam_Crye_Camo
		{
			model="VSM_G3";
			camo="Multicam";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_MulticamTropic_Crye_grey_pants_Camo
		{
			model="VSM_G3";
			camo="MulticamT";
			Pants="Grey";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_MulticamTropic_Crye_grey_shirt_Camo
		{
			model="VSM_G3";
			camo="MulticamT";
			Pants="Normal";
			Top="Grey";
			Sleeves="Full";
		};
		class VSM_MulticamTropic_Crye_od_pants_Camo
		{
			model="VSM_G3";
			camo="MulticamT";
			Pants="OD";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_MulticamTropic_Crye_od_shirt_Camo
		{
			model="VSM_G3";
			camo="MulticamT";
			Pants="Normal";
			Top="OD";
			Sleeves="Full";
		};
		class VSM_MulticamTropic_Crye_tan_pants_Camo
		{
			model="VSM_G3";
			camo="MulticamT";
			Pants="TAN";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_MulticamTropic_Crye_tan_shirt_Camo
		{
			model="VSM_G3";
			camo="MulticamT";
			Pants="Normal";
			Top="TAN";
			Sleeves="Full";
		};
		class VSM_MulticamTropic_Crye_Camo
		{
			model="VSM_G3";
			camo="MulticamT";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OCP_Crye_grey_pants_Camo
		{
			model="VSM_G3";
			camo="OCP";
			Pants="Grey";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OCP_Crye_grey_shirt_Camo
		{
			model="VSM_G3";
			camo="OCP";
			Pants="Normal";
			Top="Grey";
			Sleeves="Full";
		};
		class VSM_OCP_Crye_od_pants_Camo
		{
			model="VSM_G3";
			camo="OCP";
			Pants="OD";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OCP_Crye_od_shirt_Camo
		{
			model="VSM_G3";
			camo="OCP";
			Pants="Normal";
			Top="OD";
			Sleeves="Full";
		};
		class VSM_OCP_Crye_tan_pants_Camo
		{
			model="VSM_G3";
			camo="OCP";
			Pants="TAN";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OCP_Crye_tan_shirt_Camo
		{
			model="VSM_G3";
			camo="OCP";
			Pants="Normal";
			Top="TAN";
			Sleeves="Full";
		};
		class VSM_OCP_Crye_Camo
		{
			model="VSM_G3";
			camo="OCP";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OGA_Crye_Grey_pants_Camo
		{
			model="VSM_G3";
			camo="TAN";
			Pants="Grey";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OGA_Crye_od_pants_Camo
		{
			model="VSM_G3";
			camo="TAN";
			Pants="OD";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OGA_Crye_Camo
		{
			model="VSM_G3";
			camo="TAN";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OGA_Crye_grey_od_pants_Camo
		{
			model="VSM_G3";
			camo="Grey";
			Pants="OD";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OGA_Crye_grey_tan_pants_Camo
		{
			model="VSM_G3";
			camo="Grey";
			Pants="TAN";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OGA_Crye_grey_Camo
		{
			model="VSM_G3";
			camo="Grey";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OGA_Crye_od_grey_pants_Camo
		{
			model="VSM_G3";
			camo="OD";
			Pants="Grey";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OGA_Crye_od_tan_pants_Camo
		{
			model="VSM_G3";
			camo="OD";
			Pants="TAN";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_OGA_Crye_od_Camo
		{
			model="VSM_G3";
			camo="OD";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_Crye_grey_pants_Camo
		{
			model="VSM_G3";
			camo="PJH";
			Pants="Grey";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_Crye_grey_shirt_Camo
		{
			model="VSM_G3";
			camo="PJH";
			Pants="Normal";
			Top="Grey";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_Crye_od_pants_Camo
		{
			model="VSM_G3";
			camo="PJH";
			Pants="OD";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_Crye_od_shirt_Camo
		{
			model="VSM_G3";
			camo="PJH";
			Pants="Normal";
			Top="OD";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_Crye_tan_pants_Camo
		{
			model="VSM_G3";
			camo="PJH";
			Pants="TAN";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_Crye_tan_shirt_Camo
		{
			model="VSM_G3";
			camo="PJH";
			Pants="Normal";
			Top="TAN";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_Crye_Camo
		{
			model="VSM_G3";
			camo="PJH";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_Scorpion_Crye_grey_pants_Camo
		{
			model="VSM_G3";
			camo="SCORP";
			Pants="Grey";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_Scorpion_Crye_grey_shirt_Camo
		{
			model="VSM_G3";
			camo="SCORP";
			Pants="Normal";
			Top="Grey";
			Sleeves="Full";
		};
		class VSM_Scorpion_Crye_od_pants_Camo
		{
			model="VSM_G3";
			camo="SCORP";
			Pants="OD";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_Scorpion_Crye_od_shirt_Camo
		{
			model="VSM_G3";
			camo="SCORP";
			Pants="Normal";
			Top="OD";
			Sleeves="Full";
		};
		class VSM_Scorpion_Crye_tan_pants_Camo
		{
			model="VSM_G3";
			camo="SCORP";
			Pants="TAN";
			Top="Normal";
			Sleeves="Full";
		};
		class VSM_Scorpion_Crye_tan_shirt_Camo
		{
			model="VSM_G3";
			camo="SCORP";
			Pants="Normal";
			Top="TAN";
			Sleeves="Full";
		};
		class VSM_Scorpion_Crye_Camo
		{
			model="VSM_G3";
			camo="SCORP";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class Alpine_white_Crye_camo
		{
			model="VSM_G3";
			camo="ALPV2";
			Pants="Normal";
			Top="Normal";
			Sleeves="Full";
		};
		class Multicam_Alpine_casual_Camo
		{
			model="VSM_G3";
			camo="ALP";
			Pants="Normal";
			Top="BBU";
			Sleeves="Full";
		};
		class AOR_2_BlkCasual_camo
		{
			model="VSM_G3";
			camo="AOR2";
			Pants="Normal";
			Top="BBU";
			Sleeves="Full";
		};
		class Multicam_Arid_Black_casual_Camo
		{
			model="VSM_G3";
			camo="ARD";
			Pants="Normal";
			Top="BBU";
			Sleeves="Full";
		};
		class Multicam_black_casual_Camo
		{
			model="VSM_G3";
			camo="MCB";
			Pants="Normal";
			Top="BBU";
			Sleeves="Full";
		};
		class Multicam_Arid_Blue_casual_Camo
		{
			model="VSM_G3";
			camo="ARD";
			Pants="Normal";
			Top="BlBU";
			Sleeves="Full";
		};
		class AOR_2_BCasual_camo
		{
			model="VSM_G3";
			camo="AOR2";
			Pants="Normal";
			Top="BrBU";
			Sleeves="Full";
		};
		class VSM_AOR1_casual_Camo
		{
			model="VSM_G3";
			camo="AOR1";
			Pants="Normal";
			Top="BBU";
			Sleeves="Full";
		};
		class VSM_M81_casual_Camo
		{
			model="VSM_G3";
			camo="M81";
			Pants="Normal";
			Top="BBU";
			Sleeves="Full";
		};
		class VSM_Multicam_casual_Camo
		{
			model="VSM_G3";
			camo="Multicam";
			Pants="Normal";
			Top="BBU";
			Sleeves="Full";
		};
		class VSM_MulticamTropic_casual_Camo
		{
			model="VSM_G3";
			camo="MulticamT";
			Pants="Normal";
			Top="BBU";
			Sleeves="Full";
		};
		class VSM_OCP_casual_Camo
		{
			model="VSM_G3";
			camo="OCP";
			Pants="Normal";
			Top="BBU";
			Sleeves="Full";
		};
		class VSM_OGA_grey_casual_Camo
		{
			model="VSM_G3";
			camo="Grey";
			Pants="Normal";
			Top="BBU";
			Sleeves="Full";
		};
		class VSM_OGA_OD_casual_Camo
		{
			model="VSM_G3";
			camo="OD";
			Pants="Normal";
			Top="BBU";
			Sleeves="Full";
		};
		class VSM_OGA_tan_casual_Camo
		{
			model="VSM_G3";
			camo="TAN";
			Pants="Normal";
			Top="BBU";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_casual_Camo
		{
			model="VSM_G3";
			camo="PJH";
			Pants="Normal";
			Top="BBU";
			Sleeves="Full";
		};
		class VSM_Scorpion_casual_Camo
		{
			model="VSM_G3";
			camo="SCORP";
			Pants="Normal";
			Top="BBU";
			Sleeves="Full";
		};
		class AOR_2_TCasual_camo
		{
			model="VSM_G3";
			camo="AOR2";
			Pants="Normal";
			Top="TBU";
			Sleeves="Full";
		};
		class Multicam_Arid_casual_Camo
		{
			model="VSM_G3";
			camo="AOR2";
			Pants="Normal";
			Top="TBU";
			Sleeves="Full";
		};
		class Alpine_Crye_SS_Camo
		{
			model="VSM_G3";
			camo="ALP";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_AOR1_Crye_SS_grey_pants_Camo
		{
			model="VSM_G3";
			camo="AOR1";
			Pants="Grey";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_AOR1_Crye_SS_grey_shirt_Camo
		{
			model="VSM_G3";
			camo="AOR1";
			Pants="Normal";
			Top="Grey";
			Sleeves="Rolled";
		};
		class VSM_AOR1_Crye_SS_od_pants_Camo
		{
			model="VSM_G3";
			camo="AOR1";
			Pants="OD";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_AOR1_Crye_SS_od_shirt_Camo
		{
			model="VSM_G3";
			camo="AOR1";
			Pants="Normal";
			Top="OD";
			Sleeves="Rolled";
		};
		class VSM_AOR1_Crye_SS_tan_pants_Camo
		{
			model="VSM_G3";
			camo="AOR1";
			Pants="TAN";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_AOR1_Crye_SS_tan_shirt_Camo
		{
			model="VSM_G3";
			camo="AOR1";
			Pants="Normal";
			Top="TAN";
			Sleeves="Rolled";
		};
		class VSM_AOR1_Crye_SS_Camo
		{
			model="VSM_G3";
			camo="AOR1";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class AOR_2_GreySS_Crye_Camo
		{
			model="VSM_G3";
			camo="AOR2";
			Pants="Normal";
			Top="OD";
			Sleeves="Rolled";
		};
		class AOR_2_CryeSS_Camo
		{
			model="VSM_G3";
			camo="AOR2";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class Arid_Arid_SS_Camo
		{
			model="VSM_G3";
			camo="ARD";
			Pants="Normal";
			Top="TAN";
			Sleeves="Rolled";
		};
		class Arid_Crye_SS_Camo
		{
			model="VSM_G3";
			camo="ARD";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_M81_Crye_SS_grey_pants_Camo
		{
			model="VSM_G3";
			camo="M81";
			Pants="Grey";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_M81_Crye_SS_grey_shirt_Camo
		{
			model="VSM_G3";
			camo="M81";
			Pants="Normal";
			Top="Grey";
			Sleeves="Rolled";
		};
		class VSM_M81_Crye_SS_od_pants_Camo
		{
			model="VSM_G3";
			camo="M81";
			Pants="OD";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_M81_Crye_SS_od_shirt_Camo
		{
			model="VSM_G3";
			camo="M81";
			Pants="Normal";
			Top="OD";
			Sleeves="Rolled";
		};
		class VSM_M81_Crye_SS_tan_pants_Camo
		{
			model="VSM_G3";
			camo="M81";
			Pants="TAN";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_M81_Crye_SS_tan_shirt_Camo
		{
			model="VSM_G3";
			camo="M81";
			Pants="Normal";
			Top="TAN";
			Sleeves="Rolled";
		};
		class VSM_M81_Crye_SS_Camo
		{
			model="VSM_G3";
			camo="M81";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class Black_Black_SS_Camo
		{
			model="VSM_G3";
			camo="MCBV2";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class black_Crye_SS_Camo
		{
			model="VSM_G3";
			camo="MCB";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_Multicam_Crye_SS_grey_pants_Camo
		{
			model="VSM_G3";
			camo="Multicam";
			Pants="Grey";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_Multicam_Crye_SS_grey_shirt_Camo
		{
			model="VSM_G3";
			camo="Multicam";
			Pants="Normal";
			Top="Grey";
			Sleeves="Rolled";
		};
		class VSM_Multicam_Crye_SS_od_pants_Camo
		{
			model="VSM_G3";
			camo="Multicam";
			Pants="OD";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_Multicam_Crye_SS_od_shirt_Camo
		{
			model="VSM_G3";
			camo="Multicam";
			Pants="Normal";
			Top="OD";
			Sleeves="Rolled";
		};
		class VSM_Multicam_Crye_SS_tan_pants_Camo
		{
			model="VSM_G3";
			camo="Multicam";
			Pants="TAN";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_Multicam_Crye_SS_tan_shirt_Camo
		{
			model="VSM_G3";
			camo="Multicam";
			Pants="Normal";
			Top="TAN";
			Sleeves="Rolled";
		};
		class VSM_Multicam_Crye_SS_Camo
		{
			model="VSM_G3";
			camo="Multicam";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_MulticamTropic_Crye_SS_grey_pants_Camo
		{
			model="VSM_G3";
			camo="MulticamT";
			Pants="Grey";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_MulticamTropic_Crye_SS_grey_shirt_Camo
		{
			model="VSM_G3";
			camo="MulticamT";
			Pants="Normal";
			Top="Grey";
			Sleeves="Rolled";
		};
		class VSM_MulticamTropic_Crye_SS_od_pants_Camo
		{
			model="VSM_G3";
			camo="MulticamT";
			Pants="OD";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_MulticamTropic_Crye_SS_od_shirt_Camo
		{
			model="VSM_G3";
			camo="MulticamT";
			Pants="Normal";
			Top="OD";
			Sleeves="Rolled";
		};
		class VSM_MulticamTropic_Crye_SS_tan_pants_Camo
		{
			model="VSM_G3";
			camo="MulticamT";
			Pants="TAN";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_MulticamTropic_Crye_SS_tan_shirt_Camo
		{
			model="VSM_G3";
			camo="MulticamT";
			Pants="Normal";
			Top="TAN";
			Sleeves="Rolled";
		};
		class VSM_MulticamTropic_Crye_SS_Camo
		{
			model="VSM_G3";
			camo="MulticamT";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OCP_Crye_SS_grey_pants_Camo
		{
			model="VSM_G3";
			camo="OCP";
			Pants="Grey";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OCP_Crye_SS_grey_shirt_Camo
		{
			model="VSM_G3";
			camo="OCP";
			Pants="Normal";
			Top="Grey";
			Sleeves="Rolled";
		};
		class VSM_OCP_Crye_SS_od_pants_Camo
		{
			model="VSM_G3";
			camo="OCP";
			Pants="OD";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OCP_Crye_SS_od_shirt_Camo
		{
			model="VSM_G3";
			camo="OCP";
			Pants="Normal";
			Top="OD";
			Sleeves="Rolled";
		};
		class VSM_OCP_Crye_SS_tan_pants_Camo
		{
			model="VSM_G3";
			camo="OCP";
			Pants="TAN";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OCP_Crye_SS_tan_shirt_Camo
		{
			model="VSM_G3";
			camo="OCP";
			Pants="Normal";
			Top="TAN";
			Sleeves="Rolled";
		};
		class VSM_OCP_Crye_SS_Camo
		{
			model="VSM_G3";
			camo="OCP";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OGA_Crye_SS_Grey_pants_Camo
		{
			model="VSM_G3";
			camo="TAN";
			Pants="Grey";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OGA_Crye_SS_od_pants_Camo
		{
			model="VSM_G3";
			camo="TAN";
			Pants="OD";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OGA_Crye_SS_Camo
		{
			model="VSM_G3";
			camo="TAN";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OGA_Crye_SS_grey_od_pants_Camo
		{
			model="VSM_G3";
			camo="Grey";
			Pants="OD";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OGA_Crye_SS_grey_tan_pants_Camo
		{
			model="VSM_G3";
			camo="Grey";
			Pants="TAN";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OGA_Crye_SS_grey_Camo
		{
			model="VSM_G3";
			camo="Grey";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OGA_Crye_SS_od_grey_pants_Camo
		{
			model="VSM_G3";
			camo="OD";
			Pants="Grey";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OGA_Crye_SS_od_tan_pants_Camo
		{
			model="VSM_G3";
			camo="OD";
			Pants="TAN";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_OGA_Crye_SS_od_Camo
		{
			model="VSM_G3";
			camo="OD";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_ProjectHonor_Crye_SS_grey_pants_Camo
		{
			model="VSM_G3";
			camo="PJH";
			Pants="Grey";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_ProjectHonor_Crye_SS_grey_shirt_Camo
		{
			model="VSM_G3";
			camo="PJH";
			Pants="Normal";
			Top="Grey";
			Sleeves="Rolled";
		};
		class VSM_ProjectHonor_Crye_SS_od_pants_Camo
		{
			model="VSM_G3";
			camo="PJH";
			Pants="OD";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_ProjectHonor_Crye_SS_od_shirt_Camo
		{
			model="VSM_G3";
			camo="PJH";
			Pants="Normal";
			Top="OD";
			Sleeves="Rolled";
		};
		class VSM_ProjectHonor_Crye_SS_tan_pants_Camo
		{
			model="VSM_G3";
			camo="PJH";
			Pants="TAN";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_ProjectHonor_Crye_SS_tan_shirt_Camo
		{
			model="VSM_G3";
			camo="PJH";
			Pants="Normal";
			Top="TAN";
			Sleeves="Rolled";
		};
		class VSM_ProjectHonor_Crye_SS_Camo
		{
			model="VSM_G3";
			camo="PJH";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_Scorpion_Crye_SS_grey_pants_Camo
		{
			model="VSM_G3";
			camo="SCORP";
			Pants="Grey";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_Scorpion_Crye_SS_grey_shirt_Camo
		{
			model="VSM_G3";
			camo="SCORP";
			Pants="Normal";
			Top="Grey";
			Sleeves="Rolled";
		};
		class VSM_Scorpion_Crye_SS_od_pants_Camo
		{
			model="VSM_G3";
			camo="SCORP";
			Pants="OD";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_Scorpion_Crye_SS_od_shirt_Camo
		{
			model="VSM_G3";
			camo="SCORP";
			Pants="Normal";
			Top="OD";
			Sleeves="Rolled";
		};
		class VSM_Scorpion_Crye_SS_tan_pants_Camo
		{
			model="VSM_G3";
			camo="SCORP";
			Pants="TAN";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_Scorpion_Crye_SS_tan_shirt_Camo
		{
			model="VSM_G3";
			camo="SCORP";
			Pants="Normal";
			Top="TAN";
			Sleeves="Rolled";
		};
		class VSM_Scorpion_Crye_SS_Camo
		{
			model="VSM_G3";
			camo="SCORP";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class Alpine_white_Crye_SS_camo
		{
			model="VSM_G3";
			camo="ALPV2";
			Pants="Normal";
			Top="Normal";
			Sleeves="Rolled";
		};
		class VSM_AOR1_Crye_Tee_Camo
		{
			model="VSM_G3";
			camo="AOR1";
			Pants="Normal";
			Top="Tee";
			Sleeves="Full";
		};
		class AOR_2_Crye_Tee_Camo
		{
			model="VSM_G3";
			camo="AOR2";
			Pants="Normal";
			Top="Tee";
			Sleeves="Full";
		};
		class VSM_M81_Crye_Tee_Camo
		{
			model="VSM_G3";
			camo="M81";
			Pants="Normal";
			Top="Tee";
			Sleeves="Full";
		};
		class VSM_Multicam_Crye_Tee_Camo
		{
			model="VSM_G3";
			camo="Multicam";
			Pants="Normal";
			Top="Tee";
			Sleeves="Full";
		};
		class VSM_MulticamTropic_Crye_Tee_Camo
		{
			model="VSM_G3";
			camo="MulticamT";
			Pants="Normal";
			Top="Tee";
			Sleeves="Full";
		};
		class VSM_OCP_Crye_Tee_Camo
		{
			model="VSM_G3";
			camo="OCP";
			Pants="Normal";
			Top="Tee";
			Sleeves="Full";
		};
		class VSM_ProjectHonor_Crye_Tee_Camo
		{
			model="VSM_G3";
			camo="PJH";
			Pants="Normal";
			Top="Tee";
			Sleeves="Full";
		};
		class VSM_Scorpion_Crye_Tee_Camo
		{
			model="VSM_G3";
			camo="SCORP";
			Pants="Normal";
			Top="Tee";
			Sleeves="Full";
		};
		class dr_Alpinefacp_br
		{
			model="VSM_DT_FAPC";
			camo="ALP";
			Pouches="Breacher";
		};
		class dr_Alpinefacp_mg
		{
			model="VSM_DT_FAPC";
			camo="ALP";
			Pouches="Gunner";
		};
		class dr_Alpinefacp_op
		{
			model="VSM_DT_FAPC";
			camo="ALP";
			Pouches="Operator";
		};
		class VSM_FAPC_Breacher_AOR1
		{
			model="VSM_DT_FAPC";
			camo="AOR1";
			Pouches="Breacher";
		};
		class VSM_FAPC_MG_AOR1
		{
			model="VSM_DT_FAPC";
			camo="AOR1";
			Pouches="Gunner";
		};
		class VSM_FAPC_Operator_AOR1
		{
			model="VSM_DT_FAPC";
			camo="AOR1";
			Pouches="Operator";
		};
		class dr_AOR2facp_br
		{
			model="VSM_DT_FAPC";
			camo="AOR2";
			Pouches="Breacher";
		};
		class dr_AOR2facp_mg
		{
			model="VSM_DT_FAPC";
			camo="AOR2";
			Pouches="Gunner";
		};
		class dr_AOR2facp_op
		{
			model="VSM_DT_FAPC";
			camo="AOR2";
			Pouches="Operator";
		};
		class DTSfacp_br
		{
			model="VSM_DT_FAPC";
			camo="DTS";
			Pouches="Breacher";
		};
		class DTSfacp_mg
		{
			model="VSM_DT_FAPC";
			camo="DTS";
			Pouches="Gunner";
		};
		class DTSfacp_op
		{
			model="VSM_DT_FAPC";
			camo="DTS";
			Pouches="Operator";
		};
		class VSM_FAPC_Breacher_M81
		{
			model="VSM_DT_FAPC";
			camo="M81";
			Pouches="Breacher";
		};
		class VSM_FAPC_MG_M81
		{
			model="VSM_DT_FAPC";
			camo="M81";
			Pouches="Gunner";
		};
		class VSM_FAPC_Operator_M81
		{
			model="VSM_DT_FAPC";
			camo="M81";
			Pouches="Operator";
		};
		class dr_ARDfacp_br
		{
			model="VSM_DT_FAPC";
			camo="ARD";
			Pouches="Breacher";
		};
		class dr_ARDfacp_mg
		{
			model="VSM_DT_FAPC";
			camo="ARD";
			Pouches="Gunner";
		};
		class dr_ARDfacp_op
		{
			model="VSM_DT_FAPC";
			camo="ARD";
			Pouches="Operator";
		};
		class dr_BLKfacp_br
		{
			model="VSM_DT_FAPC";
			camo="MCB";
			Pouches="Breacher";
		};
		class dr_BLKfacp_mg
		{
			model="VSM_DT_FAPC";
			camo="MCB";
			Pouches="Gunner";
		};
		class dr_BLKfacp_op
		{
			model="VSM_DT_FAPC";
			camo="MCB";
			Pouches="Operator";
		};
		class VSM_FAPC_Breacher_Multicam
		{
			model="VSM_DT_FAPC";
			camo="Multicam";
			Pouches="Breacher";
		};
		class VSM_FAPC_MG_Multicam
		{
			model="VSM_DT_FAPC";
			camo="Multicam";
			Pouches="Gunner";
		};
		class VSM_FAPC_Operator_Multicam
		{
			model="VSM_DT_FAPC";
			camo="Multicam";
			Pouches="Operator";
		};
		class VSM_FAPC_Breacher_MulticamTropic
		{
			model="VSM_DT_FAPC";
			camo="MulticamT";
			Pouches="Breacher";
		};
		class VSM_FAPC_MG_MulticamTropic
		{
			model="VSM_DT_FAPC";
			camo="MulticamT";
			Pouches="Gunner";
		};
		class VSM_FAPC_Operator_MulticamTropic
		{
			model="VSM_DT_FAPC";
			camo="MulticamT";
			Pouches="Operator";
		};
		class VSM_FAPC_Breacher_OCP
		{
			model="VSM_DT_FAPC";
			camo="OCP";
			Pouches="Breacher";
		};
		class VSM_FAPC_MG_OCP
		{
			model="VSM_DT_FAPC";
			camo="OCP";
			Pouches="Gunner";
		};
		class VSM_FAPC_Operator_OCP
		{
			model="VSM_DT_FAPC";
			camo="OCP";
			Pouches="Operator";
		};
		class VSM_FAPC_Breacher_OGA
		{
			model="VSM_DT_FAPC";
			camo="TAN";
			Pouches="Breacher";
		};
		class VSM_FAPC_MG_OGA
		{
			model="VSM_DT_FAPC";
			camo="TAN";
			Pouches="Gunner";
		};
		class VSM_FAPC_Operator_OGA
		{
			model="VSM_DT_FAPC";
			camo="TAN";
			Pouches="Operator";
		};
		class VSM_FAPC_Breacher_OGA_OD
		{
			model="VSM_DT_FAPC";
			camo="OD";
			Pouches="Breacher";
		};
		class VSM_FAPC_MG_OGA_OD
		{
			model="VSM_DT_FAPC";
			camo="OD";
			Pouches="Gunner";
		};
		class VSM_FAPC_Operator_OGA_OD
		{
			model="VSM_DT_FAPC";
			camo="OD";
			Pouches="Operator";
		};
		class VSM_FAPC_Breacher_ProjectHonor
		{
			model="VSM_DT_FAPC";
			camo="PJH";
			Pouches="Breacher";
		};
		class VSM_FAPC_MG_ProjectHonor
		{
			model="VSM_DT_FAPC";
			camo="PJH";
			Pouches="Gunner";
		};
		class VSM_FAPC_Operator_ProjectHonor
		{
			model="VSM_DT_FAPC";
			camo="PJH";
			Pouches="Operator";
		};
		class VSM_CarrierRig_Breacher_multicamTropic
		{
			model="VSM_LBT_ARM";
			camo="MulticamT";
			Pouches="Breacher";
		};
		class VSM_CarrierRig_Gunner_multicamTropic
		{
			model="VSM_LBT_ARM";
			camo="MulticamT";
			Pouches="Gunner";
		};
		class VSM_CarrierRig_Operator_multicamTropic
		{
			model="VSM_LBT_ARM";
			camo="MulticamT";
			Pouches="Operator";
		};
		class CarrierRig_Breacher_Alpine
		{
			model="VSM_LBT_ARM";
			camo="ALP";
			Pouches="Breacher";
		};
		class CarrierRig_Gunner_Alpine
		{
			model="VSM_LBT_ARM";
			camo="ALP";
			Pouches="Gunner";
		};
		class CarrierRig_Operator_Alpine
		{
			model="VSM_LBT_ARM";
			camo="ALP";
			Pouches="Operator";
		};
		class VSM_CarrierRig_Breacher_AOR1
		{
			model="VSM_LBT_ARM";
			camo="AOR1";
			Pouches="Breacher";
		};
		class VSM_CarrierRig_Gunner_AOR1
		{
			model="VSM_LBT_ARM";
			camo="AOR1";
			Pouches="Gunner";
		};
		class VSM_CarrierRig_Operator_AOR1
		{
			model="VSM_LBT_ARM";
			camo="AOR1";
			Pouches="Operator";
		};
		class CarrierRig_Breacher_AOR2
		{
			model="VSM_LBT_ARM";
			camo="AOR2";
			Pouches="Breacher";
		};
		class CarrierRig_Gunner_AOR2
		{
			model="VSM_LBT_ARM";
			camo="AOR2";
			Pouches="Gunner";
		};
		class CarrierRig_Operator_AOR2
		{
			model="VSM_LBT_ARM";
			camo="AOR2";
			Pouches="Operator";
		};
		class CarrierRig_Breacher_DTS
		{
			model="VSM_LBT_ARM";
			camo="DTS";
			Pouches="Breacher";
		};
		class CarrierRig_Gunner_DTS
		{
			model="VSM_LBT_ARM";
			camo="DTS";
			Pouches="Gunner";
		};
		class CarrierRig_Operator_DTS
		{
			model="VSM_LBT_ARM";
			camo="DTS";
			Pouches="Operator";
		};
		class VSM_CarrierRig_Breacher_M81
		{
			model="VSM_LBT_ARM";
			camo="M81";
			Pouches="Breacher";
		};
		class VSM_CarrierRig_Gunner_M81
		{
			model="VSM_LBT_ARM";
			camo="M81";
			Pouches="Gunner";
		};
		class VSM_CarrierRig_Operator_M81
		{
			model="VSM_LBT_ARM";
			camo="M81";
			Pouches="Operator";
		};
		class CarrierRig_Breacher_Arid
		{
			model="VSM_LBT_ARM";
			camo="ARD";
			Pouches="Breacher";
		};
		class CarrierRig_Gunner_Arid
		{
			model="VSM_LBT_ARM";
			camo="ARD";
			Pouches="Gunner";
		};
		class CarrierRig_Operator_Arid
		{
			model="VSM_LBT_ARM";
			camo="ARD";
			Pouches="Operator";
		};
		class VSM_CarrierRig_Breacher_Multicam
		{
			model="VSM_LBT_ARM";
			camo="Multicam";
			Pouches="Breacher";
		};
		class VSM_CarrierRig_Gunner_Multicam
		{
			model="VSM_LBT_ARM";
			camo="Multicam";
			Pouches="Gunner";
		};
		class VSM_CarrierRig_Operator_Multicam
		{
			model="VSM_LBT_ARM";
			camo="Multicam";
			Pouches="Operator";
		};
		class VSM_CarrierRig_Breacher_OCP
		{
			model="VSM_LBT_ARM";
			camo="OCP";
			Pouches="Breacher";
		};
		class VSM_CarrierRig_Gunner_OCP
		{
			model="VSM_LBT_ARM";
			camo="OCP";
			Pouches="Gunner";
		};
		class VSM_CarrierRig_Operator_OCP
		{
			model="VSM_LBT_ARM";
			camo="OCP";
			Pouches="Operator";
		};
		class VSM_CarrierRig_Breacher_OGA
		{
			model="VSM_LBT_ARM";
			camo="TAN";
			Pouches="Breacher";
		};
		class VSM_CarrierRig_Gunner_OGA
		{
			model="VSM_LBT_ARM";
			camo="TAN";
			Pouches="Gunner";
		};
		class VSM_CarrierRig_Operator_OGA
		{
			model="VSM_LBT_ARM";
			camo="TAN";
			Pouches="Operator";
		};
		class VSM_CarrierRig_Breacher_OGA_OD
		{
			model="VSM_LBT_ARM";
			camo="OD";
			Pouches="Breacher";
		};
		class VSM_CarrierRig_Gunner_OGA_OD
		{
			model="VSM_LBT_ARM";
			camo="OD";
			Pouches="Gunner";
		};
		class VSM_CarrierRig_Operator_OGA_OD
		{
			model="VSM_LBT_ARM";
			camo="OD";
			Pouches="Operator";
		};
		class VSM_CarrierRig_Breacher_ProjectHonor
		{
			model="VSM_LBT_ARM";
			camo="PJH";
			Pouches="Breacher";
		};
		class VSM_CarrierRig_Gunner_ProjectHonor
		{
			model="VSM_LBT_ARM";
			camo="PJH";
			Pouches="Gunner";
		};
		class VSM_CarrierRig_Operator_ProjectHonor
		{
			model="VSM_LBT_ARM";
			camo="PJH";
			Pouches="Operator";
		};
		class VSM_LBT6094_breacher_OCP
		{
			model="VSM_LBT6094";
			camo="OCP";
			Pouches="Breacher";
		};
		class VSM_LBT6094_MG_OCP
		{
			model="VSM_LBT6094";
			camo="OCP";
			Pouches="Gunner";
		};
		class VSM_LBT6094_operator_OCP
		{
			model="VSM_LBT6094";
			camo="OCP";
			Pouches="Operator";
		};
		class dr_Alpinelbt_br
		{
			model="VSM_LBT6094";
			camo="ALP";
			Pouches="Breacher";
		};
		class dr_Alpinelbt_mg
		{
			model="VSM_LBT6094";
			camo="ALP";
			Pouches="Gunner";
		};
		class dr_Alpinelbt_op
		{
			model="VSM_LBT6094";
			camo="ALP";
			Pouches="Operator";
		};
		class VSM_LBT6094_breacher_AOR1
		{
			model="VSM_LBT6094";
			camo="AOR1";
			Pouches="Breacher";
		};
		class VSM_LBT6094_MG_AOR1
		{
			model="VSM_LBT6094";
			camo="AOR1";
			Pouches="Gunner";
		};
		class VSM_LBT6094_operator_AOR1
		{
			model="VSM_LBT6094";
			camo="AOR1";
			Pouches="Operator";
		};
		class dr_AOR2lbt_br
		{
			model="VSM_LBT6094";
			camo="AOR2";
			Pouches="Breacher";
		};
		class dr_AOR2lbt_mg
		{
			model="VSM_LBT6094";
			camo="AOR2";
			Pouches="Gunner";
		};
		class dr_AOR2lbt_op
		{
			model="VSM_LBT6094";
			camo="AOR2";
			Pouches="Operator";
		};
		class DTSlbt_br
		{
			model="VSM_LBT6094";
			camo="DTS";
			Pouches="Breacher";
		};
		class DTSlbt_mg
		{
			model="VSM_LBT6094";
			camo="DTS";
			Pouches="Gunner";
		};
		class DTSlbt_op
		{
			model="VSM_LBT6094";
			camo="DTS";
			Pouches="Operator";
		};
		class VSM_LBT6094_breacher_M81
		{
			model="VSM_LBT6094";
			camo="M81";
			Pouches="Breacher";
		};
		class VSM_LBT6094_MG_M81
		{
			model="VSM_LBT6094";
			camo="M81";
			Pouches="Gunner";
		};
		class VSM_LBT6094_operator_M81
		{
			model="VSM_LBT6094";
			camo="M81";
			Pouches="Operator";
		};
		class dr_ARDlbt_br
		{
			model="VSM_LBT6094";
			camo="ARD";
			Pouches="Breacher";
		};
		class dr_ARDlbt_mg
		{
			model="VSM_LBT6094";
			camo="ARD";
			Pouches="Gunner";
		};
		class dr_ARDlbt_op
		{
			model="VSM_LBT6094";
			camo="ARD";
			Pouches="Operator";
		};
		class dr_BLKlbt_br
		{
			model="VSM_LBT6094";
			camo="MCB";
			Pouches="Breacher";
		};
		class dr_BLKlbt_mg
		{
			model="VSM_LBT6094";
			camo="MCB";
			Pouches="Gunner";
		};
		class dr_BLKlbt_op
		{
			model="VSM_LBT6094";
			camo="MCB";
			Pouches="Operator";
		};
		class VSM_LBT6094_breacher_Multicam
		{
			model="VSM_LBT6094";
			camo="Multicam";
			Pouches="Breacher";
		};
		class VSM_LBT6094_MG_Multicam
		{
			model="VSM_LBT6094";
			camo="Multicam";
			Pouches="Gunner";
		};
		class VSM_LBT6094_operator_Multicam
		{
			model="VSM_LBT6094";
			camo="Multicam";
			Pouches="Operator";
		};
		class VSM_LBT6094_breacher_multicamTropic
		{
			model="VSM_LBT6094";
			camo="MulticamT";
			Pouches="Breacher";
		};
		class VSM_LBT6094_MG_multicamTropic
		{
			model="VSM_LBT6094";
			camo="MulticamT";
			Pouches="Gunner";
		};
		class VSM_LBT6094_operator_multicamTropic
		{
			model="VSM_LBT6094";
			camo="MulticamT";
			Pouches="Operator";
		};
		class VSM_LBT6094_breacher_OGA_OD
		{
			model="VSM_LBT6094";
			camo="OD";
			Pouches="Breacher";
		};
		class VSM_LBT6094_MG_OGA_OD
		{
			model="VSM_LBT6094";
			camo="OD";
			Pouches="Gunner";
		};
		class VSM_LBT6094_operator_OGA_OD
		{
			model="VSM_LBT6094";
			camo="OD";
			Pouches="Operator";
		};
		class VSM_LBT6094_breacher_OGA
		{
			model="VSM_LBT6094";
			camo="TAN";
			Pouches="Breacher";
		};
		class VSM_LBT6094_MG_OGA
		{
			model="VSM_LBT6094";
			camo="TAN";
			Pouches="Gunner";
		};
		class VSM_LBT6094_operator_OGA
		{
			model="VSM_LBT6094";
			camo="TAN";
			Pouches="Operator";
		};
		class VSM_LBT6094_breacher_ProjectHonor
		{
			model="VSM_LBT6094";
			camo="PJH";
			Pouches="Breacher";
		};
		class VSM_LBT6094_MG_ProjectHonor
		{
			model="VSM_LBT6094";
			camo="PJH";
			Pouches="Gunner";
		};
		class VSM_LBT6094_operator_ProjectHonor
		{
			model="VSM_LBT6094";
			camo="PJH";
			Pouches="Operator";
		};
		class VSM_RAV_Breacher_OCP
		{
			model="VSM_Paraclete";
			camo="OCP";
			Pouches="Breacher";
		};
		class VSM_RAV_MG_OCP
		{
			model="VSM_Paraclete";
			camo="OCP";
			Pouches="Gunner";
		};
		class VSM_RAV_operator_OCP
		{
			model="VSM_Paraclete";
			camo="OCP";
			Pouches="Operator";
		};
		class dr_Alpinepar_br
		{
			model="VSM_Paraclete";
			camo="ALP";
			Pouches="Breacher";
		};
		class dr_Alpinepar_mg
		{
			model="VSM_Paraclete";
			camo="ALP";
			Pouches="Gunner";
		};
		class dr_Alpinepar_op
		{
			model="VSM_Paraclete";
			camo="ALP";
			Pouches="Operator";
		};
		class VSM_RAV_Breacher_AOR1
		{
			model="VSM_Paraclete";
			camo="AOR1";
			Pouches="Breacher";
		};
		class VSM_RAV_MG_AOR1
		{
			model="VSM_Paraclete";
			camo="AOR1";
			Pouches="Gunner";
		};
		class VSM_RAV_operator_AOR1
		{
			model="VSM_Paraclete";
			camo="AOR1";
			Pouches="Operator";
		};
		class dr_AOR2par_br
		{
			model="VSM_Paraclete";
			camo="AOR2";
			Pouches="Breacher";
		};
		class dr_AOR2par_mg
		{
			model="VSM_Paraclete";
			camo="AOR2";
			Pouches="Gunner";
		};
		class dr_AOR2par_op
		{
			model="VSM_Paraclete";
			camo="AOR2";
			Pouches="Operator";
		};
		class DTSpar_br
		{
			model="VSM_Paraclete";
			camo="DTS";
			Pouches="Breacher";
		};
		class DTSpar_mg
		{
			model="VSM_Paraclete";
			camo="DTS";
			Pouches="Gunner";
		};
		class DTSpar_op
		{
			model="VSM_Paraclete";
			camo="DTS";
			Pouches="Operator";
		};
		class dr_ARDpar_br
		{
			model="VSM_Paraclete";
			camo="ARD";
			Pouches="Breacher";
		};
		class dr_ARDpar_mg
		{
			model="VSM_Paraclete";
			camo="ARD";
			Pouches="Gunner";
		};
		class dr_ARDpar_op
		{
			model="VSM_Paraclete";
			camo="ARD";
			Pouches="Operator";
		};
		class dr_BLKpar_br
		{
			model="VSM_Paraclete";
			camo="MCB";
			Pouches="Breacher";
		};
		class dr_BLKpar_mg
		{
			model="VSM_Paraclete";
			camo="MCB";
			Pouches="Gunner";
		};
		class dr_BLKpar_op
		{
			model="VSM_Paraclete";
			camo="MCB";
			Pouches="Operator";
		};
		class VSM_RAV_Breacher_M81
		{
			model="VSM_Paraclete";
			camo="M81";
			Pouches="Breacher";
		};
		class VSM_RAV_MG_M81
		{
			model="VSM_Paraclete";
			camo="M81";
			Pouches="Gunner";
		};
		class VSM_RAV_operator_M81
		{
			model="VSM_Paraclete";
			camo="M81";
			Pouches="Operator";
		};
		class VSM_RAV_Breacher_Multicam
		{
			model="VSM_Paraclete";
			camo="Multicam";
			Pouches="Breacher";
		};
		class VSM_RAV_MG_Multicam
		{
			model="VSM_Paraclete";
			camo="Multicam";
			Pouches="Gunner";
		};
		class VSM_RAV_operator_Multicam
		{
			model="VSM_Paraclete";
			camo="Multicam";
			Pouches="Operator";
		};
		class VSM_RAV_Breacher_MulticamTropic
		{
			model="VSM_Paraclete";
			camo="MulticamT";
			Pouches="Breacher";
		};
		class VSM_RAV_MG_MulticamTropic
		{
			model="VSM_Paraclete";
			camo="MulticamT";
			Pouches="Gunner";
		};
		class VSM_RAV_operator_MulticamTropic
		{
			model="VSM_Paraclete";
			camo="MulticamT";
			Pouches="Operator";
		};
		class VSM_RAV_Breacher_OGA_OD
		{
			model="VSM_Paraclete";
			camo="OD";
			Pouches="Breacher";
		};
		class VSM_RAV_MG_OGA_OD
		{
			model="VSM_Paraclete";
			camo="OD";
			Pouches="Gunner";
		};
		class VSM_RAV_operator_OGA_OD
		{
			model="VSM_Paraclete";
			camo="OD";
			Pouches="Operator";
		};
		class VSM_RAV_Breacher_OGA
		{
			model="VSM_Paraclete";
			camo="TAN";
			Pouches="Breacher";
		};
		class VSM_RAV_MG_OGA
		{
			model="VSM_Paraclete";
			camo="TAN";
			Pouches="Gunner";
		};
		class VSM_RAV_operator_OGA
		{
			model="VSM_Paraclete";
			camo="TAN";
			Pouches="Operator";
		};
		class VSM_RAV_Breacher_ProjectHonor
		{
			model="VSM_Paraclete";
			camo="PJH";
			Pouches="Breacher";
		};
		class VSM_RAV_MG_ProjectHonor
		{
			model="VSM_Paraclete";
			camo="PJH";
			Pouches="Gunner";
		};
		class VSM_RAV_operator_ProjectHonor
		{
			model="VSM_Paraclete";
			camo="PJH";
			Pouches="Operator";
		};
		class VSM_OGA_Vest_1
		{
			model="VSM_PC";
			camo="TAN";
			Pouches="Normal";
		};
		class VSM_OGA_Vest_2
		{
			model="VSM_PC";
			camo="TAN";
			Pouches="Light";
		};
		class VSM_OGA_Vest_3
		{
			model="VSM_PC";
			camo="TAN";
			Pouches="Special";
		};
		class VSM_OGA_OD_Vest_1
		{
			model="VSM_PC";
			camo="OD";
			Pouches="Normal";
		};
		class VSM_OGA_OD_Vest_2
		{
			model="VSM_PC";
			camo="OD";
			Pouches="Light";
		};
		class VSM_OGA_OD_Vest_3
		{
			model="VSM_PC";
			camo="OD";
			Pouches="Special";
		};
		class VSM_OGA_OD_IOTV_2
		{
			model="VSM_IOTV";
			camo="OD";
			Pouches="Normal";
		};
		class VSM_OGA_OD_IOTV_1
		{
			model="VSM_IOTV";
			camo="OD";
			Pouches="Light";
		};
		class VSM_OGA_IOTV_2
		{
			model="VSM_IOTV";
			camo="TAN";
			Pouches="Normal";
		};
		class VSM_OGA_IOTV_1
		{
			model="VSM_IOTV";
			camo="TAN";
			Pouches="Light";
		};
		class Alpine_MBSS_Green
		{
			model="VSM_MBSS";
			camo="ALP";
			PACA="No";
		};
		class ARD_MBSS_Green
		{
			model="VSM_MBSS";
			camo="ARD";
			PACA="No";
		};
		class VSM_MBSS_BLK
		{
			model="VSM_MBSS";
			camo="BLK";
			PACA="No";
		};
		class VSM_MBSS_CB
		{
			model="VSM_MBSS";
			camo="CB";
			PACA="No";
		};
		class DTS_MBSS_Green
		{
			model="VSM_MBSS";
			camo="DTS";
			PACA="No";
		};
		class VSM_MBSS_Green
		{
			model="VSM_MBSS";
			camo="OD";
			PACA="No";
		};
		class BLK_MBSS_Green
		{
			model="VSM_MBSS";
			camo="MCB";
			PACA="No";
		};
		class VSM_MBSS_TAN
		{
			model="VSM_MBSS";
			camo="TAN";
			PACA="No";
		};
		class VSM_MBSS_WTF
		{
			model="VSM_MBSS";
			camo="WTF";
			PACA="No";
		};
		class AOR2_MBSS_Green
		{
			model="VSM_MBSS";
			camo="AOR2";
			PACA="No";
		};
		class Alpine_MBSS_PACA
		{
			model="VSM_MBSS";
			camo="ALP";
			PACA="Yes";
		};
		class ARD_MBSS_PACA
		{
			model="VSM_MBSS";
			camo="ARD";
			PACA="Yes";
		};
		class VSM_MBSS_PACA_BLK
		{
			model="VSM_MBSS";
			camo="BLK";
			PACA="Yes";
		};
		class VSM_MBSS_PACA_CB
		{
			model="VSM_MBSS";
			camo="CB";
			PACA="Yes";
		};
		class DTS_MBSS_PACA
		{
			model="VSM_MBSS";
			camo="DTS";
			PACA="Yes";
		};
		class VSM_MBSS_PACA
		{
			model="VSM_MBSS";
			camo="OD";
			PACA="Yes";
		};
		class BLK_MBSS_PACA
		{
			model="VSM_MBSS";
			camo="MCB";
			PACA="Yes";
		};
		class VSM_MBSS_PACA_TAN
		{
			model="VSM_MBSS";
			camo="TAN";
			PACA="Yes";
		};
		class VSM_MBSS_PACA_WTF
		{
			model="VSM_MBSS";
			camo="WTF";
			PACA="Yes";
		};
		class AOR2_MBSS_PACA
		{
			model="VSM_MBSS";
			camo="AOR2";
			PACA="Yes";
		};
		class LBT1961_Alpine
		{
			model="VSM_1961A";
			camo="ALP";
		};
		class LBT1961_AOR2
		{
			model="VSM_1961A";
			camo="AOR2";
		};
		class LBT1961_Arid
		{
			model="VSM_1961A";
			camo="ARD";
		};
		class VSM_LBT1961_Black
		{
			model="VSM_1961A";
			camo="BLK";
		};
		class VSM_LBT1961_CB
		{
			model="VSM_1961A";
			camo="TAN";
		};
		class LBT1961_DTS
		{
			model="VSM_1961A";
			camo="DTS";
		};
		class VSM_LBT1961_GRN
		{
			model="VSM_1961A";
			camo="GRN";
		};
		class VSM_LBT1961_OGA_OD
		{
			model="VSM_1961A";
			camo="OD";
		};
		class VSM_Mich2000_AOR1
		{
			model="VSM_MICH";
			camo="AOR1";
			Type="One";
		};
		class VSM_Mich2000_M81
		{
			model="VSM_MICH";
			camo="M81";
			Type="One";
		};
		class VSM_Mich2000_MulticamTropic
		{
			model="VSM_MICH";
			camo="MulticamT";
			Type="One";
		};
		class VSM_Mich2000_Multicam
		{
			model="VSM_MICH";
			camo="Multicam";
			Type="One";
		};
		class VSM_Mich2000_ocp
		{
			model="VSM_MICH";
			camo="OCP";
			Type="One";
		};
		class VSM_Mich2000_CamoSprayOD
		{
			model="VSM_MICH";
			camo="ODS";
			Type="One";
		};
		class VSM_Mich2000_OGA_OD
		{
			model="VSM_MICH";
			camo="OD";
			Type="One";
		};
		class VSM_Mich2000_OGA
		{
			model="VSM_MICH";
			camo="TAN";
			Type="One";
		};
		class VSM_Mich2000_ProjectHonor
		{
			model="VSM_MICH";
			camo="PJH";
			Type="One";
		};
		class VSM_Mich2000_CamoSprayTAN
		{
			model="VSM_MICH";
			camo="TANS";
			Type="One";
		};
		class VSM_Mich2000_2_aor1
		{
			model="VSM_MICH";
			camo="AOR1";
			Type="Two";
		};
		class VSM_Mich2000_2_M81
		{
			model="VSM_MICH";
			camo="M81";
			Type="Two";
		};
		class VSM_Mich2000_2_MulticamTropic
		{
			model="VSM_MICH";
			camo="MulticamT";
			Type="Two";
		};
		class VSM_Mich2000_2_Multicam
		{
			model="VSM_MICH";
			camo="Multicam";
			Type="Two";
		};
		class VSM_Mich2000_2_OCP
		{
			model="VSM_MICH";
			camo="OCP";
			Type="Two";
		};
		class VSM_Mich2000_2_CamoSprayOD
		{
			model="VSM_MICH";
			camo="ODS";
			Type="Two";
		};
		class VSM_Mich2000_2_OGA_OD
		{
			model="VSM_MICH";
			camo="OD";
			Type="Two";
		};
		class VSM_Mich2000_2_OGA
		{
			model="VSM_MICH";
			camo="TAN";
			Type="Two";
		};
		class VSM_Mich2000_2_ProjectHonor
		{
			model="VSM_MICH";
			camo="PJH";
			Type="Two";
		};
		class VSM_Mich2000_2_CamoSprayTAN
		{
			model="VSM_MICH";
			camo="TANS";
			Type="Two";
		};
		class VSM_OGA_OD_Helmet2
		{
			model="VSM_ECH";
			camo="OD";
			Type="Light";
		};
		class VSM_OGA_OD_Helmet1
		{
			model="VSM_ECH";
			camo="OD";
			Type="Normal";
		};
		class VSM_OGA_Helmet2
		{
			model="VSM_ECH";
			camo="TAN";
			Type="Light";
		};
		class VSM_OGA_Helmet1
		{
			model="VSM_ECH";
			camo="TAN";
			Type="Normal";
		};
		class VSM_OPS
		{
			model="VSM_ECH";
			camo="Grey";
			Type="One";
		};
		class Alpine_opscore
		{
			model="VSM_ECH";
			camo="ALP";
			Type="One";
		};
		class VSM_OPS_aor1
		{
			model="VSM_ECH";
			camo="AOR1";
			Type="One";
		};
		class AOR2_opscore
		{
			model="VSM_ECH";
			camo="AOR2";
			Type="One";
		};
		class ARD_opscore
		{
			model="VSM_ECH";
			camo="ARD";
			Type="One";
		};
		class VSM_Black_OPS
		{
			model="VSM_ECH";
			camo="BLK";
			Type="One";
		};
		class VSM_M81_OPS
		{
			model="VSM_ECH";
			camo="M81";
			Type="One";
		};
		class BLK2_opscore
		{
			model="VSM_ECH";
			camo="MCB";
			Type="One";
		};
		class VSM_OPS_multicam
		{
			model="VSM_ECH";
			camo="Multicam";
			Type="One";
		};
		class VSM_MulticamTropic_OPS
		{
			model="VSM_ECH";
			camo="MulticamT";
			Type="One";
		};
		class VSM_OPS_ocp
		{
			model="VSM_ECH";
			camo="OCP";
			Type="One";
		};
		class VSM_OD_spray_OPS
		{
			model="VSM_ECH";
			camo="ODS";
			Type="One";
		};
		class VSM_OGA_OD_OPS
		{
			model="VSM_ECH";
			camo="OD";
			Type="One";
		};
		class VSM_oga_OPS
		{
			model="VSM_ECH";
			camo="TAN";
			Type="One";
		};
		class VSM_ProjectHonor_OPS
		{
			model="VSM_ECH";
			camo="PJH";
			Type="One";
		};
		class VSM_Tan_spray_OPS
		{
			model="VSM_ECH";
			camo="TANS";
			Type="One";
		};
		class White_opscore
		{
			model="VSM_ECH";
			camo="WHT";
			Type="One";
		};
		class VSM_OPS_2
		{
			model="VSM_ECH";
			camo="Grey";
			Type="Two";
		};
		class Alpine_opscore_2
		{
			model="VSM_ECH";
			camo="ALP";
			Type="Two";
		};
		class VSM_OPS_2_AOR1
		{
			model="VSM_ECH";
			camo="AOR1";
			Type="Two";
		};
		class AOR2_opscore_2
		{
			model="VSM_ECH";
			camo="AOR2";
			Type="Two";
		};
		class ARD_opscore_2
		{
			model="VSM_ECH";
			camo="ARD";
			Type="Two";
		};
		class VSM_Black_OPS_2
		{
			model="VSM_ECH";
			camo="BLK";
			Type="Two";
		};
		class VSM_M81_OPS_2
		{
			model="VSM_ECH";
			camo="M81";
			Type="Two";
		};
		class BLK_opscore_2
		{
			model="VSM_ECH";
			camo="MCB";
			Type="Two";
		};
		class VSM_OPS_2_multicam
		{
			model="VSM_ECH";
			camo="Multicam";
			Type="Two";
		};
		class VSM_MulticamTropic_OPS_2
		{
			model="VSM_ECH";
			camo="MulticamT";
			Type="Two";
		};
		class VSM_OPS_2_ocp
		{
			model="VSM_ECH";
			camo="OCP";
			Type="Two";
		};
		class VSM_OD_Spray_OPS_2
		{
			model="VSM_ECH";
			camo="ODS";
			Type="Two";
		};
		class VSM_OGA_OD_OPS_2
		{
			model="VSM_ECH";
			camo="OD";
			Type="Two";
		};
		class VSM_oga_OPS_2
		{
			model="VSM_ECH";
			camo="TAN";
			Type="Two";
		};
		class VSM_ProjectHonor_OPS_2
		{
			model="VSM_ECH";
			camo="PJH";
			Type="Two";
		};
		class VSM_Tan_spray_OPS_2
		{
			model="VSM_ECH";
			camo="TANS";
			Type="Two";
		};
		class White_opscore_2
		{
			model="VSM_ECH";
			camo="WHT";
			Type="Two";
		};
		class DTS_Helmet_IA
		{
			model="VSM_MODH";
			camo="DTS";
		};
		class Arid_Helmet_IA
		{
			model="VSM_MODH";
			camo="ARD";
		};
		class AOR2_Helmet_IA
		{
			model="VSM_MODH";
			camo="AOR2";
		};
		class Alpine_Helmet_IA
		{
			model="VSM_MODH";
			camo="ALP";
		};
		class VSM_FullShemagh_OD
		{
			model="VSM_SHE";
			camo="OD";
		};
		class VSM_FullShemagh_OD_pattern
		{
			model="VSM_SHE";
			camo="ODS";
		};
		class VSM_FullShemagh_Tan
		{
			model="VSM_SHE";
			camo="TAN";
		};
		class VSM_FullShemagh_Tan_pattern
		{
			model="VSM_SHE";
			camo="TANS";
		};
		class Alpine_Cap
		{
			model="VSM_CAP";
			camo="ALP";
		};
		class VSM_AOR1_Cap
		{
			model="VSM_CAP";
			camo="AOR1";
		};
		class AOR2_Cap
		{
			model="VSM_CAP";
			camo="AOR2";
		};
		class Arid_Cap
		{
			model="VSM_CAP";
			camo="ARD";
		};
		class DTS_Cap
		{
			model="VSM_CAP";
			camo="DTS";
		};
		class VSM_M81_Cap
		{
			model="VSM_CAP";
			camo="M81";
		};
		class VSM_Multicam_Cap
		{
			model="VSM_CAP";
			camo="Multicam";
		};
		class VSM_MulticamTropic_Cap
		{
			model="VSM_CAP";
			camo="MulticamT";
		};
		class VSM_OCP_Cap
		{
			model="VSM_CAP";
			camo="OCP";
		};
		class VSM_ProjectHonor_Cap
		{
			model="VSM_CAP";
			camo="PJH";
		};
		class VSM_AOR1_Boonie
		{
			model="VSM_Boonie";
			camo="AOR1";
		};
		class AOR2_Boonie
		{
			model="VSM_Boonie";
			camo="AOR2";
		};
		class Arid_Boonie
		{
			model="VSM_Boonie";
			camo="ARD";
		};
		class DTS_Boonie
		{
			model="VSM_Boonie";
			camo="DTS";
		};
		class VSM_M81_Boonie
		{
			model="VSM_Boonie";
			camo="M81";
		};
		class VSM_Multicam_Boonie
		{
			model="VSM_Boonie";
			camo="Multicam";
		};
		class VSM_MulticamTropic_Boonie
		{
			model="VSM_Boonie";
			camo="MulticamT";
		};
		class VSM_OCP_Boonie
		{
			model="VSM_Boonie";
			camo="OCP";
		};
		class VSM_ProjectHonor_Boonie
		{
			model="VSM_Boonie";
			camo="PJH";
		};
		class VSM_Bowman
		{
			model="VSM_Bowman";
			camo="None";
			Balaclava="No";
		};
		class VSM_Bowman_cap_balaclava_Black
		{
			model="VSM_Bowman";
			camo="BLK";
			Balaclava="Yes";
		};
		class VSM_Bowman_cap_balaclava_Olive
		{
			model="VSM_Bowman";
			camo="OD";
			Balaclava="Yes";
		};
		class VSM_Bowman_cap_balaclava_Tan
		{
			model="VSM_Bowman";
			camo="TAN";
			Balaclava="Yes";
		};
		class VSM_Bowman_cap_Black
		{
			model="VSM_Bowman";
			camo="BLK";
			Balaclava="No";
		};
		class VSM_Bowman_cap_Green
		{
			model="VSM_Bowman";
			camo="OD";
			Balaclava="No";
		};
		class VSM_Bowman_cap_Tan
		{
			model="VSM_Bowman";
			camo="TAN";
			Balaclava="No";
		};
		class VSM_Beanie_tan
		{
			model="VSM_Beanie";
			camo="TAN";
		};
		class VSM_Beanie_OD
		{
			model="VSM_Beanie";
			camo="OD";
		};
		class VSM_Beanie_Black
		{
			model="VSM_Beanie";
			camo="BLK";
		};
		class VSM_BackwardsHat_Peltor_black
		{
			model="VSM_BHAT";
			camo="BLK";
		};
		class VSM_BackwardsHat_Peltor_CMMG
		{
			model="VSM_BHAT";
			camo="CMMG";
		};
		class VSM_BackwardsHat_Peltor_ION
		{
			model="VSM_BHAT";
			camo="ION";
		};
		class VSM_BackwardsHat_Peltor_OD
		{
			model="VSM_BHAT";
			camo="OD";
		};
		class VSM_BackwardsHat_Peltor_Sero
		{
			model="VSM_BHAT";
			camo="SERO";
		};
		class VSM_BackwardsHat_Peltor_tan
		{
			model="VSM_BHAT";
			camo="TAN";
		};
		class VSM_BackwardsHat_Peltor_US
		{
			model="VSM_BHAT";
			camo="US";
		};
	};
	class CfgVehicles
	{
		class B_AssaultPack_Base;
		class B_kitbag_Base;
		class B_Carryall_Base;
		class Alpine_Backpack_Compact
		{
			model="VSM_Com";
			camo="ALP";
		};
		class Alpine_Backpack_kitbag
		{
			model="VSM_KIT";
			camo="ALP";
		};
		class Alpine_Carryall
		{
			model="VSM_CAR";
			camo="ALP";
		};
		class VSM_AOR1_Backpack_Compact
		{
			model="VSM_Com";
			camo="AOR1";
		};
		class VSM_AOR1_Backpack_Kitbag
		{
			model="VSM_KIT";
			camo="AOR1";
		};
		class VSM_AOR1_carryall
		{
			model="VSM_CAR";
			camo="AOR1";
		};
		class AOR2_Backpack_Compact
		{
			model="VSM_Com";
			camo="AOR2";
		};
		class AOR2_Backpack_kitbag
		{
			model="VSM_KIT";
			camo="AOR2";
		};
		class AOR2_Carryall
		{
			model="VSM_CAR";
			camo="AOR2";
		};
		class DTS_Backpack_Compact
		{
			model="VSM_Com";
			camo="DTS";
		};
		class DTS_Backpack_kitbag
		{
			model="VSM_KIT";
			camo="DTS";
		};
		class DTS_Carryall
		{
			model="VSM_CAR";
			camo="DTS";
		};
		class VSM_M81_Backpack_Compact
		{
			model="VSM_Com";
			camo="M81";
		};
		class VSM_M81_Backpack_Kitbag
		{
			model="VSM_KIT";
			camo="M81";
		};
		class VSM_M81_carryall
		{
			model="VSM_CAR";
			camo="M81";
		};
		class Arid_Backpack_Compact
		{
			model="VSM_Com";
			camo="ARD";
		};
		class Arid_Backpack_kitbag
		{
			model="VSM_KIT";
			camo="ARD";
		};
		class Arid_Carryall
		{
			model="VSM_CAR";
			camo="ARD";
		};
		class Black_Backpack_Compact
		{
			model="VSM_Com";
			camo="MCB";
		};
		class Black_Backpack_kitbag
		{
			model="VSM_KIT";
			camo="MCB";
		};
		class Black_Carryall
		{
			model="VSM_CAR";
			camo="MCB";
		};
		class VSM_Multicam_Backpack_Compact
		{
			model="VSM_Com";
			camo="Multicam";
		};
		class VSM_Multicam_Backpack_Kitbag
		{
			model="VSM_KIT";
			camo="Multicam";
		};
		class VSM_Multicam_carryall
		{
			model="VSM_CAR";
			camo="Multicam";
		};
		class VSM_MulticamTropic_Backpack_Compact
		{
			model="VSM_Com";
			camo="MulticamT";
		};
		class VSM_MulticamTropic_Backpack_Kitbag
		{
			model="VSM_KIT";
			camo="MulticamT";
		};
		class VSM_MulticamTropic_carryall
		{
			model="VSM_CAR";
			camo="MulticamT";
		};
		class VSM_OCP_Backpack_Compact
		{
			model="VSM_Com";
			camo="OCP";
		};
		class VSM_OCP_Backpack_Kitbag
		{
			model="VSM_KIT";
			camo="OCP";
		};
		class VSM_OCP_carryall
		{
			model="VSM_CAR";
			camo="OCP";
		};
		class VSM_OGA_Backpack_Compact
		{
			model="VSM_Com";
			camo="TAN";
		};
		class VSM_OGA_Backpack_Kitbag
		{
			model="VSM_KIT";
			camo="TAN";
		};
		class VSM_OGA_carryall
		{
			model="VSM_CAR";
			camo="TAN";
		};
		class VSM_OGA_OD_Backpack_Compact
		{
			model="VSM_Com";
			camo="OD";
		};
		class VSM_OGA_OD_Backpack_Kitbag
		{
			model="VSM_KIT";
			camo="OD";
		};
		class VSM_OGA_OD_carryall
		{
			model="VSM_CAR";
			camo="OD";
		};
		class VSM_ProjectHonor_Backpack_Compact
		{
			model="VSM_Com";
			camo="PJH";
		};
		class VSM_ProjectHonor_Backpack_Kitbag
		{
			model="VSM_KIT";
			camo="PJH";
		};
		class VSM_ProjectHonor_carryall
		{
			model="VSM_CAR";
			camo="PJH";
		};
	};
};
