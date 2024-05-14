#define true	1
#define false	0

#define private		0
#define protected		1
#define public		2

class CfgPatches
{
	class TSB_ACEAX_Compat_YUE
	{
		name="TSB_ACEAX_Compat_YUE";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"aceax_gearinfo"
		};
		author="Frost99";
        skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels {
    class cfgWeapons {
		
// 6b23 EMR 6SH925

        class YUE_6B23_EMR_6SH925 {
            label = "6B23 (EMR/6SH92-5)";
            author = "Frost993";
            options[] = {"camo","varient"};
			class camo {
                values[] = {
					"FLORAMNT",
					"FLORA",
					"KHAKI",
					"VSR98"
				};
				class FLORAMNT {
                    label = "FLORAMNT";
                };
				class FLORA {
                    label = "FLORA";
                };
				class KHAKI {
                    label = "KHAKI";
                };
				class VSR98 {
                    label = "VSR98";
                };
				
            };
			class varient {
                values[] = {
					"Normal",
					"6SH18",
					"6SH18G",
					"VOG"
				};
                class Normal {
                    label = "Normal";
                };
				class 6SH18 {
                    label = "6SH18";
                };
				class 6SH18G {
                    label = "6SH18 Green";
                };
				class VOG {
                    label = "VOG";
                };
            };
        };
		
// 6b23 EMR M22

        class YUE_6B23_EMR_M22 {
            label = "6B23 (EMR/M22)";
            author = "Frost993";
            options[] = {"camo","varient"};
			class camo {
                values[] = {
					"Black",
					"EMR",
					"Flora",
					"Olive",
					"Woodland"
				};
				class Black {
                    label = "Black";
                };
				class EMR {
                    label = "EMR";
                };
				class Flora {
                    label = "Flora";
                };
				class Olive {
                    label = "Olive";
                };
				class Woodland {
                    label = "Woodland";
                };
            };
        };
		
// 6b23 EMR M22

        class YUE_6B23_EMR_M23 {
            label = "6B23 (EMR/M23)";
            author = "Frost993";
            options[] = {"camo","varient"};
			class camo {
                values[] = {
					"Black",
					"EMR",
					"Flora",
					"Olive",
					"Woodland"
				};
				class Black {
                    label = "Black";
                };
				class EMR {
                    label = "EMR";
                };
				class Flora {
                    label = "Flora";
                };
				class Olive {
                    label = "Olive";
                };
				class Woodland {
                    label = "Woodland";
                };
            };
        };
		
// 6b23 EMR 6SH925

        class YUE_6B23_EMR_RD54 {
            label = "6B23 (EMR/RD-54 Webbing)";
            author = "Frost993";
            options[] = {"camo","varient"};
			class camo {
                values[] = {
					"Brown",
					"EMR",
					"Flora",
					"Tan"
				};
				class Brown {
                    label = "Brown";
                };
				class EMR {
                    label = "EMR";
                };
				class Flora {
                    label = "Flora";
                };
				class Tan {
                    label = "Tan";
                };
				
            };
			class varient {
                values[] = {
					"Normal",
					"6SH18",
					"6SH18G",
					"6SH46",
					"6SH46GL"
				};
                class Normal {
                    label = "Normal";
                };
				class 6SH18 {
                    label = "6SH18";
                };
				class 6SH18G {
                    label = "6SH18 Green";
                };
				class 6SH46 {
                    label = "6SH46";
                };
				class 6SH46GL {
                    label = "6SH46 GL";
                };
            };
        };
			
		
		
		
		
		
		
    };
};

class XtdGearInfos {
    class cfgWeapons {

// 6b23 EMR 6SH92-5
		
		class 6b23_6sh92EMPFl2 {
            model = "YUE_6B23_EMR_6SH925";
            camo = "FLORAMNT";
            varient = "Normal";
        };
		class 6b23_6sh92svdEMPFl2 {
            model = "YUE_6B23_EMR_6SH925";
            camo = "FLORAMNT";
            varient = "6SH18";
        };
		class 6b23_6sh92svdgEMPFl2 {
            model = "YUE_6B23_EMR_6SH925";
            camo = "FLORAMNT";
            varient = "6SH18G";
        };
		class 6b23_6sh92gpEMPFl2 {
            model = "YUE_6B23_EMR_6SH925";
            camo = "FLORAMNT";
            varient = "VOG";
        };
		
		class 6b23_6sh92EMPFl {
            model = "YUE_6B23_EMR_6SH925";
            camo = "FLORA";
            varient = "Normal";
        };
		class 6b23_6sh92svdEMPFl {
            model = "YUE_6B23_EMR_6SH925";
            camo = "FLORA";
            varient = "6SH18";
        };
		class 6b23_6sh92svdgEMPFl {
            model = "YUE_6B23_EMR_6SH925";
            camo = "FLORA";
            varient = "6SH18G";
        };
		class 6b23_6sh92gpEMPFl {
            model = "YUE_6B23_EMR_6SH925";
            camo = "FLORA";
            varient = "VOG";
        };
		
		class 6b23_6sh92EMPOl {
            model = "YUE_6B23_EMR_6SH925";
            camo = "KHAKI";
            varient = "Normal";
        };
		class 6b23_6sh92svdEMPOl {
            model = "YUE_6B23_EMR_6SH925";
            camo = "KHAKI";
            varient = "6SH18";
        };
		class 6b23_6sh92svdgEMPOl {
            model = "YUE_6B23_EMR_6SH925";
            camo = "KHAKI";
            varient = "6SH18G";
        };
		class 6b23_6sh92gpEMPOl {
            model = "YUE_6B23_EMR_6SH925";
            camo = "KHAKI";
            varient = "VOG";
        };
		
		class 6b23_6sh92EMPFld {
            model = "YUE_6B23_EMR_6SH925";
            camo = "VSR98";
            varient = "Normal";
        };
		class 6b23_6sh92svdEMPFld {
            model = "YUE_6B23_EMR_6SH925";
            camo = "VSR98";
            varient = "6SH18";
        };
		class 6b23_6sh92svdgEMPFld {
            model = "YUE_6B23_EMR_6SH925";
            camo = "VSR98";
            varient = "6SH18G";
        };
		class 6b23_6sh92gpEMPFld {
            model = "YUE_6B23_EMR_6SH925";
            camo = "VSR98";
            varient = "VOG";
        };
		
// 6b23 EMR M22
		
		class 6b23EMP_Tarzan_B {
            model = "YUE_6B23_EMR_M22";
            camo = "Black";
        };
		class 6b23EMP_Tarzan_E {
            model = "YUE_6B23_EMR_M22";
            camo = "EMR";
        };
		class 6b23EMP_Tarzan_Flora {
            model = "YUE_6B23_EMR_M22";
            camo = "Flora";
        };
		class 6b23EMP_Tarzan_G {
            model = "YUE_6B23_EMR_M22";
            camo = "Olive";
        };
		class 6b23EMP_Tarzan_W {
            model = "YUE_6B23_EMR_M22";
            camo = "Woodland";
        };
		
// 6b23 EMR M23
		
		class 6b23EMP_Pioneer_B {
            model = "YUE_6B23_EMR_M23";
            camo = "Black";
        };
		class 6b23EMP_Pioneer_EMP {
            model = "YUE_6B23_EMR_M23";
            camo = "EMR";
        };
		class 6b23EMP_Pioneer_F {
            model = "YUE_6B23_EMR_M23";
            camo = "Flora";
        };
		class 6b23EMP_Pioneer_G {
            model = "YUE_6B23_EMR_M23";
            camo = "Olive";
        };
		class 6b23EMP_Pioneer_W {
            model = "YUE_6B23_EMR_M23";
            camo = "Woodland";
        };
		
		
// 6b23 EMR RD-54 Webbing
		
		class 6b23_RD54EMP_Olive {
            model = "YUE_6B23_EMR_RD54";
            camo = "Brown";
            varient = "Normal";
        };
		class 6b23_RD54SVDEMP_Olive {
            model = "YUE_6B23_EMR_RD54";
            camo = "Brown";
            varient = "6SH18";
        };
		class 6b23_RD54SVDgEMP_Olive {
            model = "YUE_6B23_EMR_RD54";
            camo = "Brown";
            varient = "6SH18G";
        };
		class 6b23_RD54AKvNEMP_Olive {
            model = "YUE_6B23_EMR_RD54";
            camo = "Brown";
            varient = "6SH46GL";
        };
		class 6b23_RD54AKEMP_Olive {
            model = "YUE_6B23_EMR_RD54";
            camo = "Brown";
            varient = "6SH46";
        };
		
		class 6b23_RD54EMP_EMP {
            model = "YUE_6B23_EMR_RD54";
            camo = "EMR";
            varient = "Normal";
        };
		class 6b23_RD54SVDEMP_EMP {
            model = "YUE_6B23_EMR_RD54";
            camo = "EMR";
            varient = "6SH18";
        };
		class 6b23_RD54SVDgEMP_EMP {
            model = "YUE_6B23_EMR_RD54";
            camo = "EMR";
            varient = "6SH18G";
        };
		class 6b23_RD54AKvNEMP_EMP {
            model = "YUE_6B23_EMR_RD54";
            camo = "EMR";
            varient = "6SH46GL";
        };
		class 6b23_RD54AKEMP_EMP {
            model = "YUE_6B23_EMR_RD54";
            camo = "EMR";
            varient = "6SH46";
        };
		
		class 6b23_RD54EMP_Flora {
            model = "YUE_6B23_EMR_RD54";
            camo = "Flora";
            varient = "Normal";
        };
		class 6b23_RD54SVDEMP_Flora {
            model = "YUE_6B23_EMR_RD54";
            camo = "Flora";
            varient = "6SH18";
        };
		class 6b23_RD54SVDgEMP_Flora {
            model = "YUE_6B23_EMR_RD54";
            camo = "Flora";
            varient = "6SH18G";
        };
		class 6b23_RD54AKvNEMP_Flora {
            model = "YUE_6B23_EMR_RD54";
            camo = "Flora";
            varient = "6SH46GL";
        };
		class 6b23_RD54AKEMP_Flora {
            model = "YUE_6B23_EMR_RD54";
            camo = "Flora";
            varient = "6SH46";
        };
		
		class 6b23_RD54EMP_Old {
            model = "YUE_6B23_EMR_RD54";
            camo = "Tan";
            varient = "Normal";
        };
		class 6b23_RD54SVDEMP_Old {
            model = "YUE_6B23_EMR_RD54";
            camo = "Tan";
            varient = "6SH18";
        };
		class 6b23_RD54SVDgEMP_Old {
            model = "YUE_6B23_EMR_RD54";
            camo = "Tan";
            varient = "6SH18G";
        };
		class 6b23_RD54AKvNEMP_Old {
            model = "YUE_6B23_EMR_RD54";
            camo = "Tan";
            varient = "6SH46GL";
        };
		class 6b23_RD54AKEMP_Old {
            model = "YUE_6B23_EMR_RD54";
            camo = "Tan";
            varient = "6SH46";
        };
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
    };
};




