class CfgPatches
{
	class TSB_ACEAX_Compat_NIARMS
	{
		name="main";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"cba_main",
			"aceax_main",
			"hlcweapons_core"
		};
		author="TSB";
		version=1.1;
		versionStr="1.1.PATCHLVL.0";
		versionAr[]={1,1,0,0};
		skipWhenMissingDependencies = 1;
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class aceax_niarms_compat_main_base
		{
			label="";
			author="TSB";
			options[]={};
		};
		class aceax_niarms_compat_main_acr: aceax_niarms_compat_main_base
		{
			label="ACR-E";
			options[]=
			{
				"camo",
				"barrel",
				"gl"
			};
			class camo
			{
				label="Camo";
				changeingame=0;
				values[]=
				{
					"tan",
					"black",
					"green"
				};
				class tan
				{
					label="Tan";
				};
				class black
				{
					label="Black";
				};
				class camo
				{
					label="Green";
				};
			};
			class barrel
			{
				label="Barrel Length";
				changeingame=0;
				values[]=
				{
					"compact",
					"carbine",
					"mid",
					"long"
				};
				class compact
				{
					label="Compact";
				};
				class carbine
				{
					label="Carbine";
				};
				class mid
				{
					label="Mid";
				};
				class long
				{
					label="Long";
				};
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_acr68: aceax_niarms_compat_main_base
		{
			label="ACR-E 6.8mm";
			options[]=
			{
				"camo",
				"barrel",
				"gl"
			};
			class camo
			{
				label="Camo";
				changeingame=0;
				values[]=
				{
					"tan",
					"black",
					"green"
				};
				class tan
				{
					label="Tan";
				};
				class black
				{
					label="Black";
				};
				class green
				{
					label="Green";
				};
			};
			class barrel
			{
				label="Barrel Length";
				changeingame=0;
				values[]=
				{
					"compact",
					"carbine",
					"mid",
					"long"
				};
				class compact
				{
					label="Compact";
				};
				class carbine
				{
					label="Carbine";
				};
				class mid
				{
					label="Mid";
				};
				class long
				{
					label="Long";
				};
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_acr_cliffhanger: aceax_niarms_compat_main_base
		{
			label="ACR-E Cliffhanger";
			options[]=
			{
				"gl"
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_slr107u: aceax_niarms_compat_main_base
		{
			label="SLR107U";
			options[]=
			{
				"rail"
			};
			class rail
			{
				label="Rail Mount";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_ak12: aceax_niarms_compat_main_base
		{
			label="AK12";
			options[]=
			{
				"Variant",
				"gl"
			};
			class variant
			{
				label="Variant";
				values[]=
				{
					"standard",
					"u"
				};
				changeingame=0;
				alwaysSelectable=1;
				class standard
				{
					label="Standard";
				};
				class u
				{
					label="U";
				};
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="no";
				};
				class yes
				{
					label="yes";
				};
			};
		};
		class aceax_niarms_compat_main_ak74: aceax_niarms_compat_main_base
		{
			label="AK74";
			options[]=
			{
				"rail",
				"wear"
			};
			class rail
			{
				label="Rail Adapter";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="no";
				};
				class yes
				{
					label="yes";
				};
			};
			class wear
			{
				label="Wear";
				values[]=
				{
					"none",
					"wear1",
					"wear2"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="no";
				};
				class wear1
				{
					label="Wear 1";
				};
				class wear2
				{
					label="Wear 2";
				};
			};
		};
		class aceax_niarms_compat_main_ak74m: aceax_niarms_compat_main_base
		{
			label="AK74M";
			options[]=
			{
				"gl",
				"rail"
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="no";
				};
				class yes
				{
					label="yes";
				};
			};
			class rail
			{
				label="Rail Adapter";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="no";
				};
				class yes
				{
					label="yes";
				};
			};
		};
		class aceax_niarms_compat_main_akm: aceax_niarms_compat_main_base
		{
			label="AKM";
			options[]=
			{
				"gl",
				"rail"
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="no";
				};
				class yes
				{
					label="yes";
				};
			};
			class rail
			{
				label="Rail Adapter";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="no";
				};
				class yes
				{
					label="yes";
				};
			};
		};
		class aceax_niarms_compat_main_aks: aceax_niarms_compat_main_base
		{
			label="AKS";
			options[]=
			{
				"variant",
				"rail",
				"gl"
			};
			class variant
			{
				label="Variant";
				values[]=
				{
					"standard",
					"u"
				};
				changeingame=0;
				alwaysSelectable=1;
				class standard
				{
					label="Standard";
				};
				class u
				{
					label="U";
				};
			};
			class rail
			{
				label="Rail Adapter";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="no";
				};
				class yes
				{
					label="yes";
				};
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="no";
				};
				class yes
				{
					label="yes";
				};
			};
		};
		class aceax_niarms_compat_main_aks74u: aceax_niarms_compat_main_base
		{
			label="AKS74U";
			options[]=
			{
				"rail"
			};
			class rail
			{
				label="Rail Adapter";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="no";
				};
				class yes
				{
					label="yes";
				};
			};
		};
		class aceax_niarms_compat_main_aek: aceax_niarms_compat_main_base
		{
			label="AKS";
			options[]=
			{
				"rail",
				"wear"
			};
			class rail
			{
				label="Rail Adapter";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="no";
				};
				class yes
				{
					label="yes";
				};
			};
			class wear
			{
				label="Wear";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="no";
				};
				class yes
				{
					label="yes";
				};
			};
		};
		class aceax_niarms_compat_main_rpk: aceax_niarms_compat_main_base
		{
			label="RPK";
			options[]=
			{
				"variant"
			};
			class variant
			{
				label="Variant";
				values[]=
				{
					"rpk",
					"rpk12",
					"rpk74"
				};
				changeingame=0;
				alwaysSelectable=1;
				class rpk
				{
					label="RPK";
					description="7.62 no rails";
				};
				class rpk12
				{
					label="RPK12";
					description="5.56 with rails";
				};
				class rpk74
				{
					label="RPK74";
					description="5.56 no rails";
				};
			};
		};
		class aceax_niarms_compat_main_m4: aceax_niarms_compat_main_base
		{
			label="M4";
			options[]=
			{
				"variant",
				"gl"
			};
			class variant
			{
				label="Variant";
				alwaysSelectable=1;
				changeingame=0;
				values[]=
				{
					"m4",
					"m4a1",
					"m4a1ch",
					"m4le",
					"xm117e2",
					"mk18"
				};
				class m4
				{
					label="M4";
				};
				class m4a1
				{
					label="M4A1";
				};
				class m4a1ch
				{
					label="M4A1 Carry Handle";
				};
				class m4le
				{
					label="M4LE";
				};
				class xm117e2
				{
					label="XM117E2";
				};
				class mk18
				{
					label="MK 18";
				};
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_ro727: aceax_niarms_compat_main_base
		{
			label="Colt RO727";
			options[]=
			{
				"variant",
				"gl"
			};
			class variant
			{
				label="Variant";
				alwaysSelectable=1;
				changeingame=0;
				values[]=
				{
					"carbine",
					"commando",
					"commandoShort"
				};
				class carbine
				{
					label="Carbine";
				};
				class commando
				{
					label="Commando";
				};
				class commandoShort
				{
					label="Commando Short Barrel";
				};
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_ar15magpul: aceax_niarms_compat_main_base
		{
			label="AR-15 Magpul";
			options[]=
			{
				"variant"
			};
			class variant
			{
				label="Variant";
				alwaysSelectable=1;
				changeingame=0;
				values[]=
				{
					"standard",
					"sanitised"
				};
				class standard
				{
					label="Standard";
				};
				class sanitised
				{
					label="Sanitised";
				};
			};
		};
		class aceax_niarms_compat_main_m16: aceax_niarms_compat_main_base
		{
			label="M16";
			options[]=
			{
				"variant",
				"gl"
			};
			class variant
			{
				label="Variant";
				alwaysSelectable=1;
				changeingame=0;
				values[]=
				{
					"a1",
					"a2"
				};
				class a1
				{
					label="A1";
				};
				class a2
				{
					label="A2";
				};
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_lar15: aceax_niarms_compat_main_base
		{
			label="LAR-15";
			options[]=
			{
				"camo"
			};
			class camo
			{
				label="Camo";
				alwaysSelectable=1;
				changeingame=0;
				values[]=
				{
					"black",
					"tan"
				};
				class black
				{
					label="Black";
				};
				class tan
				{
					label="Tan Lower";
					description="Tan Lower randomly a anime stock (Not DJZonks fault)";
				};
			};
		};
		class aceax_niarms_compat_main_aug: aceax_niarms_compat_main_base
		{
			label="AUG";
			options[]=
			{
				"variant",
				"camo",
				"length",
				"gl",
				"rails"
			};
			class variant
			{
				label="Variant";
				alwaysSelectable=1;
				changeingame=0;
				values[]=
				{
					"a1",
					"a2",
					"a3",
					"sr",
					"para",
					"a2para"
				};
				class a1
				{
					label="A1";
				};
				class a2
				{
					label="A2";
				};
				class A3
				{
					label="A3";
				};
				class sr
				{
					label="SR";
					description="Special Reciever (Single Fire)";
				};
				class para
				{
					label="Para 9mm";
				};
				class a2para
				{
					label="A2 Para 9mm";
				};
			};
			class camo
			{
				label="Camo";
				changeingame=0;
				values[]=
				{
					"blk",
					"od",
					"tan",
					"blue",
					"green"
				};
				class od
				{
					label="OD";
				};
				class blue
				{
					label="Blue";
				};
				class green
				{
					label="Green";
				};
			};
			class length
			{
				label="Barrel Length";
				changeingame=0;
				values[]=
				{
					"standard",
					"carbine",
					"hbar"
				};
				class standard
				{
					label="standard";
				};
				class carbine
				{
					label="Carbine";
				};
				class hbar
				{
					label="HBAR";
					description="Heavy Longer Barrel";
				};
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class rails
			{
				label="rails";
				values[]=
				{
					"no",
					"yes",
					"opticonly"
				};
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
					description="Has both handguard and optic rails";
				};
				class opticonly
				{
					label="Optic Only";
				};
			};
		};
		class aceax_niarms_compat_main_awm: aceax_niarms_compat_main_base
		{
			label="AWM";
			options[]=
			{
				"camo",
				"suppressed",
				"ghillie"
			};
			class camo
			{
				label="Camo";
				values[]=
				{
					"blk",
					"fde",
					"od"
				};
				class fde
				{
					label="FDE";
				};
				class od
				{
					label="OD";
				};
			};
			class suppressed
			{
				label="Integrally suppressed";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class ghillie
			{
				label="Ghillie";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=1;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_c96: aceax_niarms_compat_main_base
		{
			label="C96";
			options[]=
			{
				"variant",
				"barrelLength",
				"stock",
				"wear"
			};
			class variant
			{
				label="Variant";
				values[]=
				{
					"standard",
					"custom",
					"prussian",
					"fullauto"
				};
				changeingame=0;
				alwaysSelectable=1;
				class standard
				{
					label="Standard";
				};
				class custom
				{
					label="Custom";
				};
				class prussian
				{
					label="prussian";
					description="9mm";
				};
				class fullauto
				{
					label="Full Auto";
				};
			};
			class barrelLength
			{
				label="Variant";
				values[]=
				{
					"short",
					"long"
				};
				changeingame=0;
				alwaysSelectable=1;
				class short
				{
					label="Short";
				};
				class long
				{
					label="Long";
				};
			};
			class stock
			{
				label="Stock";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class wear
			{
				label="Wear";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_fal: aceax_niarms_compat_main_base
		{
			label="FAL";
			options[]=
			{
				"variant",
				"rail"
			};
			class variant
			{
				label="Variant";
				changeingame=0;
				values[]=
				{
					"standard",
					"para",
					"canada",
					"lar",
					"stg"
				};
				class standard
				{
					label="Standard";
				};
				class para
				{
					label="Para";
				};
				class canada
				{
					label="Canada";
				};
				class lar
				{
					label="LAR";
					description="Light infantry rifle contracted to Israel";
				};
				class stg
				{
					label="STG";
					description="Steyr STG.58";
				};
			};
			class rail
			{
				label="Rail";
				changeingame=0;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_falosw: aceax_niarms_compat_main_base
		{
			label="FAL OSW";
			options[]=
			{
				"gl"
			};
			class gl
			{
				label="Gernade Launcher";
				changeingame=0;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_slr: aceax_niarms_compat_main_base
		{
			label="SLR";
			options[]=
			{
				"variant"
			};
			class variant
			{
				label="Variant";
				changeingame=0;
				values[]=
				{
					"canada",
					"enfield",
					"lithgow",
					"lithgowCM"
				};
				class canada
				{
					label="Canada";
					description="Canadian SLR variant, manufactured by FN";
				};
				class enfield
				{
					label="Enfield";
					description="Enfield L1A1 SLR";
				};
				class lithgow
				{
					label="Lithgow";
					description="Australian manufactured L1A1";
				};
				class lithgowCM
				{
					label="Lithgow Chopmod";
					description="L2A1 , Barrel sawn down, Pistol grip foregrip.";
				};
			};
		};
		class aceax_niarms_compat_main_fn3011: aceax_niarms_compat_main_base
		{
			label="FN30-11";
			options[]=
			{
				"variant",
				"camo"
			};
			class variant
			{
				label="Variant";
				values[]=
				{
					"og",
					"modernized",
					"tac",
					"lynx"
				};
				changeingame=0;
				alwaysSelectable=1;
				class og
				{
					label="Original";
				};
				class modernized
				{
					label="Modernized";
					description="5.56 with rails";
				};
				class tac
				{
					label="TAC";
					description="5.56 no rails";
				};
				class lynx
				{
					label="LYNX";
					description="5.56 no rails";
				};
			};
			class camo
			{
				label="Camo";
				values[]=
				{
					"none",
					"woodland",
					"green",
					"arctic",
					"grayash",
					"walnut"
				};
				changeingame=0;
				class none
				{
					label="None";
				};
				class woodland
				{
					label="Woodland";
				};
				class green
				{
					label="Green";
				};
				class arctic
				{
					label="Arctic";
				};
				class grayash
				{
					label="Gray Ash";
				};
				class walnut
				{
					label="Walnut";
				};
			};
		};
		class aceax_niarms_compat_main_g3: aceax_niarms_compat_main_base
		{
			label="G3";
			options[]=
			{
				"variant",
				"gl",
				"handGuard",
				"opticRails"
			};
			class variant
			{
				label="Variant";
				alwaysSelectable=1;
				values[]=
				{
					"standard",
					"sniper",
					"ras"
				};
				class standard
				{
					label="Standard";
				};
				class sniper
				{
					label="Sniper";
				};
				class ras
				{
					label="RAS";
					description="Modernization";
				};
			};
			class gl
			{
				label="Gernade Launcher";
				alwaysSelectable=1;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class handGuard
			{
				label="handGuard";
				alwaysSelectable=1;
				values[]=
				{
					"standard",
					"wide",
					"rails"
				};
				class standard
				{
					label="Standard";
				};
				class wide
				{
					label="Wide";
				};
				class rails
				{
					label="Rails";
				};
			};
			class opticRails
			{
				label="Optic Rails";
				alwaysSelectable=1;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_hk33: aceax_niarms_compat_main_base
		{
			label="HK33";
			options[]=
			{
				"varient",
				"gl",
				"rails"
			};
			class variant
			{
				label="Variant";
				alwaysSelectable=1;
				values[]=
				{
					"a2",
					"a3"
				};
				class a2
				{
					label="A2";
				};
				class a3
				{
					label="A3";
				};
			};
			class gl
			{
				label="Gernade Launcher";
				alwaysSelectable=1;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class rails
			{
				label="Rails";
				alwaysSelectable=1;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_hk53: aceax_niarms_compat_main_base
		{
			label="HK33";
			options[]=
			{
				"rails"
			};
			class rails
			{
				label="Rails";
				alwaysSelectable=1;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_psg1: aceax_niarms_compat_main_base
		{
			label="PSG1";
			options[]=
			{
				"optic"
			};
			class optic
			{
				label="optic";
				alwaysSelectable=1;
				values[]=
				{
					"builtIn",
					"adapter",
					"rail"
				};
				class builtIn
				{
					label="Built In";
				};
				class adapter
				{
					label="adapter";
					description="Limited selection of optics with adapters.";
				};
				class rail
				{
					label="Rail";
				};
			};
		};
		class aceax_niarms_compat_main_g36mlic: aceax_niarms_compat_main_base
		{
			label="G36 6.5mm";
			options[]=
			{
				"length",
				"gl"
			};
			class length
			{
				label="Length";
				alwaysSelectable=1;
				values[]=
				{
					"compact",
					"short",
					"standard"
				};
				class compact
				{
					label="Compact";
				};
				class short
				{
					label="Short";
				};
				class standard
				{
					label="Standard";
				};
			};
			class gl
			{
				label="Gernade Launcher";
				alwaysSelectable=1;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_g36: aceax_niarms_compat_main_base
		{
			label="G36";
			options[]=
			{
				"variant",
				"length",
				"tac",
				"gl",
				"rails"
			};
			class variant
			{
				label="Variant";
				alwaysSelectable=1;
				values[]=
				{
					"a",
					"e",
					"v",
					"tac",
					"ksk"
				};
				class a
				{
					label="A";
					description="Standard Version";
				};
				class e
				{
					label="E";
					description="Export Version";
				};
				class v
				{
					label="V";
					description="Diffrent Stock/ Iron Sights and has a rail system";
				};
				class tac
				{
					label="TAC";
					description="Diffrent Stock and Skeletonized Rails";
				};
				class ksk
				{
					label="KSK";
					description="Short Varient with Rail system and skeltonized handguard";
				};
			};
			class length
			{
				label="Length";
				alwaysSelectable=1;
				values[]=
				{
					"standard",
					"compact",
					"short"
				};
				class compact
				{
					label="Compact";
				};
				class short
				{
					label="Short";
				};
				class standard
				{
					label="Standard";
				};
			};
			class gl
			{
				label="Gernade Launcher";
				alwaysSelectable=1;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class rails
			{
				label="Rails";
				alwaysSelectable=1;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_hk416: aceax_niarms_compat_main_base
		{
			label="HK416";
			options[]=
			{
				"variant",
				"length",
				"camo",
				"gl"
			};
			class length
			{
				label="Barrel Length";
				alwaysSelectable=1;
				changeingame=0;
				values[]=
				{
					"9in",
					"10in",
					"145in",
					"165in",
					"20in"
				};
				class 9in
				{
					label="9in";
				};
				class 10in
				{
					label="10in";
				};
				class 145in
				{
					label="14.5in";
				};
				class 165in
				{
					label="16.5in";
				};
				class 20in
				{
					label="20in";
				};
			};
			class variant
			{
				label="Variant";
				changeingame=0;
				alwaysSelectable=1;
				values[]=
				{
					"c",
					"d",
					"n",
					"devgru",
					"potato",
					"rahg",
					"smr",
					"ptc",
					"cag",
					"iar"
				};
				class d
				{
					label="D";
				};
				class c
				{
					label="C";
					description="C-variant Buffer/Bolt/Stock assembly";
				};
				class n
				{
					label="N";
				};
				class devgru
				{
					label="DEVGRU";
					description="DEVGRU Mockup (RAHG, Hogue Overmold Pistol Grip, CTR Stock, Geissele Match Trigger)";
				};
				class potato
				{
					label="Potato";
					description="SMR, Gunfighter Pistol Grip,Gunfighter Trigger Guard, Vltor IMOD Stock, Surefire 3-Prong Muzzle Brake";
				};
				class rahg
				{
					label="RAHG";
					description="Remington Accessories Hand Guard";
				};
				class smr
				{
					label="SMR";
					description="Geissele SMR Mk.1";
				};
				class ptc
				{
					label="PTC";
					description="C variant with a angry maple leaf";
				};
				class cag
				{
					label="CAG";
					description="Delta Force Mockup ( CTR Stock, Black Geissele SMR Rail)";
				};
				class iar
				{
					label="IAR";
					description="USMC M27 Infantry Automatic Rifle with 16.5in Barrel ( Blueforce Gear Sling mount, Knights's Micro BUIS)";
				};
			};
			class camo
			{
				label="Camo";
				changeingame=0;
				values[]=
				{
					"black",
					"tan",
					"woodland"
				};
				class black
				{
					label="Black";
				};
				class woodland
				{
					label="woodland";
				};
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				alwaysSelectable=0;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_m14: aceax_niarms_compat_main_base
		{
			label="M14";
			options[]=
			{
				"varient",
				"rail",
				"bipod"
			};
			class varient
			{
				label="Varient";
				alwaysSelectable=1;
				changeingame=0;
				values[]=
				{
					"standard",
					"dmr",
					"sopmod"
				};
				class standard
				{
					label="Standard";
				};
				class dmr
				{
					label="DMR";
				};
				class sopmod
				{
					label="SOPMOD";
				};
			};
			class rail
			{
				label="Optic Rail";
				alwaysSelectable=1;
				changeingame=0;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class bipod
			{
				label="Bipod";
				alwaysSelectable=1;
				changeingame=0;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_m21: aceax_niarms_compat_main_base
		{
			label="M21";
			options[]=
			{
				"rail"
			};
			class rail
			{
				label="Optic Rail";
				changeingame=0;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_mg42: aceax_niarms_compat_main_base
		{
			label="MG42";
			options[]=
			{
				"kws",
				"camo",
				"stock"
			};
			class kws
			{
				label="KWS Modernization";
				alwaysSelectable=1;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="yes";
				};
			};
			class camo
			{
				label="Color";
				alwaysSelectable=1;
				values[]=
				{
					"gunMetal",
					"black",
					"green",
					"tan"
				};
				class gunMetal
				{
					label="Gun Metal";
				};
				class black
				{
					label="Black";
				};
				class green
				{
					label="Green";
				};
				class tan
				{
					label="Tan";
				};
			};
			class stock
			{
				label="Stock";
				values[]=
				{
					"base",
					"bakelite"
				};
				class base
				{
					label="Base";
				};
				class bakelite
				{
					label="Bakelite";
				};
			};
		};
		class aceax_niarms_compat_main_mg3: aceax_niarms_compat_main_base
		{
			label="MG3";
			options[]=
			{
				"kws",
				"camo",
				"rail"
			};
			class kws
			{
				label="KWS Modernization";
				alwaysSelectable=1;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="yes";
				};
			};
			class camo
			{
				label="Color";
				alwaysSelectable=1;
				values[]=
				{
					"gunMetal",
					"black",
					"green",
					"tan"
				};
				class gunMetal
				{
					label="Gun Metal";
				};
				class black
				{
					label="Black";
				};
				class green
				{
					label="Green";
				};
				class tan
				{
					label="Tan";
				};
			};
			class rail
			{
				label="Optic Rail";
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="yes";
				};
			};
		};
		class aceax_niarms_compat_main_mk46: aceax_niarms_compat_main_base
		{
			label="MK46";
			options[]=
			{
				"mod"
			};
			class mod
			{
				label="Mod";
				values[]=
				{
					"mod0",
					"mod1"
				};
				class mod0
				{
					label="Mod 0";
				};
				class mod1
				{
					label="Mod 1";
				};
			};
		};
		class aceax_niarms_compat_main_mk48: aceax_niarms_compat_main_mk46
		{
			label="MK48";
		};
		class aceax_niarms_compat_main_m249: aceax_niarms_compat_main_base
		{
			label="M249";
			options[]=
			{
				"varient",
				"barrel",
				"stock",
				"rail"
			};
			class varient
			{
				label="Varient";
				alwaysSelectable=1;
				values[]=
				{
					"base",
					"para",
					"pip"
				};
				class base
				{
					label="Base";
				};
				class para
				{
					label="Para";
				};
				class pip
				{
					label="PIP";
					description="Product Improvement Program kit";
				};
			};
			class barrel
			{
				label="Barrel Length";
				alwaysSelectable=1;
				values[]=
				{
					"short",
					"long"
				};
				class short
				{
					label="Short";
				};
				class long
				{
					label="Long";
				};
			};
			class stock
			{
				label="Stock";
				alwaysSelectable=1;
				values[]=
				{
					"solid",
					"para",
					"pip",
					"frame"
				};
				class solid
				{
					label="Solid";
				};
				class para
				{
					label="Para";
				};
				class pip
				{
					label="PIP";
				};
				class frame
				{
					label="Frame";
				};
			};
			class rail
			{
				label="Optics Rail";
				alwaysSelectable=1;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_minimi: aceax_niarms_compat_main_base
		{
			label="FN Minimi";
			options[]=
			{
				"stock",
				"barrel",
				"rail"
			};
			class stock
			{
				label="Stock";
				alwaysSelectable=1;
				values[]=
				{
					"solid",
					"para"
				};
				class solid
				{
					label="Solid";
				};
				class para
				{
					label="Para";
				};
			};
			class barrel
			{
				label="Barrel Length";
				alwaysSelectable=1;
				values[]=
				{
					"short",
					"long"
				};
				class short
				{
					label="Short";
				};
				class long
				{
					label="Long";
				};
			};
			class rail
			{
				label="Optic Rail";
				alwaysSelectable=1;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_mp5: aceax_niarms_compat_main_base
		{
			label="MP5";
			options[]=
			{
				"stock",
				"fireSelector",
				"handGuardRails"
			};
			class stock
			{
				label="Stock";
				values[]=
				{
					"solid",
					"collapsible"
				};
				class solid
				{
					label="Solid";
				};
				class collapsible
				{
					label="Collapsible";
				};
			};
			class fireSelector
			{
				label="Fire Selector Style";
				values[]=
				{
					"text",
					"iconography"
				};
				class text
				{
					label="Text";
				};
				class iconography
				{
					label="Iconography";
				};
			};
			class handGuardRails
			{
				label="Hand Guard Rails";
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_mp5s: aceax_niarms_compat_main_base
		{
			label="MP5 Integrally suppressed";
			options[]=
			{
				"stock"
			};
			class stock
			{
				label="Stock";
				values[]=
				{
					"solid",
					"collapsible"
				};
				class solid
				{
					label="Solid";
				};
				class collapsible
				{
					label="Collapsible";
				};
			};
		};
		class aceax_niarms_compat_main_mp510: aceax_niarms_compat_main_base
		{
			label="MP5 10MM";
			options[]=
			{
				"handGuardRails"
			};
			class handGuardRails
			{
				label="Hand Guard Rails";
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_p226: aceax_niarms_compat_main_base
		{
			label="P226";
			options[]=
			{
				"caliber",
				"type",
				"rails",
				"threadedBarrel"
			};
			class type
			{
				label="Type";
				changeingame=0;
				alwaysSelectable=1;
				values[]=
				{
					"base",
					"elite",
					"equinox",
					"stainless",
					"westGerman"
				};
				class base
				{
					label="Base";
				};
				class elite
				{
					label="Elite";
					description="Lengthened Beavertail";
				};
				class equinox
				{
					label="Equinox";
				};
				class stainless
				{
					label="Stainless Steel";
					description="Stainless-Steel Slide, Nickel Finish";
				};
				class westGerman
				{
					label="West German";
					description="Orig. West-German Run";
				};
			};
			class caliber
			{
				label="Caliber";
				changeingame=0;
				alwaysSelectable=1;
				values[]=
				{
					"9mm",
					"40sw",
					"357"
				};
				class 9mm
				{
					label="9x19mm";
				};
				class 40sw
				{
					label=".40 S&W";
				};
				class 357
				{
					label=".357 SIG";
				};
			};
			class rails
			{
				label="Rails";
				changeingame=0;
				alwaysSelectable=1;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="yes";
				};
			};
			class threadedBarrel
			{
				label="Threaded Barrel";
				changeingame=0;
				alwaysSelectable=1;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="yes";
				};
			};
		};
		class aceax_niarms_compat_main_p229: aceax_niarms_compat_main_base
		{
			label="P229";
			options[]=
			{
				"caliber",
				"type",
				"threadedBarrel"
			};
			class type
			{
				label="Type";
				changeingame=0;
				alwaysSelectable=1;
				values[]=
				{
					"base",
					"elite",
					"equinox",
					"stainless"
				};
				class base
				{
					label="Base";
				};
				class elite
				{
					label="Elite";
					description="Lengthened Beavertail";
				};
				class equinox
				{
					label="Equinox";
				};
				class stainless
				{
					label="Stainless Steel";
					description="Stainless-Steel Slide, Nickel Finish";
				};
			};
			class caliber
			{
				label="Caliber";
				changeingame=0;
				alwaysSelectable=1;
				values[]=
				{
					"9mm",
					"40sw",
					"357"
				};
				class 9mm
				{
					label="9x19mm";
				};
				class 40sw
				{
					label=".40 S&W";
				};
				class 357
				{
					label=".357 SIG";
				};
			};
			class threadedBarrel
			{
				label="Threaded Barrel";
				changeingame=0;
				alwaysSelectable=1;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="yes";
				};
			};
		};
		class aceax_niarms_compat_main_mk25: aceax_niarms_compat_main_base
		{
			label="MK25";
			options[]=
			{
				"finish",
				"threadedBarrel"
			};
			class finish
			{
				label="Finish";
				changeingame=0;
				values[]=
				{
					"black",
					"tan"
				};
				class black
				{
					label="Black";
				};
				class tan
				{
					label="Tan";
				};
			};
			class threadedBarrel
			{
				label="Threaded Barrel";
				changeingame=0;
				alwaysSelectable=1;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="yes";
				};
			};
		};
		class aceax_niarms_compat_main_p239: aceax_niarms_compat_main_base
		{
			label="P239 Subcompact";
			options[]=
			{
				"caliber"
			};
			class caliber
			{
				label="Caliber";
				changeingame=0;
				values[]=
				{
					"9mm",
					"40sw",
					"357"
				};
				class 9mm
				{
					label="9x19mm";
				};
				class 40sw
				{
					label=".40 S&W";
				};
				class 357
				{
					label=".357 SIG";
				};
			};
		};
		class aceax_niarms_compat_main_mk11: aceax_niarms_compat_main_base
		{
			label="MK11";
			options[]=
			{
				"type"
			};
			class type
			{
				label="Type";
				changeingame=0;
				values[]=
				{
					"mk11",
					"mk11a1",
					"mk11a1d"
				};
				class mk11
				{
					label="MK11";
					description="Orig. West-German Run,US DOD Markings";
				};
				class mk11a1
				{
					label="MK11A1";
					description="Commercial reproduction";
				};
				class mk11a1d
				{
					label="MK11A1D";
					description="Commercial reproduction, Sand/Tan Finish";
				};
			};
		};
		class aceax_niarms_compat_main_scarl: aceax_niarms_compat_main_base
		{
			label="FN SCAR-L";
			options[]=
			{
				"camo",
				"gl",
				"barrel",
				"railExtension"
			};
			class camo
			{
				label="Camo";
				changeingame=0;
				values[]=
				{
					"tan",
					"black",
					"camo"
				};
				class tan
				{
					label="Tan";
				};
				class black
				{
					label="Black";
				};
				class camo
				{
					label="Camo";
				};
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class barrel
			{
				label="Barrel Length";
				values[]=
				{
					"cqc",
					"std",
					"lb"
				};
				changeingame=0;
				class cqc
				{
					label="CQC";
					description="Short Barrel";
				};
				class std
				{
					label="STD";
					description="Standard Barrel";
				};
				class lb
				{
					label="Long";
					description="Long Barrel";
				};
			};
			class railExtension
			{
				label="SRX Rail Extension";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_scarl300: aceax_niarms_compat_main_base
		{
			label="FN SCAR-L (.300)";
			autor="Toadie | ACEAX Compat By DJZonk";
			options[]=
			{
				"camo",
				"gl",
				"barrel",
				"railExtension"
			};
			class camo
			{
				label="Camo";
				changeingame=0;
				values[]=
				{
					"tan",
					"black",
					"camo"
				};
				class tan
				{
					label="Tan";
				};
				class black
				{
					label="Black";
				};
				class camo
				{
					label="Camo";
				};
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class barrel
			{
				label="Barrel Length";
				values[]=
				{
					"cqc",
					"std"
				};
				changeingame=0;
				class cqc
				{
					label="CQC";
					description="Short Barrel";
				};
				class std
				{
					label="STD";
					description="Standard Barrel";
				};
			};
			class railExtension
			{
				label="SRX Rail Extension";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_scarh: aceax_niarms_compat_main_base
		{
			label="FN SCAR-H";
			options[]=
			{
				"camo",
				"gl",
				"barrel",
				"railExtension"
			};
			class camo
			{
				label="Camo";
				changeingame=0;
				values[]=
				{
					"tan",
					"black",
					"camo"
				};
				class tan
				{
					label="Tan";
				};
				class black
				{
					label="Black";
				};
				class camo
				{
					label="Camo";
				};
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class barrel
			{
				label="Barrel Length";
				values[]=
				{
					"cqc",
					"std",
					"lb"
				};
				changeingame=0;
				class cqc
				{
					label="CQC";
					description="Short Barrel";
				};
				class std
				{
					label="STD";
					description="Standard Barrel";
				};
				class lb
				{
					label="Long";
					description="Long Barrel";
				};
			};
			class railExtension
			{
				label="SRX Rail Extension";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_scarsc: aceax_niarms_compat_main_base
		{
			label="FN SCAR-SC";
			options[]=
			{
				"camo"
			};
			class camo
			{
				label="Camo";
				changeingame=0;
				values[]=
				{
					"tan",
					"black",
					"camo"
				};
				class tan
				{
					label="Tan";
				};
				class black
				{
					label="Black";
				};
				class camo
				{
					label="Camo";
				};
			};
		};
		class aceax_niarms_compat_main_tpr: aceax_niarms_compat_main_base
		{
			label="FN TPR";
			options[]=
			{
				"camo"
			};
			class camo
			{
				label="Camo";
				changeingame=0;
				values[]=
				{
					"tan",
					"black",
					"camo"
				};
				class tan
				{
					label="Tan";
				};
				class black
				{
					label="Black";
				};
				class camo
				{
					label="Camo";
				};
			};
		};
		class aceax_niarms_compat_main_mk17: aceax_niarms_compat_main_base
		{
			label="MK 17";
			options[]=
			{
				"mod",
				"camo",
				"caliber",
				"barrel",
				"gl"
			};
			class mod
			{
				label="Mod";
				changeingame=0;
				values[]=
				{
					"0",
					"iur"
				};
				class 0
				{
					label="Mod 0";
				};
				class iur
				{
					label="IUR";
				};
			};
			class camo
			{
				label="Camo";
				changeingame=0;
				values[]=
				{
					"tan",
					"camo"
				};
				class tan
				{
					label="Tan";
				};
				class camo
				{
					label="Camo";
				};
			};
			class caliber
			{
				label="Caliber";
				changeingame=0;
				alwaysSelectable=1;
				values[]=
				{
					"300",
					"556nato",
					"762nato",
					"762ak"
				};
				class 300
				{
					label=".300 Blackout";
				};
				class 556nato
				{
					label="5.56 NATO";
				};
				class 762nato
				{
					label="7.62 NATO";
				};
				class 762ak
				{
					label="5.56 AK";
				};
			};
			class barrel
			{
				label="Barel Length";
				changeingame=0;
				values[]=
				{
					"std",
					"cqc"
				};
				class std
				{
					label="Standard";
				};
				class cqc
				{
					label="CQC";
				};
			};
			class gl
			{
				label="Grenade Launcher";
				changeingame=0;
				alwaysSelectable=1;
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_stgw57: aceax_niarms_compat_main_base
		{
			label="STGW57";
			options[]=
			{
				"variant",
				"rails",
				"gl"
			};
			class variant
			{
				label="variant";
				alwaysSelectable=1;
				values[]=
				{
					"base",
					"commando",
					"510",
					"5104",
					"amt"
				};
				class base
				{
					label="Base";
				};
				class commando
				{
					label="Commando";
				};
				class 510
				{
					label="510";
				};
				class 5104
				{
					label="510-4";
				};
				class amt
				{
					label="AMT";
					description="American match trigger";
				};
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				alwaysSelectable=0;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class rails
			{
				label="Rails";
				values[]=
				{
					"no",
					"yes"
				};
				alwaysSelectable=0;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_sg550: aceax_niarms_compat_main_base
		{
			label="SG550";
			options[]=
			{
				"varient",
				"gl",
				"opticRail",
				"barrelRail"
			};
			class varient
			{
				label="Varient";
				changeingame=0;
				values[]=
				{
					"standard",
					"sniper"
				};
				class standard
				{
					label="Standard";
				};
				class sniper
				{
					label="Sniper";
				};
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class opticRail
			{
				label="Optic Rail";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class barrelRail
			{
				label="Barrel Rails";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_sg551: aceax_niarms_compat_main_base
		{
			label="SG551";
			options[]=
			{
				"barrel",
				"gl",
				"opticRail",
				"barrelRail"
			};
			class barrel
			{
				label="Barrel";
				changeingame=0;
				values[]=
				{
					"short",
					"long"
				};
				class short
				{
					label="Short";
				};
				class long
				{
					label="Long";
				};
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class opticRail
			{
				label="Optic Rail";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class barrelRail
			{
				label="Barrel Rails";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_sg553: aceax_niarms_compat_main_base
		{
			label="SG553";
			options[]=
			{
				"caliber",
				"barrel",
				"opticRail",
				"barrelRail"
			};
			class caliber
			{
				label="Caliber";
				changeingame=0;
				alwaysSelectable=1;
				values[]={"556","762"};
				class 556
				{
					label="5.56";
				};
				class 762
				{
					label="7.67";
				};
			};
			class barrel
			{
				label="Barrel";
				changeingame=0;
				values[]=
				{
					"short",
					"long"
				};
				class short
				{
					label="Short";
				};
				class long
				{
					label="Long";
				};
			};
			class opticRail
			{
				label="Optic Rail";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
			class barrelRail
			{
				label="Barrel Rails";
				values[]=
				{
					"no",
					"yes"
				};
				changeingame=0;
				alwaysSelectable=1;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_xm8: aceax_niarms_compat_main_base
		{
			label="XM8";
			options[]=
			{
				"variant",
				"length",
				"camo",
				"gl"
			};
			class variant
			{
				label="Variant";
				changeingame=0;
				alwaysSelectable=1;
				values[]=
				{
					"standard",
					"prototype",
					"mwsf"
				};
				class standard
				{
					label="Standard";
				};
				class prototype
				{
					label="Prototype";
				};
				class mwsf
				{
					label="MWSF";
					description="Modular Weapons System Family";
				};
			};
			class length
			{
				label="Length";
				alwaysSelectable=1;
				changeingame=0;
				values[]=
				{
					"compact",
					"carbine",
					"dmar"
				};
				class compact
				{
					label="Compact";
				};
				class carbine
				{
					label="Carbine";
				};
				class dmar
				{
					label="DMAR";
				};
			};
			class camo
			{
				label="Camo";
				changeingame=0;
				values[]=
				{
					"black",
					"green",
					"od",
					"tan"
				};
				class black
				{
					label="Black";
				};
				class green
				{
					label="Green";
				};
				class od
				{
				};
				class woodland
				{
					label="woodland";
				};
			};
			class gl
			{
				label="Grenade Launcher";
				values[]=
				{
					"no",
					"yes"
				};
				alwaysSelectable=0;
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
		class aceax_niarms_compat_main_m60: aceax_niarms_compat_main_base
		{
			label="M60";
			options[]=
			{
				"variant"
			};
			class variant
			{
				label="variant";
				values[]=
				{
					"base",
					"e4"
				};
				class base
				{
					label="Base";
				};
				class e4
				{
					label="E4";
				};
			};
		};
		class aceax_niarms_compat_main_m1903a1: aceax_niarms_compat_main_base
		{
			label="M1903A1";
			options[]=
			{
				"variant"
			};
			class variant
			{
				label="variant";
				values[]=
				{
					"base",
					"guthrie",
					"scope"
				};
				class base
				{
					label="Base";
				};
				class guthrie
				{
					label="Guthrie";
				};
				class scope
				{
					label="Scope";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class hlc_rifle_ACR_SBR_tan
		{
			model="aceax_niarms_compat_main_acr";
			camo="tan";
			barrel="compact";
			gl="no";
		};
		class hlc_rifle_ACR_SBR_black
		{
			model="aceax_niarms_compat_main_acr";
			camo="black";
			barrel="compact";
			gl="no";
		};
		class hlc_rifle_ACR_SBR_green
		{
			model="aceax_niarms_compat_main_acr";
			camo="green";
			barrel="compact";
			gl="no";
		};
		class hlc_rifle_ACR_Carb_tan
		{
			model="aceax_niarms_compat_main_acr";
			camo="tan";
			barrel="carbine";
			gl="no";
		};
		class hlc_rifle_ACR_Carb_black
		{
			model="aceax_niarms_compat_main_acr";
			camo="black";
			barrel="carbine";
			gl="no";
		};
		class hlc_rifle_ACR_Carb_green
		{
			model="aceax_niarms_compat_main_acr";
			camo="green";
			barrel="carbine";
			gl="no";
		};
		class hlc_rifle_ACR_MID_tan
		{
			model="aceax_niarms_compat_main_acr";
			camo="tan";
			barrel="mid";
			gl="no";
		};
		class hlc_rifle_ACR_MID_black
		{
			model="aceax_niarms_compat_main_acr";
			camo="black";
			barrel="mid";
			gl="no";
		};
		class hlc_rifle_ACR_MID_green
		{
			model="aceax_niarms_compat_main_acr";
			camo="green";
			barrel="mid";
			gl="no";
		};
		class hlc_rifle_ACR_full_tan
		{
			model="aceax_niarms_compat_main_acr";
			camo="tan";
			barrel="long";
			gl="no";
		};
		class hlc_rifle_ACR_full_black
		{
			model="aceax_niarms_compat_main_acr";
			camo="black";
			barrel="long";
			gl="no";
		};
		class hlc_rifle_ACR_full_green
		{
			model="aceax_niarms_compat_main_acr";
			camo="green";
			barrel="long";
			gl="no";
		};
		class hlc_rifle_ACR_GL_SBR_tan
		{
			model="aceax_niarms_compat_main_acr";
			camo="tan";
			barrel="compact";
			gl="yes";
		};
		class hlc_rifle_ACR_GL_SBR_black
		{
			model="aceax_niarms_compat_main_acr";
			camo="black";
			barrel="compact";
			gl="yes";
		};
		class hlc_rifle_ACR_GL_SBR_green
		{
			model="aceax_niarms_compat_main_acr";
			camo="green";
			barrel="compact";
			gl="yes";
		};
		class hlc_rifle_ACR_GL_Carb_tan
		{
			model="aceax_niarms_compat_main_acr";
			camo="tan";
			barrel="carbine";
			gl="yes";
		};
		class hlc_rifle_ACR_GL_Carb_black
		{
			model="aceax_niarms_compat_main_acr";
			camo="black";
			barrel="carbine";
			gl="yes";
		};
		class hlc_rifle_ACR_GL_Carb_green
		{
			model="aceax_niarms_compat_main_acr";
			camo="green";
			barrel="carbine";
			gl="yes";
		};
		class hlc_rifle_ACR_GL_MID_tan
		{
			model="aceax_niarms_compat_main_acr";
			camo="tan";
			barrel="mid";
			gl="yes";
		};
		class hlc_rifle_ACR_GL_MID_black
		{
			model="aceax_niarms_compat_main_acr";
			camo="black";
			barrel="mid";
			gl="yes";
		};
		class hlc_rifle_ACR_GL_MID_green
		{
			model="aceax_niarms_compat_main_acr";
			camo="green";
			barrel="mid";
			gl="yes";
		};
		class hlc_rifle_ACR68_SBR_tan
		{
			model="aceax_niarms_compat_main_acr68";
			camo="tan";
			barrel="compact";
			gl="no";
		};
		class hlc_rifle_ACR68_SBR_black
		{
			model="aceax_niarms_compat_main_acr68";
			camo="black";
			barrel="compact";
			gl="no";
		};
		class hlc_rifle_ACR68_SBR_green
		{
			model="aceax_niarms_compat_main_acr68";
			camo="green";
			barrel="compact";
			gl="no";
		};
		class hlc_rifle_ACR68_Carb_tan
		{
			model="aceax_niarms_compat_main_acr68";
			camo="tan";
			barrel="carbine";
			gl="no";
		};
		class hlc_rifle_ACR68_Carb_black
		{
			model="aceax_niarms_compat_main_acr68";
			camo="black";
			barrel="carbine";
			gl="no";
		};
		class hlc_rifle_ACR68_Carb_green
		{
			model="aceax_niarms_compat_main_acr68";
			camo="green";
			barrel="carbine";
			gl="no";
		};
		class hlc_rifle_ACR68_MID_tan
		{
			model="aceax_niarms_compat_main_acr68";
			camo="tan";
			barrel="mid";
			gl="no";
		};
		class hlc_rifle_ACR68_MID_black
		{
			model="aceax_niarms_compat_main_acr68";
			camo="black";
			barrel="mid";
			gl="no";
		};
		class hlc_rifle_ACR68_MID_green
		{
			model="aceax_niarms_compat_main_acr68";
			camo="green";
			barrel="mid";
			gl="no";
		};
		class hlc_rifle_ACR68_full_tan
		{
			model="aceax_niarms_compat_main_acr68";
			camo="tan";
			barrel="long";
			gl="no";
		};
		class hlc_rifle_ACR68_full_black
		{
			model="aceax_niarms_compat_main_acr68";
			camo="black";
			barrel="long";
			gl="no";
		};
		class hlc_rifle_ACR68_full_green
		{
			model="aceax_niarms_compat_main_acr68";
			camo="green";
			barrel="long";
			gl="no";
		};
		class hlc_rifle_ACR68_GL_SBR_tan
		{
			model="aceax_niarms_compat_main_acr68";
			camo="tan";
			barrel="compact";
			gl="yes";
		};
		class hlc_rifle_ACR68_GL_SBR_black
		{
			model="aceax_niarms_compat_main_acr68";
			camo="black";
			barrel="compact";
			gl="yes";
		};
		class hlc_rifle_ACR68_GL_SBR_green
		{
			model="aceax_niarms_compat_main_acr68";
			camo="green";
			barrel="compact";
			gl="yes";
		};
		class hlc_rifle_ACR68_GL_Carb_tan
		{
			model="aceax_niarms_compat_main_acr68";
			camo="tan";
			barrel="carbine";
			gl="yes";
		};
		class hlc_rifle_ACR68_GL_Carb_black
		{
			model="aceax_niarms_compat_main_acr68";
			camo="black";
			barrel="carbine";
			gl="yes";
		};
		class hlc_rifle_ACR68_GL_Carb_green
		{
			model="aceax_niarms_compat_main_acr68";
			camo="green";
			barrel="carbine";
			gl="yes";
		};
		class hlc_rifle_ACR68_GL_MID_tan
		{
			model="aceax_niarms_compat_main_acr68";
			camo="tan";
			barrel="mid";
			gl="yes";
		};
		class hlc_rifle_ACR68_GL_MID_black
		{
			model="aceax_niarms_compat_main_acr68";
			camo="black";
			barrel="mid";
			gl="yes";
		};
		class hlc_rifle_ACR68_GL_MID_green
		{
			model="aceax_niarms_compat_main_acr68";
			camo="green";
			barrel="mid";
			gl="yes";
		};
		class hlc_rifle_ACR_SBR_cliffhanger
		{
			model="aceax_niarms_compat_main_acr_cliffhanger";
			gl="no";
		};
		class hlc_rifle_ACR_GL_SBR_cliffhanger
		{
			model="aceax_niarms_compat_main_acr_cliffhanger";
			gl="yes";
		};
		class hlc_rifle_slr107u
		{
			model="aceax_niarms_compat_main_slr107u";
			rail="no";
		};
		class hlc_rifle_slr107u_MTK
		{
			model="aceax_niarms_compat_main_slr107u";
			rail="yes";
		};
		class hlc_rifle_ak12
		{
			model="aceax_niarms_compat_main_ak12";
			variant="standard";
			gl="no";
		};
		class hlc_rifle_ak12GL
		{
			model="aceax_niarms_compat_main_ak12";
			variant="standard";
			gl="yes";
		};
		class hlc_rifle_aku12
		{
			model="aceax_niarms_compat_main_ak12";
			variant="u";
			gl="no";
		};
		class hlc_rifle_akm
		{
			model="aceax_niarms_compat_main_akm";
			gl="no";
			rail="no";
		};
		class hlc_rifle_akmgl
		{
			model="aceax_niarms_compat_main_akm";
			gl="yes";
			rail="no";
		};
		class hlc_rifle_akm_MTK
		{
			model="aceax_niarms_compat_main_akm";
			gl="no";
			rail="yes";
		};
		class hlc_rifle_aks74
		{
			model="aceax_niarms_compat_main_aks";
			variant="standard";
			rail="no";
			gl="no";
		};
		class hlc_rifle_aks74_GL
		{
			model="aceax_niarms_compat_main_aks";
			variant="standard";
			rail="no";
			gl="yes";
		};
		class hlc_rifle_aks74_MTK
		{
			model="aceax_niarms_compat_main_aks";
			variant="standard";
			rail="yes";
			gl="no";
		};
		class hlc_rifle_aks74u
		{
			model="aceax_niarms_compat_main_aks";
			variant="u";
			rail="no";
			gl="no";
		};
		class hlc_rifle_aks74u_MTK
		{
			model="aceax_niarms_compat_main_aks";
			variant="u";
			rail="yes";
			gl="no";
		};
		class hlc_rifle_aek971
		{
			model="aceax_niarms_compat_main_aek";
			rail="no";
			wear="no";
		};
		class hlc_rifle_aek971_mtk
		{
			model="aceax_niarms_compat_main_aek";
			rail="yes";
			wear="no";
		};
		class hlc_rifle_aek971worn
		{
			model="aceax_niarms_compat_main_aek";
			rail="no";
			wear="yes";
		};
		class hlc_rifle_rpk
		{
			model="aceax_niarms_compat_main_rpk";
			variant="rpk";
		};
		class hlc_rifle_rpk74n
		{
			model="aceax_niarms_compat_main_rpk";
			variant="rpk74";
		};
		class hlc_rifle_RPK12
		{
			model="aceax_niarms_compat_main_rpk";
			variant="rpk12";
		};
		class hlc_rifle_ak74
		{
			model="aceax_niarms_compat_main_ak74";
			rail="no";
			wear="no";
		};
		class hlc_rifle_ak74_MTK
		{
			model="aceax_niarms_compat_main_ak74";
			rail="yes";
			wear="no";
		};
		class hlc_rifle_ak74_dirty
		{
			model="aceax_niarms_compat_main_ak74";
			rail="no";
			wear="wear1";
		};
		class hlc_rifle_ak74_dirty2
		{
			model="aceax_niarms_compat_main_ak74";
			rail="no";
			wear="wear2";
		};
		class hlc_rifle_ak74m
		{
			model="aceax_niarms_compat_main_ak74";
			gl="no";
			rail="no";
		};
		class hlc_rifle_ak74m_gl
		{
			model="aceax_niarms_compat_main_ak74";
			gl="yes";
			rail="no";
		};
		class hlc_rifle_ak74m_MTK
		{
			model="aceax_niarms_compat_main_ak74";
			gl="no";
			rail="yes";
		};
		class hlc_wp_m16a1
		{
			model="aceax_niarms_compat_main_m16";
			variant="a1";
			gl="no";
		};
		class hlc_rifle_a1m203
		{
			model="aceax_niarms_compat_main_m16";
			variant="a1";
			gl="yes";
		};
		class hlc_wp_m16a2
		{
			model="aceax_niarms_compat_main_m16";
			variant="a2";
			gl="no";
		};
		class hlc_rifle_m203
		{
			model="aceax_niarms_compat_main_m16";
			variant="a2";
			gl="no";
		};
		class hlc_rifle_M4
		{
			model="aceax_niarms_compat_main_m4";
			variant="m4a1";
			gl="no";
		};
		class hlc_rifle_m4m203
		{
			model="aceax_niarms_compat_main_m4";
			variant="m4a1";
			gl="yes";
		};
		class hlc_rifle_m4a1carryhandle
		{
			model="aceax_niarms_compat_main_m4";
			variant="m4a1ch";
			gl="no";
		};
		class hlc_rifle_CQBR
		{
			model="aceax_niarms_compat_main_m4";
			variant="m4le";
			gl="no";
		};
		class hlc_wp_xm4
		{
			model="aceax_niarms_compat_main_m4";
			variant="m4";
			gl="no";
		};
		class hlc_wp_XM177E2
		{
			model="aceax_niarms_compat_main_m4";
			variant="xm117e2";
			gl="no";
		};
		class hlc_rifle_mk18mod0
		{
			model="aceax_niarms_compat_main_m4";
			variant="mk18";
			gl="no";
		};
		class hlc_rifle_SAMR
		{
			model="aceax_niarms_compat_main_lar15";
			camo="tan";
		};
		class hlc_rifle_samr2
		{
			model="aceax_niarms_compat_main_lar15";
			camo="black";
		};
		class hlc_rifle_RU556
		{
			model="aceax_niarms_compat_main_ar15magpul";
			variant="sanitised";
		};
		class hlc_rifle_RU5562
		{
			model="aceax_niarms_compat_main_ar15magpul";
			variant="standard";
		};
		class hlc_rifle_Colt727
		{
			model="aceax_niarms_compat_main_ro727";
			variant="carbine";
			gl="no";
		};
		class hlc_rifle_Colt727_GL
		{
			model="aceax_niarms_compat_main_ro727";
			variant="carbine";
			gl="yes";
		};
		class hlc_wp_mod727
		{
			model="aceax_niarms_compat_main_ro727";
			variant="commando";
			gl="no";
		};
		class hlc_wp_mod733
		{
			model="aceax_niarms_compat_main_ro727";
			variant="commandoShort";
			gl="no";
		};
		class hlc_rifle_augsr_b
		{
			model="aceax_niarms_compat_main_aug";
			variant="sr";
			camo="blk";
			length="standard";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_augsr
		{
			model="aceax_niarms_compat_main_aug";
			variant="sr";
			camo="od";
			length="standard";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_augsr_t
		{
			model="aceax_niarms_compat_main_aug";
			variant="sr";
			camo="tan";
			length="standard";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_augsrcarb_b
		{
			model="aceax_niarms_compat_main_aug";
			variant="sr";
			camo="blk";
			length="carbine";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_augsrcarb
		{
			model="aceax_niarms_compat_main_aug";
			variant="sr";
			camo="od";
			length="carbine";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_augsrcarb_t
		{
			model="aceax_niarms_compat_main_aug";
			variant="sr";
			camo="tan";
			length="carbine";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_augsrhbar_b
		{
			model="aceax_niarms_compat_main_aug";
			variant="sr";
			camo="blk";
			length="hbar";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_augsrhbar
		{
			model="aceax_niarms_compat_main_aug";
			variant="sr";
			camo="od";
			length="hbar";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_augsrhbar_t
		{
			model="aceax_niarms_compat_main_aug";
			variant="sr";
			camo="tan";
			length="hbar";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_augpara_b
		{
			model="aceax_niarms_compat_main_aug";
			variant="para";
			camo="blk";
			length="carbine";
			gl="no";
			rails="no";
		};
		class hlc_rifle_augpara
		{
			model="aceax_niarms_compat_main_aug";
			variant="para";
			camo="od";
			length="carbine";
			gl="no";
			rails="no";
		};
		class hlc_rifle_augpara_t
		{
			model="aceax_niarms_compat_main_aug";
			variant="para";
			camo="tan";
			length="carbine";
			gl="no";
			rails="no";
		};
		class hlc_rifle_auga1_b
		{
			model="aceax_niarms_compat_main_aug";
			variant="a1";
			camo="blk";
			length="standard";
			gl="no";
			rails="no";
		};
		class hlc_rifle_aug
		{
			model="aceax_niarms_compat_main_aug";
			variant="a1";
			camo="od";
			length="standard";
			gl="no";
			rails="no";
		};
		class hlc_rifle_auga1_t
		{
			model="aceax_niarms_compat_main_aug";
			variant="a1";
			camo="tan";
			length="standard";
			gl="no";
			rails="no";
		};
		class hlc_rifle_auga1carb_b
		{
			model="aceax_niarms_compat_main_aug";
			variant="a1";
			camo="blk";
			length="carbine";
			gl="no";
			rails="no";
		};
		class hlc_rifle_auga1carb
		{
			model="aceax_niarms_compat_main_aug";
			variant="a1";
			camo="od";
			length="carbine";
			gl="no";
			rails="no";
		};
		class hlc_rifle_auga1carb_t
		{
			model="aceax_niarms_compat_main_aug";
			variant="a1";
			camo="tan";
			length="carbine";
			gl="no";
			rails="no";
		};
		class hlc_rifle_aughbar_b
		{
			model="aceax_niarms_compat_main_aug";
			variant="a1";
			camo="blk";
			length="hbar";
			gl="no";
			rails="no";
		};
		class hlc_rifle_aughbar
		{
			model="aceax_niarms_compat_main_aug";
			variant="a1";
			camo="od";
			length="hbar";
			gl="no";
			rails="no";
		};
		class hlc_rifle_aughbar_t
		{
			model="aceax_niarms_compat_main_aug";
			variant="a1";
			camo="tan";
			length="hbar";
			gl="no";
			rails="no";
		};
		class hlc_rifle_auga2_b
		{
			model="aceax_niarms_compat_main_aug";
			variant="a2";
			camo="blk";
			length="standard";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_auga2
		{
			model="aceax_niarms_compat_main_aug";
			variant="a2";
			camo="od";
			length="standard";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_auga2_t
		{
			model="aceax_niarms_compat_main_aug";
			variant="a2";
			camo="tan";
			length="standard";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_auga2carb_b
		{
			model="aceax_niarms_compat_main_aug";
			variant="a2";
			camo="blk";
			length="carbine";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_auga2carb
		{
			model="aceax_niarms_compat_main_aug";
			variant="a2";
			camo="od";
			length="carbine";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_auga2carb_t
		{
			model="aceax_niarms_compat_main_aug";
			variant="a2";
			camo="tan";
			length="carbine";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_auga2lsw_b
		{
			model="aceax_niarms_compat_main_aug";
			variant="a2";
			camo="blk";
			length="hbar";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_auga2lsw
		{
			model="aceax_niarms_compat_main_aug";
			variant="a2";
			camo="od";
			length="hbar";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_auga2lsw_t
		{
			model="aceax_niarms_compat_main_aug";
			variant="a2";
			camo="tan";
			length="hbar";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_auga2para_b
		{
			model="aceax_niarms_compat_main_aug";
			variant="a2para";
			camo="blk";
			length="carbine";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_auga2para
		{
			model="aceax_niarms_compat_main_aug";
			variant="a2para";
			camo="od";
			length="carbine";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_auga2para_t
		{
			model="aceax_niarms_compat_main_aug";
			variant="a2para";
			camo="tan";
			length="carbine";
			gl="no";
			rails="opticonly";
		};
		class hlc_rifle_auga3_b
		{
			model="aceax_niarms_compat_main_aug";
			variant="a3";
			camo="blk";
			length="standard";
			gl="no";
			rails="yes";
		};
		class hlc_rifle_auga3_bl
		{
			model="aceax_niarms_compat_main_aug";
			variant="a3";
			camo="blue";
			length="standard";
			gl="no";
			rails="yes";
		};
		class hlc_rifle_auga3
		{
			model="aceax_niarms_compat_main_aug";
			variant="a3";
			camo="green";
			length="standard";
			gl="no";
			rails="yes";
		};
		class hlc_rifle_auga3_GL_b
		{
			model="aceax_niarms_compat_main_aug";
			variant="a3";
			camo="blk";
			length="standard";
			gl="yes";
			rails="yes";
		};
		class hlc_rifle_auga3_GL_bl
		{
			model="aceax_niarms_compat_main_aug";
			variant="a3";
			camo="blue";
			length="standard";
			gl="yes";
			rails="yes";
		};
		class hlc_rifle_auga3_GL
		{
			model="aceax_niarms_compat_main_aug";
			variant="a3";
			camo="green";
			length="standard";
			gl="yes";
			rails="yes";
		};
		class hlc_rifle_awmagnum
		{
			model="aceax_niarms_compat_main_awm";
			camo="od";
			suppressed="no";
			ghillie="no";
		};
		class hlc_rifle_awmagnum_FDE
		{
			model="aceax_niarms_compat_main_awm";
			camo="fde";
			suppressed="no";
			ghillie="no";
		};
		class hlc_rifle_awmagnum_BL
		{
			model="aceax_niarms_compat_main_awm";
			camo="blk";
			suppressed="no";
			ghillie="no";
		};
		class hlc_rifle_awMagnum_od_ghillie
		{
			model="aceax_niarms_compat_main_awm";
			camo="od";
			suppressed="no";
			ghillie="yes";
		};
		class hlc_rifle_awMagnum_FDE_ghillie
		{
			model="aceax_niarms_compat_main_awm";
			camo="fde";
			suppressed="no";
			ghillie="yes";
		};
		class hlc_rifle_awmagnum_BL_ghillie
		{
			model="aceax_niarms_compat_main_awm";
			camo="blk";
			suppressed="no";
			ghillie="yes";
		};
		class hlc_rifle_awcovert
		{
			model="aceax_niarms_compat_main_awm";
			camo="od";
			suppressed="yes";
			ghillie="no";
		};
		class hlc_rifle_awcovert_FDE
		{
			model="aceax_niarms_compat_main_awm";
			camo="fde";
			suppressed="yes";
			ghillie="no";
		};
		class hlc_rifle_awcovert_BL
		{
			model="aceax_niarms_compat_main_awm";
			camo="blk";
			suppressed="yes";
			ghillie="no";
		};
		class hlc_pistol_c96_Wartime
		{
			model="aceax_niarms_compat_main_c96";
			variant="standard";
			barrelLength="long";
			stock="no";
			wear="no";
		};
		class hlc_pistol_c96_Custom
		{
			model="aceax_niarms_compat_main_c96";
			variant="custom";
			barrelLength="long";
			stock="yes";
			wear="no";
		};
		class hlc_pistol_c96_Wartime_stock
		{
			model="aceax_niarms_compat_main_c96";
			variant="standard";
			barrelLength="long";
			stock="yes";
			wear="no";
		};
		class hlc_pistol_c96_Wartime_Worn
		{
			model="aceax_niarms_compat_main_c96";
			variant="standard";
			barrelLength="long";
			stock="no";
			wear="yes";
		};
		class hlc_pistol_c96_Wartime_Worn_stock
		{
			model="aceax_niarms_compat_main_c96";
			variant="standard";
			barrelLength="long";
			stock="yes";
			wear="yes";
		};
		class hlc_pistol_c96_Prussian
		{
			model="aceax_niarms_compat_main_c96";
			variant="prussian";
			barrelLength="long";
			stock="no";
			wear="no";
		};
		class hlc_pistol_c96_Prussian_stock
		{
			model="aceax_niarms_compat_main_c96";
			variant="prussian";
			barrelLength="long";
			stock="yes";
			wear="no";
		};
		class hlc_pistol_c96_Prussian_Rework
		{
			model="aceax_niarms_compat_main_c96";
			variant="prussian";
			barrelLength="short";
			stock="no";
			wear="yes";
		};
		class hlc_pistol_c96_Prussian_Rework_Stock
		{
			model="aceax_niarms_compat_main_c96";
			variant="prussian";
			barrelLength="short";
			stock="yes";
			wear="yes";
		};
		class hlc_pistol_c96_Bolo
		{
			model="aceax_niarms_compat_main_c96";
			variant="standard";
			barrelLength="short";
			stock="no";
			wear="no";
		};
		class hlc_pistol_c96_Bolo_stock
		{
			model="aceax_niarms_compat_main_c96";
			variant="standard";
			barrelLength="short";
			stock="yes";
			wear="no";
		};
		class hlc_pistol_c96_Bolo_Worn
		{
			model="aceax_niarms_compat_main_c96";
			variant="standard";
			barrelLength="short";
			stock="no";
			wear="yes";
		};
		class hlc_pistol_c96_Bolo_Worn_Stock
		{
			model="aceax_niarms_compat_main_c96";
			variant="standard";
			barrelLength="short";
			stock="yes";
			wear="yes";
		};
		class hlc_pistol_M712
		{
			model="aceax_niarms_compat_main_c96";
			variant="fullauto";
			barrelLength="long";
			stock="no";
			wear="no";
		};
		class hlc_pistol_M712_stock
		{
			model="aceax_niarms_compat_main_c96";
			variant="fullauto";
			barrelLength="long";
			stock="yes";
			wear="no";
		};
		class hlc_pistol_M712_worn
		{
			model="aceax_niarms_compat_main_c96";
			variant="fullauto";
			barrelLength="long";
			stock="no";
			wear="yes";
		};
		class hlc_pistol_M712_worn_Stock
		{
			model="aceax_niarms_compat_main_c96";
			variant="fullauto";
			barrelLength="long";
			stock="yes";
			wear="yes";
		};
		class hlc_rifle_c1A1
		{
			model="aceax_niarms_compat_main_slr";
			variant="canada";
		};
		class hlc_rifle_L1A1SLR
		{
			model="aceax_niarms_compat_main_slr";
			variant="enfield";
		};
		class hlc_rifle_SLR
		{
			model="aceax_niarms_compat_main_slr";
			variant="lithgow";
		};
		class hlc_rifle_SLRchopmod
		{
			model="aceax_niarms_compat_main_slr";
			variant="lithgowCM";
		};
		class hlc_rifle_FAL5000
		{
			model="aceax_niarms_compat_main_fal";
			variant="standard";
			rail="no";
		};
		class hlc_rifle_FAL5000Rail
		{
			model="aceax_niarms_compat_main_fal";
			variant="standard";
			rail="yes";
		};
		class hlc_rifle_FAL5061
		{
			model="aceax_niarms_compat_main_fal";
			variant="para";
			rail="no";
		};
		class hlc_rifle_FAL5061Rail
		{
			model="aceax_niarms_compat_main_fal";
			variant="para";
			rail="yes";
		};
		class hlc_rifle_C2A1
		{
			model="aceax_niarms_compat_main_fal";
			variant="canada";
			rail="no";
		};
		class hlc_rifle_LAR
		{
			model="aceax_niarms_compat_main_fal";
			variant="lar";
			rail="no";
		};
		class hlc_rifle_STG58F
		{
			model="aceax_niarms_compat_main_fal";
			variant="stg";
			rail="yes";
		};
		class hlc_rifle_falosw
		{
			model="aceax_niarms_compat_main_falosw";
			gl="no";
		};
		class hlc_rifle_osw_gl
		{
			model="aceax_niarms_compat_main_falosw";
			gl="yes";
		};
		class hlc_rifle_fn3011
		{
			model="aceax_niarms_compat_main_fn3011";
			variant="og";
			camo="none";
		};
		class hlc_rifle_FN3011Modern
		{
			model="aceax_niarms_compat_main_fn3011";
			variant="modernized";
			camo="none";
		};
		class hlc_rifle_FN3011Modern_camo
		{
			model="aceax_niarms_compat_main_fn3011";
			variant="modernized";
			camo="arctic";
		};
		class hlc_rifle_FN3011Tactical_green
		{
			model="aceax_niarms_compat_main_fn3011";
			variant="tac";
			camo="green";
		};
		class hlc_rifle_FN3011Tactical_grey
		{
			model="aceax_niarms_compat_main_fn3011";
			variant="tac";
			camo="grayash";
		};
		class hlc_rifle_FN3011Tactical
		{
			model="aceax_niarms_compat_main_fn3011";
			variant="tac";
			camo="walnut";
		};
		class hlc_rifle_FN3011_WDL
		{
			model="aceax_niarms_compat_main_fn3011";
			variant="og";
			camo="woodland";
		};
		class hlc_rifle_FN3011LYNX
		{
			model="aceax_niarms_compat_main_fn3011";
			variant="lynx";
			camo="arctic";
		};
		class hlc_rifle_g3sg1
		{
			model="aceax_niarms_compat_main_g3";
			variant="sniper";
			gl="no";
			handGuard="wide";
			opticRails="no";
		};
		class hlc_rifle_g3sg1ris
		{
			model="aceax_niarms_compat_main_g3";
			variant="sniper";
			gl="no";
			handGuard="wide";
			opticRails="yes";
		};
		class hlc_rifle_g3a3
		{
			model="aceax_niarms_compat_main_g3";
			variant="standard";
			gl="no";
			handGuard="standard";
			opticRails="no";
		};
		class hlc_rifle_g3a3ris
		{
			model="aceax_niarms_compat_main_g3";
			variant="standard";
			gl="no";
			handGuard="standard";
			opticRails="yes";
		};
		class hlc_rifle_g3a3v
		{
			model="aceax_niarms_compat_main_g3";
			variant="standard";
			gl="no";
			handGuard="wide";
			opticRails="no";
		};
		class hlc_rifle_g3a3vris
		{
			model="aceax_niarms_compat_main_g3";
			variant="standard";
			gl="no";
			handGuard="wide";
			opticRails="yes";
		};
		class hlc_rifle_g3ka4
		{
			model="aceax_niarms_compat_main_g3";
			variant="ras";
			gl="no";
			handGuard="rails";
			opticRails="yes";
		};
		class hlc_rifle_g3ka4_GL
		{
			model="aceax_niarms_compat_main_g3";
			variant="ras";
			gl="yes";
			handGuard="rails";
			opticRails="yes";
		};
		class hlc_rifle_hk33a2
		{
			model="aceax_niarms_compat_main_hk33";
			variant="a2";
			gl="no";
			rails="no";
		};
		class hlc_rifle_hk33a2RIS
		{
			model="aceax_niarms_compat_main_hk33";
			variant="a2";
			gl="no";
			rails="yes";
		};
		class hlc_rifle_hk33a2RIS_GL
		{
			model="aceax_niarms_compat_main_hk33";
			variant="a2";
			gl="yes";
			rails="yes";
		};
		class hlc_rifle_hk33ka3
		{
			model="aceax_niarms_compat_main_hk33";
			variant="a3";
			gl="no";
			rails="no";
		};
		class hlc_rifle_hk53
		{
			model="aceax_niarms_compat_main_hk53";
			rails="no";
		};
		class hlc_rifle_hk53RAS
		{
			model="aceax_niarms_compat_main_hk53";
			rails="yes";
		};
		class hlc_rifle_psg1
		{
			model="aceax_niarms_compat_main_psg1";
			optic="builtIn";
		};
		class hlc_rifle_psg1A1
		{
			model="aceax_niarms_compat_main_psg1";
			optic="adapter";
		};
		class hlc_rifle_PSG1A1_ris
		{
			model="aceax_niarms_compat_main_psg1";
			optic="rail";
		};
		class hlc_rifle_G36A1
		{
			model="aceax_niarms_compat_main_g36";
			variant="a";
			length="standard";
			gl="no";
			rails="no";
		};
		class hlc_rifle_G36A1AG36
		{
			model="aceax_niarms_compat_main_g36";
			variant="a";
			length="standard";
			gl="yes";
			rails="no";
		};
		class hlc_rifle_G36C
		{
			model="aceax_niarms_compat_main_g36";
			variant="a";
			length="compact";
			gl="no";
			rails="yes";
		};
		class hlc_rifle_G36CV
		{
			model="aceax_niarms_compat_main_g36";
			variant="v";
			length="compact";
			gl="no";
			rails="yes";
		};
		class hlc_rifle_G36CTAC
		{
			model="aceax_niarms_compat_main_g36";
			variant="tac";
			length="compact";
			gl="no";
			rails="yes";
		};
		class hlc_rifle_G36E1
		{
			model="aceax_niarms_compat_main_g36";
			variant="e";
			length="standard";
			gl="no";
			rails="no";
		};
		class hlc_rifle_G36E1AG36
		{
			model="aceax_niarms_compat_main_g36";
			variant="e";
			length="standard";
			gl="yes";
			rails="no";
		};
		class hlc_rifle_G36KA1KSK
		{
			model="aceax_niarms_compat_main_g36";
			variant="ksk";
			length="short";
			gl="no";
			rails="yes";
		};
		class hlc_rifle_G36KA1
		{
			model="aceax_niarms_compat_main_g36";
			variant="a1";
			length="short";
			gl="no";
			rails="no";
		};
		class hlc_rifle_G36KV
		{
			model="aceax_niarms_compat_main_g36";
			variant="v";
			length="short";
			gl="no";
			rails="yes";
		};
		class hlc_rifle_G36KE1
		{
			model="aceax_niarms_compat_main_g36";
			variant="e";
			length="short";
			gl="no";
			rails="no";
		};
		class hlc_rifle_g36KTAC
		{
			model="aceax_niarms_compat_main_g36";
			variant="tac";
			length="short";
			gl="no";
			rails="yes";
		};
		class hlc_rifle_G36V
		{
			model="aceax_niarms_compat_main_g36";
			variant="v";
			length="standard";
			gl="no";
			rails="yes";
		};
		class hlc_rifle_G36VAG36
		{
			model="aceax_niarms_compat_main_g36";
			variant="v";
			length="standard";
			gl="yes";
			rails="yes";
		};
		class hlc_rifle_G36TAC
		{
			model="aceax_niarms_compat_main_g36";
			variant="tac";
			length="standard";
			gl="no";
			rails="yes";
		};
		class hlc_rifle_G36MLIC
		{
			model="aceax_niarms_compat_main_g36mlic";
			length="standard";
			gl="no";
		};
		class hlc_rifle_G36MLIAG36
		{
			model="aceax_niarms_compat_main_g36mlic";
			length="standard";
			gl="yes";
		};
		class hlc_rifle_G36CMLIC
		{
			model="aceax_niarms_compat_main_g36mlic";
			length="compact";
			gl="no";
		};
		class hlc_rifle_G36KMLIC
		{
			model="aceax_niarms_compat_main_g36mlic";
			length="short";
			gl="no";
		};
		class hlc_rifle_416D10
		{
			model="aceax_niarms_compat_main_hk416";
			length="10in";
			variant="d";
			camo="black";
			gl="no";
		};
		class hlc_rifle_416D10_gl
		{
			model="aceax_niarms_compat_main_hk416";
			length="10in";
			variant="d";
			camo="black";
			gl="yes";
		};
		class hlc_rifle_416D10_tan
		{
			model="aceax_niarms_compat_main_hk416";
			length="10in";
			variant="d";
			camo="tan";
			gl="no";
		};
		class hlc_rifle_416D10_wdl
		{
			model="aceax_niarms_compat_main_hk416";
			length="10in";
			variant="d";
			camo="woodland";
			gl="no";
		};
		class hlc_rifle_416D10C
		{
			model="aceax_niarms_compat_main_hk416";
			length="10in";
			variant="c";
			camo="black";
			gl="no";
		};
		class hlc_rifle_416D145
		{
			model="aceax_niarms_compat_main_hk416";
			length="145in";
			variant="d";
			camo="black";
			gl="no";
		};
		class hlc_rifle_416D145_gl
		{
			model="aceax_niarms_compat_main_hk416";
			length="145in";
			variant="d";
			camo="black";
			gl="yes";
		};
		class hlc_rifle_416D145_tan
		{
			model="aceax_niarms_compat_main_hk416";
			length="145in";
			variant="d";
			camo="tan";
			gl="no";
		};
		class hlc_rifle_416D145_wdl
		{
			model="aceax_niarms_compat_main_hk416";
			length="145in";
			variant="d";
			camo="woodland";
			gl="no";
		};
		class hlc_rifle_416D145C
		{
			model="aceax_niarms_compat_main_hk416";
			length="145in";
			variant="c";
			camo="black";
			gl="no";
		};
		class hlc_rifle_416D165
		{
			model="aceax_niarms_compat_main_hk416";
			length="165in";
			variant="d";
			camo="black";
			gl="no";
		};
		class hlc_rifle_416D165_gl
		{
			model="aceax_niarms_compat_main_hk416";
			length="165in";
			variant="d";
			camo="black";
			gl="yes";
		};
		class hlc_rifle_416D165_tan
		{
			model="aceax_niarms_compat_main_hk416";
			length="165in";
			variant="d";
			camo="tan";
			gl="no";
		};
		class hlc_rifle_416D165_wdl
		{
			model="aceax_niarms_compat_main_hk416";
			length="165in";
			variant="d";
			camo="woodland";
			gl="no";
		};
		class hlc_rifle_416D20
		{
			model="aceax_niarms_compat_main_hk416";
			length="20in";
			variant="d";
			camo="black";
			gl="no";
		};
		class hlc_rifle_416D20_tan
		{
			model="aceax_niarms_compat_main_hk416";
			length="20in";
			variant="d";
			camo="tan";
			gl="no";
		};
		class hlc_rifle_416D20_wdl
		{
			model="aceax_niarms_compat_main_hk416";
			length="20in";
			variant="d";
			camo="woodland";
			gl="no";
		};
		class hlc_rifle_416C
		{
			model="aceax_niarms_compat_main_hk416";
			length="9in";
			variant="c";
			camo="black";
			gl="no";
		};
		class hlc_rifle_416N
		{
			model="aceax_niarms_compat_main_hk416";
			length="165in";
			variant="n";
			camo="black";
			gl="no";
		};
		class hlc_rifle_416N_gl
		{
			model="aceax_niarms_compat_main_hk416";
			length="165in";
			variant="n";
			camo="black";
			gl="yes";
		};
		class hlc_rifle_416D10_st6
		{
			model="aceax_niarms_compat_main_hk416";
			length="10in";
			variant="devgru";
			camo="black";
			gl="no";
		};
		class hlc_rifle_416D10_ptato
		{
			model="aceax_niarms_compat_main_hk416";
			length="10in";
			variant="potato";
			camo="black";
			gl="no";
		};
		class hlc_rifle_416D10_RAHG
		{
			model="aceax_niarms_compat_main_hk416";
			length="10in";
			variant="rahg";
			camo="black";
			gl="no";
		};
		class hlc_rifle_416D10_geissele
		{
			model="aceax_niarms_compat_main_hk416";
			length="10in";
			variant="smr";
			camo="black";
			gl="no";
		};
		class hlc_rifle_416D10C_ptc
		{
			model="aceax_niarms_compat_main_hk416";
			length="10in";
			variant="ptc";
			camo="black";
			gl="no";
		};
		class hlc_rifle_416D145_CAG
		{
			model="aceax_niarms_compat_main_hk416";
			length="145in";
			variant="cag";
			camo="black";
			gl="no";
		};
		class hlc_rifle_M27IAR
		{
			model="aceax_niarms_compat_main_hk416";
			length="165in";
			variant="iar";
			camo="black";
			gl="no";
		};
		class hlc_rifle_M14
		{
			model="aceax_niarms_compat_main_m14";
			varient="standard";
			rail="no";
			bipod="no";
		};
		class hlc_rifle_M14_Bipod
		{
			model="aceax_niarms_compat_main_m14";
			varient="standard";
			rail="no";
			bipod="yes";
		};
		class hlc_rifle_M14_Bipod_Rail
		{
			model="aceax_niarms_compat_main_m14";
			varient="standard";
			rail="yes";
			bipod="yes";
		};
		class hlc_rifle_M14_Rail
		{
			model="aceax_niarms_compat_main_m14";
			varient="standard";
			rail="yes";
			bipod="no";
		};
		class hlc_rifle_m14dmr
		{
			model="aceax_niarms_compat_main_m14";
			varient="dmr";
			rail="no";
			bipod="yes";
		};
		class hlc_rifle_M14dmr_Rail
		{
			model="aceax_niarms_compat_main_m14";
			varient="dmr";
			rail="yes";
			bipod="yes";
		};
		class hlc_rifle_M21
		{
			model="aceax_niarms_compat_main_m21";
			rail="no";
		};
		class hlc_rifle_M21_Rail
		{
			model="aceax_niarms_compat_main_m21";
			rail="yes";
		};
		class hlc_rifle_m14sopmod
		{
			model="aceax_niarms_compat_main_m14";
			varient="sopmod";
			rail="yes";
			bipod="no";
		};
		class hlc_lmg_MG42
		{
			model="aceax_niarms_compat_main_mg42";
			camo="gunMetal";
			kws="no";
			stock="base";
		};
		class hlc_lmg_mg42_bakelite
		{
			model="aceax_niarms_compat_main_mg42";
			camo="gunMetal";
			kws="no";
			stock="bakelite";
		};
		class hlc_lmg_MG42KWS_t
		{
			model="aceax_niarms_compat_main_mg42";
			camo="tan";
			kws="yes";
			stock="base";
		};
		class hlc_lmg_MG42KWS_g
		{
			model="aceax_niarms_compat_main_mg42";
			camo="green";
			kws="yes";
			stock="base";
		};
		class hlc_lmg_MG42KWS_B
		{
			model="aceax_niarms_compat_main_mg42";
			camo="black";
			kws="yes";
			stock="base";
		};
		class hlc_lmg_MG3
		{
			model="aceax_niarms_compat_main_mg3";
			camo="gunMetal";
			kws="no";
			rail="no";
		};
		class hlc_lmg_MG3_optic
		{
			model="aceax_niarms_compat_main_mg3";
			camo="gunMetal";
			kws="no";
			rail="yes";
		};
		class hlc_lmg_MG3KWS
		{
			model="aceax_niarms_compat_main_mg3";
			camo="tan";
			kws="yes";
			rail="yes";
		};
		class hlc_lmg_MG3KWS_b
		{
			model="aceax_niarms_compat_main_mg3";
			camo="black";
			kws="yes";
			rail="yes";
		};
		class hlc_lmg_MG3KWS_g
		{
			model="aceax_niarms_compat_main_mg3";
			camo="green";
			kws="yes";
			rail="yes";
		};
		class hlc_lmg_mk46
		{
			model="aceax_niarms_compat_main_mk46";
			mod="mod0";
		};
		class hlc_lmg_mk46mod1
		{
			model="aceax_niarms_compat_main_mk46";
			mod="mod1";
		};
		class hlc_lmg_mk48
		{
			model="aceax_niarms_compat_main_mk48";
			mod="mod0";
		};
		class hlc_lmg_mk48mod1
		{
			model="aceax_niarms_compat_main_mk48";
			mod="mod1";
		};
		class hlc_m249_pip1
		{
			model="aceax_niarms_compat_main_m249";
			varient="pip";
			barrel="long";
			stock="solid";
			rail="yes";
		};
		class hlc_m249_pip2
		{
			model="aceax_niarms_compat_main_m249";
			varient="pip";
			barrel="short";
			stock="solid";
			rail="yes";
		};
		class hlc_m249_pip3
		{
			model="aceax_niarms_compat_main_m249";
			varient="pip";
			barrel="short";
			stock="pip";
			rail="yes";
		};
		class hlc_m249_pip4
		{
			model="aceax_niarms_compat_main_m249";
			varient="pip";
			barrel="long";
			stock="pip";
			rail="yes";
		};
		class hlc_lmg_m249E1
		{
			model="aceax_niarms_compat_main_m249";
			varient="base";
			barrel="long";
			stock="frame";
			rail="no";
		};
		class hlc_lmg_m249E2
		{
			model="aceax_niarms_compat_main_m249";
			varient="base";
			barrel="long";
			stock="solid";
			rail="no";
		};
		class hlc_lmg_m249para
		{
			model="aceax_niarms_compat_main_m249";
			varient="para";
			barrel="short";
			stock="para";
			rail="no";
		};
		class hlc_lmg_minimi
		{
			model="aceax_niarms_compat_main_minimi";
			stock="solid";
			barrel="long";
			rail="no";
		};
		class hlc_lmg_minimi_railed
		{
			model="aceax_niarms_compat_main_minimi";
			stock="solid";
			barrel="long";
			rail="yes";
		};
		class hlc_lmg_minimipara_long
		{
			model="aceax_niarms_compat_main_minimi";
			stock="para";
			barrel="long";
			rail="no";
		};
		class hlc_lmg_minimipara
		{
			model="aceax_niarms_compat_main_minimi";
			stock="para";
			barrel="short";
			rail="no";
		};
		class hlc_lmg_minimipara_railed
		{
			model="aceax_niarms_compat_main_minimi";
			stock="para";
			barrel="short";
			rail="yes";
		};
		class hlc_lmg_minimipara_long_railed
		{
			model="aceax_niarms_compat_main_minimi";
			stock="para";
			barrel="long";
			rail="yes";
		};
		class hlc_smg_mp5a2
		{
			model="aceax_niarms_compat_main_mp5";
			stock="solid";
			fireSelector="text";
			handGuardRails="no";
		};
		class hlc_smg_mp5a2_Sfire
		{
			model="aceax_niarms_compat_main_mp5";
			stock="""";
			fireSelector="""";
			handGuardRails="""";
		};
		class hlc_smg_mp5a2_tac
		{
			model="aceax_niarms_compat_main_mp5";
			stock="solid";
			fireSelector="text";
			handGuardRails="yes";
		};
		class hlc_smg_mp5a3
		{
			model="aceax_niarms_compat_main_mp5";
			stock="collapsible";
			fireSelector="text";
			handGuardRails="no";
		};
		class hlc_smg_mp5a3_tac
		{
			model="aceax_niarms_compat_main_mp5";
			stock="collapsible";
			fireSelector="text";
			handGuardRails="yes";
		};
		class hlc_smg_mp5a4
		{
			model="aceax_niarms_compat_main_mp5";
			stock="solid";
			fireSelector="iconography";
			handGuardRails="no";
		};
		class hlc_smg_mp5a4_tac
		{
			model="aceax_niarms_compat_main_mp5";
			stock="solid";
			fireSelector="iconography";
			handGuardRails="yes";
		};
		class hlc_smg_MP5N
		{
			model="aceax_niarms_compat_main_mp5";
			stock="collapsible";
			fireSelector="iconography";
			handGuardRails="no";
		};
		class hlc_smg_mp5N_tac
		{
			model="aceax_niarms_compat_main_mp5";
			stock="collapsible";
			fireSelector="iconography";
			handGuardRails="yes";
		};
		class hlc_smg_mp5sd5
		{
			model="aceax_niarms_compat_main_mp5s";
			stock="solid";
		};
		class hlc_smg_mp5sd6
		{
			model="aceax_niarms_compat_main_mp5s";
			stock="collapsible";
		};
		class hlc_smg_mp510
		{
			model="aceax_niarms_compat_main_mp510";
			handGuardRails="no";
		};
		class hlc_mp510_tac
		{
			model="aceax_niarms_compat_main_mp510";
			handGuardRails="yes";
		};
		class hlc_pistol_P226US
		{
			model="aceax_niarms_compat_main_p226";
			type="base";
			caliber="9mm";
			rails="no";
			threadedBarrel="no";
		};
		class hlc_pistol_P226R
		{
			model="aceax_niarms_compat_main_p226";
			type="base";
			caliber="9mm";
			rails="yes";
			threadedBarrel="no";
		};
		class hlc_pistol_P226R_Combat
		{
			model="aceax_niarms_compat_main_p226";
			type="base";
			caliber="9mm";
			rails="yes";
			threadedBarrel="yes";
		};
		class hlc_pistol_P226R_Elite
		{
			model="aceax_niarms_compat_main_p226";
			type="elite";
			caliber="9mm";
			rails="yes";
			threadedBarrel="no";
		};
		class hlc_pistol_P226R_40
		{
			model="aceax_niarms_compat_main_p226";
			type="base";
			caliber="40sw";
			rails="yes";
			threadedBarrel="no";
		};
		class hlc_pistol_P226R_40Combat
		{
			model="aceax_niarms_compat_main_p226";
			type="base";
			caliber="40sw";
			rails="yes";
			threadedBarrel="yes";
		};
		class hlc_pistol_P226R_40Elite
		{
			model="aceax_niarms_compat_main_p226";
			type="elite";
			caliber="40sw";
			rails="yes";
			threadedBarrel="no";
		};
		class hlc_pistol_P226R_40Enox
		{
			model="aceax_niarms_compat_main_p226";
			type="equinox";
			caliber="40sw";
			rails="yes";
			threadedBarrel="no";
		};
		class hlc_pistol_P226R_357
		{
			model="aceax_niarms_compat_main_p226";
			type="base";
			caliber="357";
			rails="yes";
			threadedBarrel="no";
		};
		class hlc_pistol_P226R_357Combat
		{
			model="aceax_niarms_compat_main_p226";
			type="base";
			caliber="357";
			rails="yes";
			threadedBarrel="yes";
		};
		class hlc_pistol_P226R_357Elite
		{
			model="aceax_niarms_compat_main_p226";
			type="elite";
			caliber="357";
			rails="yes";
			threadedBarrel="no";
		};
		class hlc_pistol_P226R_Stainless
		{
			model="aceax_niarms_compat_main_p226";
			type="stainless";
			caliber="357";
			rails="yes";
			threadedBarrel="no";
		};
		class hlc_pistol_P226WestGerman
		{
			model="aceax_niarms_compat_main_p226";
			type="westGerman";
			caliber="9mm";
			rails="no";
			threadedBarrel="no";
		};
		class hlc_pistol_P229R
		{
			model="aceax_niarms_compat_main_p229";
			type="base";
			caliber="9mm";
			threadedBarrel="no";
		};
		class hlc_pistol_P229R_Combat
		{
			model="aceax_niarms_compat_main_p229";
			type="base";
			caliber="9mm";
			threadedBarrel="yes";
		};
		class hlc_pistol_P229R_Elite
		{
			model="aceax_niarms_compat_main_p229";
			type="elite";
			caliber="9mm";
			threadedBarrel="yes";
		};
		class hlc_pistol_P229R_40
		{
			model="aceax_niarms_compat_main_p229";
			type="base";
			caliber="40sw";
			threadedBarrel="no";
		};
		class hlc_pistol_P229R_40Combat
		{
			model="aceax_niarms_compat_main_p229";
			type="base";
			caliber="40sw";
			threadedBarrel="yes";
		};
		class hlc_pistol_P229R_40Elite
		{
			model="aceax_niarms_compat_main_p229";
			type="elite";
			caliber="40sw";
			threadedBarrel="yes";
		};
		class hlc_pistol_P229R_40Enox
		{
			model="aceax_niarms_compat_main_p229";
			type="equinox";
			caliber="40sw";
			threadedBarrel="no";
		};
		class hlc_pistol_P229R_357
		{
			model="aceax_niarms_compat_main_p229";
			type="base";
			caliber="357";
			threadedBarrel="no";
		};
		class hlc_pistol_P229R_357Combat
		{
			model="aceax_niarms_compat_main_p229";
			type="base";
			caliber="357";
			threadedBarrel="yes";
		};
		class hlc_pistol_P229R_357Elite
		{
			model="aceax_niarms_compat_main_p229";
			type="elite";
			caliber="357";
			threadedBarrel="yes";
		};
		class hlc_pistol_P229R_357Stainless
		{
			model="aceax_niarms_compat_main_p229";
			type="stainless";
			caliber="357";
			threadedBarrel="no";
		};
		class hlc_Pistol_M11
		{
			model="aceax_niarms_compat_main_mk11";
			type="mk11";
		};
		class hlc_Pistol_M11A1
		{
			model="aceax_niarms_compat_main_mk11";
			type="mk11a1";
		};
		class hlc_Pistol_M11A1D
		{
			model="aceax_niarms_compat_main_mk11";
			type="mk11a1d";
		};
		class hlc_pistol_P239
		{
			model="aceax_niarms_compat_main_p239";
			caliber="9mm";
		};
		class hlc_pistol_P239_40
		{
			model="aceax_niarms_compat_main_p239";
			caliber="40sw";
		};
		class hlc_pistol_P239_357
		{
			model="aceax_niarms_compat_main_p239";
			caliber="357";
		};
		class hlc_pistol_Mk25
		{
			model="aceax_niarms_compat_main_mk25";
			finish="black";
			threadedBarrel="no";
		};
		class hlc_pistol_Mk25D
		{
			model="aceax_niarms_compat_main_mk25";
			finish="tan";
			threadedBarrel="no";
		};
		class hlc_Pistol_mk25TR
		{
			model="aceax_niarms_compat_main_mk25";
			finish="tan";
			threadedBarrel="yes";
		};
		class hlc_wp_SCARH_STD
		{
			model="aceax_niarms_compat_main_scarh";
			camo="tan";
			gl="no";
			barrel="std";
			railExtension="no";
		};
		class hlc_wp_SCARH_STD_SRX
		{
			model="aceax_niarms_compat_main_scarh";
			camo="tan";
			gl="no";
			barrel="std";
			railExtension="yes";
		};
		class hlc_wp_SCARH_STD_EGLM
		{
			model="aceax_niarms_compat_main_scarh";
			camo="tan";
			gl="yes";
			barrel="std";
			railExtension="no";
		};
		class hlc_WP_SCARH_CQC
		{
			model="aceax_niarms_compat_main_scarh";
			camo="tan";
			gl="no";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_wp_SCARH_CQC_SRX
		{
			model="aceax_niarms_compat_main_scarh";
			camo="tan";
			gl="no";
			barrel="cqc";
			railExtension="yes";
		};
		class hlc_wp_SCARH_CQC_EGLM
		{
			model="aceax_niarms_compat_main_scarh";
			camo="tan";
			gl="yes";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_WP_SCARH_DMR
		{
			model="aceax_niarms_compat_main_scarh";
			camo="tan";
			gl="no";
			barrel="lb";
			railExtension="no";
		};
		class hlc_wp_SCARH_STD_Blk
		{
			model="aceax_niarms_compat_main_scarh";
			camo="black";
			gl="no";
			barrel="std";
			railExtension="no";
		};
		class hlc_wp_SCARH_STD_SRX_Blk
		{
			model="aceax_niarms_compat_main_scarh";
			camo="black";
			gl="no";
			barrel="std";
			railExtension="yes";
		};
		class hlc_wp_SCARH_STD_EGLM_Blk
		{
			model="aceax_niarms_compat_main_scarh";
			camo="black";
			gl="yes";
			barrel="std";
			railExtension="no";
		};
		class hlc_wp_SCARH_CQC_Blk
		{
			model="aceax_niarms_compat_main_scarh";
			camo="black";
			gl="no";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_wp_SCARH_CQC_SRX_Blk
		{
			model="aceax_niarms_compat_main_scarh";
			camo="black";
			gl="no";
			barrel="cqc";
			railExtension="yes";
		};
		class hlc_wp_SCARH_CQC_EGLM_Blk
		{
			model="aceax_niarms_compat_main_scarh";
			camo="black";
			gl="yes";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_wp_SCARH_DMR_Blk
		{
			model="aceax_niarms_compat_main_scarh";
			camo="black";
			gl="no";
			barrel="lb";
			railExtension="no";
		};
		class hlc_wp_SCARH_STD_camo
		{
			model="aceax_niarms_compat_main_scarh";
			camo="camo";
			gl="no";
			barrel="std";
			railExtension="no";
		};
		class hlc_wp_SCARH_STD_SRX_camo
		{
			model="aceax_niarms_compat_main_scarh";
			camo="camo";
			gl="no";
			barrel="std";
			railExtension="yes";
		};
		class hlc_wp_SCARH_STD_EGLM_camo
		{
			model="aceax_niarms_compat_main_scarh";
			camo="camo";
			gl="yes";
			barrel="std";
			railExtension="no";
		};
		class hlc_wp_SCARH_CQC_camo
		{
			model="aceax_niarms_compat_main_scarh";
			camo="camo";
			gl="no";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_wp_SCARH_CQC_SRX_camo
		{
			model="aceax_niarms_compat_main_scarh";
			camo="camo";
			gl="no";
			barrel="cqc";
			railExtension="yes";
		};
		class hlc_wp_SCARH_CQC_EGLM_camo
		{
			model="aceax_niarms_compat_main_scarh";
			camo="camo";
			gl="yes";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_wp_SCARH_DMR_camo
		{
			model="aceax_niarms_compat_main_scarh";
			camo="camo";
			gl="no";
			barrel="lb";
			railExtension="no";
		};
		class hlc_wp_SCARL_STD
		{
			model="aceax_niarms_compat_main_scarl";
			camo="tan";
			gl="no";
			barrel="std";
			railExtension="no";
		};
		class hlc_WP_SCARL_CQC
		{
			model="aceax_niarms_compat_main_scarl";
			camo="tan";
			gl="no";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_WP_SCARL_DMR
		{
			model="aceax_niarms_compat_main_scarl";
			camo="tan";
			gl="no";
			barrel="lb";
			railExtension="no";
		};
		class hlc_wp_SCARL_STD_SRX
		{
			model="aceax_niarms_compat_main_scarl";
			camo="tan";
			gl="no";
			barrel="std";
			railExtension="yes";
		};
		class hlc_wp_SCARL_STD_EGLM
		{
			model="aceax_niarms_compat_main_scarl";
			camo="tan";
			gl="yes";
			barrel="std";
			railExtension="no";
		};
		class hlc_wp_SCARL_CQC_EGLM
		{
			model="aceax_niarms_compat_main_scarl";
			camo="tan";
			gl="yes";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_wp_SCARL_STD_Blk
		{
			model="aceax_niarms_compat_main_scarl";
			camo="black";
			gl="no";
			barrel="std";
			railExtension="no";
		};
		class hlc_wp_SCARL_CQC_Blk
		{
			model="aceax_niarms_compat_main_scarl";
			camo="black";
			gl="no";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_wp_SCARL_DMR_Blk
		{
			model="aceax_niarms_compat_main_scarl";
			camo="black";
			gl="no";
			barrel="lb";
			railExtension="no";
		};
		class hlc_wp_SCARL_STD_SRX_Blk
		{
			model="aceax_niarms_compat_main_scarl";
			camo="black";
			gl="no";
			barrel="std";
			railExtension="yes";
		};
		class hlc_wp_SCARL_STD_EGLM_Blk
		{
			model="aceax_niarms_compat_main_scarl";
			camo="black";
			gl="yes";
			barrel="std";
			railExtension="no";
		};
		class hlc_wp_SCARL_CQC_EGLM_Blk
		{
			model="aceax_niarms_compat_main_scarl";
			camo="black";
			gl="yes";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_wp_SCARL_STD_camo
		{
			model="aceax_niarms_compat_main_scarl";
			camo="camo";
			gl="no";
			barrel="std";
			railExtension="no";
		};
		class hlc_wp_SCARL_CQC_camo
		{
			model="aceax_niarms_compat_main_scarl";
			camo="camo";
			gl="no";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_wp_SCARL_DMR_camo
		{
			model="aceax_niarms_compat_main_scarl";
			camo="camo";
			gl="no";
			barrel="lb";
			railExtension="no";
		};
		class hlc_wp_SCARL_STD_SRX_camo
		{
			model="aceax_niarms_compat_main_scarl";
			camo="camo";
			gl="no";
			barrel="std";
			railExtension="yes";
		};
		class hlc_wp_SCARL_STD_EGLM_camo
		{
			model="aceax_niarms_compat_main_scarl";
			camo="camo";
			gl="yes";
			barrel="std";
			railExtension="no";
		};
		class hlc_wp_SCARL_CQC_EGLM_camo
		{
			model="aceax_niarms_compat_main_scarl";
			camo="camo";
			gl="yes";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_wp_SCARL_STD_300AAC
		{
			model="aceax_niarms_compat_main_scarl300";
			camo="tan";
			gl="no";
			barrel="std";
			railExtension="no";
		};
		class hlc_WP_SCARL_CQC_300AAC
		{
			model="aceax_niarms_compat_main_scarl300";
			camo="tan";
			gl="no";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_wp_SCARL_STD_300AAC_SRX
		{
			model="aceax_niarms_compat_main_scarl300";
			camo="tan";
			gl="no";
			barrel="std";
			railExtension="yes";
		};
		class hlc_wp_SCARL_CQC_300AAC_EGLM
		{
			model="aceax_niarms_compat_main_scarl300";
			camo="tan";
			gl="yes";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_wp_SCARL_STD_300AAC_EGLM
		{
			model="aceax_niarms_compat_main_scarl300";
			camo="tan";
			gl="yes";
			barrel="std";
			railExtension="no";
		};
		class hlc_wp_SCARL_STD_300AAC_Blk
		{
			model="aceax_niarms_compat_main_scarl300";
			camo="black";
			gl="no";
			barrel="std";
			railExtension="no";
		};
		class hlc_wp_SCARL_CQC_300AAC_Blk
		{
			model="aceax_niarms_compat_main_scarl300";
			camo="black";
			gl="no";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_wp_SCARL_STD_300AAC_SRX_Blk
		{
			model="aceax_niarms_compat_main_scarl300";
			camo="black";
			gl="no";
			barrel="std";
			railExtension="yes";
		};
		class hlc_wp_SCARL_CQC_300AAC_EGLM_Blk
		{
			model="aceax_niarms_compat_main_scarl300";
			camo="black";
			gl="yes";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_wp_SCARL_STD_300AAC_EGLM_Blk
		{
			model="aceax_niarms_compat_main_scarl300";
			camo="black";
			gl="yes";
			barrel="std";
			railExtension="no";
		};
		class hlc_wp_SCARL_STD_300AAC_camo
		{
			model="aceax_niarms_compat_main_scarl300";
			camo="camo";
			gl="no";
			barrel="std";
			railExtension="no";
		};
		class hlc_wp_SCARL_CQC_300AAC_camo
		{
			model="aceax_niarms_compat_main_scarl300";
			camo="camo";
			gl="no";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_wp_SCARL_STD_300AAC_SRX_camo
		{
			model="aceax_niarms_compat_main_scarl300";
			camo="camo";
			gl="no";
			barrel="std";
			railExtension="yes";
		};
		class hlc_wp_SCARL_CQC_300AAC_EGLM_camo
		{
			model="aceax_niarms_compat_main_scarl300";
			camo="camo";
			gl="yes";
			barrel="cqc";
			railExtension="no";
		};
		class hlc_wp_SCARL_STD_300AAC_EGLM_camo
		{
			model="aceax_niarms_compat_main_scarl300";
			camo="camo";
			gl="yes";
			barrel="std";
			railExtension="no";
		};
		class hlc_wp_SCAR_PDW
		{
			model="aceax_niarms_compat_main_scarsc";
			camo="tan";
		};
		class hlc_wp_SCAR_PDW_Blk
		{
			model="aceax_niarms_compat_main_scarsc";
			camo="black";
		};
		class hlc_wp_SCAR_PDW_camo
		{
			model="aceax_niarms_compat_main_scarsc";
			camo="camo";
		};
		class hlc_WP_SSR
		{
			model="aceax_niarms_compat_main_tpr";
			camo="tan";
		};
		class hlc_wp_SSR_Blk
		{
			model="aceax_niarms_compat_main_tpr";
			camo="black";
		};
		class hlc_wp_SSR_camo
		{
			model="aceax_niarms_compat_main_tpr";
			camo="camo";
		};
		class hlc_wp_MK17
		{
			model="aceax_niarms_compat_main_mk17";
			mod="0";
			camo="tan";
			caliber="762nato";
			barrel="std";
			gl="no";
		};
		class hlc_wp_MK17_AGC
		{
			model="aceax_niarms_compat_main_mk17";
			mod="0";
			camo="tan";
			caliber="762nato";
			barrel="std";
			gl="yes";
		};
		class hlc_wp_Mk17_camo
		{
			model="aceax_niarms_compat_main_mk17";
			mod="0";
			camo="camo";
			caliber="762nato";
			barrel="std";
			gl="no";
		};
		class hlc_wp_MK17_AGC_camo
		{
			model="aceax_niarms_compat_main_mk17";
			mod="0";
			camo="camo";
			caliber="762nato";
			barrel="std";
			gl="yes";
		};
		class hlc_wp_Mk17_CQC
		{
			model="aceax_niarms_compat_main_mk17";
			mod="0";
			camo="tan";
			caliber="762nato";
			barrel="cqc";
			gl="no";
		};
		class hlc_wp_Mk17_CQC_camo
		{
			model="aceax_niarms_compat_main_mk17";
			mod="0";
			camo="camo";
			caliber="762nato";
			barrel="cqc";
			gl="no";
		};
		class hlc_wp_MK17_CQC_AGC
		{
			model="aceax_niarms_compat_main_mk17";
			mod="0";
			camo="tan";
			caliber="762nato";
			barrel="cqc";
			gl="yes";
		};
		class hlc_wp_MK17_CQC_AGC_camo
		{
			model="aceax_niarms_compat_main_mk17";
			mod="0";
			camo="camo";
			caliber="762nato";
			barrel="cqc";
			gl="yes";
		};
		class hlc_WP_Mk17IUR
		{
			model="aceax_niarms_compat_main_mk17";
			mod="iur";
			camo="tan";
			caliber="762nato";
			barrel="std";
			gl="no";
		};
		class hlc_wp_MK17IUR_camo
		{
			model="aceax_niarms_compat_main_mk17";
			mod="iur";
			camo="camo";
			caliber="762nato";
			barrel="std";
			gl="no";
		};
		class hlc_wp_MK17IUR_AGC
		{
			model="aceax_niarms_compat_main_mk17";
			mod="iur";
			camo="tan";
			caliber="762nato";
			barrel="std";
			gl="yes";
		};
		class hlc_wp_MK17IUR_AGC_camo
		{
			model="aceax_niarms_compat_main_mk17";
			mod="iur";
			camo="camo";
			caliber="762nato";
			barrel="std";
			gl="yes";
		};
		class hlc_wp_MK17IUR_556
		{
			model="aceax_niarms_compat_main_mk17";
			mod="iur";
			camo="tan";
			caliber="556nato";
			barrel="std";
			gl="no";
		};
		class hlc_wp_MK17IUR_556_camo
		{
			model="aceax_niarms_compat_main_mk17";
			mod="iur";
			camo="camo";
			caliber="556nato";
			barrel="std";
			gl="no";
		};
		class hlc_wp_MK17IUR_556_AGC
		{
			model="aceax_niarms_compat_main_mk17";
			mod="iur";
			camo="tan";
			caliber="556nato";
			barrel="std";
			gl="yes";
		};
		class hlc_wp_MK17IUR_556_AGC_camo
		{
			model="aceax_niarms_compat_main_mk17";
			mod="iur";
			camo="camo";
			caliber="556nato";
			barrel="std";
			gl="yes";
		};
		class hlc_wp_MK17IUR_300
		{
			model="aceax_niarms_compat_main_mk17";
			mod="iur";
			camo="tan";
			caliber="300";
			barrel="std";
			gl="no";
		};
		class hlc_wp_MK17IUR_300_camo
		{
			model="aceax_niarms_compat_main_mk17";
			mod="iur";
			camo="camo";
			caliber="300";
			barrel="std";
			gl="no";
		};
		class hlc_wp_MK17IUR_300_AGC
		{
			model="aceax_niarms_compat_main_mk17";
			mod="iur";
			camo="tan";
			caliber="300";
			barrel="std";
			gl="yes";
		};
		class hlc_wp_MK17IUR_300_AGC_camo
		{
			model="aceax_niarms_compat_main_mk17";
			mod="iur";
			camo="camo";
			caliber="300";
			barrel="std";
			gl="yes";
		};
		class hlc_wp_MK17IUR_762R
		{
			model="aceax_niarms_compat_main_mk17";
			mod="iur";
			camo="tan";
			caliber="762ak";
			barrel="std";
			gl="no";
		};
		class hlc_wp_MK17IUR_762R_camo
		{
			model="aceax_niarms_compat_main_mk17";
			mod="iur";
			camo="camo";
			caliber="762ak";
			barrel="std";
			gl="no";
		};
		class hlc_rifle_STGW57
		{
			model="aceax_niarms_compat_main_stgw57";
			variant="base";
			gl="no";
			rails="no";
		};
		class hlc_rifle_stgw57_RIS
		{
			model="aceax_niarms_compat_main_stgw57";
			variant="base";
			gl="no";
			rails="yes";
		};
		class hlc_rifle_stgw57_RG
		{
			model="aceax_niarms_compat_main_stgw57";
			variant="base";
			gl="yes";
			rails="no";
		};
		class hlc_rifle_stgw57_RIS_RG
		{
			model="aceax_niarms_compat_main_stgw57";
			variant="base";
			gl="yes";
			rails="yes";
		};
		class hlc_rifle_stgw57_commando
		{
			model="aceax_niarms_compat_main_stgw57";
			variant="commando";
			gl="no";
			rails="yes";
		};
		class sp_fwa_sig510
		{
			model="aceax_niarms_compat_main_stgw57";
			variant="510";
			gl="yes";
			rails="no";
		};
		class hlc_rifle_amt
		{
			model="aceax_niarms_compat_main_stgw57";
			variant="amt";
			gl="no";
			rails="yes";
		};
		class hlc_rifle_sig5104
		{
			model="aceax_niarms_compat_main_stgw57";
			variant="5104";
			gl="no";
			rails="yes";
		};
		class hlc_rifle_SG550
		{
			model="aceax_niarms_compat_main_sg550";
			varient="standard";
			gl="no";
			opticRail="no";
			barrelRail="no";
		};
		class hlc_rifle_SG550_GL
		{
			model="aceax_niarms_compat_main_sg550";
			varient="standard";
			gl="yes";
			opticRail="no";
			barrelRail="no";
		};
		class hlc_rifle_SG550_RIS
		{
			model="aceax_niarms_compat_main_sg550";
			varient="standard";
			gl="no";
			opticRail="yes";
			barrelRail="no";
		};
		class hlc_rifle_SG550_TAC
		{
			model="aceax_niarms_compat_main_sg550";
			varient="standard";
			gl="no";
			opticRail="yes";
			barrelRail="yes";
		};
		class hlc_rifle_SG550_TAC_GL
		{
			model="aceax_niarms_compat_main_sg550";
			varient="standard";
			gl="yes";
			opticRail="yes";
			barrelRail="yes";
		};
		class hlc_rifle_SG550Sniper
		{
			model="aceax_niarms_compat_main_sg550";
			varient="sniper";
			gl="no";
			opticRail="no";
			barrelRail="no";
		};
		class hlc_rifle_SG550Sniper_RIS
		{
			model="aceax_niarms_compat_main_sg550";
			varient="sniper";
			gl="no";
			opticRail="yes";
			barrelRail="no";
		};
		class hlc_rifle_SG551LB
		{
			model="aceax_niarms_compat_main_sg551";
			barrel="long";
			gl="no";
			opticRail="no";
			barrelRail="no";
		};
		class hlc_rifle_SG551LB_RIS
		{
			model="aceax_niarms_compat_main_sg551";
			barrel="long";
			gl="no";
			opticRail="yes";
			barrelRail="no";
		};
		class hlc_rifle_SG551LB_TAC
		{
			model="aceax_niarms_compat_main_sg551";
			barrel="long";
			gl="no";
			opticRail="yes";
			barrelRail="yes";
		};
		class hlc_rifle_SG551LB_TAC_GL
		{
			model="aceax_niarms_compat_main_sg551";
			barrel="long";
			gl="yes";
			opticRail="yes";
			barrelRail="yes";
		};
		class hlc_rifle_SG551SB
		{
			model="aceax_niarms_compat_main_sg551";
			barrel="short";
			gl="no";
			opticRail="no";
			barrelRail="no";
		};
		class hlc_rifle_SG551SB_RIS
		{
			model="aceax_niarms_compat_main_sg551";
			barrel="short";
			gl="no";
			opticRail="yes";
			barrelRail="no";
		};
		class hlc_rifle_SG551SB_TAC
		{
			model="aceax_niarms_compat_main_sg551";
			barrel="short";
			gl="no";
			opticRail="yes";
			barrelRail="yes";
		};
		class hlc_rifle_SG551SB_TAC_GL
		{
			model="aceax_niarms_compat_main_sg551";
			barrel="short";
			gl="yes";
			opticRail="yes";
			barrelRail="yes";
		};
		class hlc_rifle_SG553LB
		{
			model="aceax_niarms_compat_main_sg553";
			caliber="556";
			barrel="long";
			opticRail="no";
			barrelRail="no";
		};
		class hlc_rifle_SG553LB_RIS
		{
			model="aceax_niarms_compat_main_sg553";
			caliber="556";
			barrel="long";
			opticRail="yes";
			barrelRail="no";
		};
		class hlc_rifle_SG553LB_TAC
		{
			model="aceax_niarms_compat_main_sg553";
			caliber="556";
			barrel="long";
			opticRail="yes";
			barrelRail="yes";
		};
		class hlc_rifle_SG553SB
		{
			model="aceax_niarms_compat_main_sg553";
			caliber="556";
			barrel="short";
			opticRail="no";
			barrelRail="no";
		};
		class hlc_rifle_SG553SB_RIS
		{
			model="aceax_niarms_compat_main_sg553";
			caliber="556";
			barrel="short";
			opticRail="yes";
			barrelRail="no";
		};
		class hlc_rifle_SG553SB_TAC
		{
			model="aceax_niarms_compat_main_sg553";
			caliber="556";
			barrel="short";
			opticRail="yes";
			barrelRail="yes";
		};
		class hlc_rifle_SG553RLB
		{
			model="aceax_niarms_compat_main_sg553";
			caliber="762";
			barrel="long";
			opticRail="yes";
			barrelRail="no";
		};
		class hlc_rifle_SG553RLB_TAC
		{
			model="aceax_niarms_compat_main_sg553";
			caliber="762";
			barrel="long";
			opticRail="yes";
			barrelRail="yes";
		};
		class hlc_rifle_SG553RSB
		{
			model="aceax_niarms_compat_main_sg553";
			caliber="762";
			barrel="long";
			opticRail="yes";
			barrelRail="no";
		};
		class hlc_rifle_SG553RSB_TAC
		{
			model="aceax_niarms_compat_main_sg553";
			caliber="762";
			barrel="long";
			opticRail="yes";
			barrelRail="yes";
		};
		class HLC_rifle_XM8_Carbine
		{
			model="aceax_niarms_compat_main_xm8";
			variant="standard";
			length="carbine";
			camo="black";
			gl="no";
		};
		class HLC_rifle_XM8_Carbine_green
		{
			model="aceax_niarms_compat_main_xm8";
			variant="standard";
			length="carbine";
			camo="green";
			gl="no";
		};
		class HLC_rifle_XM8_Carbine_od
		{
			model="aceax_niarms_compat_main_xm8";
			variant="standard";
			length="carbine";
			camo="od";
			gl="no";
		};
		class HLC_rifle_XM8_Carbine_tan
		{
			model="aceax_niarms_compat_main_xm8";
			variant="standard";
			length="carbine";
			camo="tan";
			gl="no";
		};
		class HLC_rifle_XM8_Carbine_GL
		{
			model="aceax_niarms_compat_main_xm8";
			variant="standard";
			length="carbine";
			camo="black";
			gl="yes";
		};
		class HLC_rifle_XM8_Carbine_GL_green
		{
			model="aceax_niarms_compat_main_xm8";
			variant="standard";
			length="carbine";
			camo="green";
			gl="yes";
		};
		class HLC_rifle_XM8_Carbine_GL_OD
		{
			model="aceax_niarms_compat_main_xm8";
			variant="standard";
			length="carbine";
			camo="od";
			gl="yes";
		};
		class HLC_rifle_XM8_Carbine_GL_Tan
		{
			model="aceax_niarms_compat_main_xm8";
			variant="standard";
			length="carbine";
			camo="tan";
			gl="yes";
		};
		class HLC_rifle_XM8_MWSF_Carbine
		{
			model="aceax_niarms_compat_main_xm8";
			variant="mwsf";
			length="carbine";
			camo="black";
			gl="no";
		};
		class HLC_rifle_XM8_MWSF_Carbine_green
		{
			model="aceax_niarms_compat_main_xm8";
			variant="mwsf";
			length="carbine";
			camo="green";
			gl="no";
		};
		class HLC_rifle_XM8_MWSF_Carbine_od
		{
			model="aceax_niarms_compat_main_xm8";
			variant="mwsf";
			length="carbine";
			camo="od";
			gl="no";
		};
		class HLC_rifle_XM8_MWSF_Carbine_tan
		{
			model="aceax_niarms_compat_main_xm8";
			variant="mwsf";
			length="carbine";
			camo="tan";
			gl="no";
		};
		class HLC_rifle_XM8_MWSF_Carbine_GL
		{
			model="aceax_niarms_compat_main_xm8";
			variant="mwsf";
			length="carbine";
			camo="black";
			gl="yes";
		};
		class HLC_rifle_XM8_MWSF_Carbine_GL_green
		{
			model="aceax_niarms_compat_main_xm8";
			variant="mwsf";
			length="carbine";
			camo="green";
			gl="yes";
		};
		class HLC_rifle_XM8_MWSF_Carbine_GL_OD
		{
			model="aceax_niarms_compat_main_xm8";
			variant="mwsf";
			length="carbine";
			camo="od";
			gl="yes";
		};
		class HLC_rifle_XM8_MWSF_Carbine_GL_Tan
		{
			model="aceax_niarms_compat_main_xm8";
			variant="mwsf";
			length="carbine";
			camo="tan";
			gl="yes";
		};
		class HLC_rifle_XM8_Proto_Carbine
		{
			model="aceax_niarms_compat_main_xm8";
			variant="prototype";
			length="carbine";
			camo="black";
			gl="no";
		};
		class HLC_rifle_XM8_Proto_Carbine_green
		{
			model="aceax_niarms_compat_main_xm8";
			variant="prototype";
			length="carbine";
			camo="green";
			gl="no";
		};
		class HLC_rifle_XM8_Proto_Carbine_od
		{
			model="aceax_niarms_compat_main_xm8";
			variant="prototype";
			length="carbine";
			camo="od";
			gl="no";
		};
		class HLC_rifle_XM8_Proto_Carbine_tan
		{
			model="aceax_niarms_compat_main_xm8";
			variant="prototype";
			length="carbine";
			camo="tan";
			gl="no";
		};
		class HLC_rifle_XM8_Proto_Carbine_GL
		{
			model="aceax_niarms_compat_main_xm8";
			variant="prototype";
			length="carbine";
			camo="black";
			gl="yes";
		};
		class HLC_rifle_XM8_Proto_Carbine_GL_Green
		{
			model="aceax_niarms_compat_main_xm8";
			variant="prototype";
			length="carbine";
			camo="green";
			gl="yes";
		};
		class HLC_rifle_XM8_Proto_Carbine_GL_OD
		{
			model="aceax_niarms_compat_main_xm8";
			variant="prototype";
			length="carbine";
			camo="od";
			gl="yes";
		};
		class HLC_rifle_XM8_Proto_Carbine_GL_Tan
		{
			model="aceax_niarms_compat_main_xm8";
			variant="prototype";
			length="carbine";
			camo="tan";
			gl="yes";
		};
		class HLC_rifle_XM8_Compact
		{
			model="aceax_niarms_compat_main_xm8";
			variant="standard";
			length="compact";
			camo="black";
			gl="no";
		};
		class HLC_rifle_XM8_Compact_green
		{
			model="aceax_niarms_compat_main_xm8";
			variant="standard";
			length="compact";
			camo="green";
			gl="no";
		};
		class HLC_rifle_XM8_Compact_od
		{
			model="aceax_niarms_compat_main_xm8";
			variant="standard";
			length="compact";
			camo="od";
			gl="no";
		};
		class HLC_rifle_XM8_Compact_tan
		{
			model="aceax_niarms_compat_main_xm8";
			variant="standard";
			length="compact";
			camo="tan";
			gl="no";
		};
		class HLC_rifle_XM8_Proto_Compact
		{
			model="aceax_niarms_compat_main_xm8";
			variant="prototype";
			length="compact";
			camo="black";
			gl="no";
		};
		class HLC_rifle_XM8_Proto_Compact_green
		{
			model="aceax_niarms_compat_main_xm8";
			variant="prototype";
			length="compact";
			camo="green";
			gl="no";
		};
		class HLC_rifle_XM8_Proto_Compact_od
		{
			model="aceax_niarms_compat_main_xm8";
			variant="prototype";
			length="compact";
			camo="od";
			gl="no";
		};
		class HLC_rifle_XM8_Proto_Compact_tan
		{
			model="aceax_niarms_compat_main_xm8";
			variant="prototype";
			length="compact";
			camo="tan";
			gl="no";
		};
		class HLC_rifle_XM8_MWSF_Compact
		{
			model="aceax_niarms_compat_main_xm8";
			variant="mwsf";
			length="compact";
			camo="black";
			gl="no";
		};
		class HLC_rifle_XM8_MWSF_Compact_green
		{
			model="aceax_niarms_compat_main_xm8";
			variant="mwsf";
			length="compact";
			camo="green";
			gl="no";
		};
		class HLC_rifle_XM8_MWSF_Compact_od
		{
			model="aceax_niarms_compat_main_xm8";
			variant="mwsf";
			length="compact";
			camo="od";
			gl="no";
		};
		class HLC_rifle_XM8_MWSF_Compact_tan
		{
			model="aceax_niarms_compat_main_xm8";
			variant="mwsf";
			length="compact";
			camo="tan";
			gl="no";
		};
		class HLC_rifle_XM8_DMAR
		{
			model="aceax_niarms_compat_main_xm8";
			variant="standard";
			length="dmar";
			camo="black";
			gl="no";
		};
		class HLC_rifle_XM8_DMAR_green
		{
			model="aceax_niarms_compat_main_xm8";
			variant="standard";
			length="dmar";
			camo="green";
			gl="no";
		};
		class HLC_rifle_XM8_DMAR_od
		{
			model="aceax_niarms_compat_main_xm8";
			variant="standard";
			length="dmar";
			camo="od";
			gl="no";
		};
		class HLC_rifle_XM8_DMAR_tan
		{
			model="aceax_niarms_compat_main_xm8";
			variant="standard";
			length="dmar";
			camo="tan";
			gl="no";
		};
		class HLC_rifle_XM8_Proto_DMAR
		{
			model="aceax_niarms_compat_main_xm8";
			variant="prototype";
			length="dmar";
			camo="black";
			gl="no";
		};
		class HLC_rifle_XM8_Proto_DMAR_green
		{
			model="aceax_niarms_compat_main_xm8";
			variant="prototype";
			length="dmar";
			camo="green";
			gl="no";
		};
		class HLC_rifle_XM8_Proto_DMAR_od
		{
			model="aceax_niarms_compat_main_xm8";
			variant="prototype";
			length="dmar";
			camo="od";
			gl="no";
		};
		class HLC_rifle_XM8_Proto_DMAR_tan
		{
			model="aceax_niarms_compat_main_xm8";
			variant="prototype";
			length="dmar";
			camo="tan";
			gl="no";
		};
		class HLC_rifle_XM8_MWSF_DMAR
		{
			model="aceax_niarms_compat_main_xm8";
			variant="mwsf";
			length="dmar";
			camo="black";
			gl="no";
		};
		class HLC_rifle_XM8_MWSF_DMAR_green
		{
			model="aceax_niarms_compat_main_xm8";
			variant="mwsf";
			length="dmar";
			camo="green";
			gl="no";
		};
		class HLC_rifle_XM8_MWSF_DMAR_od
		{
			model="aceax_niarms_compat_main_xm8";
			variant="mwsf";
			length="dmar";
			camo="od";
			gl="no";
		};
		class HLC_rifle_XM8_MWSF_DMAR_tan
		{
			model="aceax_niarms_compat_main_xm8";
			variant="mwsf";
			length="dmar";
			camo="tan";
			gl="no";
		};
		class hlc_lmg_m60
		{
			model="aceax_niarms_compat_main_m60";
			variant="base";
		};
		class hlc_lmg_M60E4
		{
			model="aceax_niarms_compat_main_m60";
			variant="e4";
		};
		class hlc_rifle_M1903A1
		{
			model="aceax_niarms_compat_main_m1903a1";
			variant="base";
		};
		class hlc_rifle_M1903A1OMR
		{
			model="aceax_niarms_compat_main_m1903a1";
			variant="guthrie";
		};
		class hlc_rifle_M1903A1_unertl
		{
			model="aceax_niarms_compat_main_m1903a1";
			variant="scope";
		};
	};
};
