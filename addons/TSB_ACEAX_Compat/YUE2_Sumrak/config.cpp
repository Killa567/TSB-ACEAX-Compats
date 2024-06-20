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
////////////////////////////////////////////////ATACS
		class Spec_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Gloves="No";
			Pads="Off";
		};
		class Spec_nkl_r_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_nkl_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_nlk_nkl_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_p_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_nkl_r_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_nkl_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_nlk_nkl_ataks_EAST_Uniform
		{
			model="Sumrak";
			Camo="ATACS";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////EMR
		class Spec_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Gloves="No";
			Pads="Off";
		};
		class Spec_nkl_r_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_nkl_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_nlk_nkl_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_p_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_nkl_r_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_nkl_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_nlk_nkl_emp_EAST_Uniform
		{
			model="Sumrak";
			Camo="EMR";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////KLMK Yellow
		class Spec_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Gloves="No";
			Pads="Off";
		};
		class Spec_nkl_r_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_nkl_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_nlk_nkl_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_p_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_nkl_r_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_nkl_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_nlk_nkl_berezka2_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMKYellow";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////KLMK
		class Spec_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Gloves="No";
			Pads="Off";
		};
		class Spec_nkl_r_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_nkl_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_nlk_nkl_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_p_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_nkl_r_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_nkl_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_nlk_nkl_berezka_EAST_Uniform
		{
			model="Sumrak";
			Camo="KLMK";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////SS Leto
		class Spec_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Gloves="No";
			Pads="Off";
		};
		class Spec_nkl_r_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_nkl_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_nlk_nkl_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_p_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_nkl_r_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_nkl_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_nlk_nkl_frog_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSLeto";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
////////////////////////////////////////////////SS Vesna
		class Spec_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSVesna";
			Gloves="No";
			Pads="Off";
		};
		class Spec_nkl_r_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSVesna";
			Gloves="No";
			Pads="OneKnee";
		};
		class Spec_nkl_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSVesna";
			Gloves="No";
			Pads="TwoKnee";
		};
		class Spec_nlk_nkl_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSVesna";
			Gloves="No";
			Pads="TwoKneeElbow";
		};
		class Spec_p_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSVesna";
			Gloves="Yes";
			Pads="Off";
		};
		class Spec_p_nkl_r_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSVesna";
			Gloves="Yes";
			Pads="OneKnee";
		};
		class Spec_p_nkl_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSVesna";
			Gloves="Yes";
			Pads="TwoKnee";
		};
		class Spec_p_nlk_nkl_EAST_Uniform
		{
			model="Sumrak";
			Camo="SSVesna";
			Gloves="Yes";
			Pads="TwoKneeElbow";
		};
	};
};