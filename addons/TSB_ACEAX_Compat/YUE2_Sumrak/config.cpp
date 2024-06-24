class CfgPatches
{
	class TSB_ACEAX_Compat_Sumrak
	{
		name="TSB_ACEAX_Compat_Sumrak";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"aceax_gearinfo",
			"YuE_EAST_GRU"
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
		class Sumrak
		{
			label="KZS 'Sumrak'";
			author="SGTdanny";
			options[]=
			{
				"Camo",
				"Gloves",
				"Hood",
				"Pattern",
				"Pads"
			};
			class Camo
			{
				label="Camo";
				alwaysSelectable=1;
				values[]=
				{
					"ATACS",
					"EMR",
					"KLMKYellow",
					"KLMK",
					"SSLeto",
					"SSVesna"
				};
				class ATACS
				{
					label="A-TACS";
					image="TSB_ACEAX_Compat\data\ATACSFG.paa";
				};
				class EMR
				{
					label="EMR";
					image="TSB_ACEAX_Compat\data\EMRS.paa";
				};
				class KLMKYellow
				{
					label="KLMK Yellow";
					image="TSB_ACEAX_Compat\data\KLMKYellow.paa";
				};
				class KLMK
				{
					label="KLMK";
					image="TSB_ACEAX_Compat\data\KLMK.paa";
				};
				class SSLeto
				{
					label="SS Leto";
					image="TSB_ACEAX_Compat\data\SSLeto.paa"
				};
				class SSVesna
				{
					label="SS Vesna";
					image="TSB_ACEAX_Compat\data\SSVesna.paa"
				};
			};
			class Hood
			{
				label="Hood";
				alwaysSelectable=1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
			class Pattern
			{
				label="Pattern";
				alwaysSelectable=1;
				values[]=
				{
					"1",
					"2"
				};
			};
			class Gloves
			{
				label="Gloves";
				alwaysSelectable=1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
			class Pads
			{
				label="Pads";
				alwaysSelectable=1;
				values[]=
				{
					"Off",
					"OneKnee",
					"TwoKnee",
					"TwoKneeElbow"
				};
				class Off
				{
					label="Off";
				};
				class OneKnee
				{
					label="One Knee";
				};
				class TwoKnee
				{
					label="Two Knees";
				};
				class TwoKneeElbow
				{
					label="Two Kness + Elbows";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
////////////////////////////////////////////////ATACS Hood Down
		class Spec_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="Off";
		};
		class Spec_nkl_r_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_nkl_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_nlk_nkl_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_p_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_nkl_r_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_nkl_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_nlk_nkl_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////ATACS Hood Up
		class Spec_klp_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="Off";
		};
		class Spec_klp_st_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="Off";
		};
		class Spec_klp_n_r_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_klp_nlk_r_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_klp_n_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_klp_nlk_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_klp_nlk_nkl_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_klp_st_nlk_nkl_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////ATACS Hood Up w/Gloves
		class Spec_p_klp_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_klp_st_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_klp_n_r_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_klp_nlk_r_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_klp_n_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_klp_nlk_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_klp_nlk_nkl_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
		class Spec_p_klp_st_nlk_nkl_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////EMR
		class Spec_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="Off";
		};
		class Spec_nkl_r_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_nkl_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_nlk_nkl_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_p_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_nkl_r_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_nkl_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_nlk_nkl_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////EMR Hood Up
		class Spec_klp_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="Off";
		};
		class Spec_klp_st_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="Off";
		};
		class Spec_klp_n_r_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_klp_nlk_r_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_klp_n_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_klp_nlk_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_klp_nlk_nkl_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_klp_st_nlk_nkl_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////EMR Hood Up w/Gloves
		class Spec_p_klp_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_klp_st_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_klp_n_r_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_klp_nlk_r_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_klp_n_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_klp_nlk_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_klp_nlk_nkl_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
		class Spec_p_klp_st_nlk_nkl_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////KLMK Yellow
		class Spec_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="Off";
		};
		class Spec_nkl_r_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_nkl_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_nlk_nkl_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_p_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_nkl_r_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_nkl_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_nlk_nkl_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////KLMK Yellow Hood Up
		class Spec_klp_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="Off";
		};
		class Spec_klp_st_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="Off";
		};
		class Spec_klp_n_r_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_klp_nlk_r_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_klp_n_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_klp_nlk_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_klp_nlk_nkl_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_klp_st_nlk_nkl_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////KLMKYellow Hood Up w/Gloves
		class Spec_p_klp_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_klp_st_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_klp_n_r_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_klp_nlk_r_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_klp_n_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_klp_nlk_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_klp_nlk_nkl_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
		class Spec_p_klp_st_nlk_nkl_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////KLMK
		class Spec_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="Off";
		};
		class Spec_nkl_r_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_nkl_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_nlk_nkl_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_p_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_nkl_r_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_nkl_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_nlk_nkl_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////KLMK Hood Up
		class Spec_klp_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="Off";
		};
		class Spec_klp_st_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="Off";
		};
		class Spec_klp_n_r_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_klp_nlk_r_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_klp_n_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_klp_nlk_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_klp_nlk_nkl_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_klp_st_nlk_nkl_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////KLMK Hood Up w/Gloves
		class Spec_p_klp_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_klp_st_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_klp_n_r_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_klp_nlk_r_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_klp_n_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_klp_nlk_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_klp_nlk_nkl_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
		class Spec_p_klp_st_nlk_nkl_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////SS Leto
		class Spec_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="Off";
		};
		class Spec_nkl_r_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_nkl_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_nlk_nkl_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_p_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_nkl_r_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_nkl_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_nlk_nkl_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////SSLetoHood Up
		class Spec_klp_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="Off";
		};
		class Spec_klp_st_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="Off";
		};
		class Spec_klp_n_r_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_klp_nlk_r_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_klp_n_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_klp_nlk_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_klp_nlk_nkl_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_klp_st_nlk_nkl_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////SSLeto Up w/Gloves
		class Spec_p_klp_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_klp_st_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_klp_n_r_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_klp_nlk_r_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_klp_n_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_klp_nlk_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_klp_nlk_nkl_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
		class Spec_p_klp_st_nlk_nkl_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////SS Vesna
		class Spec_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSVesna";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="Off";
		};
		class Spec_nkl_r_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSVesna";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_nkl_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSVesna";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_nlk_nkl_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSVesna";
			Hood="No";
			Pattern="1";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_p_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSVesna";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_nkl_r_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSVesna";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_nkl_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSVesna";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_nlk_nkl_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSVesna";
			Hood="No";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////SSVesnaHood Up
		class Spec_klp_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSVesna";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="Off";
		};
		class Spec_klp_st_EAST_Uniform
		{
			model="Sumrak";
			 Camo="SSVesna";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="Off";
		};
		class Spec_klp_n_r_EAST_Uniform
		{
			model="Sumrak";
			 Camo="SSVesna";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_klp_nlk_r_EAST_Uniform
		{
			model="Sumrak";
			 Camo="SSVesna";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_klp_n_EAST_Uniform
		{
			model="Sumrak";
			 Camo="SSVesna";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_klp_nlk_EAST_Uniform
		{
			model="Sumrak";
			 Camo="SSVesna";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_klp_nlk_nkl_EAST_Uniform
		{
			model="Sumrak";
			 Camo="SSVesna";
			Hood="Yes";
			Pattern="1";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_klp_st_nlk_nkl_EAST_Uniform
		{
			model="Sumrak";
			 Camo="SSVesna";
			Hood="Yes";
			Pattern="2";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////SSVesna Up w/Gloves
		class Spec_p_klp_EAST_Uniform
		{
			model="Sumrak";
			 Camo="SSVesna";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_klp_st_EAST_Uniform
		{
			model="Sumrak";
			 Camo="SSVesna";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_klp_n_r_EAST_Uniform
		{
			model="Sumrak";
			 Camo="SSVesna";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_klp_nlk_r_EAST_Uniform
		{
			model="Sumrak";
			 Camo="SSVesna";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_klp_n_EAST_Uniform
		{
			model="Sumrak";
			 Camo="SSVesna";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_klp_nlk_EAST_Uniform
		{
			model="Sumrak";
			 Camo="SSVesna";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_klp_nlk_nkl_EAST_Uniform
		{
			model="Sumrak";
			 Camo="SSVesna";
			Hood="Yes";
			Pattern="1";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
		class Spec_p_klp_st_nlk_nkl_EAST_Uniform
		{
			model="Sumrak";
			 Camo="SSVesna";
			Hood="Yes";
			Pattern="2";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
	};
};