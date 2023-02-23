class CfgPatches
{
    class SOG_ACEAX_Compat
    {
        name="SOG_ACEAX_Compat";
        units[]={};
        weapons[]={};
        requiredAddons[]=
        {
            "aceax_gearinfo"
        };
        author="SGTdanny";
    };
};
class XtdGearModels
{
    class CfgWeapons 
    {
//BDU_AVRN
    	class BDU_AVRN
        {
            label = "BDU AVRN Uniforms";
            author = "SGTdanny";
            options[] = {"Option"};
            class option
            {
                values[] = {
					"Option1",
					"Option2",
					"Option3",
					"Option4",
					"Option5",
					"Option6"
				};
				class Option1 {
					label = "Option 1";
        			image = "SOG_ACEAX_Compat\data\ARVN.paa";
				};
				class Option2 {
					label = "Option 2";
        			image = "SOG_ACEAX_Compat\data\ARVN.paa";
				};
				class Option3 {
					label = "Option 3";
        			image = "SOG_ACEAX_Compat\data\ARVN.paa";
				};
				class Option4 {
					label = "Option 4";
        			image = "SOG_ACEAX_Compat\data\ARVN.paa";
				};
				class Option5 {
					label = "Option 5";
        			image = "SOG_ACEAX_Compat\data\ARVN.paa";
				};
				class Option6 {
					label = "Option 6";
        			image = "SOG_ACEAX_Compat\data\ARVN.paa";
				};

            };
        };
//BUD_AUS
        class BDU_AUS
        {
            label = "BDU AUS Uniforms";
            author = "SGTdanny";
            options[] = {"Option"};
            class option
            {
                values[] = {
					"Option1",
					"Option2",
					"Option3",
					"Option4",
					"Option5",
					"Option6",
					"Option7",
					"Option8",
					"Option9",
					"Option10"

				};
				class Option1 {
					label = "Option 1";
					image = "SOG_ACEAX_Compat\data\Aus1.paa";
				};
				class Option2 {
					label = "Option 2";
					image = "SOG_ACEAX_Compat\data\Aus1.paa";
				};
				class Option3 {
					label = "Option 3";
					image = "SOG_ACEAX_Compat\data\Aus1.paa";
				};
				class Option4 {
					label = "Option 4";
					image = "SOG_ACEAX_Compat\data\Aus1.paa";
				};
				class Option5 {
					label = "Option 5";
					image = "SOG_ACEAX_Compat\data\Aus1.paa";
				};
				class Option6 {
					label = "Option 6";
					image = "SOG_ACEAX_Compat\data\Aus1.paa";
				};
				class Option7 {
					label = "Option 7";
					image = "SOG_ACEAX_Compat\data\Aus1.paa";
				};
				class Option8 {
					label = "Option 8";
					image = "SOG_ACEAX_Compat\data\Aus1.paa";
				};
				class Option9 {
					label = "Option 9";
					image = "SOG_ACEAX_Compat\data\Aus1.paa";
				};
				class Option10 {
					label = "Option 10";
					image = "SOG_ACEAX_Compat\data\Aus1.paa";
				};

            };
        };
//BDU MACV
        class BDU_MACV_1
        {
            label = "BDU MACV 1 Uniforms";
            author = "SGTdanny";
            options[] = {"Camo"};
            class camo
            {
                values[] = {
					"Black",
					"ERDL",
					"ERDLBR",
					"Leopard",
					"Olive",
					"OliveFld",
					"Spray",
					"TigerGrn",
					"Tiger"
				};
				class Black {
					label = "Black";
					image = "SOG_ACEAX_Compat\data\Black.paa";
				};
				class ERDL {
					label = "ERDL";
					image = "SOG_ACEAX_Compat\data\ERDL.paa";
				};
				class ERDLBR {
					label = "ERDL Brown";
					image = "SOG_ACEAX_Compat\data\ERDLBR.paa";
				};
				class Leopard {
					label = "Leopard";
					image = "SOG_ACEAX_Compat\data\Leopard.paa";
				};
				class Olive {
					label = "Olive";
					image = "SOG_ACEAX_Compat\data\Olive.paa";
				};
				class OliveFld {
					label = "Olive Field";
					image = "SOG_ACEAX_Compat\data\OliveFld.paa";
				};
				class Spray {
					label = "Spray";
					image = "SOG_ACEAX_Compat\data\Spray.paa";
				};
				class TigerGrn {
					label = "Tiger Green";
					image = "SOG_ACEAX_Compat\data\TigerGrn.paa";
				};
				class Tiger {
					label = "Tiger";
					image = "SOG_ACEAX_Compat\data\Tiger.paa";
				};
            };
        };
		class BDU_MACV_2
        {
            label = "BDU MACV 2";
            author = "SGTdanny";
            options[] = {"Camo"};
            class camo
            {
                values[] = {
					"ERDL",
					"ERDLBR",
					"Leopard",
					"Olive",
					"OliveFld",
					"TigerGrn",
					"Tiger"
				};
				class ERDL {
					label = "ERDL";
					image = "SOG_ACEAX_Compat\data\ERDL.paa";
				};
				class ERDLBR {
					label = "ERDL Brown";
					image = "SOG_ACEAX_Compat\data\ERDLBR.paa";
				};
				class Leopard {
					label = "Leopard";
					image = "SOG_ACEAX_Compat\data\Leopard.paa";
				};
				class Olive {
					label = "Olive";
					image = "SOG_ACEAX_Compat\data\Olive.paa";
				};
				class OliveFld {
					label = "Olive Field";
					image = "SOG_ACEAX_Compat\data\OliveFld.paa";
				};
				class TigerGrn {
					label = "Tiger Green";
					image = "SOG_ACEAX_Compat\data\TigerGrn.paa";
				};
				class Tiger {
					label = "Tiger";
					image = "SOG_ACEAX_Compat\data\Tiger.paa";
				};
            };
        };
        class BDU_MACV_3
        {
            label = "BDU MACV 3";
            author = "SGTdanny";
            options[] = {"Camo"};
            class camo
            {
                values[] = {
					"ERDL",
					"ERDLBR",
					"Leopard",
					"Olive",
					"OliveFld",
					"TigerGrn",
					"Tiger"
				};
				class ERDL {
					label = "ERDL";
					image = "SOG_ACEAX_Compat\data\ERDL.paa";
				};
				class ERDLBR {
					label = "ERDL Brown";
					image = "SOG_ACEAX_Compat\data\ERDLBR.paa";
				};
				class Leopard {
					label = "Leopard";
					image = "SOG_ACEAX_Compat\data\Leopard.paa";
				};
				class Olive {
					label = "Olive";
					image = "SOG_ACEAX_Compat\data\Olive.paa";
				};
				class OliveFld {
					label = "Olive Field";
					image = "SOG_ACEAX_Compat\data\OliveFld.paa";
				};
				class TigerGrn {
					label = "Tiger Green";
					image = "SOG_ACEAX_Compat\data\TigerGrn.paa";
				};
				class Tiger {
					label = "Tiger";
					image = "SOG_ACEAX_Compat\data\Tiger.paa";
				};
            };
        };
        class BDU_MACV_4
        {
            label = "BDU MACV 4";
            author = "SGTdanny";
            options[] = {"Camo"};
            class camo
            {
                values[] = {
					"ERDL",
					"ERDLBS",
					"ERDLBR",
					"Leopard",
					"Olive",
					"OliveFld",
					"TigerGrn",
					"Tiger",
					"TigerBS"
				};
				class ERDL {
					label = "ERDL";
					image = "SOG_ACEAX_Compat\data\ERDL.paa";
				};
				class ERDLBS {
					label = "ERDL Base";
					image = "SOG_ACEAX_Compat\data\ERDLBR.paa";
				};
				class ERDLBR {
					label = "ERDL Brown";
					image = "SOG_ACEAX_Compat\data\ERDLBR.paa";
				};
				class Leopard {
					label = "Leopard";
					image = "SOG_ACEAX_Compat\data\Leopard.paa";
				};
				class Olive {
					label = "Olive";
					image = "SOG_ACEAX_Compat\data\Olive.paa";
				};
				class OliveFld {
					label = "Olive Field";
					image = "SOG_ACEAX_Compat\data\OliveFld.paa";
				};
				class TigerGrn {
					label = "Tiger Green";
					image = "SOG_ACEAX_Compat\data\TigerGrn.paa";
				};
				class Tiger {
					label = "Tiger";
					image = "SOG_ACEAX_Compat\data\Tiger.paa";
				};
				class TigerBS {
					label = "Tiger Base";
					image = "SOG_ACEAX_Compat\data\ERDLBR.paa";
				};
            };
        };
        class BDU_MACV_5
        {
            label = "BDU MACV 5";
            author = "SGTdanny";
            options[] = {"Camo"};
            class camo
            {
                values[] = {
					"ERDL",
					"ERDLBR",
					"Leopard",
					"Olive",
					"OliveFld",
					"TigerGrn",
					"Tiger"
				};
				class ERDL {
					label = "ERDL";
					image = "SOG_ACEAX_Compat\data\ERDL.paa";
				};
				class ERDLBR {
					label = "ERDL Brown";
					image = "SOG_ACEAX_Compat\data\ERDLBR.paa";
				};
				class Leopard {
					label = "Leopard";
					image = "SOG_ACEAX_Compat\data\Leopard.paa";
				};
				class Olive {
					label = "Olive";
					image = "SOG_ACEAX_Compat\data\Olive.paa";
				};
				class OliveFld {
					label = "Olive Field";
					image = "SOG_ACEAX_Compat\data\OliveFld.paa";
				};
				class TigerGrn {
					label = "Tiger Green";
					image = "SOG_ACEAX_Compat\data\TigerGrn.paa";
				};
				class Tiger {
					label = "Tiger";
					image = "SOG_ACEAX_Compat\data\Tiger.paa";
				};
            };
        };
        class BDU_MACV_6
        {
            label = "BDU MACV 6";
            author = "SGTdanny";
            options[] = {"Camo"};
            class camo
            {
                values[] = {
					"ERDL",
					"ERDLBR",
					"Leopard",
					"Olive",
					"OliveFld",
					"TigerGrn",
					"Tiger"
				};
				class ERDL {
					label = "ERDL";
					image = "SOG_ACEAX_Compat\data\ERDL.paa";
				};
				class ERDLBR {
					label = "ERDL Brown";
					image = "SOG_ACEAX_Compat\data\ERDLBR.paa";
				};
				class Leopard {
					label = "Leopard";
					image = "SOG_ACEAX_Compat\data\Leopard.paa";
				};
				class Olive {
					label = "Olive";
					image = "SOG_ACEAX_Compat\data\Olive.paa";
				};
				class OliveFld {
					label = "Olive Field";
					image = "SOG_ACEAX_Compat\data\OliveFld.paa";
				};
				class TigerGrn {
					label = "Tiger Green";
					image = "SOG_ACEAX_Compat\data\TigerGrn.paa";
				};
				class Tiger {
					label = "Tiger";
					image = "SOG_ACEAX_Compat\data\Tiger.paa";
				};
            };
        };
//BDU_NZ
        class BDU_NZ
        {
        	label = "BUD NZ Uniforms";
        	author = "SGTdanny";
        	options[] = {"Option"};
        	class option
        	{
        		values[] = {
        			"Option1",
        			"Option2",
        			"Option3",
        			"Option4",
        			"Option5",
        			"Option6"
        		};
        		class Option1 {
        			label = "Option 1";
        			image = "SOG_ACEAX_Compat\data\NZ.paa";
        		};
        		class Option2 {
        			label = "Option 2";
        			image = "SOG_ACEAX_Compat\data\NZ.paa";
        		};
        		class Option3 {
        			label = "Option 3";
        			image = "SOG_ACEAX_Compat\data\NZ.paa";
        		};
        		class Option4 {
        			label = "Option 4";
        			image = "SOG_ACEAX_Compat\data\NZ.paa";
        		};
        		class Option5 {
        			label = "Option 5";
        			image = "SOG_ACEAX_Compat\data\NZ.paa";
        		};
        		class Option6 {
        			label = "Option 6";
        			image = "SOG_ACEAX_Compat\data\NZ.paa";
        		};
        	};
        };
//BDU_RLA
        class BDU_RLA
        {
        	label = "BUD RLA Uniforms";
        	author = "SGTdanny";
        	options[] = {"Option"};
        	class option
        	{
        		values[] = {
        			"Option1",
        			"Option2",
        			"Option3",
        			"Option4",
        			"Option5",
        			"Option6"
        		};
        		class Option1 {
        			label = "Option 1";
        			image = "SOG_ACEAX_Compat\data\RLA.paa";
        		};
        		class Option2 {
        			label = "Option 2";
        			image = "SOG_ACEAX_Compat\data\RLA.paa";
        		};
        		class Option3 {
        			label = "Option 3";
        			image = "SOG_ACEAX_Compat\data\RLA.paa";
        		};
        		class Option4 {
        			label = "Option 4";
        			image = "SOG_ACEAX_Compat\data\RLA.paa";
        		};
        		class Option5 {
        			label = "Option 5";
        			image = "SOG_ACEAX_Compat\data\RLA.paa";
        		};
        		class Option6 {
        			label = "Option 6";
        			image = "SOG_ACEAX_Compat\data\RLA.paa";
        		};
        	};
        };
//BDU_ROK
        class BDU_ROK
        {
        	label = "BDU ROK Uniforms";
        	author = "SGTdanny";
        	options[] = {"Option"};
        	class option
        	{
        		values[] = {
        			"Option1",
        			"Option2",
        			"Option3",
        			"Option4",
        			"Option5",
        			"Option6"
        		};
        		class Option1 {
        			label = "Option 1";
        			image = "SOG_ACEAX_Compat\data\ROK.paa";
        		};
        		class Option2 {
        			label = "Option 2";
        			image = "SOG_ACEAX_Compat\data\ROK.paa";
        		};
        		class Option3 {
        			label = "Option 3";
        			image = "SOG_ACEAX_Compat\data\ROK.paa";
        		};
        		class Option4 {
        			label = "Option 4";
        			image = "SOG_ACEAX_Compat\data\ROK.paa";
        		};
        		class Option5 {
        			label = "Option 5";
        			image = "SOG_ACEAX_Compat\data\ROK.paa";
        		};
        		class Option6 {
        			label = "Option 6";
        			image = "SOG_ACEAX_Compat\data\ROK.paa";
        		};
        	};
        };
//BDU_SAS
        class BDU_SAS
        {
        	label = "BDU SAS Uniforms";
        	author = "SGTdanny";
        	options[] = {"Option"};
        	class option
        	{
        		values[] = {
        			"Option1",
        			"Option2",
        			"Option3"
        		};
        		class Option1 {
        			label = "Option 1";
        			image = "SOG_ACEAX_Compat\data\ERDL.paa";
        		};
        		class Option2 {
        			label = "Option 2";
        			image = "SOG_ACEAX_Compat\data\ERDL.paa";
        		};
        		class Option3 {
        			label = "Option 3";
        			image = "SOG_ACEAX_Compat\data\ERDL.paa";
        		};
        	};
        };
//BDU_SOG1
        class BDU_SOG1
        {
        	label = "BDU SOG 1 Uniforms";
        	author = "SGTdanny";
        	options[] = {"Camo","Pants"};
        	class camo
        	{
        		values[] = {
        			"Black",
        			"Olive",
        			"Spray",
        			"Tiger"
        		};
        		class Black {
        			label = "Black";
        			image = "SOG_ACEAX_Compat\data\Black.paa";
        		};
        		class Olive {
        			label = "Olive";
        			image = "SOG_ACEAX_Compat\data\OliveFld.paa";
        		};
        		class Spray {
        			label = "Spray";
        			image = "SOG_ACEAX_Compat\data\Spray.paa";
        		};
        		class Tiger {
        			label = "Tiger";
        			image = "SOG_ACEAX_Compat\data\Tiger.paa";
        		};
        	};
        	class pants
        	{
        		values[] = {
        			"Normal",
        			"Black"
        		};
        		class Normal {
        			label = "Normal";
        		};
        		class Black {
        			label = "Black";
        			image = "SOG_ACEAX_Compat\data\Black.paa";
        		};
        	};
        };
//BDU_SOG2
        class BDU_SOG2
        {
        	label = "BDU SOG 2 Uniforms";
        	author = "SGTdanny";
        	options[] = {"Camo","Pants"};
        	class camo
        	{
        		values[] = {
        			"Black",
        			"Olive",
        			"Spray",
        			"Tiger"
        		};
        		class Black {
        			label = "Black";
        			image = "SOG_ACEAX_Compat\data\Black.paa";
        		};
        		class Olive {
        			label = "Olive";
        			image = "SOG_ACEAX_Compat\data\OliveFld.paa";
        		};
        		class Spray {
        			label = "Spray";
        			image = "SOG_ACEAX_Compat\data\Spray.paa";
        		};
        		class Tiger {
        			label = "Tiger";
        			image = "SOG_ACEAX_Compat\data\Tiger.paa";
        		};
        	};
        	class pants
        	{
        		values[] = {
        			"Normal",
        			"Black"
        		};
        		class Normal {
        			label = "Normal";
        		};
        		class Black {
        			label = "Black";
        			image = "SOG_ACEAX_Compat\data\Black.paa";
        		};
        	};
        };
//NVA_65
        class NVA_65
        {
        	label = "NVA 65 Uniforms";
        	author = "SGTdanny";
        	options[] = {"Option","Dirty"};
        	class option
        	{
        		values[] = {
        			"Option1",
        			"Option2",
        			"Option3",
        			"Option4",
        			"Option5",
        			"Option6"
        		};
        		class Option1 {
        			label = "Option 1";
        			image = "SOG_ACEAX_Compat\data\NVA65_1.paa";
        		};
        		class Option2 {
        			label = "Option 2";
        			image = "SOG_ACEAX_Compat\data\NVA65_1.paa";
        		};
        		class Option3 {
        			label = "Option 3";
        			image = "SOG_ACEAX_Compat\data\NVA65_1.paa";
        		};
        		class Option4 {
        			label = "Option 4";
        			image = "SOG_ACEAX_Compat\data\NVA65_1.paa";
        		};
        		class Option5 {
        			label = "Option 5";
        			image = "SOG_ACEAX_Compat\data\NVA65_1.paa";
        		};
        		class Option6 {
        			label = "Option 6";
        			image = "SOG_ACEAX_Compat\data\NVA65_1.paa";
        		};
        	};
        	class dirty
        	{
        		values[] = {
        			"Normal",
        			"Field"
        		};
        		class Normal {
        			label = "Normal";
        			image = "SOG_ACEAX_Compat\data\NVA65_1.paa";
        		};
        		class Field {
        			label = "Field";
        			image = "SOG_ACEAX_Compat\data\NVA65_2.paa";
        		};
        	};
        };
//NVA_DAC_CONG
        class NVA_Dac_Cong
        {
        	label = "Dac Cong Uniforms";
        	author = "SGTdanny";
        	options[] = {"Camo","Shirt"};
        	class camo
        	{
        		values[] = {
        			"Black",
        			"Blue",
        			"Green",
        			"Tan"
        		};
        		class Black {
        			label = "Black";
        			image = "SOG_ACEAX_Compat\data\DacCongBlack.paa";
        		};
        		class Blue {
        			label = "Blue";
        			image = "SOG_ACEAX_Compat\data\DacCongBlue.paa";
        		};
        		class Green {
        			label = "Green";
        			image = "SOG_ACEAX_Compat\data\DacCongGreen.paa";
        		};
        		class Tan {
        			label = "Tan";
        			image = "SOG_ACEAX_Compat\data\DacCongTan.paa";
        		};
        	};
        	class shirt
        	{
        		values[] = {
        			"Option1",
        			"Option2"
        		};
        		class Option1 {
        			label = "Option 1";
        		};
        		class Option2 {
        			label = "Option 2";
        		};
        	};
        };
//NVA
        class NVA
        {
        	label = "NVA Uniforms";
        	author = "SGTdanny";
        	options[] = {"Option","State","Sleeves"};
        	class option
        	{
        		values[] = {
        			"Option1",
        			"Option2",
        			"Option3",
        			"Option4",
        			"Option5",
        			"Option6"
        		};
        		class Option1 {
        			label = "Belt 1";
        			image = "SOG_ACEAX_Compat\data\NVAnorm.paa";
        		};
        		class Option2 {
        			label = "Belt 2";
        			image = "SOG_ACEAX_Compat\data\NVAnorm.paa";
        		};
        		class Option3 {
        			label = "Untucked 1";
        			image = "SOG_ACEAX_Compat\data\NVAnorm.paa";
        		};
        		class Option4 {
        			label = "Untucked 2";
        			image = "SOG_ACEAX_Compat\data\NVAnorm.paa";
        		};
        		class Option5 {
        			label = "Sandals 1";
        			image = "SOG_ACEAX_Compat\data\NVAnorm.paa";
        		};
        		class Option6 {
        			label = "Sandals 2";
        			image = "SOG_ACEAX_Compat\data\NVAnorm.paa";
        		};
        	};
        	class state
        	{
        		values[] = {
        			"Normal",
        			"Field"
        		};
        		class Normal {
        			label = "Normal";
        			image = "SOG_ACEAX_Compat\data\NVAnorm.paa";
        		};
        		class Field {
        			label = "Field"
        			image = "SOG_ACEAX_Compat\data\NVAfield.paa";
        		};
        	};
        	class sleeves
            {
                values[] = 
                {
                    "Full",
                    "Rolled_High"
                };
                class Full {
                    label = "Full";
                    changeingame = 1;
                };
                class Rolled_High {
                    label = "Rolled High";
                    actionLabel="Roll sleeves High";
                    icon="\z\aceax\addons\gearinfo\data\ui\sleeves_quarter.paa";
                    changeingame = 1;
                };
            };
        };
//PL_BDU
        class PL_BDU
        {
        	label = "PL Uniforms";
        	author = "SGTdanny";
        	options[] = {"Option","Tone","Field","Sleeves"};
        	class Option
        	{
        		values[] = 
        		{
        			"Option1",
        			"Option2"
        		};
        		class Option1 
        		{
        			label = "Uniform 1";
        		};
        		class Option2 
        		{
        			label = "Uniform 2";
        		};
        	};
        	class Tone
        	{
        		values[] = 
        		{
        			"light",
        			"dark"
        		};
        		class light
        		{
        			label = "Light";
        			image = "SOG_ACEAX_Compat\data\PLLight.paa";
        		};
        		class dark
        		{
        			label = "Dark";
        			image = "SOG_ACEAX_Compat\data\PLDark.paa";
        		};
        	};
        	class Field
        	{
        		values[] = 
        		{
        			"Normal",
        			"Field"
        		};
        		class Normal
        		{
        			label = "Normal";
        		};
        		class Field
        		{
        			label = "Field";
        		};
        	};
        	class Sleeves
        	{
        		values[] =
        		{
        			"Full",
        			"Rolled_High"
        		};
        		class Full
        		{
        			label = "Full";
                    changeingame = 1;
                };
                class Rolled_High {
                    label = "Rolled High";
                    actionLabel="Roll sleeves High";
                    icon="\z\aceax\addons\gearinfo\data\ui\sleeves_quarter.paa";
                    changeingame = 1;
                };
        	};
        };
//SEAL_BDU
        class SEAL_BDU
        {
        	label = "SEAL Uniforms";
        	author = "SGTdanny";
        	options[] = {"Uniforms","Camo","Sleeves"};
        	class Uniforms
        	{
        		values[] = 
        		{
        			"Option1",
        			"Option2",
        			"Option3"
        		};
                alwaysSelectable = 1;
        		class Option1
        		{
        			label = "SEAL 1";
        		};
        		class Option2
        		{
        			label = "SEAL 2";
        		};
        		class Option3
        		{
        			label = "T Shirt 1"
        		};
        	};
        	class Camo
        	{
        		values[] = 
        		{
        			"ERDL",
        			"Olive",
        			"OliveDirty",
        			"Tiger",
        			"TigerGreen",
        			"Blue"
        		};
				class ERDL {
					label = "ERDL";
					image = "SOG_ACEAX_Compat\data\ERDL.paa";
				};
				class Olive {
					label = "Olive";
					image = "SOG_ACEAX_Compat\data\Olive.paa";
				};
				class OliveDirty {
					label = "Olive Dirty";
					image = "SOG_ACEAX_Compat\data\OliveFld.paa";
				};
				class Tiger {
					label = "Tiger";
					image = "SOG_ACEAX_Compat\data\Tiger.paa";
				};
				class TigerGreen {
					label = "Tiger Green";
					image = "SOG_ACEAX_Compat\data\TigerGrn.paa";
				};
				class Blue {
					label = "Blue";
					image = "SOG_ACEAX_Compat\data\SEALblue.paa"
				};
        	};
        	class Sleeves
            {
                values[] = 
                {
                    "Full",
                    "Rolled_High",
                    "Rolled_Low"
                };
                class Full {
                    label = "Full"
                    changeingame = 1;
                };
                class Rolled_High {
                    label = "Rolled High"
                    actionLabel="Roll sleeves High";
                    icon="\z\aceax\addons\gearinfo\data\ui\sleeves_quarter.paa";
                    changeingame = 1;
                };
                class Rolled_Low {
                    label = "Rolled Low"
                    actionLabel="Roll sleeves Low";
                    icon="\z\aceax\addons\gearinfo\data\ui\sleeves_half.paa";
                    changeingame = 1;
                };
            };
        };
//SEAL_UDT
        class SEAL_UDT
        {
        	label = "SEAL UDT";
        	author = "SGTdanny";
        	options[] = {"Camo","Shorts","Sleeves"};
        	class Camo
        	{
        		values[] = 
        		{
        			"Option1",
        			"Option2",
        			"Option3"
        		};
        		alwaysSelectable = 1;
        		class Option1
        		{
        			label = "Blue";
        			image = "SOG_ACEAX_Compat\data\SEALblue.paa";
        		};
        		class Option2
        		{
        			label = "Yellow";
        			image = "SOG_ACEAX_Compat\data\SEALyellow.paa";
        		};
        		class Option3
        		{
        			label = "Beaver Wetsuit";
        			image = "SOG_ACEAX_Compat\data\SEALbeaver.paa";
        		};
        	};
        	class Shorts
        	{
        		values[] = 
        		{
        			"Khaki",
        			"Tiger"
        		};
        		alwaysSelectable = 1;
        		class Khaki
        		{
        			label = "Khaki";
        			image = "SOG_ACEAX_Compat\data\Khaki.paa";
        		};
        		class Tiger
        		{
        			label = "Tiger";
        			image = "SOG_ACEAX_Compat\data\Tiger.paa";
        		};
        	};
        	class Sleeves
            {
                values[] = 
                {
                    "Full",
                    "Rolled_High",
                    "Rolled_Low"
                };
                class Full {
                    label = "Full"
                    changeingame = 1;
                };
                class Rolled_High {
                    label = "Rolled High"
                    actionLabel="Roll sleeves High";
                    icon="\z\aceax\addons\gearinfo\data\ui\sleeves_quarter.paa";
                    changeingame = 1;
                };
                class Rolled_Low {
                    label = "Rolled Low"
                    actionLabel="Roll sleeves Low";
                    icon="\z\aceax\addons\gearinfo\data\ui\sleeves_half.paa";
                    changeingame = 1;
                };
            };
        };
    };
};
class XtdGearInfos
{
    class CfgWeapons 
    {
//BDU_ARVN
    	class vn_b_uniform_macv_01_17
        {
            model = "BDU_AVRN";
            option = "Option1";
        };
        class vn_b_uniform_macv_02_17
        {
            model = "BDU_AVRN";
            option = "Option2";
        };
        class vn_b_uniform_macv_03_17
        {
            model = "BDU_AVRN";
            option = "Option3";
        };
        class vn_b_uniform_macv_04_17
        {
            model = "BDU_AVRN";
            option = "Option4";
        };
        class vn_b_uniform_macv_05_17
        {
            model = "BDU_AVRN";
            option = "Option5";
        };
        class vn_b_uniform_macv_06_17
        {
            model = "BDU_AVRN";
            option = "Option6";
        };
//BDU_AUS
    	class vn_b_uniform_aus_01_01
        {
            model = "BDU_AUS";
            option = "Option1";
        };
        class vn_b_uniform_aus_02_01
        {
            model = "BDU_AUS";
            option = "Option2";
        };
        class vn_b_uniform_aus_03_01
        {
            model = "BDU_AUS";
            option = "Option3";
        };
        class vn_b_uniform_aus_04_01
        {
            model = "BDU_AUS";
            option = "Option4";
        };
        class vn_b_uniform_aus_05_01
        {
            model = "BDU_AUS";
            option = "Option5";
        };
        class vn_b_uniform_aus_06_01
        {
            model = "BDU_AUS";
            option = "Option6";
        };
        class vn_b_uniform_aus_07_01
        {
            model = "BDU_AUS";
            option = "Option7";
        };
        class vn_b_uniform_aus_08_01
        {
            model = "BDU_AUS";
            option = "Option8";
        };
        class vn_b_uniform_aus_09_01
        {
            model = "BDU_AUS";
            option = "Option9";
        };
        class vn_b_uniform_aus_10_01
        {
            model = "BDU_AUS";
            option = "Option10";
        };
//BDU_MACV_1
        class vn_b_uniform_macv_01_03
        {
            model = "BDU_MACV_1";
            camo = "Black";
        };
		class vn_b_uniform_macv_01_15
        {
            model = "BDU_MACV_1";
            camo = "ERDL";
        };
		class vn_b_uniform_macv_01_06
        {
            model = "BDU_MACV_1";
            camo = "ERDLBR";
        };
		class vn_b_uniform_macv_01_08
        {
            model = "BDU_MACV_1";
            camo = "Leopard";
        };
		class vn_b_uniform_macv_01_07
        {
            model = "BDU_MACV_1";
            camo = "Olive";
        };
		class vn_b_uniform_macv_01_01
        {
            model = "BDU_MACV_1";
            camo = "OliveFld";
        };
		class vn_b_uniform_macv_01_04
        {
            model = "BDU_MACV_1";
            camo = "Spray";
        };
		class vn_b_uniform_macv_01_05
        {
            model = "BDU_MACV_1";
            camo = "TigerGrn";
        };
		class vn_b_uniform_macv_01_02
        {
            model = "BDU_MACV_1";
            camo = "Tiger";
        };
//BDU_MACV_2
		class vn_b_uniform_macv_02_15
        {
            model = "BDU_MACV_2";
            camo = "ERDL";
        };
		class vn_b_uniform_macv_02_06
        {
            model = "BDU_MACV_2";
            camo = "ERDLBR";
        };
		class vn_b_uniform_macv_02_08
        {
            model = "BDU_MACV_2";
            camo = "Leopard";
        };
		class vn_b_uniform_macv_02_07
        {
            model = "BDU_MACV_2";
            camo = "Olive";
        };
		class vn_b_uniform_macv_02_01
        {
            model = "BDU_MACV_2";
            camo = "OliveFld";
        };
		class vn_b_uniform_macv_02_05
        {
            model = "BDU_MACV_2";
            camo = "TigerGrn";
        };
		class vn_b_uniform_macv_02_02
        {
            model = "BDU_MACV_2";
            camo = "Tiger";
        };
//BDU_MACV_3
		class vn_b_uniform_macv_03_15
        {
            model = "BDU_MACV_3";
            camo = "ERDL";
        };
		class vn_b_uniform_macv_03_06
        {
            model = "BDU_MACV_3";
            camo = "ERDLBR";
        };
		class vn_b_uniform_macv_03_08
        {
            model = "BDU_MACV_3";
            camo = "Leopard";
        };
		class vn_b_uniform_macv_03_07
        {
            model = "BDU_MACV_3";
            camo = "Olive";
        };
		class vn_b_uniform_macv_03_01
        {
            model = "BDU_MACV_3";
            camo = "OliveFld";
        };
		class vn_b_uniform_macv_03_05
        {
            model = "BDU_MACV_3";
            camo = "TigerGrn";
        };
		class vn_b_uniform_macv_03_02
        {
            model = "BDU_MACV_3";
            camo = "Tiger";
        };
//BDU_MACV_4
		class vn_b_uniform_macv_04_15
        {
            model = "BDU_MACV_4";
            camo = "ERDL";
        };
        class vn_b_uniform_macv_04_21
        {
            model = "BDU_MACV_4";
            camo = "ERDLBS";
        };
		class vn_b_uniform_macv_04_06
        {
            model = "BDU_MACV_4";
            camo = "ERDLBR";
        };
		class vn_b_uniform_macv_04_08
        {
            model = "BDU_MACV_4";
            camo = "Leopard";
        };
		class vn_b_uniform_macv_04_07
        {
            model = "BDU_MACV_4";
            camo = "Olive";
        };
		class vn_b_uniform_macv_04_01
        {
            model = "BDU_MACV_4";
            camo = "OliveFld";
        };
		class vn_b_uniform_macv_04_05
        {
            model = "BDU_MACV_4";
            camo = "TigerGrn";
        };
		class vn_b_uniform_macv_04_02
        {
            model = "BDU_MACV_4";
            camo = "Tiger";
        };
        class vn_b_uniform_macv_04_20
        {
            model = "BDU_MACV_4";
            camo = "TigerBS";
        };
//BDU_MACV_5
		class vn_b_uniform_macv_05_15
        {
            model = "BDU_MACV_5";
            camo = "ERDL";
        };
		class vn_b_uniform_macv_05_06
        {
            model = "BDU_MACV_5";
            camo = "ERDLBR";
        };
		class vn_b_uniform_macv_05_08
        {
            model = "BDU_MACV_5";
            camo = "Leopard";
        };
		class vn_b_uniform_macv_05_07
        {
            model = "BDU_MACV_5";
            camo = "Olive";
        };
		class vn_b_uniform_macv_05_01
        {
            model = "BDU_MACV_5";
            camo = "OliveFld";
        };
		class vn_b_uniform_macv_05_05
        {
            model = "BDU_MACV_5";
            camo = "TigerGrn";
        };
		class vn_b_uniform_macv_05_02
        {
            model = "BDU_MACV_5";
            camo = "Tiger";
        };
//BDU_MACV_6
		class vn_b_uniform_macv_06_15
        {
            model = "BDU_MACV_6";
            camo = "ERDL";
        };
		class vn_b_uniform_macv_06_06
        {
            model = "BDU_MACV_6";
            camo = "ERDLBR";
        };
		class vn_b_uniform_macv_06_08
        {
            model = "BDU_MACV_6";
            camo = "Leopard";
        };
		class vn_b_uniform_macv_06_07
        {
            model = "BDU_MACV_6";
            camo = "Olive";
        };
		class vn_b_uniform_macv_06_01
        {
            model = "BDU_MACV_6";
            camo = "OliveFld";
        };
		class vn_b_uniform_macv_06_05
        {
            model = "BDU_MACV_6";
            camo = "TigerGrn";
        };
		class vn_b_uniform_macv_06_02
        {
            model = "BDU_MACV_6";
            camo = "Tiger";
        };
//BDU_NZ
    	class vn_b_uniform_nz_01_01
        {
            model = "BDU_NZ";
            option = "Option1";
        };
    	class vn_b_uniform_nz_02_01
        {
            model = "BDU_NZ";
            option = "Option2";
        };
    	class vn_b_uniform_nz_03_01
        {
            model = "BDU_NZ";
            option = "Option3";
        };
    	class vn_b_uniform_nz_04_01
        {
            model = "BDU_NZ";
            option = "Option4";
        };
    	class vn_b_uniform_nz_05_01
        {
            model = "BDU_NZ";
            option = "Option5";
        };
    	class vn_b_uniform_nz_06_01
        {
            model = "BDU_NZ";
            option = "Option6";
        };
//BDU_RLA
        class vn_b_uniform_macv_01_16
        {
            model = "BDU_RLA";
            option = "Option1";
        };
    	class vn_b_uniform_macv_02_16
        {
            model = "BDU_RLA";
            option = "Option2";
        };
    	class vn_b_uniform_macv_03_16
        {
            model = "BDU_RLA";
            option = "Option3";
        };
    	class vn_b_uniform_macv_04_16
        {
            model = "BDU_RLA";
            option = "Option4";
        };
    	class vn_b_uniform_macv_05_16
        {
            model = "BDU_RLA";
            option = "Option5";
        };
    	class vn_b_uniform_macv_06_16
        {
            model = "BDU_RLA";
            option = "Option6";
        };
//BDU_ROK
        class vn_b_uniform_macv_01_18
        {
            model = "BDU_ROK";
            option = "Option1";
        };
    	class vn_b_uniform_macv_02_18
        {
            model = "BDU_ROK";
            option = "Option2";
        };
    	class vn_b_uniform_macv_03_18
        {
            model = "BDU_ROK";
            option = "Option3";
        };
    	class vn_b_uniform_macv_04_18
        {
            model = "BDU_ROK";
            option = "Option4";
        };
    	class vn_b_uniform_macv_05_18
        {
            model = "BDU_ROK";
            option = "Option5";
        };
    	class vn_b_uniform_macv_06_18
        {
            model = "BDU_ROK";
            option = "Option6";
        };
//BDU_SAS
        class vn_b_uniform_sas_01_06
        {
            model = "BDU_SAS";
            option = "Option1";
        };
    	class vn_b_uniform_sas_02_06
        {
            model = "BDU_SAS";
            option = "Option2";
        };
    	class vn_b_uniform_sas_03_06
        {
            model = "BDU_SAS";
            option = "Option3";
        };
//BDU_SOG1
        class vn_b_uniform_sog_01_03
        {
            model = "BDU_SOG1";
            camo = "Black";
            pants = "Normal";

        };
    	class vn_b_uniform_sog_01_01
        {
            model = "BDU_SOG1";
            camo = "Olive";
            pants = "Normal";
        };
    	class vn_b_uniform_sog_01_04
        {
            model = "BDU_SOG1";
            camo = "Spray";
            pants = "Normal";
        };
    	class vn_b_uniform_sog_01_06 //black pants
        {
            model = "BDU_SOG1";
            camo = "Spray";
            pants = "Black";
        };
    	class vn_b_uniform_sog_01_02
        {
            model = "BDU_SOG1";
            camo = "Tiger";
            pants = "Normal";
        };
    	class vn_b_uniform_sog_01_05 //black pants
        {
            model = "BDU_SOG1";
            camo = "Tiger";
            pants = "Black";
        };
//BDU_SOG2
        class vn_b_uniform_sog_02_03
        {
            model = "BDU_SOG2";
            camo = "Black";
            pants = "Normal";
        };
    	class vn_b_uniform_sog_02_01
        {
            model = "BDU_SOG2";
            camo = "Olive";
            pants = "Normal";
        };
    	class vn_b_uniform_sog_02_04
        {
            model = "BDU_SOG2";
            camo = "Spray";
            pants = "Normal";
        };
    	class vn_b_uniform_sog_02_06 //black pants
        {
            model = "BDU_SOG2";
            camo = "Spray";
            pants = "Black";
        };
    	class vn_b_uniform_sog_02_02
        {
            model = "BDU_SOG2";
            camo = "Tiger";
            pants = "Normal";
        };
    	class vn_b_uniform_sog_02_05 //black pants
        {
            model = "BDU_SOG2";
            camo = "Tiger";
            pants = "Black";
        };
//NVA_65
        class vn_o_uniform_nva_army_01_01
        {
        	model = "NVA_65";
        	option = "Option1";
        	dirty = "Normal";
        };
        class vn_o_uniform_nva_army_01_02 //Dirty
        {
        	model = "NVA_65";
        	option = "Option1";
        	dirty = "Field";
        };
        class vn_o_uniform_nva_army_12_01
        {
        	model = "NVA_65";
        	option = "Option2";
        	dirty = "Normal";
        };
        class vn_o_uniform_nva_army_12_02 //Dirty
        {
        	model = "NVA_65";
        	option = "Option2";
        	dirty = "Field";
        };
        class vn_o_uniform_nva_army_02_01
        {
        	model = "NVA_65";
        	option = "Option3";
        	dirty = "Normal";
        };
        class vn_o_uniform_nva_army_02_02 //Dirty
        {
        	model = "NVA_65";
        	option = "Option3";
        	dirty = "Field";
        };
        class vn_o_uniform_nva_army_03_01
        {
        	model = "NVA_65";
        	option = "Option4";
        	dirty = "Normal";
        };
        class vn_o_uniform_nva_army_03_02 //Dirty
        {
        	model = "NVA_65";
        	option = "Option4";
        	dirty = "Field";
        };
        class vn_o_uniform_nva_army_04_01
        {
        	model = "NVA_65";
        	option = "Option5";
        	dirty = "Normal";
        };
        class vn_o_uniform_nva_army_04_02 //Dirty
        {
        	model = "NVA_65";
        	option = "Option5";
        	dirty = "Field";
        };
        class vn_o_uniform_nva_army_09_01
        {
        	model = "NVA_65";
        	option = "Option6";
        	dirty = "Normal";
        };
        class vn_o_uniform_nva_army_09_02 //Dirty
        {
        	model = "NVA_65";
        	option = "Option6";
        	dirty = "Field";
        };
//NVA_Dac_Cong
        class vn_o_uniform_nva_dc_13_07
        {
        	model = "NVA_Dac_Cong";
        	camo = "Black";
        	shirt = "Option1";
        };
        class vn_o_uniform_nva_dc_13_08
        {
        	model = "NVA_Dac_Cong";
        	camo = "Blue";
        	shirt = "Option1";
        };
        class vn_o_uniform_nva_dc_13_04
        {
        	model = "NVA_Dac_Cong";
        	camo = "Green";
        	shirt = "Option1";
        };
        class vn_o_uniform_nva_dc_13_02
        {
        	model = "NVA_Dac_Cong";
        	camo = "Tan";
        	shirt = "Option1";
        };
        class vn_o_uniform_nva_dc_14_01
        {
        	model = "NVA_Dac_Cong";
        	camo = "Black";
        	shirt = "Option2";
        };
        class vn_o_uniform_nva_dc_14_04
        {
        	model = "NVA_Dac_Cong";
        	camo = "Blue";
        	shirt = "Option2";
        };
//NVA
        class vn_o_uniform_nva_army_01_03 //1
        {
        	model = "NVA";
        	option = "Option1";
        	state = "Normal";
        	sleeves = "Full";
        };
        class vn_o_uniform_nva_army_01_04 //field
        {
        	model = "NVA";
        	option = "Option1";
        	state = "Field";
        	sleeves = "Full";
        };
        class vn_o_uniform_nva_army_02_03 //2
        {
        	model = "NVA";
        	option = "Option1";
        	state = "Normal";
        	sleeves = "Rolled_High";
        };
        class vn_o_uniform_nva_army_02_04 //field
        {
        	model = "NVA";
        	option = "Option1";
        	state = "Field";
        	sleeves = "Rolled_High";
        };
        class vn_o_uniform_nva_army_03_03 //3
        {
        	model = "NVA";
        	option = "Option3";
        	state = "Normal";
        	sleeves = "Full";
        };
        class vn_o_uniform_nva_army_03_04 //field
        {
        	model = "NVA";
        	option = "Option3";
        	state = "Field";
        	sleeves = "Full";
        };
        class vn_o_uniform_nva_army_04_03 //4
        {
        	model = "NVA";
        	option = "Option3";
        	state = "Normal";
        	sleeves = "Rolled_High";
        };
        class vn_o_uniform_nva_army_04_04 //field
        {
        	model = "NVA";
        	option = "Option3";
        	state = "Field";
        	sleeves = "Rolled_High";
        };
        class vn_o_uniform_nva_army_05_03 //5
        {
        	model = "NVA";
        	option = "Option2";
        	state = "Normal";
        	sleeves = "Full";
        };
        class vn_o_uniform_nva_army_05_04 //field
        {
        	model = "NVA";
        	option = "Option2";
        	state = "Field";
        	sleeves = "Full";
        };
        class vn_o_uniform_nva_army_06_03 //6
        {
        	model = "NVA";
        	option = "Option2";
        	state = "Normal";
        	sleeves = "Rolled_High";
        };
        class vn_o_uniform_nva_army_06_04 //field
        {
        	model = "NVA";
        	option = "Option2";
        	state = "Field";
        	sleeves = "Rolled_High";
        };
        class vn_o_uniform_nva_army_07_03 //7
        {
        	model = "NVA";
        	option = "Option4";
        	state = "Normal";
        	sleeves = "Full";
        };
        class vn_o_uniform_nva_army_07_04 //field
        {
        	model = "NVA";
        	option = "Option4";
        	state = "Field";
        	sleeves = "Full";
        };
        class vn_o_uniform_nva_army_08_03 //8
        {
        	model = "NVA";
        	option = "Option4";
        	state = "Normal";
        	sleeves = "Rolled_High";
        };
        class vn_o_uniform_nva_army_08_04 //field
        {
        	model = "NVA";
        	option = "Option4";
        	state = "Field";
        	sleeves = "Rolled_High";
        };
        class vn_o_uniform_nva_army_09_03 //9
        {
        	model = "NVA";
        	option = "Option5";
        	state = "Normal";
        	sleeves = "Full";
        };
        class vn_o_uniform_nva_army_09_04 //field
        {
        	model = "NVA";
        	option = "Option5";
        	state = "Field";
        	sleeves = "Full";
        };
        class vn_o_uniform_nva_army_10_03 //10
        {
        	model = "NVA";
        	option = "Option5";
        	state = "Normal";
        	sleeves = "Rolled_High";
        };
        class vn_o_uniform_nva_army_10_04 //field
        {
        	model = "NVA";
        	option = "Option5";
        	state = "Field";
        	sleeves = "Rolled_High";
        };
        class vn_o_uniform_nva_army_11_03
        {
        	model = "NVA";
        	option = "Option6";
        	state = "Normal";
        	sleeves = "Full";
        };
        class vn_o_uniform_nva_army_11_04 //field
        {
        	model = "NVA";
        	option = "Option6";
        	state = "Field";
        	sleeves = "Full";
        };
        class vn_o_uniform_nva_army_12_03
        {
        	model = "NVA";
        	option = "Option6";
        	state = "Normal";
        	sleeves = "Rolled_High";
        };
        class vn_o_uniform_nva_army_12_04 //field
        {
        	model = "NVA";
        	option = "Option6";
        	state = "Field";
        	sleeves = "Rolled_High";
        };
//PL_BDU
        class vn_o_uniform_pl_army_01_13 // 1 Light
        {
        	model = "PL_BDU";
        	Option = "Option1";
        	Tone = "light";
        	Field = "Normal";
        	Sleeves = "Full";
        };
        class vn_o_uniform_pl_army_01_14 // 1 Light Field
        {
        	model = "PL_BDU";
        	Option = "Option1";
        	Tone = "light";
        	Field = "Field";
        	Sleeves = "Full";
        };
        class vn_o_uniform_pl_army_01_11 // 1 Dark
        {
        	model = "PL_BDU";
        	Option = "Option1";
        	Tone = "dark";
        	Field = "Normal";
        	Sleeves = "Full";
        };
        class vn_o_uniform_pl_army_01_12 // 1 Dark Field
        {
        	model = "PL_BDU";
        	Option = "Option1";
        	Tone = "dark";
        	Field = "Field";
        	Sleeves = "Full";
        };
        class vn_o_uniform_pl_army_02_13 // 2 Light
        {
        	model = "PL_BDU";
        	Option = "Option1";
        	Tone = "light";
        	Field = "Normal";
        	Sleeves = "Rolled_High";
        };
        class vn_o_uniform_pl_army_02_14 // 2 Light Field
        {
        	model = "PL_BDU";
        	Option = "Option1";
        	Tone = "light";
        	Field = "Field";
        	Sleeves = "Rolled_High";
        };
        class vn_o_uniform_pl_army_02_11 // 2 Dark
        {
        	model = "PL_BDU";
        	Option = "Option1";
        	Tone = "dark";
        	Field = "Normal";
        	Sleeves = "Rolled_High";
        };
        class vn_o_uniform_pl_army_02_12 // 2 Dark Field
        {
        	model = "PL_BDU";
        	Option = "Option1";
        	Tone = "dark";
        	Field = "Field";
        	Sleeves = "Rolled_High";
        };
        class vn_o_uniform_pl_army_03_13 // 3 Light
        {
        	model = "PL_BDU";
        	Option = "Option2";
        	Tone = "light";
        	Field = "Normal";
        	Sleeves = "Full";
        };
        class vn_o_uniform_pl_army_03_14 // 3 Light Field
        {
        	model = "PL_BDU";
        	Option = "Option2";
        	Tone = "light";
        	Field = "Field";
        	Sleeves = "Full";
        };
        class vn_o_uniform_pl_army_03_11 // 3 Dark
        {
        	model = "PL_BDU";
        	Option  = "Option2";
        	Tone = "dark";
        	Field = "Normal";
        	Sleeves = "Full";
        };
        class vn_o_uniform_pl_army_03_12 // 3 Dark Field
        {
        	model = "PL_BDU";
        	Option = "Option2";
        	Tone = "dark";
        	Field = "Field";
        	Sleeves = "Full";
        };
        class vn_o_uniform_pl_army_04_13 // 4 Light
        {
        	model = "PL_BDU";
        	Option = "Option2";
        	Tone = "light";
        	Field = "Normal";
        	Sleeves = "Rolled_High";
        };
        class vn_o_uniform_pl_army_04_14 // 4 Light Field
        {
        	model = "PL_BDU";
        	Option = "Option2";
        	Tone = "light";
        	Field = "Field";
        	Sleeves = "Rolled_High";
        };
        class vn_o_uniform_pl_army_04_11 // 4 Dark
        {
        	model = "PL_BDU";
        	Option = "Option2";
        	Tone = "dark";
        	Field = "Normal";
        	Sleeves = "Rolled_High";
        };
        class vn_o_uniform_pl_army_04_12 // 4 Dark Field
        {
        	model = "PL_BDU";
        	Option = "Option2";
        	Tone = "dark";
        	Field = "Field";
        	Sleeves = "Rolled_High";
        };
//SEAL_BDU
        class vn_b_uniform_seal_01_06
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option1";
        	Camo = "ERDL";
        	Sleeves = "Full";
        };
        class vn_b_uniform_seal_01_07
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option1";
        	Camo = "Olive";
        	Sleeves = "Full";
        };
        class vn_b_uniform_seal_01_01
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option1";
        	Camo = "OliveDirty";
        	Sleeves = "Full";
        };
        class vn_b_uniform_seal_01_02
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option1";
        	Camo = "Tiger";
        	Sleeves = "Full";
        };
        class vn_b_uniform_seal_01_05
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option1";
        	Camo = "TigerGreen";
        	Sleeves = "Full";
        };
        class vn_b_uniform_seal_02_06
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option1";
        	Camo = "ERDL";
        	Sleeves = "Rolled_High";
        };
        class vn_b_uniform_seal_02_07
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option1";
        	Camo = "Olive";
        	Sleeves = "Rolled_High";
        };
        class vn_b_uniform_seal_02_01
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option1";
        	Camo = "OliveDirty";
        	Sleeves = "Rolled_High";
        };
        class vn_b_uniform_seal_02_02
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option1";
        	Camo = "Tiger";
        	Sleeves = "Rolled_High";
        };
        class vn_b_uniform_seal_02_05
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option1";
        	Camo = "TigerGreen";
        	Sleeves = "Rolled_High";
        };
        class vn_b_uniform_seal_03_01
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option3";
        	Camo = "Blue";
        	Sleeves = "Rolled_Low";
        };
        class vn_b_uniform_seal_04_01
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option3";
        	Camo = "Blue";
        	Sleeves = "Rolled_High";
        };
        class vn_b_uniform_seal_05_06
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option2";
        	Camo = "ERDL";
        	Sleeves = "Rolled_Low";
        };
        class vn_b_uniform_seal_05_07
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option2";
        	Camo = "Olive";
        	Sleeves = "Rolled_Low";
        };
        class vn_b_uniform_seal_05_01
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option2";
        	Camo = "OliveDirty";
        	Sleeves = "Rolled_Low";
        };
        class vn_b_uniform_seal_05_02
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option2";
        	Camo = "Tiger";
        	Sleeves = "Rolled_Low";
        };
        class vn_b_uniform_seal_05_05
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option2";
        	Camo = "TigerGreen";
        	Sleeves = "Rolled_Low";
        };
        class vn_b_uniform_seal_06_06
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option2";
        	Camo = "ERDL";
        	Sleeves = "Rolled_High";
        };
        class vn_b_uniform_seal_06_07
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option2";
        	Camo = "Olive";
        	Sleeves = "Rolled_High";
        };
        class vn_b_uniform_seal_06_01
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option2";
        	Camo = "OliveDirty";
        	Sleeves = "Rolled_High";
        };
        class vn_b_uniform_seal_06_02
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option2";
        	Camo = "Tiger";
        	Sleeves = "Rolled_High";
        };
        class vn_b_uniform_seal_06_05
        {
        	model = "SEAL_BDU";
        	Uniforms = "Option2";
        	Camo = "TigerGreen";
        	Sleeves = "Rolled_High";
        };
//SEAL_UDT
        class vn_b_uniform_seal_07_01
        {
        	model = "SEAL_UDT";
        	Camo = "Option1";
        	Shorts = "Khaki";
        	Sleeves = "Rolled_Low";
        };
        class vn_b_uniform_seal_07_02
        {
        	model = "SEAL_UDT";
        	Camo = "Option1";
        	Shorts = "Tiger";
        	Sleeves = "Rolled_Low";
        };
        class vn_b_uniform_seal_07_03
        {
        	model = "SEAL_UDT";
        	Camo = "Option2";
        	Shorts = "Khaki";
        	Sleeves = "Rolled_Low";
        };
        class vn_b_uniform_seal_07_04
        {
        	model = "SEAL_UDT";
        	Camo = "Option2";
        	Shorts = "Tiger";
        	Sleeves = "Rolled_Low";
        };
        class vn_b_uniform_seal_08_01
        {
        	model = "SEAL_UDT";
        	Camo = "Option1";
        	Shorts = "Khaki";
        	Sleeves = "Rolled_High";
        };
        class vn_b_uniform_seal_08_02
        {
        	model = "SEAL_UDT";
        	Camo = "Option1";
        	Shorts = "Tiger";
        	Sleeves = "Rolled_High"
        };
        class vn_b_uniform_seal_08_03
        {
        	model = "SEAL_UDT";
        	Camo = "Option2";
        	Shorts = "Khaki";
        	Sleeves = "Rolled_High";
        };
        class vn_b_uniform_seal_08_04
        {
        	model = "SEAL_UDT";
        	Camo = "Option2";
        	Shorts = "Tiger";
        	Sleeves = "Rolled_High"
        };
        class vn_b_uniform_seal_09_01
        {
        	model = "SEAL_UDT";
        	Camo = "Option3";
        	Shorts = "Khaki";
        	Sleeves = "Full";
        };
    };
};