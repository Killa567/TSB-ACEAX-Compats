#define true	1
#define false	0

#define private		0
#define protected		1
#define public		2

class CfgPatches
{
	class TSB_ACEAX_Compat_AEGIS_HELMETS
	{
		name="TSB_ACEAX_Compat_AEGIS_HELMETS";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"aceax_gearinfo",
			"A3_Aegis_Data_F_Aegis"
		};
		author="Frost99";
		skipWhenMissingDependencies = 1;
	};
};
class XtdGearModels {
	class CfgWeapons {
		// Advanced Modular Helmet Arid
		class Aegis_AMH_Arid {
			label="Advanced Modular Helmet Arid";
			author="Frost993";
            options[] = {
				"EarPro"
			};
            class EarPro {
                label = "Ear Protection";
                values[] = {
					"Off", 
					"On",
					"OnEar", 
					"OnChops"
				};
				changeingame = 1;
                class Off {
                    label = "No Headset";
                    actionlabel = "Take off Headset";
                };
				class On {
                    label = "Headset";
                    actionlabel = "Put on Headset";
                };
				class OnEar {
                    label = "Ear Protection";
                    actionlabel = "Put on Ear Protection";
                };
				class OnChops {
                    label = "Chops";
                    actionlabel = "Put on Chops";
                };
            };
		};
		// Advanced Modular Helmet Geometric
		class Aegis_AMH_Geometric {
			label="Advanced Modular Helmet Geometric";
			author="Frost993";
            options[] = {
				"EarPro"
			};
            class EarPro {
                label = "Ear Protection";
                values[] = {
					"Off", 
					"On",
					"OnEar", 
					"OnChops"
				};
				changeingame = 1;
                class Off {
                    label = "No Headset";
                    actionlabel = "Take off Headset";
                };
				class On {
                    label = "Headset";
                    actionlabel = "Put on Headset";
                };
				class OnEar {
                    label = "Ear Protection";
                    actionlabel = "Put on Ear Protection";
                };
				class OnChops {
                    label = "Chops";
                    actionlabel = "Put on Chops";
                };
            };
		};
		// Advanced Modular Helmet Olive
		class Aegis_AMH_Olive {
			label="Advanced Modular Helmet Olive";
			author="Frost993";
            options[] = {
				"EarPro"
			};
            class EarPro {
                label = "Ear Protection";
                values[] = {
					"Off", 
					"On",
					"OnEar", 
					"OnChops"
				};
				changeingame = 1;
                class Off {
                    label = "No Headset";
                    actionlabel = "Take off Headset";
                };
				class On {
                    label = "Headset";
                    actionlabel = "Put on Headset";
                };
				class OnEar {
                    label = "Ear Protection";
                    actionlabel = "Put on Ear Protection";
                };
				class OnChops {
                    label = "Chops";
                    actionlabel = "Put on Chops";
                };
            };
		};
		// Advanced Modular Helmet ADF Arid
		class Aegis_AMH_ADF_Arid {
			label="Advanced Modular Helmet ADF Arid";
			author="Frost993";
            options[] = {
				"EarPro"
			};
            class EarPro {
                label = "Ear Protection";
                values[] = {
					"Off", 
					"On",
					"OnEar", 
					"OnChops"
				};
				changeingame = 1;
                class Off {
                    label = "No Headset";
                    actionlabel = "Take off Headset";
                };
				class On {
                    label = "Headset";
                    actionlabel = "Put on Headset";
                };
				class OnEar {
                    label = "Ear Protection";
                    actionlabel = "Put on Ear Protection";
                };
				class OnChops {
                    label = "Chops";
                    actionlabel = "Put on Chops";
                };
            };
		};
		// Advanced Modular Helmet ADF Tropic
		class Aegis_AMH_ADF_Tropic {
			label="Advanced Modular Helmet ADF Tropic";
			author="Frost993";
            options[] = {
				"EarPro"
			};
            class EarPro {
                label = "Ear Protection";
                values[] = {
					"Off", 
					"On",
					"OnEar", 
					"OnChops"
				};
				changeingame = 1;
                class Off {
                    label = "No Headset";
                    actionlabel = "Take off Headset";
                };
				class On {
                    label = "Headset";
                    actionlabel = "Put on Headset";
                };
				class OnEar {
                    label = "Ear Protection";
                    actionlabel = "Put on Ear Protection";
                };
				class OnChops {
                    label = "Chops";
                    actionlabel = "Put on Chops";
                };
            };
		};
		// Advanced Modular Helmet ADF
		class Aegis_AMH_ADF {
			label="Advanced Modular Helmet ADF";
			author="Frost993";
            options[] = {
				"EarPro"
			};
            class EarPro {
                label = "Ear Protection";
                values[] = {
					"Off", 
					"On",
					"OnEar", 
					"OnChops"
				};
				changeingame = 1;
                class Off {
                    label = "No Headset";
                    actionlabel = "Take off Headset";
                };
				class On {
                    label = "Headset";
                    actionlabel = "Put on Headset";
                };
				class OnEar {
                    label = "Ear Protection";
                    actionlabel = "Put on Ear Protection";
                };
				class OnChops {
                    label = "Chops";
                    actionlabel = "Put on Chops";
                };
            };
		};
		// Advanced Modular Helmet HIMF C
		class Aegis_AMH_HIMF_C {
			label="Advanced Modular Helmet HIMF C";
			author="Frost993";
            options[] = {
				"EarPro"
			};
            class EarPro {
                label = "Ear Protection";
                values[] = {
					"Off", 
					"On",
					"OnEar"
				};
				changeingame = 1;
                class Off {
                    label = "No Headset";
                    actionlabel = "Take off Headset";
                };
				class On {
                    label = "Headset";
                    actionlabel = "Put on Headset";
                };
				class OnEar {
                    label = "Ear Protection";
                    actionlabel = "Put on Ear Protection";
                };
            };
		};
		
		
		
		// TODO Basic Helmet  - H_PASGT_basic_black_F
		
		
		
		// TODO Boonies  - H_Booniehat_blk
		
		
		
		// TODO Caps  - H_Cap_khaki_specops_UK
		
		
		
		// TODO Others BUT NEED TO FIX HEARING PROTECTION MISSING AND BEING IN SOME HELMETS FIRST
		
		
		
	};
};
class XtdGearInfos {
	class CfgWeapons {
		// Advanced Modular Helmet Arid
		class H_HelmetHBK_arid_F {
			model="Aegis_AMH_Arid";
			EarPro="Off";
		};
		class H_HelmetHBK_arid_headset_F {
			model="Aegis_AMH_Arid";
			EarPro="On";
		};
		class H_HelmetHBK_arid_ear_F {
			model="Aegis_AMH_Arid";
			EarPro="OnEar";
		};
		class H_HelmetHBK_arid_chops_F {
			model="Aegis_AMH_Arid";
			EarPro="OnChops";
		};
		// Advanced Modular Helmet Geometric
		class H_HelmetHBK_F {
			model="Aegis_AMH_Geometric";
			EarPro="Off";
		};
		class H_HelmetHBK_headset_F {
			model="Aegis_AMH_Geometric";
			EarPro="On";
		};
		class H_HelmetHBK_ear_F {
			model="Aegis_AMH_Geometric";
			EarPro="OnEar";
		};
		class H_HelmetHBK_chops_F {
			model="Aegis_AMH_Geometric";
			EarPro="OnChops";
		};
		// Advanced Modular Helmet Olive
		class H_HelmetHBK_olive_F {
			model="Aegis_AMH_Olive";
			EarPro="Off";
		};
		class H_HelmetHBK_olive_headset_F {
			model="Aegis_AMH_Olive";
			EarPro="On";
		};
		class H_HelmetHBK_olive_ear_F {
			model="Aegis_AMH_Olive";
			EarPro="OnEar";
		};
		class H_HelmetHBK_olive_chops_F {
			model="Aegis_AMH_Olive";
			EarPro="OnChops";
		};
		// Advanced Modular Helmet ADF Arid
		class H_HelmetHBK_aucamo_arid_F {
			model="Aegis_AMH_ADF_Arid";
			EarPro="Off";
		};
		class H_HelmetHBK_aucamo_arid_headset_F {
			model="Aegis_AMH_ADF_Arid";
			EarPro="On";
		};
		class H_HelmetHBK_aucamo_arid_ear_F {
			model="Aegis_AMH_ADF_Arid";
			EarPro="OnEar";
		};
		class H_HelmetHBK_aucamo_arid_chops_F {
			model="Aegis_AMH_ADF_Arid";
			EarPro="OnChops";
		};
		// Advanced Modular Helmet ADF Tropic
		class H_HelmetHBK_aucamo_tropic_F {
			model="Aegis_AMH_ADF_Tropic";
			EarPro="Off";
		};
		class H_HelmetHBK_aucamo_tropic_headset_F {
			model="Aegis_AMH_ADF_Tropic";
			EarPro="On";
		};
		class H_HelmetHBK_aucamo_tropic_ear_F {
			model="Aegis_AMH_ADF_Tropic";
			EarPro="OnEar";
		};
		class H_HelmetHBK_aucamo_tropic_chops_F {
			model="Aegis_AMH_ADF_Tropic";
			EarPro="OnChops";
		};
		// Advanced Modular Helmet ADF
		class H_HelmetHBK_aucamo_F {
			model="Aegis_AMH_ADF";
			EarPro="Off";
		};
		class H_HelmetHBK_aucamo_headset_F {
			model="Aegis_AMH_ADF";
			EarPro="On";
		};
		class H_HelmetHBK_aucamo_ear_F {
			model="Aegis_AMH_ADF";
			EarPro="OnEar";
		};
		class H_HelmetHBK_aucamo_chops_F {
			model="Aegis_AMH_ADF";
			EarPro="OnChops";
		};
		// Advanced Modular Helmet HIMF-C
		class H_HelmetHBK_commando_F {
			model="Aegis_AMH_HIMF_C";
			EarPro="Off";
		};
		class H_HelmetHBK_commando_headset_F {
			model="Aegis_AMH_HIMF_C";
			EarPro="On";
		};
		class H_HelmetHBK_commando_ear_F {
			model="Aegis_AMH_HIMF_C";
			EarPro="OnEar";
		};
		// new
	};
};
