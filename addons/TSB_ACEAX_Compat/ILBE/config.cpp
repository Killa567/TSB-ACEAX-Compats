#define true	1
#define false	0

#define private		0
#define protected		1
#define public		2

class CfgPatches
{
	class TSB_ACEAX_Compat_ILBE
	{
		name="TSB_ACEAX_Compat_ILBE";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"aceax_gearinfo",
			"YSA_ilbe_reskins_rewrite",
			"tfw_radios_ilbe"
		};
		author="Frost99";
		skipWhenMissingDependencies = 1;
	};
};
class XtdGearModels
{
	class cfgVehicles
	{
		class ILBE_ANT
		{
			label="ILBE RT-1523G (ASIP) + Whip EXT";
			author="Frost993";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[]=
				{
					"AAF",
					"AOR2",
					"ATACSAU",
					"ATACSFG",
					"Black",
					"CADPATAIRD",
					"CADPATTEMP",
					"CTRG",
					"DPMT",
					"DPMW",
					"EMRS",
					"FLECKTARN",
					"GREEN",
					"GREENHEX",
					"HEX",
					"KLDESERT",
					"M81W",
					"MTP",
					"MULTICAM",
					"MULTICAMAIRD",
					"MULTICAMTROPIC",
					"MULTICAMVSM",
					"SKDIG",
					"SKDIGD",
					"TROPENTARN",
					"MULTITARN",
					"UCP",
					"VZORD",
					"VZORW",
					"WINTER",
					"WzD",
					"WzW",
					"TFWAlpine",
					"TFWAird",
					"TFWBlack",
					"TFWCoyote",
					"TFWGreen",
					"TFWMarpatD",
					"TFWMarpatWD",
					"TFWMCT",
					"TFWMulticam",
					"TFWOCP",
					"TFWWD"
				};
				class AAF
				{
					label="AAF";
					image="TSB_ACEAX_Compat\data\AAF.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
				class ATACSAU
				{
					label="ATACSAU";
					image="TSB_ACEAX_Compat\data\ATACSAU.paa";
				};
				class ATACSFG
				{
					label="ATACSFG";
					image="TSB_ACEAX_Compat\data\ATACSFG.paa";
				};
				class Black
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa";
				};
				class CADPATAIRD
				{
					label="CADPAT A";
					image="TSB_ACEAX_Compat\data\CADPATA.paa";
				};
				class CADPATTEMP
				{
					label="CADPAT T";
					image="TSB_ACEAX_Compat\data\CADPATT.paa";
				};
				class CTRG
				{
					label="CTRG";
					image="TSB_ACEAX_Compat\data\CTRG.paa";
				};
				class DPMT
				{
					label="DPM T";
					image="TSB_ACEAX_Compat\data\DPMT.paa";
				};
				class DPMW
				{
					label="DPM W";
					image="TSB_ACEAX_Compat\data\DPMW.paa";
				};
				class EMRS
				{
					label="EMR S";
					image="TSB_ACEAX_Compat\data\EMRS.paa";
				};
				class FLECKTARN
				{
					label="FLECKTARN";
					image="TSB_ACEAX_Compat\data\FLECKTARN.paa";
				};
				class GREEN
				{
					label="GREEN";
					image="TSB_ACEAX_Compat\data\GREENILBE.paa";
				};
				class GREENHEX
				{
					label="GREENHEX";
					image="TSB_ACEAX_Compat\data\GREENHEX.paa";
				};
				class HEX
				{
					label="HEX";
					image="TSB_ACEAX_Compat\data\HEX.paa";
				};
				class KLDESERT
				{
					label="KL DESERT";
					image="TSB_ACEAX_Compat\data\KLDESERT.paa";
				};
				class M81W
				{
					label="M81 W";
					image="TSB_ACEAX_Compat\data\M81W.paa";
				};
				class MTP
				{
					label="MTP";
					image="TSB_ACEAX_Compat\data\MTP.paa";
				};
				class MULTICAM
				{
					label="MULTICAM";
					image="TSB_ACEAX_Compat\data\MC2.paa";
				};
				class MULTICAMAIRD
				{
					label="MULTICAM A";
					image="TSB_ACEAX_Compat\data\MCA.paa";
				};
				class MULTICAMTROPIC
				{
					label="MULTICAM T";
					image="TSB_ACEAX_Compat\data\MCT2.paa";
				};
				class MULTICAMVSM
				{
					label="MULTICAM VSM";
					image="TSB_ACEAX_Compat\data\MC3.paa";
				};
				class SKDIG
				{
					label="SK DIGITAL";
					image="TSB_ACEAX_Compat\data\SKDIGITAL.paa";
				};
				class SKDIGD
				{
					label="SK DIGITAL D";
					image="TSB_ACEAX_Compat\data\SKDIGITALD.paa";
				};
				class TROPENTARN
				{
					label="TROPENTARN";
					image="TSB_ACEAX_Compat\data\TROPENTARN.paa";
				};
				class MULTITARN
				{
					label="MULTITARN";
					image="TSB_ACEAX_Compat\data\MULTITARN.paa";
				};
				class UCP
				{
					label="UCP";
					image="TSB_ACEAX_Compat\data\UCP.paa";
				};
				class VZORD
				{
					label="VZOR 95 D";
					image="TSB_ACEAX_Compat\data\VZOR95D.paa";
				};
				class VZORW
				{
					label="VZOR 95 W";
					image="TSB_ACEAX_Compat\data\VZOR95W.paa";
				};
				class WINTER
				{
					label="WINTER";
					image="TSB_ACEAX_Compat\data\wht.paa";
				};
				class WzD
				{
					label="Wz.93 D";
					image="TSB_ACEAX_Compat\data\WZ93D.paa";
				};
				class WzW
				{
					label="Wz.93 Wd";
					image="TSB_ACEAX_Compat\data\WZ93WD.paa";
				};
				class TFWAlpine
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class TFWAird
				{
					label="Aird";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class TFWBlack
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa";
				};
				class TFWCoyote
				{
					label="Coyote";
					image="TSB_ACEAX_Compat\data\COYOTE.paa";
				};
				class TFWGreen
				{
					label="Green";
					image="TSB_ACEAX_Compat\data\GREENBROWN.paa";
				};
				class TFWMarpatD
				{
					label="Marpat-D";
					image="TSB_ACEAX_Compat\data\MARPATD.paa";
				};
				class TFWMarpatWD
				{
					label="Marpat-Wd";
					image="TSB_ACEAX_Compat\data\MARPATWD.paa";
				};
				class TFWMulticam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class TFWMCT
				{
					label="Multicam T";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class TFWOCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP2.paa";
				};
				class TFWWD
				{
					label="Marpat-Wd 2";
					image="TSB_ACEAX_Compat\data\MARPATWD2.paa";
				};
			};
		};
		class ILBE_VHFBlade
		{
			label="ILBE RT-1523G (ASIP) + VHF Blade";
			author="Frost993";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[]=
				{
					"AAF",
					"AOR2",
					"ATACSAU",
					"ATACSFG",
					"Black",
					"CADPATAIRD",
					"CADPATTEMP",
					"CTRG",
					"DPMT",
					"DPMW",
					"EMRS",
					"FLECKTARN",
					"GREEN",
					"GREENHEX",
					"HEX",
					"KLDESERT",
					"M81W",
					"MTP",
					"MULTICAM",
					"MULTICAMAIRD",
					"MULTICAMTROPIC",
					"MULTICAMVSM",
					"SKDIG",
					"SKDIGD",
					"TROPENTARN",
					"MULTITARN",
					"UCP",
					"VZORD",
					"VZORW",
					"WINTER",
					"WzD",
					"WzW",
					"TFWAlpine",
					"TFWAird",
					"TFWBlack",
					"TFWCoyote",
					"TFWGreen",
					"TFWMarpatD",
					"TFWMarpatWD",
					"TFWMCT",
					"TFWMulticam",
					"TFWOCP",
					"TFWWD"
				};
				class AAF
				{
					label="AAF";
					image="TSB_ACEAX_Compat\data\AAF.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
				class ATACSAU
				{
					label="ATACSAU";
					image="TSB_ACEAX_Compat\data\ATACSAU.paa";
				};
				class ATACSFG
				{
					label="ATACSFG";
					image="TSB_ACEAX_Compat\data\ATACSFG.paa";
				};
				class Black
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa";
				};
				class CADPATAIRD
				{
					label="CADPAT A";
					image="TSB_ACEAX_Compat\data\CADPATA.paa";
				};
				class CADPATTEMP
				{
					label="CADPAT T";
					image="TSB_ACEAX_Compat\data\CADPATT.paa";
				};
				class CTRG
				{
					label="CTRG";
					image="TSB_ACEAX_Compat\data\CTRG.paa";
				};
				class DPMT
				{
					label="DPM T";
					image="TSB_ACEAX_Compat\data\DPMT.paa";
				};
				class DPMW
				{
					label="DPM W";
					image="TSB_ACEAX_Compat\data\DPMW.paa";
				};
				class EMRS
				{
					label="EMR S";
					image="TSB_ACEAX_Compat\data\EMRS.paa";
				};
				class FLECKTARN
				{
					label="FLECKTARN";
					image="TSB_ACEAX_Compat\data\FLECKTARN.paa";
				};
				class GREEN
				{
					label="GREEN";
					image="TSB_ACEAX_Compat\data\GREENILBE.paa";
				};
				class GREENHEX
				{
					label="GREENHEX";
					image="TSB_ACEAX_Compat\data\GREENHEX.paa";
				};
				class HEX
				{
					label="HEX";
					image="TSB_ACEAX_Compat\data\HEX.paa";
				};
				class KLDESERT
				{
					label="KL DESERT";
					image="TSB_ACEAX_Compat\data\KLDESERT.paa";
				};
				class M81W
				{
					label="M81 W";
					image="TSB_ACEAX_Compat\data\M81W.paa";
				};
				class MTP
				{
					label="MTP";
					image="TSB_ACEAX_Compat\data\MTP.paa";
				};
				class MULTICAM
				{
					label="MULTICAM";
					image="TSB_ACEAX_Compat\data\MC2.paa";
				};
				class MULTICAMAIRD
				{
					label="MULTICAM A";
					image="TSB_ACEAX_Compat\data\MCA.paa";
				};
				class MULTICAMTROPIC
				{
					label="MULTICAM T";
					image="TSB_ACEAX_Compat\data\MCT2.paa";
				};
				class MULTICAMVSM
				{
					label="MULTICAM VSM";
					image="TSB_ACEAX_Compat\data\MC3.paa";
				};
				class SKDIG
				{
					label="SK DIGITAL";
					image="TSB_ACEAX_Compat\data\SKDIGITAL.paa";
				};
				class SKDIGD
				{
					label="SK DIGITAL D";
					image="TSB_ACEAX_Compat\data\SKDIGITALD.paa";
				};
				class TROPENTARN
				{
					label="TROPENTARN";
					image="TSB_ACEAX_Compat\data\TROPENTARN.paa";
				};
				class MULTITARN
				{
					label="MULTITARN";
					image="TSB_ACEAX_Compat\data\MULTITARN.paa";
				};
				class UCP
				{
					label="UCP";
					image="TSB_ACEAX_Compat\data\UCP.paa";
				};
				class VZORD
				{
					label="VZOR 95 D";
					image="TSB_ACEAX_Compat\data\VZOR95D.paa";
				};
				class VZORW
				{
					label="VZOR 95 W";
					image="TSB_ACEAX_Compat\data\VZOR95W.paa";
				};
				class WINTER
				{
					label="WINTER";
					image="TSB_ACEAX_Compat\data\wht.paa";
				};
				class WzD
				{
					label="Wz.93 D";
					image="TSB_ACEAX_Compat\data\WZ93D.paa";
				};
				class WzW
				{
					label="Wz.93 Wd";
					image="TSB_ACEAX_Compat\data\WZ93WD.paa";
				};
				class TFWAlpine
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class TFWAird
				{
					label="Aird";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class TFWBlack
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa";
				};
				class TFWCoyote
				{
					label="Coyote";
					image="TSB_ACEAX_Compat\data\COYOTE.paa";
				};
				class TFWGreen
				{
					label="Green";
					image="TSB_ACEAX_Compat\data\GREENBROWN.paa";
				};
				class TFWMarpatD
				{
					label="Marpat-D";
					image="TSB_ACEAX_Compat\data\MARPATD.paa";
				};
				class TFWMarpatWD
				{
					label="Marpat-Wd";
					image="TSB_ACEAX_Compat\data\MARPATWD.paa";
				};
				class TFWMulticam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class TFWMCT
				{
					label="Multicam T";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class TFWOCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP2.paa";
				};
				class TFWWD
				{
					label="Marpat-Wd 2";
					image="TSB_ACEAX_Compat\data\MARPATWD2.paa";
				};
			};
		};
		class ILBE_VHFUHF
		{
			label="ILBE RT-1523G (ASIP) + VHF/UHF";
			author="Frost993";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[]=
				{
					"AAF",
					"AOR2",
					"ATACSAU",
					"ATACSFG",
					"Black",
					"CADPATAIRD",
					"CADPATTEMP",
					"CTRG",
					"DPMT",
					"DPMW",
					"EMRS",
					"FLECKTARN",
					"GREEN",
					"GREENHEX",
					"HEX",
					"KLDESERT",
					"M81W",
					"MTP",
					"MULTICAM",
					"MULTICAMAIRD",
					"MULTICAMTROPIC",
					"MULTICAMVSM",
					"SKDIG",
					"SKDIGD",
					"TROPENTARN",
					"MULTITARN",
					"UCP",
					"VZORD",
					"VZORW",
					"WINTER",
					"WzD",
					"WzW",
					"TFWAlpine",
					"TFWAird",
					"TFWBlack",
					"TFWCoyote",
					"TFWGreen",
					"TFWMarpatD",
					"TFWMarpatWD",
					"TFWMCT",
					"TFWMulticam",
					"TFWOCP",
					"TFWWD"
				};
				class AAF
				{
					label="AAF";
					image="TSB_ACEAX_Compat\data\AAF.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
				class ATACSAU
				{
					label="ATACSAU";
					image="TSB_ACEAX_Compat\data\ATACSAU.paa";
				};
				class ATACSFG
				{
					label="ATACSFG";
					image="TSB_ACEAX_Compat\data\ATACSFG.paa";
				};
				class Black
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa";
				};
				class CADPATAIRD
				{
					label="CADPAT A";
					image="TSB_ACEAX_Compat\data\CADPATA.paa";
				};
				class CADPATTEMP
				{
					label="CADPAT T";
					image="TSB_ACEAX_Compat\data\CADPATT.paa";
				};
				class CTRG
				{
					label="CTRG";
					image="TSB_ACEAX_Compat\data\CTRG.paa";
				};
				class DPMT
				{
					label="DPM T";
					image="TSB_ACEAX_Compat\data\DPMT.paa";
				};
				class DPMW
				{
					label="DPM W";
					image="TSB_ACEAX_Compat\data\DPMW.paa";
				};
				class EMRS
				{
					label="EMR S";
					image="TSB_ACEAX_Compat\data\EMRS.paa";
				};
				class FLECKTARN
				{
					label="FLECKTARN";
					image="TSB_ACEAX_Compat\data\FLECKTARN.paa";
				};
				class GREEN
				{
					label="GREEN";
					image="TSB_ACEAX_Compat\data\GREENILBE.paa";
				};
				class GREENHEX
				{
					label="GREENHEX";
					image="TSB_ACEAX_Compat\data\GREENHEX.paa";
				};
				class HEX
				{
					label="HEX";
					image="TSB_ACEAX_Compat\data\HEX.paa";
				};
				class KLDESERT
				{
					label="KL DESERT";
					image="TSB_ACEAX_Compat\data\KLDESERT.paa";
				};
				class M81W
				{
					label="M81 W";
					image="TSB_ACEAX_Compat\data\M81W.paa";
				};
				class MTP
				{
					label="MTP";
					image="TSB_ACEAX_Compat\data\MTP.paa";
				};
				class MULTICAM
				{
					label="MULTICAM";
					image="TSB_ACEAX_Compat\data\MC2.paa";
				};
				class MULTICAMAIRD
				{
					label="MULTICAM A";
					image="TSB_ACEAX_Compat\data\MCA.paa";
				};
				class MULTICAMTROPIC
				{
					label="MULTICAM T";
					image="TSB_ACEAX_Compat\data\MCT2.paa";
				};
				class MULTICAMVSM
				{
					label="MULTICAM VSM";
					image="TSB_ACEAX_Compat\data\MC3.paa";
				};
				class SKDIG
				{
					label="SK DIGITAL";
					image="TSB_ACEAX_Compat\data\SKDIGITAL.paa";
				};
				class SKDIGD
				{
					label="SK DIGITAL D";
					image="TSB_ACEAX_Compat\data\SKDIGITALD.paa";
				};
				class TROPENTARN
				{
					label="TROPENTARN";
					image="TSB_ACEAX_Compat\data\TROPENTARN.paa";
				};
				class MULTITARN
				{
					label="MULTITARN";
					image="TSB_ACEAX_Compat\data\MULTITARN.paa";
				};
				class UCP
				{
					label="UCP";
					image="TSB_ACEAX_Compat\data\UCP.paa";
				};
				class VZORD
				{
					label="VZOR 95 D";
					image="TSB_ACEAX_Compat\data\VZOR95D.paa";
				};
				class VZORW
				{
					label="VZOR 95 W";
					image="TSB_ACEAX_Compat\data\VZOR95W.paa";
				};
				class WINTER
				{
					label="WINTER";
					image="TSB_ACEAX_Compat\data\wht.paa";
				};
				class WzD
				{
					label="Wz.93 D";
					image="TSB_ACEAX_Compat\data\WZ93D.paa";
				};
				class WzW
				{
					label="Wz.93 Wd";
					image="TSB_ACEAX_Compat\data\WZ93WD.paa";
				};
				class TFWAlpine
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class TFWAird
				{
					label="Aird";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class TFWBlack
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa";
				};
				class TFWCoyote
				{
					label="Coyote";
					image="TSB_ACEAX_Compat\data\COYOTE.paa";
				};
				class TFWGreen
				{
					label="Green";
					image="TSB_ACEAX_Compat\data\GREENBROWN.paa";
				};
				class TFWMarpatD
				{
					label="Marpat-D";
					image="TSB_ACEAX_Compat\data\MARPATD.paa";
				};
				class TFWMarpatWD
				{
					label="Marpat-Wd";
					image="TSB_ACEAX_Compat\data\MARPATWD.paa";
				};
				class TFWMulticam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class TFWMCT
				{
					label="Multicam T";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class TFWOCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP2.paa";
				};
				class TFWWD
				{
					label="Marpat-Wd 2";
					image="TSB_ACEAX_Compat\data\MARPATWD2.paa";
				};
			};
		};
		class ILBE_Whip
		{
			label="ILBE RT-1523G (ASIP) + Whip";
			author="Frost993";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[]=
				{
					"AAF",
					"AOR2",
					"ATACSAU",
					"ATACSFG",
					"Black",
					"CADPATAIRD",
					"CADPATTEMP",
					"CTRG",
					"DPMT",
					"DPMW",
					"EMRS",
					"FLECKTARN",
					"GREEN",
					"GREENHEX",
					"HEX",
					"KLDESERT",
					"M81W",
					"MTP",
					"MULTICAM",
					"MULTICAMAIRD",
					"MULTICAMTROPIC",
					"MULTICAMVSM",
					"SKDIG",
					"SKDIGD",
					"TROPENTARN",
					"MULTITARN",
					"UCP",
					"VZORD",
					"VZORW",
					"WINTER",
					"WzD",
					"WzW",
					"TFWAlpine",
					"TFWAird",
					"TFWBlack",
					"TFWCoyote",
					"TFWGreen",
					"TFWMarpatD",
					"TFWMarpatWD",
					"TFWMCT",
					"TFWMulticam",
					"TFWOCP",
					"TFWWD"
				};
				class AAF
				{
					label="AAF";
					image="TSB_ACEAX_Compat\data\AAF.paa";
				};
				class AOR2
				{
					label="AOR2";
					image="TSB_ACEAX_Compat\data\AOR2.paa";
				};
				class ATACSAU
				{
					label="ATACSAU";
					image="TSB_ACEAX_Compat\data\ATACSAU.paa";
				};
				class ATACSFG
				{
					label="ATACSFG";
					image="TSB_ACEAX_Compat\data\ATACSFG.paa";
				};
				class Black
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa";
				};
				class CADPATAIRD
				{
					label="CADPAT A";
					image="TSB_ACEAX_Compat\data\CADPATA.paa";
				};
				class CADPATTEMP
				{
					label="CADPAT T";
					image="TSB_ACEAX_Compat\data\CADPATT.paa";
				};
				class CTRG
				{
					label="CTRG";
					image="TSB_ACEAX_Compat\data\CTRG.paa";
				};
				class DPMT
				{
					label="DPM T";
					image="TSB_ACEAX_Compat\data\DPMT.paa";
				};
				class DPMW
				{
					label="DPM W";
					image="TSB_ACEAX_Compat\data\DPMW.paa";
				};
				class EMRS
				{
					label="EMR S";
					image="TSB_ACEAX_Compat\data\EMRS.paa";
				};
				class FLECKTARN
				{
					label="FLECKTARN";
					image="TSB_ACEAX_Compat\data\FLECKTARN.paa";
				};
				class GREEN
				{
					label="GREEN";
					image="TSB_ACEAX_Compat\data\GREENILBE.paa";
				};
				class GREENHEX
				{
					label="GREENHEX";
					image="TSB_ACEAX_Compat\data\GREENHEX.paa";
				};
				class HEX
				{
					label="HEX";
					image="TSB_ACEAX_Compat\data\HEX.paa";
				};
				class KLDESERT
				{
					label="KL DESERT";
					image="TSB_ACEAX_Compat\data\KLDESERT.paa";
				};
				class M81W
				{
					label="M81 W";
					image="TSB_ACEAX_Compat\data\M81W.paa";
				};
				class MTP
				{
					label="MTP";
					image="TSB_ACEAX_Compat\data\MTP.paa";
				};
				class MULTICAM
				{
					label="MULTICAM";
					image="TSB_ACEAX_Compat\data\MC2.paa";
				};
				class MULTICAMAIRD
				{
					label="MULTICAM A";
					image="TSB_ACEAX_Compat\data\MCA.paa";
				};
				class MULTICAMTROPIC
				{
					label="MULTICAM T";
					image="TSB_ACEAX_Compat\data\MCT2.paa";
				};
				class MULTICAMVSM
				{
					label="MULTICAM VSM";
					image="TSB_ACEAX_Compat\data\MC3.paa";
				};
				class SKDIG
				{
					label="SK DIGITAL";
					image="TSB_ACEAX_Compat\data\SKDIGITAL.paa";
				};
				class SKDIGD
				{
					label="SK DIGITAL D";
					image="TSB_ACEAX_Compat\data\SKDIGITALD.paa";
				};
				class TROPENTARN
				{
					label="TROPENTARN";
					image="TSB_ACEAX_Compat\data\TROPENTARN.paa";
				};
				class MULTITARN
				{
					label="MULTITARN";
					image="TSB_ACEAX_Compat\data\MULTITARN.paa";
				};
				class UCP
				{
					label="UCP";
					image="TSB_ACEAX_Compat\data\UCP.paa";
				};
				class VZORD
				{
					label="VZOR 95 D";
					image="TSB_ACEAX_Compat\data\VZOR95D.paa";
				};
				class VZORW
				{
					label="VZOR 95 W";
					image="TSB_ACEAX_Compat\data\VZOR95W.paa";
				};
				class WINTER
				{
					label="WINTER";
					image="TSB_ACEAX_Compat\data\wht.paa";
				};
				class WzD
				{
					label="Wz.93 D";
					image="TSB_ACEAX_Compat\data\WZ93D.paa";
				};
				class WzW
				{
					label="Wz.93 Wd";
					image="TSB_ACEAX_Compat\data\WZ93WD.paa";
				};
				class TFWAlpine
				{
					label="Alpine";
					image="TSB_ACEAX_Compat\data\ALP.paa";
				};
				class TFWAird
				{
					label="Aird";
					image="TSB_ACEAX_Compat\data\ARD.paa";
				};
				class TFWBlack
				{
					label="Black";
					image="TSB_ACEAX_Compat\data\Black.paa";
				};
				class TFWCoyote
				{
					label="Coyote";
					image="TSB_ACEAX_Compat\data\COYOTE.paa";
				};
				class TFWGreen
				{
					label="Green";
					image="TSB_ACEAX_Compat\data\GREENBROWN.paa";
				};
				class TFWMarpatD
				{
					label="Marpat-D";
					image="TSB_ACEAX_Compat\data\MARPATD.paa";
				};
				class TFWMarpatWD
				{
					label="Marpat-Wd";
					image="TSB_ACEAX_Compat\data\MARPATWD.paa";
				};
				class TFWMulticam
				{
					label="Multicam";
					image="TSB_ACEAX_Compat\data\MC.paa";
				};
				class TFWMCT
				{
					label="Multicam T";
					image="TSB_ACEAX_Compat\data\MCT.paa";
				};
				class TFWOCP
				{
					label="OCP";
					image="TSB_ACEAX_Compat\data\OCP2.paa";
				};
				class TFWWD
				{
					label="Marpat-Wd 2";
					image="TSB_ACEAX_Compat\data\MARPATWD2.paa";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class cfgVehicles
	{
		class YSA_ilbe_whipext_AAF
		{
			model="ILBE_ANT";
			camo="AAF";
		};
		class YSA_ilbe_whipext_AOR2
		{
			model="ILBE_ANT";
			camo="AOR2";
		};
		class YSA_ilbe_whipext_ATACSAU
		{
			model="ILBE_ANT";
			camo="ATACSAU";
		};
		class YSA_ilbe_whipext_ATACSFG
		{
			model="ILBE_ANT";
			camo="ATACSFG";
		};
		class YSA_ilbe_whipext_Black
		{
			model="ILBE_ANT";
			camo="Black";
		};
		class YSA_ilbe_whipext_CADPATArid
		{
			model="ILBE_ANT";
			camo="CADPATAIRD";
		};
		class YSA_ilbe_whipext_CADPATTemperate
		{
			model="ILBE_ANT";
			camo="CADPATTEMP";
		};
		class YSA_ilbe_whipext_CTRG
		{
			model="ILBE_ANT";
			camo="CTRG";
		};
		class YSA_ilbe_whipext_DPMTemperate
		{
			model="ILBE_ANT";
			camo="DPMT";
		};
		class YSA_ilbe_whipext_DPMWoodland
		{
			model="ILBE_ANT";
			camo="DPMW";
		};
		class YSA_ilbe_whipext_EMRSummer
		{
			model="ILBE_ANT";
			camo="EMRS";
		};
		class YSA_ilbe_whipext_Flecktarn
		{
			model="ILBE_ANT";
			camo="FLECKTARN";
		};
		class YSA_ilbe_whipext_Green
		{
			model="ILBE_ANT";
			camo="GREEN";
		};
		class YSA_ilbe_whipext_GreenHEX
		{
			model="ILBE_ANT";
			camo="GREENHEX";
		};
		class YSA_ilbe_whipext_HEX
		{
			model="ILBE_ANT";
			camo="HEX";
		};
		class YSA_ilbe_whipext_KLDesert
		{
			model="ILBE_ANT";
			camo="KLDESERT";
		};
		class YSA_ilbe_whipext_M81woodland
		{
			model="ILBE_ANT";
			camo="M81W";
		};
		class YSA_ilbe_whipext_MTP
		{
			model="ILBE_ANT";
			camo="MTP";
		};
		class YSA_ilbe_whipext_Multicam
		{
			model="ILBE_ANT";
			camo="MULTICAM";
		};
		class YSA_ilbe_whipext_MulticamArid
		{
			model="ILBE_ANT";
			camo="MULTICAMAIRD";
		};
		class YSA_ilbe_whipext_MulticamTropic
		{
			model="ILBE_ANT";
			camo="MULTICAMTROPIC";
		};
		class YSA_ilbe_whipext_MulticamVSM
		{
			model="ILBE_ANT";
			camo="MULTICAMVSM";
		};
		class YSA_ilbe_whipext_SKDigital
		{
			model="ILBE_ANT";
			camo="SKDIG";
		};
		class YSA_ilbe_whipext_SKDigitalD
		{
			model="ILBE_ANT";
			camo="SKDIGD";
		};
		class YSA_ilbe_whipext_Tropentarn
		{
			model="ILBE_ANT";
			camo="TROPENTARN";
		};
		class YSA_ilbe_whipext_Multitarn
		{
			model="ILBE_ANT";
			camo="MULTITARN";
		};
		class YSA_ilbe_whipext_UCP
		{
			model="ILBE_ANT";
			camo="UCP";
		};
		class YSA_ilbe_whipext_Vzor95W
		{
			model="ILBE_ANT";
			camo="VZORW";
		};
		class YSA_ilbe_whipext_Vzor95D
		{
			model="ILBE_ANT";
			camo="VZORD";
		};
		class YSA_ilbe_whipext_Winter
		{
			model="ILBE_ANT";
			camo="WINTER";
		};
		class YSA_ilbe_whipext_93Des
		{
			model="ILBE_ANT";
			camo="WzD";
		};
		class YSA_ilbe_whipext_93Wdl
		{
			model="ILBE_ANT";
			camo="WzW";
		};
		class tfw_ilbe_whipext_alpine
		{
			model="ILBE_ANT";
			camo="TFWAlpine";
		};
		class tfw_ilbe_whipext_arid
		{
			model="ILBE_ANT";
			camo="TFWAird";
		};
		class tfw_ilbe_whipext_black
		{
			model="ILBE_ANT";
			camo="TFWBlack";
		};
		class tfw_ilbe_whipext_coy
		{
			model="ILBE_ANT";
			camo="TFWCoyote";
		};
		class tfw_ilbe_whipext_gr
		{
			model="ILBE_ANT";
			camo="TFWGreen";
		};
		class tfw_ilbe_whipext_d
		{
			model="ILBE_ANT";
			camo="TFWMarpatD";
		};
		class tfw_ilbe_whipext_wd
		{
			model="ILBE_ANT";
			camo="TFWMarpatWD";
		};
		class tfw_ilbe_whipext_mct
		{
			model="ILBE_ANT";
			camo="TFWMCT";
		};
		class tfw_ilbe_whipext_mc
		{
			model="ILBE_ANT";
			camo="TFWMulticam";
		};
		class tfw_ilbe_whipext_ocp
		{
			model="ILBE_ANT";
			camo="TFWOCP";
		};
		class tfw_ilbe_whipext_wd2
		{
			model="ILBE_ANT";
			camo="TFWWD";
		};
		class YSA_ilbe_blade_AAF
		{
			model="ILBE_VHFBlade";
			camo="AAF";
		};
		class YSA_ilbe_blade_AOR2
		{
			model="ILBE_VHFBlade";
			camo="AOR2";
		};
		class YSA_ilbe_blade_ATACSAU
		{
			model="ILBE_VHFBlade";
			camo="ATACSAU";
		};
		class YSA_ilbe_blade_ATACSFG
		{
			model="ILBE_VHFBlade";
			camo="ATACSFG";
		};
		class YSA_ilbe_blade_Black
		{
			model="ILBE_VHFBlade";
			camo="Black";
		};
		class YSA_ilbe_blade_CADPATArid
		{
			model="ILBE_VHFBlade";
			camo="CADPATAIRD";
		};
		class YSA_ilbe_blade_CADPATTemperate
		{
			model="ILBE_VHFBlade";
			camo="CADPATTEMP";
		};
		class YSA_ilbe_blade_CTRG
		{
			model="ILBE_VHFBlade";
			camo="CTRG";
		};
		class YSA_ilbe_blade_DPMTemperate
		{
			model="ILBE_VHFBlade";
			camo="DPMT";
		};
		class YSA_ilbe_blade_DPMWoodland
		{
			model="ILBE_VHFBlade";
			camo="DPMW";
		};
		class YSA_ilbe_blade_EMRSummer
		{
			model="ILBE_VHFBlade";
			camo="EMRS";
		};
		class YSA_ilbe_blade_Flecktarn
		{
			model="ILBE_VHFBlade";
			camo="FLECKTARN";
		};
		class YSA_ilbe_blade_Green
		{
			model="ILBE_VHFBlade";
			camo="GREEN";
		};
		class YSA_ilbe_blade_GreenHEX
		{
			model="ILBE_VHFBlade";
			camo="GREENHEX";
		};
		class YSA_ilbe_blade_HEX
		{
			model="ILBE_VHFBlade";
			camo="HEX";
		};
		class YSA_ilbe_blade_KLDesert
		{
			model="ILBE_VHFBlade";
			camo="KLDESERT";
		};
		class YSA_ilbe_blade_M81woodland
		{
			model="ILBE_VHFBlade";
			camo="M81W";
		};
		class YSA_ilbe_blade_MTP
		{
			model="ILBE_VHFBlade";
			camo="MTP";
		};
		class YSA_ilbe_blade_Multicam
		{
			model="ILBE_VHFBlade";
			camo="MULTICAM";
		};
		class YSA_ilbe_blade_MulticamArid
		{
			model="ILBE_VHFBlade";
			camo="MULTICAMAIRD";
		};
		class YSA_ilbe_blade_MulticamTropic
		{
			model="ILBE_VHFBlade";
			camo="MULTICAMTROPIC";
		};
		class YSA_ilbe_blade_MulticamVSM
		{
			model="ILBE_VHFBlade";
			camo="MULTICAMVSM";
		};
		class YSA_ilbe_blade_SKDigital
		{
			model="ILBE_VHFBlade";
			camo="SKDIG";
		};
		class YSA_ilbe_blade_SKDigitalD
		{
			model="ILBE_VHFBlade";
			camo="SKDIGD";
		};
		class YSA_ilbe_blade_Tropentarn
		{
			model="ILBE_VHFBlade";
			camo="TROPENTARN";
		};
		class YSA_ilbe_blade_Multitarn
		{
			model="ILBE_VHFBlade";
			camo="MULTITARN";
		};
		class YSA_ilbe_blade_UCP
		{
			model="ILBE_VHFBlade";
			camo="UCP";
		};
		class YSA_ilbe_blade_Vzor95W
		{
			model="ILBE_VHFBlade";
			camo="VZORW";
		};
		class YSA_ilbe_blade_Vzor95D
		{
			model="ILBE_VHFBlade";
			camo="VZORD";
		};
		class YSA_ilbe_blade_Winter
		{
			model="ILBE_VHFBlade";
			camo="WINTER";
		};
		class YSA_ilbe_blade_93Des
		{
			model="ILBE_VHFBlade";
			camo="WzD";
		};
		class YSA_ilbe_blade_93Wdl
		{
			model="ILBE_VHFBlade";
			camo="WzW";
		};
		class tfw_ilbe_blade_alpine
		{
			model="ILBE_VHFBlade";
			camo="TFWAlpine";
		};
		class tfw_ilbe_blade_arid
		{
			model="ILBE_VHFBlade";
			camo="TFWAird";
		};
		class tfw_ilbe_blade_black
		{
			model="ILBE_VHFBlade";
			camo="TFWBlack";
		};
		class tfw_ilbe_blade_coy
		{
			model="ILBE_VHFBlade";
			camo="TFWCoyote";
		};
		class tfw_ilbe_blade_gr
		{
			model="ILBE_VHFBlade";
			camo="TFWGreen";
		};
		class tfw_ilbe_blade_d
		{
			model="ILBE_VHFBlade";
			camo="TFWMarpatD";
		};
		class tfw_ilbe_blade_wd
		{
			model="ILBE_VHFBlade";
			camo="TFWMarpatWD";
		};
		class tfw_ilbe_blade_mct
		{
			model="ILBE_VHFBlade";
			camo="TFWMCT";
		};
		class tfw_ilbe_blade_mc
		{
			model="ILBE_VHFBlade";
			camo="TFWMulticam";
		};
		class tfw_ilbe_blade_ocp
		{
			model="ILBE_VHFBlade";
			camo="TFWOCP";
		};
		class tfw_ilbe_blade_wd2
		{
			model="ILBE_VHFBlade";
			camo="TFWWD";
		};
		class YSA_ilbe_dd_AAF
		{
			model="ILBE_VHFUHF";
			camo="AAF";
		};
		class YSA_ilbe_dd_AOR2
		{
			model="ILBE_VHFUHF";
			camo="AOR2";
		};
		class YSA_ilbe_dd_ATACSAU
		{
			model="ILBE_VHFUHF";
			camo="ATACSAU";
		};
		class YSA_ilbe_dd_ATACSFG
		{
			model="ILBE_VHFUHF";
			camo="ATACSFG";
		};
		class YSA_ilbe_dd_Black
		{
			model="ILBE_VHFUHF";
			camo="Black";
		};
		class YSA_ilbe_dd_CADPATArid
		{
			model="ILBE_VHFUHF";
			camo="CADPATAIRD";
		};
		class YSA_ilbe_dd_CADPATTemperate
		{
			model="ILBE_VHFUHF";
			camo="CADPATTEMP";
		};
		class YSA_ilbe_dd_CTRG
		{
			model="ILBE_VHFUHF";
			camo="CTRG";
		};
		class YSA_ilbe_dd_DPMTemperate
		{
			model="ILBE_VHFUHF";
			camo="DPMT";
		};
		class YSA_ilbe_dd_DPMWoodland
		{
			model="ILBE_VHFUHF";
			camo="DPMW";
		};
		class YSA_ilbe_dd_EMRSummer
		{
			model="ILBE_VHFUHF";
			camo="EMRS";
		};
		class YSA_ilbe_dd_Flecktarn
		{
			model="ILBE_VHFUHF";
			camo="FLECKTARN";
		};
		class YSA_ilbe_dd_Green
		{
			model="ILBE_VHFUHF";
			camo="GREEN";
		};
		class YSA_ilbe_dd_GreenHEX
		{
			model="ILBE_VHFUHF";
			camo="GREENHEX";
		};
		class YSA_ilbe_dd_HEX
		{
			model="ILBE_VHFUHF";
			camo="HEX";
		};
		class YSA_ilbe_dd_KLDesert
		{
			model="ILBE_VHFUHF";
			camo="KLDESERT";
		};
		class YSA_ilbe_dd_M81woodland
		{
			model="ILBE_VHFUHF";
			camo="M81W";
		};
		class YSA_ilbe_dd_MTP
		{
			model="ILBE_VHFUHF";
			camo="MTP";
		};
		class YSA_ilbe_dd_Multicam
		{
			model="ILBE_VHFUHF";
			camo="MULTICAM";
		};
		class YSA_ilbe_dd_MulticamArid
		{
			model="ILBE_VHFUHF";
			camo="MULTICAMAIRD";
		};
		class YSA_ilbe_dd_MulticamTropic
		{
			model="ILBE_VHFUHF";
			camo="MULTICAMTROPIC";
		};
		class YSA_ilbe_dd_MulticamVSM
		{
			model="ILBE_VHFUHF";
			camo="MULTICAMVSM";
		};
		class YSA_ilbe_dd_SKDigital
		{
			model="ILBE_VHFUHF";
			camo="SKDIG";
		};
		class YSA_ilbe_dd_SKDigitalD
		{
			model="ILBE_VHFUHF";
			camo="SKDIGD";
		};
		class YSA_ilbe_dd_Tropentarn
		{
			model="ILBE_VHFUHF";
			camo="TROPENTARN";
		};
		class YSA_ilbe_dd_Multitarn
		{
			model="ILBE_VHFUHF";
			camo="MULTITARN";
		};
		class YSA_ilbe_dd_UCP
		{
			model="ILBE_VHFUHF";
			camo="UCP";
		};
		class YSA_ilbe_dd_Vzor95W
		{
			model="ILBE_VHFUHF";
			camo="VZORW";
		};
		class YSA_ilbe_dd_Vzor95D
		{
			model="ILBE_VHFUHF";
			camo="VZORD";
		};
		class YSA_ilbe_dd_Winter
		{
			model="ILBE_VHFUHF";
			camo="WINTER";
		};
		class YSA_ilbe_dd_93Des
		{
			model="ILBE_VHFUHF";
			camo="WzD";
		};
		class YSA_ilbe_dd_93Wdl
		{
			model="ILBE_VHFUHF";
			camo="WzW";
		};
		class tfw_ilbe_DD_alpine
		{
			model="ILBE_VHFUHF";
			camo="TFWAlpine";
		};
		class tfw_ilbe_DD_arid
		{
			model="ILBE_VHFUHF";
			camo="TFWAird";
		};
		class tfw_ilbe_DD_black
		{
			model="ILBE_VHFUHF";
			camo="TFWBlack";
		};
		class tfw_ilbe_DD_coy
		{
			model="ILBE_VHFUHF";
			camo="TFWCoyote";
		};
		class tfw_ilbe_DD_gr
		{
			model="ILBE_VHFUHF";
			camo="TFWGreen";
		};
		class tfw_ilbe_DD_d
		{
			model="ILBE_VHFUHF";
			camo="TFWMarpatD";
		};
		class tfw_ilbe_DD_wd
		{
			model="ILBE_VHFUHF";
			camo="TFWMarpatWD";
		};
		class tfw_ilbe_DD_mct
		{
			model="ILBE_VHFUHF";
			camo="TFWMCT";
		};
		class tfw_ilbe_DD_mc
		{
			model="ILBE_VHFUHF";
			camo="TFWMulticam";
		};
		class tfw_ilbe_DD_ocp
		{
			model="ILBE_VHFUHF";
			camo="TFWOCP";
		};
		class tfw_ilbe_DD_wd2
		{
			model="ILBE_VHFUHF";
			camo="TFWWD";
		};
		class YSA_ilbe_whip_AAF
		{
			model="ILBE_Whip";
			camo="AAF";
		};
		class YSA_ilbe_whip_AOR2
		{
			model="ILBE_Whip";
			camo="AOR2";
		};
		class YSA_ilbe_whip_ATACSAU
		{
			model="ILBE_Whip";
			camo="ATACSAU";
		};
		class YSA_ilbe_whip_ATACSFG
		{
			model="ILBE_Whip";
			camo="ATACSFG";
		};
		class YSA_ilbe_whip_Black
		{
			model="ILBE_Whip";
			camo="Black";
		};
		class YSA_ilbe_whip_CADPATArid
		{
			model="ILBE_Whip";
			camo="CADPATAIRD";
		};
		class YSA_ilbe_whip_CADPATTemperate
		{
			model="ILBE_Whip";
			camo="CADPATTEMP";
		};
		class YSA_ilbe_whip_CTRG
		{
			model="ILBE_Whip";
			camo="CTRG";
		};
		class YSA_ilbe_whip_DPMTemperate
		{
			model="ILBE_Whip";
			camo="DPMT";
		};
		class YSA_ilbe_whip_DPMWoodland
		{
			model="ILBE_Whip";
			camo="DPMW";
		};
		class YSA_ilbe_whip_EMRSummer
		{
			model="ILBE_Whip";
			camo="EMRS";
		};
		class YSA_ilbe_whip_Flecktarn
		{
			model="ILBE_Whip";
			camo="FLECKTARN";
		};
		class YSA_ilbe_whip_Green
		{
			model="ILBE_Whip";
			camo="GREEN";
		};
		class YSA_ilbe_whip_GreenHEX
		{
			model="ILBE_Whip";
			camo="GREENHEX";
		};
		class YSA_ilbe_whip_HEX
		{
			model="ILBE_Whip";
			camo="HEX";
		};
		class YSA_ilbe_whip_KLDesert
		{
			model="ILBE_Whip";
			camo="KLDESERT";
		};
		class YSA_ilbe_whip_M81woodland
		{
			model="ILBE_Whip";
			camo="M81W";
		};
		class YSA_ilbe_whip_MTP
		{
			model="ILBE_Whip";
			camo="MTP";
		};
		class YSA_ilbe_whip_Multicam
		{
			model="ILBE_Whip";
			camo="MULTICAM";
		};
		class YSA_ilbe_whip_MulticamArid
		{
			model="ILBE_Whip";
			camo="MULTICAMAIRD";
		};
		class YSA_ilbe_whip_MulticamTropic
		{
			model="ILBE_Whip";
			camo="MULTICAMTROPIC";
		};
		class YSA_ilbe_whip_MulticamVSM
		{
			model="ILBE_Whip";
			camo="MULTICAMVSM";
		};
		class YSA_ilbe_whip_SKDigital
		{
			model="ILBE_Whip";
			camo="SKDIG";
		};
		class YSA_ilbe_whip_SKDigitalD
		{
			model="ILBE_Whip";
			camo="SKDIGD";
		};
		class YSA_ilbe_whip_Tropentarn
		{
			model="ILBE_Whip";
			camo="TROPENTARN";
		};
		class YSA_ilbe_whip_Multitarn
		{
			model="ILBE_Whip";
			camo="MULTITARN";
		};
		class YSA_ilbe_whip_UCP
		{
			model="ILBE_Whip";
			camo="UCP";
		};
		class YSA_ilbe_whip_Vzor95W
		{
			model="ILBE_Whip";
			camo="VZORW";
		};
		class YSA_ilbe_whip_Vzor95D
		{
			model="ILBE_Whip";
			camo="VZORD";
		};
		class YSA_ilbe_whip_Winter
		{
			model="ILBE_Whip";
			camo="WINTER";
		};
		class YSA_ilbe_whip_93Des
		{
			model="ILBE_Whip";
			camo="WzD";
		};
		class YSA_ilbe_whip_93Wdl
		{
			model="ILBE_Whip";
			camo="WzW";
		};
		class tfw_ilbe_whip_alpine
		{
			model="ILBE_Whip";
			camo="TFWAlpine";
		};
		class tfw_ilbe_whip_arid
		{
			model="ILBE_Whip";
			camo="TFWAird";
		};
		class tfw_ilbe_whip_black
		{
			model="ILBE_Whip";
			camo="TFWBlack";
		};
		class tfw_ilbe_whip_coy
		{
			model="ILBE_Whip";
			camo="TFWCoyote";
		};
		class tfw_ilbe_whip_gr
		{
			model="ILBE_Whip";
			camo="TFWGreen";
		};
		class tfw_ilbe_whip_d
		{
			model="ILBE_Whip";
			camo="TFWMarpatD";
		};
		class tfw_ilbe_whip_wd
		{
			model="ILBE_Whip";
			camo="TFWMarpatWD";
		};
		class tfw_ilbe_whip_mct
		{
			model="ILBE_Whip";
			camo="TFWMCT";
		};
		class tfw_ilbe_whip_mc
		{
			model="ILBE_Whip";
			camo="TFWMulticam";
		};
		class tfw_ilbe_whip_ocp
		{
			model="ILBE_Whip";
			camo="TFWOCP";
		};
		class tfw_ilbe_whip_wd2
		{
			model="ILBE_Whip";
			camo="TFWWD";
		};
	};
};
