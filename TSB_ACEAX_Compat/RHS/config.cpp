class CfgPatches
{
	class RHS_ACEAX_Compat
	{
		name="aceax_compat_RHS";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"aceax_gearinfo"
		};
		author="Killa567";
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class RHS_G3
		{
			label="Crye G3 RHS";
			author="Killa567";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[] = 
				{
					"BLK",
					"M81",
					"Multicam",
					"AOR2",
					"OD",
					"TAN"
				};
				class BLK {
					label = "Black";
					image = "RHS_ACEAX_Compat\data\Black.paa";
				};
				class M81 {
					label = "M81";
					image = "RHS_ACEAX_Compat\data\M81.paa";
				};
				class Multicam {
					label = "Multicam";
					image = "RHS_ACEAX_Compat\data\MC.paa";
				};
				class TAN {
					label = "Tan";
					image = "RHS_ACEAX_Compat\data\Tan.paa";
				};
				class OD {
					label = "OD";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class AOR2 {
					label = "AOR2";
					image = "RHS_ACEAX_Compat\data\AOR2.paa";
				}; 
			};
		};
		class RHS_ACU
		{
			label="Army Combat Uniform RHS";
			author="Killa567";
			options[]=
			{
				"camo",
				"Patch"
			};
			class camo
			{
				values[] = 
				{
					"OCP",
					"UCP"
				};
				class OCP {
					label = "OCP";
					image = "RHS_ACEAX_Compat\data\OCP.paa";
				};
				class UCP {
					label = "UCP";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
			};
			class Patch
			{
				values[] =
				{
					"Blank",
					"AA",
					"MTN",
					"CAV",
					"ABN"
				};
				class Blank {
					label = "Blank";
				};
				class AA {
					label = "101st";
				};
				class MTN {
					label = "10th MTN";
				};
				class CAV {
					label = "1st CAV";
				};
				class ABN {
					label = "82nd ABN";
				};
			};
		};
		class RHS_M10
		{
			label="M10 RHS";
			author="Killa567";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[] = 
				{
					"TTsKOM",
					"TTsKOO",
					"TTsKOU",
					"Digi",
					"DigiD",
					"DigiS",
					"DigiTB"
				};
				class TTsKOM {
					label = "TTsKO MTN";
					image = "RHS_ACEAX_Compat\data\TTsKOMTN.paa";
				};
				class TTsKOO {
					label = "TTsKO Ox";
					image = "RHS_ACEAX_Compat\data\TTsKOOx.paa";
				};
				class TTsKOU {
					label = "TTsKO Urban";
					image = "RHS_ACEAX_Compat\data\TTsKOU.paa";
				};
				class Digi {
					label = "Digital";
					image = "RHS_ACEAX_Compat\data\Digital.paa";
				};
				class DigiD {
					label = "Digital Desert";
					image = "RHS_ACEAX_Compat\data\DigitalDeser.paa";
				};
				class DigiS {
					label = "Digital Summer";
					image = "RHS_ACEAX_Compat\data\DigitalSum.paa";
				};
				class DigiTB {
					label = "Digital Boots";
					image = "RHS_ACEAX_Compat\data\DigitalSum.paa";
				};
			};
		};
		class RHS_M93
		{
			label="M93 RHS";
			author="Killa567";
			options[]=
			{
				"camo",
				"Pants"
			};
			class camo
			{
				values[] = 
				{
					"D3C",
					"Alpenflage",
					"ALiz",
					"DPM",
					"ERDL",
					"Flecktarn",
					"OG",
					"OD",
					"Tiger",
					"Reed",
					"M81",
					"OAK",
					"OAKS"
				};
				class D3C {
					label = "Desert";
					image = "RHS_ACEAX_Compat\data\D3C.paa";
				};
				class Alpenflage {
					label = "Alpenflage";
					image = "RHS_ACEAX_Compat\data\Alpenflage.paa";
				};
				class ALiz {
					label = "Altis Lizard";
					image = "RHS_ACEAX_Compat\data\ALiz.paa";
				};
				class DPM {
					label = "DPM";
					image = "RHS_ACEAX_Compat\data\DPM.paa";
				};
				class ERDL {
					label = "ERDL";
					image = "RHS_ACEAX_Compat\data\ERDL.paa";
				};
				class Flecktarn {
					label = "Flecktarn";
					image = "RHS_ACEAX_Compat\data\Flec.paa";
				};
				class OG {
					label = "OG-107";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class OD {
					label = "Olive";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class Tiger {
					label = "Tiger";
					image = "RHS_ACEAX_Compat\data\Tiger.paa";
				};
				class Reed {
					label = "Urban Reed";
					image = "RHS_ACEAX_Compat\data\Reed.paa";
				};
				class M81 {
					label = "Woodland";
					image = "RHS_ACEAX_Compat\data\M81.paa";
				};
				class OAK {
					label = "Oakleaf";
					image = "RHS_ACEAX_Compat\data\OAK.paa";
				};
				class OAKS {
					label = "Oakleaf Summer";
					image = "RHS_ACEAX_Compat\data\OAKS.paa";
				};
			};
			class Pants
			{
				values[] =
				{
					"Normal",
					"olive",
					"ERDL"
				};
				class Normal {
					label = "Normal";
				};
				class olive {
					label = "Olive";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class ERDL {
					label = "ERDL";
					image = "RHS_ACEAX_Compat\data\ERDL.paa";
				};
			};
		};
		class RHS_Flora
		{
			label="Flora RHS";
			author="Killa567";
			options[]=
			{
				"camo",
				"Patch"
			};
			class camo
			{
				values[] = 
				{
					"Flora",
					"FloraA",
					"MTN"
				};
				class Flora {
					label = "Flora";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class FloraA {
					label = "Flora Alt";
					image = "RHS_ACEAX_Compat\data\FloraAlt.paa";
				};
				class MTN {
					label = "Mountian";
					image = "RHS_ACEAX_Compat\data\FloraMTN.paa";
				};
			};
			class Patch
			{
				values[] =
				{
					"Blank",
					"MSV",
					"RVA",
					"VDV",
					"VMF",
					"VMFS"
				};
				class Blank {
					label = "Blank";
				};
				class MSV {
					label = "MSV";
				};
				class RVA {
					label = "RVA";
				};
				class VDV {
					label = "VDV";
				};
				class VMF {
					label = "VMF";
				};
				class VMFS {
					label = "VMF Subdued";
				};
			};
		};
		class RHS_M88W
		{
			label="M88 Winter RHS";
			author="Killa567";
			options[]=
			{
				"camo",
				"Boots"
			};
			class camo
			{
				values[] = 
				{
					"M88",
					"Spetsodezhda",
					"TTsKO",
					"TTsKOMoldovan",
					"VSR1",
					"VSR2",
					"VSR3"
				};
				class M88 {
					label = "M88";
					image = "RHS_ACEAX_Compat\data\M88.paa";
				};
				class Spetsodezhda {
					label = "Spetsodezhda";
					image = "RHS_ACEAX_Compat\data\Spetsodezhda.paa";
				};
				class TTsKO {
					label = "TTsKO";
					image = "RHS_ACEAX_Compat\data\TTsKO.paa";
				};
				class TTsKOMoldovan {
					label = "Moldovan TTsKO";
					image = "RHS_ACEAX_Compat\data\TTsKOMoldovan.paa";
				};
				class VSR1 {
					label = "VSR 1";
					image = "RHS_ACEAX_Compat\data\VSR1.paa";
				};
				class VSR2 {
					label = "VSR 2";
					image = "RHS_ACEAX_Compat\data\VSR2.paa";
				};
				class VSR3 {
					label = "VSR 3";
					image = "RHS_ACEAX_Compat\data\VSR3.paa";
				};
			};
			class Boots
			{
				values[] =
				{
					"Normal",
					"Sapogi"
				};
				class Normal {
					label = "Normal";
				};
				class Sapogi {
					label = "Sapogi";
				};
			};
		};
		class RHS_M88
		{
			label="M88 RHS";
			author="Killa567";
			options[]=
			{
				"camo",
				"Boots",
				"Unit"
			};
			class camo
			{
				values[] = 
				{
					"M88",
					"Spetsodezhda",
					"TTsKO",
					"TTsKOMoldovanB",
					"VSR1",
					"VSR2",
					"VSR3",
					"Grey",
					"KLMK",
					"TTsKOMoldovanCold",
					"TTsKOmoldovanDesat",
					"TTsKOMoldovanHot",
					"TTsKOAlt",
					"M81",
					"TTsKOABN",
					"VSR",
					"TTsKOForrest",
					"TTsKOM",
					"TTsKOU"
				};
				class M88 {
					label = "M88";
					image = "RHS_ACEAX_Compat\data\M88.paa";
				};
				class Spetsodezhda {
					label = "Spetsodezhda";
					image = "RHS_ACEAX_Compat\data\Spetsodezhda.paa";
				};
				class TTsKO {
					label = "TTsKO";
					image = "RHS_ACEAX_Compat\data\TTsKO.paa";
				};
				class TTsKOMoldovanB {
					label = "TTsKO Blue";
					image = "RHS_ACEAX_Compat\data\TTsKOMoldovanB.paa";
				};
				class VSR1 {
					label = "VSR 1";
					image = "RHS_ACEAX_Compat\data\VSR1.paa";
				};
				class VSR2 {
					label = "VSR 2";
					image = "RHS_ACEAX_Compat\data\VSR2.paa";
				};
				class VSR3 {
					label = "VSR 3";
					image = "RHS_ACEAX_Compat\data\VSR3.paa";
				};
				class Grey {
					label = "Grey";
					image = "RHS_ACEAX_Compat\data\M88_Grey.paa";
				};
				class KLMK {
					label = "KLMK";
					image = "RHS_ACEAX_Compat\data\M88_KLMK.paa";
				};
				class TTsKOMoldovanCold {
					label = "TTsKO Cold";
					image = "RHS_ACEAX_Compat\data\TTsKOMoldovanCold.paa";
				};
				class TTsKOmoldovanDesat {
					label = "TTsKO Desat";
					image = "RHS_ACEAX_Compat\data\TTsKOMoldovanDesat.paa";
				};
				class TTsKOMoldovanHot {
					label = "TTsKO Hot";
					image = "RHS_ACEAX_Compat\data\TTsKOMoldovanHot.paa";
				};
				class TTsKOAlt {
					label = "TTsKO Alt";
					image = "RHS_ACEAX_Compat\data\TTsKOAlt.paa";
				};
				class M81 {
					label = "Woodland";
					image = "RHS_ACEAX_Compat\data\M81.paa";
				};
				class TTsKOABN {
					label = "TTsKO ABN";
					image = "RHS_ACEAX_Compat\data\TTsKOABN.paa";
				};
				class VSR {
					label = "VSR";
					image = "RHS_ACEAX_Compat\data\VSR.paa";
				};
				class TTsKOForrest {
					label = "TTsKO Forrest";
					image = "RHS_ACEAX_Compat\data\TTsKOForrest.paa";
				};
				class TTsKOM {
					label = "TTsKO MTN";
					image = "RHS_ACEAX_Compat\data\TTsKOMTN.paa";
				};
				class TTsKOU {
					label = "TTsKO Urban";
					image = "RHS_ACEAX_Compat\data\TTsKOU.paa";
				};
			};
			class Boots
			{
				values[] =
				{
					"Normal",
					"Sapogi"
				};
				class Normal {
					label = "Normal";
				};
				class Sapogi {
					label = "Sapogi";
				};
			};
			class Unit
			{
				values[] =
				{
					"None",
					"VDV"
				};
				class None {
					label = "None";
				};
				class VDV {
					label = "VDV";
				};
			};
		};
		class RHS_VKPO
		{
			label="VKPO RHS";
			author="Killa567";
			options[]=
			{
				"camo",
				"Gloves"
			};
			class camo
			{
				values[] = 
				{
					"EMR",
					"EMRALT"
				};
				class EMR {
					label = "EMR";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class EMRALT {
					label = "EMR Alt";
					image = "RHS_ACEAX_Compat\data\EMRALT.paa";
				};
			};
			class Gloves
			{
				values[] = 
				{
					"Yes",
					"No"
				};
			};
		};
		class RHS_EMR
		{
			label="EMR RHS";
			author="Killa567";
			options[]=
			{
				"camo",
				"Unit"
			};
			class camo
			{
				values[] = 
				{
					"EMR",
					"EMRDES"
				};
				class EMR {
					label = "EMR";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class EMRDES {
					label = "EMR Desert";
					image = "RHS_ACEAX_Compat\data\EMRDES.paa";
				};
			};
			class Unit
			{
				values[] =
				{
					"None",
					"VDV"
				};
				class None {
					label = "None";
				};
				class VDV {
					label = "VDV";
				};
			};
		};
		class RHS_6Sh122
		{
			label="6Sh122 RHS";
			author="Killa567";
			options[]=
			{
				"camo",
				"Gloves"
			};
			class camo
			{
				values[] = 
				{
					"Fall",
					"Spring"
				};
				class Fall {
					label = "Fall";
					image = "RHS_ACEAX_Compat\data\6Sh122Fall.paa";
				};
				class Spring {
					label = "Spring";
					image = "RHS_ACEAX_Compat\data\6Sh122Spring.paa";
				};
			};
			class Gloves
			{
				values[] = 
				{
					"Yes",
					"No"
				};
			};
		};
		class RHS_GorkaR
		{
			label="Gorka-R RHS";
			author="Killa567";
			options[]=
			{
				"camo",
				"Gloves"
			};
			class camo
			{
				values[] = 
				{
					"Green",
					"Yellow"
				};
				class Green {
					label = "Green";
					image = "RHS_ACEAX_Compat\data\GorkaRGreen.paa";
				};
				class Yellow {
					label = "Yellow";
					image = "RHS_ACEAX_Compat\data\GorkaRYellow.paa";
				};
			};
			class Gloves
			{
				values[] = 
				{
					"Yes",
					"No"
				};
			};
		};
		class RHS_Gorka1
		{
			label="Gorka 1 RHS";
			author="Killa567";
			options[]=
			{
				"camo"
			};
			class camo
			{
				values[] = 
				{
					"Afghanka",
					"Berezka",
					"Flecktarn"
				};
				class Afghanka {
					label = "Afghanka";
					image = "RHS_ACEAX_Compat\data\M88.paa";
				};
				class Berezka {
					label = "Berezka";
					image = "RHS_ACEAX_Compat\data\Berezka.paa";
				};
				class Flecktarn {
					label = "Flecktarn";
					image = "RHS_ACEAX_Compat\data\Flec.paa";
				};
			};
		};
		class RHS_IOTV_OCP
		{
			label="OCP IOTV RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Grenadier",
					"Medic",
					"Repair",
					"Rifleman",
					"SAW",
					"Squadleader",
					"Teamleader",
					"Slick"
				};
				class Grenadier {
					label = "Grenadier";
					image = "RHS_ACEAX_Compat\data\MC.paa";
				};
				class Medic {
					label = "Medic";
					image = "RHS_ACEAX_Compat\data\MC.paa";
				};
				class Repair {
					label = "Repair";
					image = "RHS_ACEAX_Compat\data\MC.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\MC.paa";
				};
				class SAW {
					label = "SAW";
					image = "RHS_ACEAX_Compat\data\MC.paa";
				};
				class Squadleader {
					label = "Squadleader";
					image = "RHS_ACEAX_Compat\data\MC.paa";
				};
				class Teamleader {
					label = "Teamleader";
					image = "RHS_ACEAX_Compat\data\MC.paa";
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\MC.paa";
				};
			};
		};
		class RHS_IOTV_UCP
		{
			label="UCP IOTV RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Grenadier",
					"Medic",
					"Repair",
					"Rifleman",
					"SAW",
					"Squadleader",
					"Teamleader",
					"Slick"
				};
				class Grenadier {
					label = "Grenadier";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class Medic {
					label = "Medic";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class Repair {
					label = "Repair";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class SAW {
					label = "SAW";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class Squadleader {
					label = "Squadleader";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class Teamleader {
					label = "Teamleader";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
			};
		};
		class RHS_MBAV
		{
			label="MBAV RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Grenadier",
					"Medic",
					"Light",
					"Rifleman",
					"SAW",
					"Slick"
				};
				class Grenadier {
					label = "Grenadier";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Medic {
					label = "Medic";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Light {
					label = "Light";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class SAW {
					label = "SAW";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
			};
		};
		class RHS_Plateframe
		{
			label="Plateframe RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Grenadier",
					"Medic",
					"Light",
					"Rifleman",
					"SAW",
					"Slick",
					"Marksman",
					"Teamleader"
				};
				class Grenadier {
					label = "Grenadier";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Medic {
					label = "Medic";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Light {
					label = "Light";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class SAW {
					label = "SAW";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Marksman {
					label = "Marksman";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Teamleader {
					label = "Teamleader";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
			};
		};
		class RHS_SPC
		{
			label="SPC RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Crewman",
					"Corpsman",
					"Light",
					"Rifleman",
					"SAW",
					"Slick",
					"Marksman",
					"Teamleader",
					"IAR",
					"Patchless",
					"PatchlessRadio",
					"Squadleader",
					"ScoutSniper"
				};
				class Crewman {
					label = "Crewman";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Corpsman {
					label = "Corpsman";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Light {
					label = "Light";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class SAW {
					label = "SAW";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Marksman {
					label = "Marksman";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Teamleader {
					label = "Teamleader";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class IAR {
					label = "IAR";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Patchless {
					label = "Patchless";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class PatchlessRadio {
					label = "Patchless Radio";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class Squadleader {
					label = "Squadleader";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
				class ScoutSniper {
					label = "Scout Sniper";
					image = "RHS_ACEAX_Compat\data\TAN.paa";
				};
			};
		};
		class RHS_SPCS_OCP
		{
			label="OCP SPCS RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Crewman",
					"Grenadier",
					"MachineGunner",
					"Medic",
					"Slick",
					"RiflemanAlt",
					"Rifleman",
					"SAW",
					"Sniper",
					"Squadleader",
					"TeamleaderAlt",
					"Teamleader"
				};
				class Crewman {
					label = "Crewman";
					image = "RHS_ACEAX_Compat\data\OCP.paa";
				};
				class Grenadier {
					label = "Grenadier";
					image = "RHS_ACEAX_Compat\data\OCP.paa";
				};
				class MachineGunner {
					label = "Machine Gunner";
					image = "RHS_ACEAX_Compat\data\OCP.paa";
				};
				class Medic {
					label = "Medic";
					image = "RHS_ACEAX_Compat\data\OCP.paa";
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\OCP.paa";
				};
				class RiflemanAlt {
					label = "Rifleman Alt";
					image = "RHS_ACEAX_Compat\data\OCP.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\OCP.paa";
				};
				class SAW {
					label = "SAW";
					image = "RHS_ACEAX_Compat\data\OCP.paa";
				};
				class Sniper {
					label = "Sniper";
					image = "RHS_ACEAX_Compat\data\OCP.paa";
				};
				class Squadleader {
					label = "Squadleader";
					image = "RHS_ACEAX_Compat\data\OCP.paa";
				};
				class TeamleaderAlt {
					label = "Teamleader Alt";
					image = "RHS_ACEAX_Compat\data\OCP.paa";
				};
				class Teamleader {
					label = "Teamleader";
					image = "RHS_ACEAX_Compat\data\OCP.paa";
				};
			};
		};
		class RHS_SPCS_UCP
		{
			label="UCP SPCS RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Crewman",
					"Grenadier",
					"MachineGunner",
					"Medic",
					"Slick",
					"RiflemanAlt",
					"Rifleman",
					"SAW",
					"Sniper",
					"Squadleader",
					"TeamleaderAlt",
					"Teamleader"
				};
				class Crewman {
					label = "Crewman";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class Grenadier {
					label = "Grenadier";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class MachineGunner {
					label = "Machine Gunner";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class Medic {
					label = "Medic";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class RiflemanAlt {
					label = "Rifleman Alt";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class SAW {
					label = "SAW";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class Sniper {
					label = "Sniper";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class Squadleader {
					label = "Squadleader";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class TeamleaderAlt {
					label = "Teamleader Alt";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
				class Teamleader {
					label = "Teamleader";
					image = "RHS_ACEAX_Compat\data\UCP.paa";
				};
			};
		};
		class RHS_M99T_Digi
		{
			label="Digital M-99T RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Slick",
					"Radio",
					"Rifleman",
					"RiflemanR"
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\Digital.paa";
				};
				class Radio {
					label = "Radio";
					image = "RHS_ACEAX_Compat\data\Digital.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\Digital.paa";
				};
				class RiflemanR {
					label = "Rifleman Radio";
					image = "RHS_ACEAX_Compat\data\Digital.paa";
				};
			};
		};
		class RHS_M99T_MDU02
		{
			label="MDU02 M-99T RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Slick",
					"Radio",
					"Rifleman",
					"RiflemanR"
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\MDU02.paa";
				};
				class Radio {
					label = "Radio";
					image = "RHS_ACEAX_Compat\data\MDU02.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\MDU02.paa";
				};
				class RiflemanR {
					label = "Rifleman Radio";
					image = "RHS_ACEAX_Compat\data\MDU02.paa";
				};
			};
		};
		class RHS_M99T_Woodland
		{
			label="Woodland M-99T RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Slick",
					"Radio",
					"Rifleman",
					"RiflemanR"
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\M81.paa";
				};
				class Radio {
					label = "Radio";
					image = "RHS_ACEAX_Compat\data\M81.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\M81.paa";
				};
				class RiflemanR {
					label = "Rifleman Radio";
					image = "RHS_ACEAX_Compat\data\M81.paa";
				};
			};
		};
		class RHS_M12
		{
			label="M-12 RHS";
			author="Killa567";
			options[]=
			{
				"Variant"
			};
			class Variant
			{
				values[] = 
				{
					"Digital",
					"DigitalDes",
					"M70"
				};
				class Digital {
					label = "Digital";
					image = "RHS_ACEAX_Compat\data\Digital.paa";
				};
				class DigitalDes {
					label = "Digital Desert";
					image = "RHS_ACEAX_Compat\data\DigitalDes.paa";
				};
				class M70 {
					label = "M70";
					image = "RHS_ACEAX_Compat\data\Digital.paa";
				};
			};
		};
		class RHS_M98
		{
			label="M-98 RHS";
			author="Killa567";
			options[]=
			{
				"Variant"
			};
			class Variant
			{
				values[] = 
				{
					"Digital",
					"MDU02",
					"M81",
					"M81R"
				};
				class Digital {
					label = "Digital";
					image = "RHS_ACEAX_Compat\data\Digital.paa";
				};
				class MDU02 {
					label = "MDU02";
					image = "RHS_ACEAX_Compat\data\MDU02.paa";
				};
				class M81 {
					label = "M81";
					image = "RHS_ACEAX_Compat\data\M81.paa";
				};
				class M81R {
					label = "Woodland Rifleman";
					image = "RHS_ACEAX_Compat\data\M81.paa";
				};
			};
		};
		class RHS_OTV
		{
			label="OTV RHS";
			author="Killa567";
			options[]=
			{
				"Camo"
			};
			class Camo
			{
				values[] = 
				{
					"Digital",
					"MDU02",
					"Khaki"
				};
				class Digital {
					label = "Digital";
					image = "RHS_ACEAX_Compat\data\Digital.paa";
				};
				class MDU02 {
					label = "MDU02";
					image = "RHS_ACEAX_Compat\data\MDU02.paa";
				};
				class Khaki {
					label = "Khaki";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
			};
		};
		class RHS_6B23_Khaki
		{
			label="6B23 Khaki RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Medic",
					"NCO",
					"Officer",
					"Rifleman",
					"Sniper",
					"Utility"
				};
				class Medic {
					label = "Medic";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class NCO {
					label = "NCO";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class Officer {
					label = "Officer";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class Sniper {
					label = "Sniper";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class Utility {
					label = "Utility";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
			};
		};
		class RHS_6B23_TTsKO_D
		{
			label="6B23 TTsKO Digi RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Medic",
					"NCO",
					"Officer",
					"Rifleman",
					"Sniper",
					"Utility"
				};
				class Medic {
					label = "Medic";
					image = "RHS_ACEAX_Compat\data\Digital.paa";
				};
				class NCO {
					label = "NCO";
					image = "RHS_ACEAX_Compat\data\Digital.paa";
				};
				class Officer {
					label = "Officer";
					image = "RHS_ACEAX_Compat\data\Digital.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\Digital.paa";
				};
				class Sniper {
					label = "Sniper";
					image = "RHS_ACEAX_Compat\data\Digital.paa";
				};
				class Utility {
					label = "Utility";
					image = "RHS_ACEAX_Compat\data\Digital.paa";
				};
			};
		};
		class RHS_6B23_TTsKO_F
		{
			label="6B23 TTsKO Forrest RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Rifleman",
					"Utility"
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\TTsKOForrest.paa";
				};
				class Utility {
					label = "Utility";
					image = "RHS_ACEAX_Compat\data\TTsKOForrest.paa";
				};
			};
		};
		class RHS_6B23_TTsKO_MTN
		{
			label="6B23 TTsKO MTN RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Medic",
					"NCO",
					"Officer",
					"Rifleman",
					"Sniper",
					"Utility"
				};
				class Medic {
					label = "Medic";
					image = "RHS_ACEAX_Compat\data\TTsKOMTN.paa";
				};
				class NCO {
					label = "NCO";
					image = "RHS_ACEAX_Compat\data\TTsKOMTN.paa";
				};
				class Officer {
					label = "Officer";
					image = "RHS_ACEAX_Compat\data\TTsKOMTN.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\TTsKOMTN.paa";
				};
				class Sniper {
					label = "Sniper";
					image = "RHS_ACEAX_Compat\data\TTsKOMTN.paa";
				};
				class Utility {
					label = "Utility";
					image = "RHS_ACEAX_Compat\data\TTsKOMTN.paa";
				};
			};
		};
		class RHS_Susp_Equipment
		{
			label="Suspender Equipment RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"AK",
					"Rifleman",
					"RiflemanL",
					"SKS"
				};
				class AK {
					label = "AK Chestrig";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class RiflemanL {
					label = "Rifleman Light";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class SKS {
					label = "SKS";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
			};
		};
		class RHS_Officer_Equipment
		{
			label="Officer Equipment RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"MCH",
					"Officer",
					"Pistol"
				};
				class MCH {
					label = "Map+Holster";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class Officer {
					label = "Officer";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class Pistol {
					label = "Pistol";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
			};
		};
		class RHS_Lifchik
		{
			label="Lifchik RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"VOG",
					"Officer",
					"Rig1",
					"Rig2"
				};
				class VOG {
					label = "VOG";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class Officer {
					label = "Officer";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class Rig1 {
					label = "Rig 1";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class Rig2 {
					label = "Rig 2";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
			};
		};
		class RHS_Belt_Equipment
		{
			label="Belt Equipment RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"SKS",
					"6Sh46",
					"6Sh46Alt",
					"AR",
					"Grenadier",
					"Holster",
					"Rifleman",
					"RiflemanAlt",
					"SVD"
				};
				class SKS {
					label = "SKS";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class 6Sh46 {
					label = "6Sh46";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class 6Sh46Alt {
					label = "6Sh46 Alt";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class AR {
					label = "Auto Rifleman";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class Grenadier {
					label = "Grenadier";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class Holster {
					label = "Holster";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class RiflemanAlt {
					label = "Rifleman Alt";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class SVD {
					label = "SVD";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
			};
		};
		class RHS_6Sh92_Flora
		{
			label="6Sh92 Flora RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Rifleman",
					"Radio",
					"VOG",
					"Headset",
					"VOGHeadset"
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class Radio {
					label = "Radio";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class VOG {
					label = "VOG";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class Headset {
					label = "Headset";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class VOGHeadset {
					label = "VOGHeadset";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
			};
		};
		class RHS_6Sh92_EMR
		{
			label="6Sh92 EMR RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Rifleman",
					"Radio",
					"VOG",
					"Headset",
					"VOGHeadset"
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class Radio {
					label = "Radio";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class VOG {
					label = "VOG";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class Headset {
					label = "Headset";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class VOGHeadset {
					label = "VOGHeadset";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
			};
		};
		class RHS_6Sh92_VSR
		{
			label="6Sh92 VSR RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Rifleman",
					"Radio",
					"VOG",
					"Headset",
					"VOGHeadset"
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\VSR.paa";
				};
				class Radio {
					label = "Radio";
					image = "RHS_ACEAX_Compat\data\VSR.paa";
				};
				class VOG {
					label = "VOG";
					image = "RHS_ACEAX_Compat\data\VSR.paa";
				};
				class Headset {
					label = "Headset";
					image = "RHS_ACEAX_Compat\data\VSR.paa";
				};
				class VOGHeadset {
					label = "VOGHeadset";
					image = "RHS_ACEAX_Compat\data\VSR.paa";
				};
			};
		};
		class RHS_6Sh117
		{
			label="6Sh117 RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"MG",
					"Rifleman",
					"RPK",
					"SL",
					"SLAzart",
					"SVD",
					"VAL",
					"VOG"
				};
				class MG {
					label = "Machine Gunner";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class RPK {
					label = "RPK";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class SL {
					label = "Squad Leader";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class SLAzart {
					label = "SL Azart";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class SVD {
					label = "SVD";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class VAL {
					label = "VAL";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class VOG {
					label = "VOG";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
			};
		};
		class RHS_6B5_VSR
		{
			label="6B5 VSR RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Rifleman",
					"6Sh46",
					"Medic",
					"Officer",
					"Sniper"
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\VSR1.paa";
				};
				class 6Sh46 {
					label = "6Sh46";
					image = "RHS_ACEAX_Compat\data\VSR1.paa";
				};
				class Medic {
					label = "Medic";
					image = "RHS_ACEAX_Compat\data\VSR1.paa";
				};
				class Officer {
					label = "Officer";
					image = "RHS_ACEAX_Compat\data\VSR1.paa";
				};
				class Sniper {
					label = "Sniper";
					image = "RHS_ACEAX_Compat\data\VSR1.paa";
				};
			};
		};
		class RHS_6B5_TTsKO
		{
			label="6B5 TTsKO RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Rifleman",
					"6Sh46",
					"Medic",
					"Officer",
					"Sniper"
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\TTsKO.paa";
				};
				class 6Sh46 {
					label = "6Sh46";
					image = "RHS_ACEAX_Compat\data\TTsKO.paa";
				};
				class Medic {
					label = "Medic";
					image = "RHS_ACEAX_Compat\data\TTsKO.paa";
				};
				class Officer {
					label = "Officer";
					image = "RHS_ACEAX_Compat\data\TTsKO.paa";
				};
				class Sniper {
					label = "Sniper";
					image = "RHS_ACEAX_Compat\data\TTsKO.paa";
				};
			};
		};
		class RHS_6B5_OD
		{
			label="6B5 Olive RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Rifleman",
					"6Sh46",
					"Medic",
					"Officer",
					"Sniper"
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class 6Sh46 {
					label = "6Sh46";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class Medic {
					label = "Medic";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class Officer {
					label = "Officer";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class Sniper {
					label = "Sniper";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
			};
		};
		class RHS_6B5_Berezka
		{
			label="6B5 Berezka RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Rifleman",
					"6Sh46",
					"Medic",
					"Officer",
					"Sniper"
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\Berezka.paa";
				};
				class 6Sh46 {
					label = "6Sh46";
					image = "RHS_ACEAX_Compat\data\Berezka.paa";
				};
				class Medic {
					label = "Medic";
					image = "RHS_ACEAX_Compat\data\Berezka.paa";
				};
				class Officer {
					label = "Officer";
					image = "RHS_ACEAX_Compat\data\Berezka.paa";
				};
				class Sniper {
					label = "Sniper";
					image = "RHS_ACEAX_Compat\data\Berezka.paa";
				};
			};
		};
		class RHS_6B5_Khaki
		{
			label="6B5 Khaki RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Rifleman",
					"6Sh46",
					"Medic",
					"Officer",
					"Sniper"
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class 6Sh46 {
					label = "6Sh46";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class Medic {
					label = "Medic";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class Officer {
					label = "Officer";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class Sniper {
					label = "Sniper";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
			};
		};
		class RHS_6B45
		{
			label="6B45 RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Slick",
					"Holster",
					"Light",
					"MachineGunner",
					"Officer",
					"Rifleman1",
					"Rifleman2",
					"VOG"
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class Holster {
					label = "Holster";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class Light {
					label = "Light";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class MachineGunner {
					label = "Machine Gunner";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class Officer {
					label = "Officer";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class Rifleman1 {
					label = "Rifleman 1";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class Rifleman2 {
					label = "Rifleman 2";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class VOG {
					label = "VOG";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
			};
		};
		class RHS_6B3
		{
			label="6B3 RHS";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Slick",
					"Holster",
					"R148",
					"RPK",
					"Officer",
					"Rifleman1",
					"Rifleman2",
					"Rifleman3",
					"VOG",
					"VOG2"
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class Holster {
					label = "Holster";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class R148 {
					label = "R-148";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class RPK {
					label = "RPK";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class Officer {
					label = "Officer";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class Rifleman1 {
					label = "Rifleman 1";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class Rifleman2 {
					label = "Rifleman 2";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class Rifleman3 {
					label = "Rifleman 3";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class VOG {
					label = "VOG 1";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class VOG2 {
					label = "VOG 2";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
			};
		};
		class RHS_6B23_MTN_LES
		{
			label="6B23 MTN Les";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Slick",
					"6Sh92",
					"6Sh92H",
					"6Sh92HM",
					"6Sh92R",
					"6Sh92VOG",
					"6Sh92VOGH",
					"CrewOfficer",
					"Crew",
					"Engineer",
					"Medic",
					"Rifleman",
					"Sniper",
					"Vydra3M"
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\MTN_LES.paa";
				};
				class 6Sh92 {
					label = "6Sh92";
					image = "RHS_ACEAX_Compat\data\MTN_LES.paa";
				};
				class 6Sh92H {
					label = "6Sh92 Headset";
					image = "RHS_ACEAX_Compat\data\MTN_LES.paa";
				};
				class 6Sh92HM {
					label = "6Sh92 Headset Map";
					image = "RHS_ACEAX_Compat\data\MTN_LES.paa";
				};
				class 6Sh92R {
					label = "6Sh92 Radio";
					image = "RHS_ACEAX_Compat\data\MTN_LES.paa";
				};
				class 6Sh92VOG {
					label = "6Sh92 VOG";
					image = "RHS_ACEAX_Compat\data\MTN_LES.paa";
				};
				class 6Sh92VOGH {
					label = "6Sh92 VOG Headset";
					image = "RHS_ACEAX_Compat\data\MTN_LES.paa";
				};
				class CrewOfficer {
					label = "Crew Officer";
					image = "RHS_ACEAX_Compat\data\MTN_LES.paa";
				};
				class Crew {
					label = "Crew";
					image = "RHS_ACEAX_Compat\data\MTN_LES.paa";
				};
				class Engineer {
					label = "Engineer";
					image = "RHS_ACEAX_Compat\data\MTN_LES.paa";
				};
				class Medic {
					label = "Medic";
					image = "RHS_ACEAX_Compat\data\MTN_LES.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\MTN_LES.paa";
				};
				class Sniper {
					label = "Sniper";
					image = "RHS_ACEAX_Compat\data\MTN_LES.paa";
				};
				class Vydra3M {
					label = "Vydra-3M";
					image = "RHS_ACEAX_Compat\data\MTN_LES.paa";
				};
			};
		};
		class RHS_6B23_Flora
		{
			label="6B23 Flora";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Slick",
					"6Sh116",
					"6Sh116VOG",
					"6Sh92",
					"6Sh92H",
					"6Sh92HM",
					"6Sh92R",
					"6Sh92VOG",
					"6Sh92VOGH",
					"CrewOfficer",
					"Crew",
					"Engineer",
					"Medic",
					"Rifleman",
					"Sniper",
					"Vydra3M"
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class 6Sh116 {
					label = "6Sh116";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class 6Sh116VOG {
					label = "6Sh116 VOG";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class 6Sh92 {
					label = "6Sh92";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class 6Sh92H {
					label = "6Sh92 Headset";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class 6Sh92HM {
					label = "6Sh92 Headset Map";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class 6Sh92R {
					label = "6Sh92 Radio";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class 6Sh92VOG {
					label = "6Sh92 VOG";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class 6Sh92VOGH {
					label = "6Sh92 VOG Headset";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class CrewOfficer {
					label = "Crew Officer";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class Crew {
					label = "Crew";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class Engineer {
					label = "Engineer";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class Medic {
					label = "Medic";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class Sniper {
					label = "Sniper";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class Vydra3M {
					label = "Vydra-3M";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
			};
		};
		class RHS_6B23_EMR
		{
			label="6B23 EMR";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Slick",
					"6Sh116",
					"6Sh116VOG",
					"6Sh92",
					"6Sh92SpNz",
					"6Sh92H",
					"6Sh92HSpNz",
					"6Sh92HM",
					"6Sh92R",
					"6Sh92RSpNz",
					"6Sh92VOG",
					"6Sh92VOGSpNz",
					"6Sh92VOGH",
					"6Sh92VOGHSpNz",
					"CrewOfficer",
					"Crew",
					"Engineer",
					"Medic",
					"Rifleman",
					"Sniper",
					"Vydra3M"
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh116 {
					label = "6Sh116";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh116VOG {
					label = "6Sh116 VOG";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh92 {
					label = "6Sh92";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh92SpNz {
					label = "6Sh92 SpNz";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh92H {
					label = "6Sh92 Headset";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh92HSpNz {
					label = "6Sh92 Headset SpNz";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh92HM {
					label = "6Sh92 Headset Map";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh92R {
					label = "6Sh92 Radio";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh92RSpNz {
					label = "6Sh92 Radio SpNz";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh92VOG {
					label = "6Sh92 VOG";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh92VOGSpNz {
					label = "6Sh92 VOG SpNz";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh92VOGH {
					label = "6Sh92 VOG Headset";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh92VOGHSpNz {
					label = "6Sh92 VOG Headset SpNz";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class CrewOfficer {
					label = "Crew Officer";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class Crew {
					label = "Crew";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class Engineer {
					label = "Engineer";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class Medic {
					label = "Medic";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class Rifleman {
					label = "Rifleman";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class Sniper {
					label = "Sniper";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class Vydra3M {
					label = "Vydra-3M";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
			};
		};
		class RHS_6B23_OD
		{
			label="6B23 OD";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"6Sh116",
					"6Sh116VOG"
				};
				class 6Sh116 {
					label = "6Sh116";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class 6Sh116VOG {
					label = "6Sh116 VOG";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
			};
		};
		class RHS_6B23_Mix
		{
			label="6B23 Mix";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"6Sh116",
					"6Sh116VOG"
				};
				class 6Sh116 {
					label = "6Sh116";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh116VOG {
					label = "6Sh116 VOG";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
			};
		};
		class RHS_6B2
		{
			label="6B2";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Slick",
					"6Sh46",
					"Chicom",
					"Holster",
					"Lifchik",
					"RPK",
					"Sniper"
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class 6Sh46 {
					label = "6Sh46";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class Chicom {
					label = "Chicom";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class Holster {
					label = "Holster";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class Lifchik {
					label = "Lifchik";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class RPK {
					label = "RPK";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
				class Sniper {
					label = "Sniper";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
			};
		};
		class RHS_6B13_VSR
		{
			label="6B13 VSR";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Slick",
					"6Sh92",
					"6Sh92HM",
					"6Sh92R",
					"6Sh92VOG",
					"CrewOfficer"
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\VSR.paa";
				};
				class 6Sh92 {
					label = "6Sh92";
					image = "RHS_ACEAX_Compat\data\VSR.paa";
				};
				class 6Sh92HM {
					label = "6Sh92 Headset Map";
					image = "RHS_ACEAX_Compat\data\VSR.paa";
				};
				class 6Sh92R {
					label = "6Sh92 Radio";
					image = "RHS_ACEAX_Compat\data\VSR.paa";
				};
				class 6Sh92VOG {
					label = "6Sh92 VOG";
					image = "RHS_ACEAX_Compat\data\VSR.paa";
				};
				class CrewOfficer {
					label = "Crew Officer";
					image = "RHS_ACEAX_Compat\data\VSR.paa";
				};
			};
		};
		class RHS_6B13_EMR
		{
			label="6B13 EMR";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Slick",
					"6Sh92",
					"6Sh92HM",
					"6Sh92R",
					"6Sh92VOG"
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh92 {
					label = "6Sh92";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh92HM {
					label = "6Sh92 Headset Map";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh92R {
					label = "6Sh92 Radio";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
				class 6Sh92VOG {
					label = "6Sh92 VOG";
					image = "RHS_ACEAX_Compat\data\EMR.paa";
				};
			};
		};
		class RHS_6B13_Flora
		{
			label="6B13 Flora";
			author="Killa567";
			options[]=
			{
				"Pouches"
			};
			class Pouches
			{
				values[] = 
				{
					"Slick",
					"6Sh92",
					"6Sh92HM",
					"6Sh92R",
					"6Sh92VOG",
					"CrewOfficer"
				};
				class Slick {
					label = "Slick";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class 6Sh92 {
					label = "6Sh92";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class 6Sh92HM {
					label = "6Sh92 Headset Map";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class 6Sh92R {
					label = "6Sh92 Radio";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class 6Sh92VOG {
					label = "6Sh92 VOG";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class CrewOfficer {
					label = "Crew Officer";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
			};
		};
		class RHS_6B26_Slick
		{
			label="6B26 Slick";
			author="Killa567";
			options[]=
			{
				"ESS",
				"Balaclava"
			};
			class ESS
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
			class Balaclava
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
		};
		class RHS_6B26_EMR
		{
			label="6B26 EMR";
			author="Killa567";
			options[]=
			{
				"ESS",
				"Balaclava"
			};
			class ESS
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
			class Balaclava
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
		};
		class RHS_6B26_Flora
		{
			label="6B26 Flora";
			author="Killa567";
			options[]=
			{
				"ESS",
				"Balaclava"
			};
			class ESS
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
			class Balaclava
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
		};
		class RHS_6B27_Slick
		{
			label="6B27 Slick";
			author="Killa567";
			options[]=
			{
				"ESS",
				"Balaclava"
			};
			class ESS
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
			class Balaclava
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
		};
		class RHS_6B27_EMR
		{
			label="6B27 EMR";
			author="Killa567";
			options[]=
			{
				"ESS",
				"Balaclava"
			};
			class ESS
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
			class Balaclava
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
		};
		class RHS_6B27_Flora
		{
			label="6B27 Flora";
			author="Killa567";
			options[]=
			{
				"ESS",
				"Balaclava"
			};
			class ESS
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
			class Balaclava
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
		};
		class RHS_6B27_MTN
		{
			label="6B27 MTN Les";
			author="Killa567";
			options[]=
			{
				"ESS",
				"Balaclava"
			};
			class ESS
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
			class Balaclava
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
		};
		class RHS_6B28_Slick
		{
			label="6B28 Slick";
			author="Killa567";
			options[]=
			{
				"ESS",
				"Balaclava"
			};
			class ESS
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
			class Balaclava
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
		};
		class RHS_6B28_EMR
		{
			label="6B28 EMR";
			author="Killa567";
			options[]=
			{
				"ESS",
				"Balaclava"
			};
			class ESS
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
			class Balaclava
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
		};
		class RHS_6B28_Flora
		{
			label="6B28 Flora";
			author="Killa567";
			options[]=
			{
				"ESS",
				"Balaclava"
			};
			class ESS
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
			class Balaclava
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
		};
		class RHS_6B47
		{
			label="6B47 EMR";
			author="Killa567";
			options[]=
			{
				"Version",
				"ESS",
				"Balaclava",
				"Headset"
			};
			class Version
			{
				values[] = 
				{
					"1",
					"2",
					"3",
					"4"
				};
				class 1 {
					label = "1";
				};
				class 2 {
					label = "2";
				};
				class 3 {
					label = "3";
				};
				class 4 {
					label = "4";
				};
			};
			class ESS
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
			class Balaclava
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
			class Headset
			{
				values[] = 
				{
					"No",
					"6M2",
					"6M21"
				};
				class No {
					label = "No";
				};
				class 6M2 {
					label = "6M2";
				};
				class 6M21 {
					label = "6M2-1";
				};
			};
		};
		class RHS_6B7_Slick
		{
			label="6B7 Slick";
			author="Killa567";
			options[]=
			{
				"ESS",
				"Balaclava"
			};
			class Balaclava
			{
				values[] = 
				{
					"Yes",
					"Alt",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class Alt {
					label = "Alt";
				}
				class No {
					label = "No";
				};
			};
			class ESS
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
		};
		class RHS_6B7_EMR
		{
			label="6B7 EMR";
			author="Killa567";
			options[]=
			{
				"ESS",
				"Balaclava"
			};
			class Balaclava
			{
				values[] = 
				{
					"Yes",
					"Alt",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class Alt {
					label = "Alt";
				}
				class No {
					label = "No";
				};
			};
			class ESS
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
		};
		class RHS_6B7_Flora
		{
			label="6B7 Flora";
			author="Killa567";
			options[]=
			{
				"ESS",
				"Balaclava"
			};
			class Balaclava
			{
				values[] = 
				{
					"Yes",
					"Alt",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class Alt {
					label = "Alt";
				}
				class No {
					label = "No";
				};
			};
			class ESS
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
		};
		class RHS_6B7_Olive
		{
			label="6B7 Olive";
			author="Killa567";
			options[]=
			{
				"Balaclava"
			};
			class Balaclava
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
		};
		class RHS_Altyn
		{
			label="Altyn";
			author="Killa567";
			options[]=
			{
				"Visor",
				"ESS",
				"Balaclava"
			};
			class ESS
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
			class Balaclava
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
			class Visor
			{
				values[] = 
				{
					"No",
					"Up",
					"Down"
				};
				class No {
					label = "No";
				};
				class Up {
					label = "Up";
				};
				class Down {
					label = "Down";
				};
			};
		};
		class RHS_M88Cap
		{
			label="M88 Cap";
			author="Killa567";
			options[]=
			{
				"Camo",
				"Facing"
			};
			class Camo
			{
				values[] = 
				{
					"Flora",
					"M88",
					"Grey",
					"KLMK",
					"TTsKOMoldovanB",
					"TTsKOMoldovanCold",
					"TTsKOmoldovanDesat",
					"TTsKOMoldovanHot",
					"TTsKOAlt",
					"TTsKOABN",
					"TTsKO",
					"VSR2",
					"VSR1",
					"M81",
					"ML",
					"Khaki",
					"VSR",
					"Digi",
					"TTsKOForrest",
					"TTsKOM",
					"TTsKOU"
				};
				class Flora {
					label = "Flora";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
				class M88 {
					label = "M88";
					image = "RHS_ACEAX_Compat\data\M88.paa";
				};
				class Grey {
					label = "Grey";
					image = "RHS_ACEAX_Compat\data\M88_Grey.paa";
				};
				class KLMK {
					label = "KLMK";
					image = "RHS_ACEAX_Compat\data\M88_KLMK.paa";
				};
				class TTsKOMoldovanB {
					label = "TTsKO Blue";
					image = "RHS_ACEAX_Compat\data\TTsKOMoldovanB.paa";
				};
				class TTsKOMoldovanCold {
					label = "TTsKO Cold";
					image = "RHS_ACEAX_Compat\data\TTsKOMoldovanCold.paa";
				};
				class TTsKOmoldovanDesat {
					label = "TTsKO Desat";
					image = "RHS_ACEAX_Compat\data\TTsKOMoldovanDesat.paa";
				};
				class TTsKOMoldovanHot {
					label = "TTsKO Hot";
					image = "RHS_ACEAX_Compat\data\TTsKOMoldovanHot.paa";
				};
				class TTsKOAlt {
					label = "TTsKO Alt";
					image = "RHS_ACEAX_Compat\data\TTsKOAlt.paa";
				};
				class TTsKOABN {
					label = "TTsKO ABN";
					image = "RHS_ACEAX_Compat\data\TTsKOABN.paa";
				};
				class TTsKO {
					label = "TTsKO";
					image = "RHS_ACEAX_Compat\data\TTsKO.paa";
				};
				class VSR2 {
					label = "VSR 2";
					image = "RHS_ACEAX_Compat\data\VSR2.paa";
				};
				class VSR1 {
					label = "VSR 1";
					image = "RHS_ACEAX_Compat\data\VSR1.paa";
				};
				class M81 {
					label = "Woodland";
					image = "RHS_ACEAX_Compat\data\M81.paa";
				};
				class ML {
					label = "MTN Les";
					image = "RHS_ACEAX_Compat\data\MTN_LES.paa";
				};
				class Khaki {
					label = "Khaki";
					image = "RHS_ACEAX_Compat\data\Khaki.paa";
				};
				class VSR {
					label = "VSR";
					image = "RHS_ACEAX_Compat\data\VSR.paa";
				};
				class Digi {
					label = "Digital";
					image = "RHS_ACEAX_Compat\data\Digital.paa";
				};
				class TTsKOForrest {
					label = "TTsKO Forrest";
					image = "RHS_ACEAX_Compat\data\TTsKOForrest.paa";
				};
				class TTsKOM {
					label = "TTsKO MTN";
					image = "RHS_ACEAX_Compat\data\TTsKOMTN.paa";
				};
				class TTsKOU {
					label = "TTsKO Urban";
					image = "RHS_ACEAX_Compat\data\TTsKOU.paa";
				};
			};
			class Facing
			{
				values[] = 
				{
					"Front",
					"Back"
				};
				class Front {
					label = "Front";
				};
				class Back {
					label = "Back";
				};
			};
		};
		class RHS_TSh4
		{
			label="TSh-4";
			author="Killa567";
			options[]=
			{
				"ESS",
				"Balaclava"
			};
			class ESS
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
			class Balaclava
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
		};
		class RHS_ZSh7A
		{
			label="ZSh-7A";
			author="Killa567";
			options[]=
			{
				"Camo",
				"Visor",
				"KM35"
			};
			class Camo
			{
				values[] = 
				{
					"White",
					"OD"
				};
				class White {
					label = "Yes";
					image = "RHS_ACEAX_Compat\data\wht.paa";
				};
				class OD {
					label = "No";
					image = "RHS_ACEAX_Compat\data\OD.paa";
				};
			};
			class Visor
			{
				values[] = 
				{
					"Up",
					"Down"
				};
				class Up {
					label = "Up";
				};
				class Down {
					label = "Down";
				};
			};
			class KM35
			{
				values[] = 
				{
					"Yes",
					"No"
				};
				class Yes {
					label = "Yes";
				};
				class No {
					label = "No";
				};
			};
		};
		class RHS_Russian_Berets
		{
			label="Berets";
			author="Killa567";
			options[]=
			{
				"Unit",
				"Version"
			};
			class Unit
			{
				values[] = 
				{
					"MP",
					"MVD",
					"OMON",
					"VDV",
					"VP"
				};
				class MP {
					label = "MP";
				};
				class MVD {
					label = "MVD";
				};
				class OMON {
					label = "OMON";
				};
				class VDV {
					label = "VDV";
				};
				class VP {
					label = "VP";
				};
			};
			class Version
			{
				values[] = 
				{
					"1",
					"2",
					"3",
					"4"
				};
				class 1 {
					label = "One";
				};
				class 2 {
					label = "Two";
				};
				class 3 {
					label = "Three";
				};
				class 4 {
					label = "Four";
				};
			};
		};
		class RHS_HMwC
		{
			label="6B27 w/ Cap";
			author="Killa567";
			options[]=
			{
				"Camo",
			};
			class Camo
			{
				values[] = 
				{

					"EMR",
					"MTN",
					"Flora"
				};
				class EMR {
					label = "EMR";
					image = "RHS_ACEAX_Compat\data\EMR.paa"
				};
				class MTN {
					label = "Mtn Les";
					image = "RHS_ACEAX_Compat\data\MTN_LES.paa";
				};
				class Flora {
					label = "VP";
					image = "RHS_ACEAX_Compat\data\Flora.paa";
				};
			};
		};
	};
};

class XtdGearInfos
{
	class CfgWeapons
	{
//G3s
		class rhs_uniform_g3_aor2 
		{
			model="RHS_G3";
			camo="AOR2";
		};
		class rhs_uniform_g3_blk
		{
			model="RHS_G3";
			camo="BLK";
		};
		class rhs_uniform_g3_m81
		{
			model="RHS_G3";
			camo="M81";
		};
		class rhs_uniform_g3_mc
		{
			model="RHS_G3";
			camo="Multicam";
		};
		class rhs_uniform_g3_rgr
		{
			model="RHS_G3";
			camo="OD";
		};
		class rhs_uniform_g3_tan
		{
			model="RHS_G3";
			camo="TAN";
		};
//ACU
		class rhs_uniform_cu_ocp
		{
			model="RHS_ACU";
			camo="OCP";
			Patch="Blank";
		};
		class rhs_uniform_cu_ocp_101st
		{
			model="RHS_ACU";
			camo="OCP";
			Patch="AA";
		};
		class rhs_uniform_cu_ocp_10th
		{
			model="RHS_ACU";
			camo="OCP";
			Patch="MTN";
		};
		class rhs_uniform_cu_ocp_1stcav
		{
			model="RHS_ACU";
			camo="OCP";
			Patch="CAV";
		};
		class rhs_uniform_cu_ocp_82nd
		{
			model="RHS_ACU";
			camo="OCP";
			Patch="ABN";
		};
		class rhs_uniform_cu_ucp
		{
			model="RHS_ACU";
			camo="UCP";
			Patch="Blank";
		};
		class rhs_uniform_cu_ucp_101st
		{
			model="RHS_ACU";
			camo="UCP";
			Patch="AA";
		};
		class rhs_uniform_cu_ucp_10th
		{
			model="RHS_ACU";
			camo="UCP";
			Patch="MTN";
		};
		class rhs_uniform_cu_ucp_1stcav
		{
			model="RHS_ACU";
			camo="UCP";
			Patch="CAV";
		};
		class rhs_uniform_cu_ucp_82nd
		{
			model="RHS_ACU";
			camo="UCP";
			Patch="ABN";
		};
//M10s
		class rhsgref_uniform_para_ttsko_mountain
		{
			model="RHS_M10";
			camo="TTsKOM";
		};
		class rhsgref_uniform_para_ttsko_oxblood 
		{
			model="RHS_M10";
			camo="TTsKOO";
		};
		class rhsgref_uniform_para_ttsko_urban
		{
			model="RHS_M10";
			camo="TTsKOU";
		};
		class rhssaf_uniform_m10_digital
		{
			model="RHS_M10";
			camo="Digi";
		};
		class rhssaf_uniform_m10_digital_desert
		{
			model="RHS_M10";
			camo="DigiD";
		};
		class rhssaf_uniform_m10_digital_summer
		{
			model="RHS_M10";
			camo="DigiS";
		};
		class rhssaf_uniform_m10_digital_tan_boots
		{
			model="RHS_M10";
			camo="DigiTB";
		};
//M93
		class rhsgref_uniform_3color_desert
		{
			model="RHS_M93";
			camo="D3C";
			pants="Normal";
		};
		class rhsgref_uniform_alpenflage
		{
			model="RHS_M93";
			camo="Alpenflage";
			pants="Normal";
		};
		class rhsgref_uniform_altis_lizard
		{
			model="RHS_M93";
			camo="ALiz";
			pants="Normal";
		};
		class rhsgref_uniform_altis_lizard_olive {
			model="RHS_M93";
			camo="ALiz";
			pants="olive";
		};
		class rhsgref_uniform_dpm {
			model="RHS_M93";
			camo="DPM";
			pants="Normal";
		};
		class rhsgref_uniform_dpm_olive {
			model="RHS_M93";
			camo="DPM";
			pants="olive";
		};
		class rhsgref_uniform_ERDL {
			model="RHS_M93";
			camo="ERDL";
			pants="Normal";
		};
		class rhsgref_uniform_flecktarn {
			model="RHS_M93";
			camo="Flecktarn";
			pants="olive";
		};
		class rhsgref_uniform_flecktarn_full {
			model="RHS_M93";
			camo="Flecktarn";
			pants="Normal";
		};
		class rhsgref_uniform_og107 {
			model="RHS_M93";
			camo="OG";
			pants="Normal";
		};
		class rhsgref_uniform_og107_erdl {
			model="RHS_M93";
			camo="OG";
			pants="ERDL";
		};
		class rhsgref_uniform_olive {
			model="RHS_M93";
			camo="OD";
			pants="Normal";
		};
		class rhsgref_uniform_tigerstripe {
			model="RHS_M93";
			camo="Tiger";
			pants="Normal";
		};
		class rhsgref_uniform_reed {
			model="RHS_M93";
			camo="Reed";
			pants="Normal";
		};
		class rhsgref_uniform_woodland {
			model="RHS_M93";
			camo="M81";
			pants="Normal";
		};
		class rhsgref_uniform_woodland_olive {
			model="RHS_M93";
			camo="M81";
			pants="olive";
		};
		class rhssaf_uniform_m93_oakleaf {
			model="RHS_M93";
			camo="OAK";
			pants="Normal";
		};
		class rhssaf_uniform_m93_oakleaf_summer {
			model="RHS_M93";
			camo="OAKS";
			pants="Normal";
		};
//Flora
		class rhs_uniform_flora_patchless
		{
			model="RHS_Flora";
			camo="Flora";
			Patch="Blank";
		};
		class rhs_uniform_flora_patchless_alt
		{
			model="RHS_Flora";
			camo="FloraA";
			Patch="Blank";
		};
		class rhs_uniform_flora
		{
			model="RHS_Flora";
			camo="Flora";
			Patch="MSV";
		};
		class rhs_uniform_rva_flora
		{
			model="RHS_Flora";
			camo="Flora";
			Patch="RVA";
		};
		class rhs_uniform_vdv_flora
		{
			model="RHS_Flora";
			camo="Flora";
			Patch="VDV";
		};
		class rhs_uniform_vmf_flora
		{
			model="RHS_Flora";
			camo="Flora";
			Patch="VMF";
		};
		class rhs_uniform_vmf_flora_subdued
		{
			model="RHS_Flora";
			camo="Flora";
			Patch="VMFS";
		};
		class rhs_uniform_mflora_patchless
		{
			model="RHS_Flora";
			camo="MTN";
			Patch="Blank";
		};
		class rhs_uniform_vdv_mflora
		{
			model="RHS_Flora";
			camo="MTN";
			Patch="VDV";
		};
//M88 Winter
		class rhs_uniform_afghanka_winter
		{
			model="RHS_M88W";
			camo="M88";
			Boots="Normal";
		};
		class rhs_uniform_afghanka_winter_moldovan_ttsko
		{
			model="RHS_M88W";
			camo="TTsKOMoldovan";
			Boots="Normal";
		};
		class rhs_uniform_afghanka_winter_spetsodezhda
		{
			model="RHS_M88W";
			camo="Spetsodezhda";
			Boots="Normal";
		};
		class rhs_uniform_afghanka_winter_ttsko
		{
			model="RHS_M88W";
			camo="TTsKO";
			Boots="Normal";
		};
		class rhs_uniform_afghanka_winter_vsr
		{
			model="RHS_M88W";
			camo="VSR1";
			Boots="Normal";
		};
		class rhs_uniform_afghanka_winter_vsr_2
		{
			model="RHS_M88W";
			camo="VSR2";
			Boots="Normal";
		};
		class rhs_uniform_afghanka_winter_vsr_3
		{
			model="RHS_M88W";
			camo="VSR3";
			Boots="Normal";
		};
		class rhs_uniform_afghanka_winter_boots
		{
			model="RHS_M88W";
			camo="M88";
			Boots="Sapogi";
		};
		class rhs_uniform_afghanka_winter_boots_moldovan_ttsko
		{
			model="RHS_M88W";
			camo="TTsKOMoldovan";
			Boots="Sapogi";
		};
		class rhs_uniform_afghanka_winter_boots_spetsodezhda
		{
			model="RHS_M88W";
			camo="Spetsodezhda";
			Boots="Sapogi";
		};
		class rhs_uniform_afghanka_winter_boots_ttsko
		{
			model="RHS_M88W";
			camo="TTsKO";
			Boots="Sapogi";
		};
		class rhs_uniform_afghanka_winter_boots_vsr
		{
			model="RHS_M88W";
			camo="VSR1";
			Boots="Sapogi";
		};
		class rhs_uniform_afghanka_winter_boots_vsr_2
		{
			model="RHS_M88W";
			camo="VSR2";
			Boots="Sapogi";
		};
//M88
		class rhs_uniform_afghanka
		{
			model="RHS_M88";
			camo="M88";
			Boots="Normal";
			Unit= "None";
		};
		class rhs_uniform_afghanka_grey
		{
			model="RHS_M88";
			camo="Grey";
			Boots="Normal";
			Unit= "None";
		};
		class rhs_uniform_afghanka_klmk
		{
			model="RHS_M88";
			camo="KLMK";
			Boots="Normal";
			Unit= "None";
		};
		class rhs_uniform_afghanka_moldovan_ttsko_blue
		{
			model="RHS_M88";
			camo="TTsKOMoldovanB";
			Boots="Normal";
			Unit= "None";
		};
		class rhs_uniform_afghanka_moldovan_ttsko_cold
		{
			model="RHS_M88";
			camo="TTsKOMoldovanCold";
			Boots="Normal";
			Unit= "None";
		};
		class rhs_uniform_afghanka_moldovan_ttsko_desat
		{
			model="RHS_M88";
			camo="TTsKOmoldovanDesat";
			Boots="Normal";
			Unit= "None";
		};
		class rhs_uniform_afghanka_moldovan_ttsko_hot
		{
			model="RHS_M88";
			camo="TTsKOmoldovanHot";
			Boots="Normal";
			Unit= "None";
		};
		class rhs_uniform_afghanka_spetsodezhda
		{
			model="RHS_M88";
			camo="Spetsodezhda";
			Boots="Normal";
			Unit= "None";
		};
		class rhs_uniform_afghanka_ttsko
		{
			model="RHS_M88";
			camo="TTsKO";
			Boots="Normal";
			Unit= "None";
		};
		class rhs_uniform_afghanka_ttsko_2
		{
			model="RHS_M88";
			camo="TTsKOAlt";
			Boots="Normal";
			Unit= "None";
		};
		class rhs_uniform_afghanka_vsr_1
		{
			model="RHS_M88";
			camo="VSR1";
			Boots="Normal";
			Unit= "None";
		};
		class rhs_uniform_afghanka_vsr_2
		{
			model="RHS_M88";
			camo="VSR2";
			Boots="Normal";
			Unit= "None";
		};
		class rhs_uniform_afghanka_vsr_3
		{
			model="RHS_M88";
			camo="VSR3";
			Boots="Normal";
			Unit= "None";
		};
		class rhs_uniform_afghanka_wdl
		{
			model="RHS_M88";
			camo="M81";
			Boots="Normal";
			Unit= "None";
		};
		class rhs_uniform_afghanka_boots
		{
			model="RHS_M88";
			camo="M88";
			Boots="Sapogi";
			Unit= "None";
		};
		class rhs_uniform_afghanka_boots_moldovan_ttsko_cold
		{
			model="RHS_M88";
			camo="TTsKOMoldovanCold";
			Boots="Sapogi";
			Unit= "None";
		};
		class rhs_uniform_afghanka_boots_moldovan_ttsko_desat
		{
			model="RHS_M88";
			camo="TTsKOmoldovanDesat";
			Boots="Sapogi";
			Unit= "None";
		};
		class rhs_uniform_afghanka_boots_moldovan_ttsko_hot
		{
			model="RHS_M88";
			camo="TTsKOmoldovanHot";
			Boots="Sapogi";
			Unit= "None";
		};
		class rhs_uniform_afghanka_boots_spetsodezhda
		{
			model="RHS_M88";
			camo="Spetsodezhda";
			Boots="Sapogi";
			Unit= "None";
		};
		class rhs_uniform_afghanka_boots_ttsko
		{
			model="RHS_M88";
			camo="TTsKO";
			Boots="Sapogi";
			Unit= "None";
		};
		class rhs_uniform_afghanka_para
		{
			model="RHS_M88";
			camo="M88";
			Boots="Normal";
			Unit= "VDV";
		};
		class rhs_uniform_afghanka_para_ttsko
		{
			model="RHS_M88";
			camo="TTsKOABN";
			Boots="Normal";
			Unit= "VDV";
		};
		class rhs_uniform_afghanka_para_ttsko_2
		{
			model="RHS_M88";
			camo="TTsKO";
			Boots="Normal";
			Unit= "VDV";
		};
		class rhs_uniform_afghanka_para_vsr
		{
			model="RHS_M88";
			camo="VSR1";
			Boots="Normal";
			Unit= "VDV";
		};
		class rhs_uniform_afghanka_para_vsr_2
		{
			model="RHS_M88";
			camo="VSR2";
			Boots="Normal";
			Unit= "VDV";
		};
		class rhsgref_uniform_vsr
		{
			model="RHS_M88";
			camo="VSR";
			Boots="Normal";
			Unit= "None";
		};
		class rhsgref_uniform_ttsko_forest
		{
			model="RHS_M88";
			camo="TTsKOForrest";
			Boots="Normal";
			Unit= "None";
		};
		class rhsgref_uniform_ttsko_mountain
		{
			model="RHS_M88";
			camo="TTsKOM";
			Boots="Normal";
			Unit= "None";
		};
		class rhsgref_uniform_ttsko_urban
		{
			model="RHS_M88";
			camo="TTsKOU";
			Boots="Normal";
			Unit= "None";
		};
//VKPO
		class rhs_uniform_vkpo
		{
			model="RHS_VKPO";
			camo="EMR";
			Gloves="No";
		};
		class rhs_uniform_vkpo_alt
		{
			model="RHS_VKPO";
			camo="EMRALT";
			Gloves="No";
		};
		class rhs_uniform_vkpo_gloves
		{
			model="RHS_VKPO";
			camo="EMR";
			Gloves="Yes";
		};
		class rhs_uniform_vkpo_gloves_alt
		{
			model="RHS_VKPO";
			camo="EMRALT";
			Gloves="Yes";
		};
//EMR
		class rhs_uniform_emr_des_patchless
		{
			model="RHS_EMR";
			camo="EMRDES";
			Unit="None";
		};
		class rhs_uniform_vdv_emr_des
		{
			model="RHS_EMR";
			camo="EMRDES";
			Unit="VDV";
		};
		class rhs_uniform_emr_patchless
		{
			model="RHS_EMR";
			camo="EMR";
			Unit="None";
		};
		class rhs_uniform_vdv_emr
		{
			model="RHS_EMR";
			camo="EMR";
			Unit="VDV";
		};
//6Sh122
		class rhs_uniform_6sh122_v2
		{
			model="RHS_6Sh122";
			camo="Fall";
			Gloves="No";
		};
		class rhs_uniform_6sh122_gloves_v2
		{
			model="RHS_6Sh122";
			camo="Fall";
			Gloves="Yes";
		};
		class rhs_uniform_6sh122_v1
		{
			model="RHS_6Sh122";
			camo="Spring";
			Gloves="No";
		};
		class rhs_uniform_6sh122_gloves_v1
		{
			model="RHS_6Sh122";
			camo="Spring";
			Gloves="Yes";
		};
//Gorka-R
		class rhs_uniform_gorka_r_g
		{
			model="RHS_GorkaR";
			camo="Green";
			Gloves="No";
		};
		class rhs_uniform_gorka_r_g_gloves
		{
			model="RHS_GorkaR";
			camo="Green";
			Gloves="Yes";
		};
		class rhs_uniform_gorka_r_y
		{
			model="RHS_GorkaR";
			camo="Yellow";
			Gloves="No";
		};
		class rhs_uniform_gorka_r_y_gloves
		{
			model="RHS_GorkaR";
			camo="Yellow";
			Gloves="Yes";
		};
//Gorka 1
		class rhs_uniform_gorka_1_a
		{
			model="RHS_Gorka1";
			camo="Afghanka";
		};
		class rhs_uniform_gorka_1_b
		{
			model="RHS_Gorka1";
			camo="Berezka";
		};
		class rhsgref_uniform_gorka_1_f
		{
			model="RHS_Gorka1";
			camo="Flecktarn";
		};
//OCP IOTV
		class rhsusf_iotv_ocp_Grenadier
		{
			model="RHS_IOTV_OCP";
			Pouches="Grenadier";
		};
		class rhsusf_iotv_ocp_Medic
		{
			model="RHS_IOTV_OCP";
			Pouches="Medic";
		};
		class rhsusf_iotv_ocp_Repair
		{
			model="RHS_IOTV_OCP";
			Pouches="Repair";
		};
		class rhsusf_iotv_ocp_Rifleman
		{
			model="RHS_IOTV_OCP";
			Pouches="Rifleman";
		};
		class rhsusf_iotv_ocp_SAW
		{
			model="RHS_IOTV_OCP";
			Pouches="SAW";
		};
		class rhsusf_iotv_ocp_Squadleader
		{
			model="RHS_IOTV_OCP";
			Pouches="Squadleader";
		};
		class rhsusf_iotv_ocp_Teamleader
		{
			model="RHS_IOTV_OCP";
			Pouches="Teamleader";
		};
		class rhsusf_iotv_ocp
		{
			model="RHS_IOTV_OCP";
			Pouches="Slick";
		};
//UCP IOTV
		class rhsusf_iotv_ucp_Grenadier
		{
			model="RHS_IOTV_UCP";
			Pouches="Grenadier";
		};
		class rhsusf_iotv_ucp_Medic
		{
			model="RHS_IOTV_UCP";
			Pouches="Medic";
		};
		class rhsusf_iotv_ucp_Repair
		{
			model="RHS_IOTV_UCP";
			Pouches="Repair";
		};
		class rhsusf_iotv_ucp_Rifleman
		{
			model="RHS_IOTV_UCP";
			Pouches="Rifleman";
		};
		class rhsusf_iotv_ucp_SAW
		{
			model="RHS_IOTV_UCP";
			Pouches="SAW";
		};
		class rhsusf_iotv_ucp_Squadleader
		{
			model="RHS_IOTV_UCP";
			Pouches="Squadleader";
		};
		class rhsusf_iotv_ucp_Teamleader
		{
			model="RHS_IOTV_UCP";
			Pouches="Teamleader";
		};
		class rhsusf_iotv_ucp
		{
			model="RHS_IOTV_UCP";
			Pouches="Slick";
		};
//MBAV
		class rhsusf_mbav_grenadier
		{
			model="RHS_MBAV";
			Pouches="Grenadier";
		};
		class rhsusf_mbav_medic
		{
			model="RHS_MBAV";
			Pouches="Medic";
		};
		class rhsusf_mbav_light
		{
			model="RHS_MBAV";
			Pouches="Light";
		};
		class rhsusf_mbav_rifleman
		{
			model="RHS_MBAV";
			Pouches="Rifleman";
		};
		class rhsusf_mbav_mg
		{
			model="RHS_MBAV";
			Pouches="SAW";
		};
		class rhsusf_mbav
		{
			model="RHS_MBAV";
			Pouches="Slick";
		};
//Plateframe
		class rhsusf_plateframe_grenadier
		{
			model="RHS_Plateframe";
			Pouches="Grenadier";
		};
		class rhsusf_plateframe_medic
		{
			model="RHS_Plateframe";
			Pouches="Medic";
		};
		class rhsusf_plateframe_light
		{
			model="RHS_Plateframe";
			Pouches="Light";
		};
		class rhsusf_plateframe_rifleman
		{
			model="RHS_Plateframe";
			Pouches="Rifleman";
		};
		class rhsusf_plateframe_machinegunner
		{
			model="RHS_Plateframe";
			Pouches="SAW";
		};
		class rhsusf_plateframe_marksman
		{
			model="RHS_Plateframe";
			Pouches="Marksman";
		};
		class rhsusf_plateframe_teamleader
		{
			model="RHS_Plateframe";
			Pouches="Teamleader";
		};
		class rhsusf_plateframe_sapi
		{
			model="RHS_Plateframe";
			Pouches="Slick";
		};
//SPC
		class rhsusf_spc_crewman
		{
			model="RHS_SPC";
			Pouches="Crewman";
		};
		class rhsusf_spc_corpsman
		{
			model="RHS_SPC";
			Pouches="Corpsman";
		};
		class rhsusf_spc_light
		{
			model="RHS_SPC";
			Pouches="Light";
		};
		class rhsusf_spc_rifleman
		{
			model="RHS_SPC";
			Pouches="Rifleman";
		};
		class rhsusf_spc_mg
		{
			model="RHS_SPC";
			Pouches="SAW";
		};
		class rhsusf_spc_marksman
		{
			model="RHS_SPC";
			Pouches="Marksman";
		};
		class rhsusf_spc_teamleader
		{
			model="RHS_SPC";
			Pouches="Teamleader";
		};
		class rhsusf_spc_iar
		{
			model="RHS_SPC";
			Pouches="IAR";
		};
		class rhsusf_spc_patchless
		{
			model="RHS_SPC";
			Pouches="Patchless";
		};
		class rhsusf_spc_patchless_radio
		{
			model="RHS_SPC";
			Pouches="PatchlessRadio";
		};
		class rhsusf_spc_squadleader
		{
			model="RHS_SPC";
			Pouches="Squadleader";
		};
		class rhsusf_spc_sniper
		{
			model="RHS_SPC";
			Pouches="ScoutSniper";
		};
		class rhsusf_spc
		{
			model="RHS_SPC";
			Pouches="Slick";
		};
//OCP SPCS
		class rhsusf_spcs_ocp_crewman
		{
			model="RHS_SPCS_OCP";
			Pouches="Crewman";
		};
		class rhsusf_spcs_ocp_grenadier
		{
			model="RHS_SPCS_OCP";
			Pouches="Grenadier";
		};
		class rhsusf_spcs_ocp_machinegunner
		{
			model="RHS_SPCS_OCP";
			Pouches="MachineGunner";
		};
		class rhsusf_spcs_ocp_medic
		{
			model="RHS_SPCS_OCP";
			Pouches="Medic";
		};
		class rhsusf_spcs_ocp
		{
			model="RHS_SPCS_OCP";
			Pouches="Slick";
		};
		class rhsusf_spcs_ocp_rifleman_alt
		{
			model="RHS_SPCS_OCP";
			Pouches="RiflemanAlt";
		};
		class rhsusf_spcs_ocp_rifleman
		{
			model="RHS_SPCS_OCP";
			Pouches="Rifleman";
		};
		class rhsusf_spcs_ocp_saw
		{
			model="RHS_SPCS_OCP";
			Pouches="SAW";
		};
		class rhsusf_spcs_ocp_sniper
		{
			model="RHS_SPCS_OCP";
			Pouches="Sniper";
		};
		class rhsusf_spcs_ocp_squadleader
		{
			model="RHS_SPCS_OCP";
			Pouches="Squadleader";
		};
		class rhsusf_spcs_ocp_teamleader_alt
		{
			model="RHS_SPCS_OCP";
			Pouches="TeamleaderAlt";
		};
		class rhsusf_spcs_ocp_teamleader
		{
			model="RHS_SPCS_OCP";
			Pouches="Teamleader";
		};
//UCP SPCS
		class rhsusf_spcs_ucp_crewman
		{
			model="RHS_SPCS_UCP";
			Pouches="Crewman";
		};
		class rhsusf_spcs_ucp_grenadier
		{
			model="RHS_SPCS_UCP";
			Pouches="Grenadier";
		};
		class rhsusf_spcs_ucp_machinegunner
		{
			model="RHS_SPCS_UCP";
			Pouches="MachineGunner";
		};
		class rhsusf_spcs_ucp_medic
		{
			model="RHS_SPCS_UCP";
			Pouches="Medic";
		};
		class rhsusf_spcs_ucp
		{
			model="RHS_SPCS_UCP";
			Pouches="Slick";
		};
		class rhsusf_spcs_ucp_rifleman_alt
		{
			model="RHS_SPCS_UCP";
			Pouches="RiflemanAlt";
		};
		class rhsusf_spcs_ucp_rifleman
		{
			model="RHS_SPCS_UCP";
			Pouches="Rifleman";
		};
		class rhsusf_spcs_ucp_saw
		{
			model="RHS_SPCS_UCP";
			Pouches="SAW";
		};
		class rhsusf_spcs_ucp_sniper
		{
			model="RHS_SPCS_UCP";
			Pouches="Sniper";
		};
		class rhsusf_spcs_ucp_squadleader
		{
			model="RHS_SPCS_UCP";
			Pouches="Squadleader";
		};
		class rhsusf_spcs_ucp_teamleader_alt
		{
			model="RHS_SPCS_UCP";
			Pouches="TeamleaderAlt";
		};
		class rhsusf_spcs_ucp_teamleader
		{
			model="RHS_SPCS_UCP";
			Pouches="Teamleader";
		};
//M99T Digital
		class rhssaf_vest_md99_digital
		{
			model="RHS_M99T_Digi";
			Pouches="Slick";
		};
		class rhssaf_vest_md99_digital_radio
		{
			model="RHS_M99T_Digi";
			Pouches="Radio";
		};
		class rhssaf_vest_md99_digital_rifleman
		{
			model="RHS_M99T_Digi";
			Pouches="Rifleman";
		};
		class rhssaf_vest_md99_digital_rifleman_radio
		{
			model="RHS_M99T_Digi";
			Pouches="RiflemanR";
		};
//M99T MDU02
		class rhssaf_vest_md99_md2camo
		{
			model="RHS_M99T_MDU02";
			Pouches="Slick";
		};
		class rhssaf_vest_md99_md2camo_radio
		{
			model="RHS_M99T_MDU02";
			Pouches="Radio";
		};
		class rhssaf_vest_md99_md2camo_rifleman
		{
			model="RHS_M99T_MDU02";
			Pouches="Rifleman";
		};
		class rhssaf_vest_md99_md2camo_rifleman_radio
		{
			model="RHS_M99T_MDU02";
			Pouches="RiflemanR";
		};
//M99T Woodland
		class rhssaf_vest_md99_woodland
		{
			model="RHS_M99T_Woodland";
			Pouches="Slick";
		};
		class rhssaf_vest_md99_woodland_radio
		{
			model="RHS_M99T_Woodland";
			Pouches="Radio";
		};
		class rhssaf_vest_md99_woodland_rifleman
		{
			model="RHS_M99T_Woodland";
			Pouches="Rifleman";
		};
		class rhssaf_vest_md99_woodland_rifleman_radio
		{
			model="RHS_M99T_Woodland";
			Pouches="RiflemanR";
		};
//M-12
		class rhssaf_vest_md12_digital
		{
			model="RHS_M12";
			Variant="Digital";
		};
		class rhssaf_vest_md12_digital_desert
		{
			model="RHS_M12";
			Variant="DigitalDes";
		};
		class rhssaf_vest_md12_m70_rifleman
		{
			model="RHS_M12";
			Variant="M70";
		};
//M-98
		class rhssaf_vest_md98_digital
		{
			model="RHS_M98";
			Variant="Digital";
		};
		class rhssaf_vest_md98_md2camo
		{
			model="RHS_M98";
			Variant="MDU02";
		};
		class rhssaf_vest_md98_woodland
		{
			model="RHS_M98";
			Variant="M81";
		};
		class rhssaf_vest_md98_rifleman
		{
			model="RHS_M98";
			Variant="M81R";
		};
//OTV
		class rhsgref_otv_digi
		{
			model="RHS_OTV";
			Camo="Digital";
		};
		class rhssaf_vest_otv_md2camo
		{
			model="RHS_OTV";
			Camo="MDU02";
		};
		class rhsgref_otv_khaki
		{
			model="RHS_OTV";
			Camo="Khaki";
		};
//6B23 Khaki
		class rhsgref_6b23_khaki_medic
		{
			model="RHS_6B23_Khaki";
			Pouches="Medic";
		};
		class rhsgref_6b23_khaki_nco
		{
			model="RHS_6B23_Khaki";
			Pouches="NCO";
		};
		class rhsgref_6b23_khaki_officer
		{
			model="RHS_6B23_Khaki";
			Pouches="Officer";
		};
		class rhsgref_6b23_khaki_rifleman
		{
			model="RHS_6B23_Khaki";
			Pouches="Rifleman";
		};
		class rhsgref_6b23_khaki_sniper
		{
			model="RHS_6B23_Khaki";
			Pouches="Sniper";
		};
		class rhsgref_6b23_khaki
		{
			model="RHS_6B23_Khaki";
			Pouches="Utility";
		};
//6B23 TTsKO Digital
		class rhsgref_6b23_ttsko_digi_medic
		{
			model="RHS_6B23_TTsKO_D";
			Pouches="Medic";
		};
		class rhsgref_6b23_ttsko_digi_nco
		{
			model="RHS_6B23_TTsKO_D";
			Pouches="NCO";
		};
		class rhsgref_6b23_ttsko_digi_officer
		{
			model="RHS_6B23_TTsKO_D";
			Pouches="Officer";
		};
		class rhsgref_6b23_ttsko_digi_rifleman
		{
			model="RHS_6B23_TTsKO_D";
			Pouches="Rifleman";
		};
		class rhsgref_6b23_ttsko_digi_sniper
		{
			model="RHS_6B23_TTsKO_D";
			Pouches="Sniper";
		};
		class rhsgref_6b23_ttsko_digi
		{
			model="RHS_6B23_TTsKO_D";
			Pouches="Utility";
		};
//6B23 TTsKO Forrest
		class rhsgref_6b23_ttsko_forest_rifleman
		{
			model="RHS_6B23_TTsKO_F";
			Pouches="Rifleman";
		};
		class rhsgref_6b23_ttsko_forest
		{
			model="RHS_6B23_TTsKO_F";
			Pouches="Utility";
		};
//6B23 TTsKO Mountian
		class rhsgref_6b23_ttsko_mountain_medic
		{
			model="RHS_6B23_TTsKO_MTN";
			Pouches="Medic";
		};
		class rhsgref_6b23_ttsko_mountain_nco
		{
			model="RHS_6B23_TTsKO_MTN";
			Pouches="NCO";
		};
		class rhsgref_6b23_ttsko_mountain_officer
		{
			model="RHS_6B23_TTsKO_MTN";
			Pouches="Officer";
		};
		class rhsgref_6b23_ttsko_mountain_rifleman
		{
			model="RHS_6B23_TTsKO_MTN";
			Pouches="Rifleman";
		};
		class rhsgref_6b23_ttsko_mountain_sniper
		{
			model="RHS_6B23_TTsKO_MTN";
			Pouches="Sniper";
		};
		class rhsgref_6b23_ttsko_mountain
		{
			model="RHS_6B23_TTsKO_MTN";
			Pouches="Utility";
		};
//Suspender Equipment
		class rhs_suspender_AK8_chestrig
		{
			model="RHS_Susp_Equipment";
			Pouches="AK";
		};
		class rhs_suspender_AK
		{
			model="RHS_Susp_Equipment";
			Pouches="Rifleman";
		};
		class rhs_suspender_AK4
		{
			model="RHS_Susp_Equipment";
			Pouches="RiflemanL";
		};
		class rhs_suspender_SKS
		{
			model="RHS_Susp_Equipment";
			Pouches="SKS";
		};
//Officer
		class rhs_vest_commander
		{
			model="RHS_Officer_Equipment";
			Pouches="MCH";
		};
		class rhs_gear_OFF
		{
			model="RHS_Officer_Equipment";
			Pouches="Officer";
		};
		class rhs_vest_pistol_holster
		{
			model="RHS_Officer_Equipment";
			Pouches="Pistol";
		};
//Lifchik
		class rhs_lifchik_NCO
		{
			model="RHS_Lifchik";
			Pouches="Officer";
		};
		class rhs_lifchik_vog
		{
			model="RHS_Lifchik";
			Pouches="VOG";
		};
		class rhs_lifchik
		{
			model="RHS_Lifchik";
			Pouches="Rig1";
		};
		class rhs_lifchik_light
		{
			model="RHS_Lifchik";
			Pouches="Rig2";
		};
//Belt Eqipment
		class rhs_belt_sks
		{
			model="RHS_Belt_Equipment";
			Pouches="SKS";
		};
		class rhs_belt_AK4
		{
			model="RHS_Belt_Equipment";
			Pouches="6Sh46";
		};
		class rhs_belt_AK4_back
		{
			model="RHS_Belt_Equipment";
			Pouches="6Sh46Alt";
		};
		class rhs_belt_RPK
		{
			model="RHS_Belt_Equipment";
			Pouches="AR";
		};
		class rhs_belt_AK_GL
		{
			model="RHS_Belt_Equipment";
			Pouches="Grenadier";
		};
		class rhs_belt_holster
		{
			model="RHS_Belt_Equipment";
			Pouches="Holster";
		};
		class rhs_belt_AK
		{
			model="RHS_Belt_Equipment";
			Pouches="Rifleman";
		};
		class rhs_belt_AK_back
		{
			model="RHS_Belt_Equipment";
			Pouches="RiflemanAlt";
		};
		class rhs_belt_svd
		{
			model="RHS_Belt_Equipment";
			Pouches="SVD";
		};
//6Sh92 Flora
		class rhs_6sh92
		{
			model="RHS_6Sh92_Flora";
			Pouches="Rifleman";
		};
		class rhs_6sh92_headset
		{
			model="RHS_6Sh92_Flora";
			Pouches="Headset";
		};
		class rhs_6sh92_radio
		{
			model="RHS_6Sh92_Flora";
			Pouches="Radio";
		};
		class rhs_6sh92_vog
		{
			model="RHS_6Sh92_Flora";
			Pouches="VOG";
		};
		class rhs_6sh92_vog_headset
		{
			model="RHS_6Sh92_Flora";
			Pouches="VOGHeadset";
		};
//6Sh92 EMR
		class rhs_6sh92_digi
		{
			model="RHS_6Sh92_EMR";
			Pouches="Rifleman";
		};
		class rhs_6sh92_digi_headset
		{
			model="RHS_6Sh92_EMR";
			Pouches="Headset";
		};
		class rhs_6sh92_digi_radio
		{
			model="RHS_6Sh92_EMR";
			Pouches="Radio";
		};
		class rhs_6sh92_digi_vog
		{
			model="RHS_6Sh92_EMR";
			Pouches="VOG";
		};
		class rhs_6sh92_digi_vog_headset
		{
			model="RHS_6Sh92_EMR";
			Pouches="VOGHeadset";
		};
//6Sh92 VSR
		class rhs_6sh92_vsr
		{
			model="RHS_6Sh92_VSR";
			Pouches="Rifleman";
		};
		class rhs_6sh92_vsr_headset
		{
			model="RHS_6Sh92_VSR";
			Pouches="Headset";
		};
		class rhs_6sh92_vsr_radio
		{
			model="RHS_6Sh92_VSR";
			Pouches="Radio";
		};
		class rhs_6sh92_vsr_vog
		{
			model="RHS_6Sh92_VSR";
			Pouches="VOG";
		};
		class rhs_6sh92_vsr_vog_headset
		{
			model="RHS_6Sh92_VSR";
			Pouches="VOGHeadset";
		};
//6Sh117
		class rhs_6sh117_mg
		{
			model="RHS_6Sh117";
			Pouches="MG";
		};
		class rhs_6sh117_rifleman
		{
			model="RHS_6Sh117";
			Pouches="Rifleman";
		};
		class rhs_6sh117_ar
		{
			model="RHS_6Sh117";
			Pouches="RPK";
		};
		class rhs_6sh117_nco
		{
			model="RHS_6Sh117";
			Pouches="SL";
		};
		class rhs_6sh117_nco_azart
		{
			model="RHS_6Sh117";
			Pouches="SLAzart";
		};
		class rhs_6sh117_svd
		{
			model="RHS_6Sh117";
			Pouches="SVD";
		};
		class rhs_6sh117_val
		{
			model="RHS_6Sh117";
			Pouches="VAL";
		};
		class rhs_6sh117_grn
		{
			model="RHS_6Sh117";
			Pouches="VOG";
		};
//6B5 VSR
		class rhs_6b5_vsr
		{
			model="RHS_6B5_VSR";
			Pouches="Rifleman";
		};
		class rhs_6b5_rifleman_vsr
		{
			model="RHS_6B5_VSR";
			Pouches="6Sh46";
		};
		class rhs_6b5_medic_vsr
		{
			model="RHS_6B5_VSR";
			Pouches="Medic";
		};
		class rhs_6b5_officer_vsr
		{
			model="RHS_6B5_VSR";
			Pouches="Officer";
		};
		class rhs_6b5_sniper_vsr
		{
			model="RHS_6B5_VSR";
			Pouches="Sniper";
		};
//6B5 TTsKO
		class rhs_6b5_ttsko
		{
			model="RHS_6B5_TTsKO";
			Pouches="Rifleman";
		};
		class rhs_6b5_rifleman_ttsko
		{
			model="RHS_6B5_TTsKO";
			Pouches="6Sh46";
		};
		class rhs_6b5_medic_ttsko
		{
			model="RHS_6B5_TTsKO";
			Pouches="Medic";
		};
		class rhs_6b5_officer_ttsko
		{
			model="RHS_6B5_TTsKO";
			Pouches="Officer";
		};
		class rhs_6b5_sniper_ttsko
		{
			model="RHS_6B5_TTsKO";
			Pouches="Sniper";
		};
//6B5 Olive
		class rhs_6b5
		{
			model="RHS_6B5_OD";
			Pouches="Rifleman";
		};
		class rhs_6b5_rifleman
		{
			model="RHS_6B5_OD";
			Pouches="6Sh46";
		};
		class rhs_6b5_medic
		{
			model="RHS_6B5_OD";
			Pouches="Medic";
		};
		class rhs_6b5_officer
		{
			model="RHS_6B5_OD";
			Pouches="Officer";
		};
		class rhs_6b5_sniper
		{
			model="RHS_6B5_OD";
			Pouches="Sniper";
		};
//6B5 Berezka
		class rhs_6b5_spetsodezhda
		{
			model="RHS_6B5_Berezka";
			Pouches="Rifleman";
		};
		class rhs_6b5_rifleman_spetsodezhda
		{
			model="RHS_6B5_Berezka";
			Pouches="6Sh46";
		};
		class rhs_6b5_medic_spetsodezhda
		{
			model="RHS_6B5_Berezka";
			Pouches="Medic";
		};
		class rhs_6b5_officer_spetsodezhda
		{
			model="RHS_6B5_Berezka";
			Pouches="Officer";
		};
		class rhs_6b5_sniper_spetsodezhda
		{
			model="RHS_6B5_Berezka";
			Pouches="Sniper";
		};
//6B5 Khaki
		class rhs_6b5_khaki
		{
			model="RHS_6B5_Khaki";
			Pouches="Rifleman";
		};
		class rhs_6b5_rifleman_khaki
		{
			model="RHS_6B5_Khaki";
			Pouches="6Sh46";
		};
		class rhs_6b5_medic_khaki
		{
			model="RHS_6B5_Khaki";
			Pouches="Medic";
		};
		class rhs_6b5_officer_khaki
		{
			model="RHS_6B5_Khaki";
			Pouches="Officer";
		};
		class rhs_6b5_sniper_khaki
		{
			model="RHS_6B5_Khaki";
			Pouches="Sniper";
		};
//6B45
		class rhs_6b45
		{
			model="RHS_6B45";
			Pouches="Slick";
		};
		class rhs_6b45_holster
		{
			model="RHS_6B45";
			Pouches="Holster";
		};
		class rhs_6b45_light
		{
			model="RHS_6B45";
			Pouches="Light";
		};
		class rhs_6b45_mg
		{
			model="RHS_6B45";
			Pouches="MachineGunner";
		};
		class rhs_6b45_off
		{
			model="RHS_6B45";
			Pouches="Officer";
		};
		class rhs_6b45_rifleman
		{
			model="RHS_6B45";
			Pouches="Rifleman1";
		};
		class rhs_6b45_rifleman_2
		{
			model="RHS_6B45";
			Pouches="Rifleman2";
		};
		class rhs_6b45_grn
		{
			model="RHS_6B45";
			Pouches="VOG";
		};
//6B3
		class rhs_6b3
		{
			model="RHS_6B3";
			Pouches="Slick";
		};
		class rhs_6b3_holster
		{
			model="RHS_6B3";
			Pouches="Holster";
		};
		class rhs_6b3_R148
		{
			model="RHS_6B3";
			Pouches="R148";
		};
		class rhs_6b3_RPK
		{
			model="RHS_6B3";
			Pouches="RPK";
		};
		class rhs_6b3_off
		{
			model="RHS_6B3";
			Pouches="Officer";
		};
		class rhs_6b3_AK
		{
			model="RHS_6B3";
			Pouches="Rifleman1";
		};
		class rhs_6b3_AK_2
		{
			model="RHS_6B3";
			Pouches="Rifleman2";
		};
		class rhs_6b3_AK_3
		{
			model="RHS_6B3";
			Pouches="Rifleman3";
		};
		class rhs_6b3_VOG
		{
			model="RHS_6B3";
			Pouches="VOG";
		};
		class rhs_6b3_VOG_2
		{
			model="RHS_6B3";
			Pouches="VOG2";
		};
//6B23 MTN LES
		class rhs_6b23_ML
		{
			model="RHS_6B23_MTN_LES";
			Pouches="Slick";
		};
		class rhs_6b23_ML_6sh92
		{
			model="RHS_6B23_MTN_LES";
			Pouches="6Sh92";
		};
		class rhs_6b23_ML_6sh92_headset
		{
			model="RHS_6B23_MTN_LES";
			Pouches="6Sh92H";
		};
		class rhs_6b23_ML_6sh92_headset_mapcase
		{
			model="RHS_6B23_MTN_LES";
			Pouches="6Sh92HM";
		};
		class rhs_6b23_ML_6sh92_radio
		{
			model="RHS_6B23_MTN_LES";
			Pouches="6Sh92R";
		};
		class rhs_6b23_ML_6sh92_vog
		{
			model="RHS_6B23_MTN_LES";
			Pouches="6Sh92VOG";
		};
		class rhs_6b23_ML_6sh92_vog_headset
		{
			model="RHS_6B23_MTN_LES";
			Pouches="6Sh92VOGH";
		};
		class rhs_6b23_ML_crewofficer
		{
			model="RHS_6B23_MTN_LES";
			Pouches="CrewOfficer";
		};
		class rhs_6b23_ML_crew
		{
			model="RHS_6B23_MTN_LES";
			Pouches="Crew";
		};
		class rhs_6b23_ML_engineer
		{
			model="RHS_6B23_MTN_LES";
			Pouches="Engineer";
		};
		class rhs_6b23_ML_medic
		{
			model="RHS_6B23_MTN_LES";
			Pouches="Medic";
		};
		class rhs_6b23_ML_rifleman
		{
			model="RHS_6B23_MTN_LES";
			Pouches="Rifleman";
		};
		class rhs_6b23_ML_sniper
		{
			model="RHS_6B23_MTN_LES";
			Pouches="Sniper";
		};
		class rhs_6b23_ML_vydra_3m
		{
			model="RHS_6B23_MTN_LES";
			Pouches="Vydra3M";
		};
//6B23 Flora
		class rhs_6b23
		{
			model="RHS_6B23_Flora";
			Pouches="Slick";
		};
		class rhs_6b23_6sh116_flora
		{
			model="RHS_6B23_Flora";
			Pouches="6Sh116";
		};
		class rhs_6b23_6sh116_vog_flora
		{
			model="RHS_6B23_Flora";
			Pouches="6Sh116VOG";
		};
		class rhs_6b23_6sh92
		{
			model="RHS_6B23_Flora";
			Pouches="6Sh92";
		};
		class rhs_6b23_6sh92_headset
		{
			model="RHS_6B23_Flora";
			Pouches="6Sh92H";
		};
		class rhs_6b23_6sh92_headset_mapcase
		{
			model="RHS_6B23_Flora";
			Pouches="6Sh92HM";
		};
		class rhs_6b23_6sh92_radio
		{
			model="RHS_6B23_Flora";
			Pouches="6Sh92R";
		};
		class rhs_6b23_6sh92_vog
		{
			model="RHS_6B23_Flora";
			Pouches="6Sh92VOG";
		};
		class rhs_6b23_6sh92_vog_headset
		{
			model="RHS_6B23_Flora";
			Pouches="6Sh92VOGH";
		};
		class rhs_6b23_crewofficer
		{
			model="RHS_6B23_Flora";
			Pouches="CrewOfficer";
		};
		class rhs_6b23_crew
		{
			model="RHS_6B23_Flora";
			Pouches="Crew";
		};
		class rhs_6b23_engineer
		{
			model="RHS_6B23_Flora";
			Pouches="Engineer";
		};
		class rhs_6b23_medic
		{
			model="RHS_6B23_Flora";
			Pouches="Medic";
		};
		class rhs_6b23_rifleman
		{
			model="RHS_6B23_Flora";
			Pouches="Rifleman";
		};
		class rhs_6b23_sniper
		{
			model="RHS_6B23_Flora";
			Pouches="Sniper";
		};
		class rhs_6b23_vydra_3m
		{
			model="RHS_6B23_Flora";
			Pouches="Vydra3M";
		};
//6B23 EMR
		class rhs_6b23_digi
		{
			model="RHS_6B23_EMR";
			Pouches="Slick";
		};
		class rhs_6b23_6sh116
		{
			model="RHS_6B23_EMR";
			Pouches="6Sh116";
		};
		class rhs_6b23_6sh116_vog
		{
			model="RHS_6B23_EMR";
			Pouches="6Sh116VOG";
		};
		class rhs_6b23_digi_6sh92
		{
			model="RHS_6B23_EMR";
			Pouches="6Sh92";
		};
		class rhs_6b23_digi_6sh92_spetsnaz2
		{
			model="RHS_6B23_EMR";
			Pouches="6Sh92SpNz";
		};
		class rhs_6b23_digi_6sh92_headset
		{
			model="RHS_6B23_EMR";
			Pouches="6Sh92H";
		};
		class rhs_6b23_digi_6sh92_headset_spetsnaz
		{
			model="RHS_6B23_EMR";
			Pouches="6Sh92HSpNz";
		};
		class rhs_6b23_digi_6sh92_headset_mapcase
		{
			model="RHS_6B23_EMR";
			Pouches="6Sh92HM";
		};
		class rhs_6b23_digi_6sh92_radio
		{
			model="RHS_6B23_EMR";
			Pouches="6Sh92R";
		};
		class rhs_6b23_digi_6sh92_Spetsnaz
		{
			model="RHS_6B23_EMR";
			Pouches="6Sh92RSpNz";
		};
		class rhs_6b23_digi_6sh92_vog
		{
			model="RHS_6B23_EMR";
			Pouches="6Sh92VOG";
		};
		class rhs_6b23_digi_6sh92_Vog_Spetsnaz
		{
			model="RHS_6B23_EMR";
			Pouches="6Sh92VOGSpNz";
		};
		class rhs_6b23_digi_6sh92_vog_headset
		{
			model="RHS_6B23_EMR";
			Pouches="6Sh92VOGH";
		};
		class rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz
		{
			model="RHS_6B23_EMR";
			Pouches="6Sh92VOGHSpNz";
		};
		class rhs_6b23_digi_crewofficer
		{
			model="RHS_6B23_EMR";
			Pouches="CrewOfficer";
		};
		class rhs_6b23_digi_crew
		{
			model="RHS_6B23_EMR";
			Pouches="Crew";
		};
		class rhs_6b23_digi_engineer
		{
			model="RHS_6B23_EMR";
			Pouches="Engineer";
		};
		class rhs_6b23_digi_medic
		{
			model="RHS_6B23_EMR";
			Pouches="Medic";
		};
		class rhs_6b23_digi_rifleman
		{
			model="RHS_6B23_EMR";
			Pouches="Rifleman";
		};
		class rhs_6b23_digi_sniper
		{
			model="RHS_6B23_EMR";
			Pouches="Sniper";
		};
		class rhs_6b23_digi_vydra_3m
		{
			model="RHS_6B23_EMR";
			Pouches="Vydra3M";
		};
//6B23 OD
		class rhs_6b23_6sh116_od
		{
			model="RHS_6B23_OD";
			Pouches="6Sh116";
		};
		class rhs_6b23_6sh116_vog_od
		{
			model="RHS_6B23_OD";
			Pouches="6Sh116VOG";
		};
//6B23 Mix
		class rhs_6b23_6sh116_mixed
		{
			model="RHS_6B23_Mix";
			Pouches="6Sh116";
		};
		class rhs_6b23_6sh116_vog_mixed
		{
			model="RHS_6B23_Mix";
			Pouches="6Sh116VOG";
		};
//6B2
		class rhs_6b2
		{
			model="RHS_6B2";
			Pouches="Slick";
		};
		class rhs_6b2_AK
		{
			model="RHS_6B2";
			Pouches="6Sh46";
		};
		class rhs_6b2_chicom
		{
			model="RHS_6B2";
			Pouches="Chicom";
		};
		class rhs_6b2_holster
		{
			model="RHS_6B2";
			Pouches="Holster";
		};
		class rhs_6b2_lifchik
		{
			model="RHS_6B2";
			Pouches="Lifchik";
		};
		class rhs_6b2_RPK
		{
			model="RHS_6B2";
			Pouches="RPK";
		};
		class rhs_6b2_SVD
		{
			model="RHS_6B2";
			Pouches="Sniper";
		};
//6B13 VSR
		class rhs_6b13
		{
			model="RHS_6B13_VSR";
			Pouches="Slick";
		};
		class rhs_6b13_6sh92
		{
			model="RHS_6B13_VSR";
			Pouches="6Sh92";
		};
		class rhs_6b13_6sh92_headset_mapcase
		{
			model="RHS_6B13_VSR";
			Pouches="6Sh92HM";
		};
		class rhs_6b13_6sh92_radio
		{
			model="RHS_6B13_VSR";
			Pouches="6Sh92R";
		};
		class rhs_6b13_6sh92_vog
		{
			model="RHS_6B13_VSR";
			Pouches="6Sh92VOG";
		};
		class rhs_6b13_crewofficer
		{
			model="RHS_6B13_VSR";
			Pouches="CrewOfficer";
		};
//6B13 EMR
		class rhs_6b13_EMR
		{
			model="RHS_6B13_EMR";
			Pouches="Slick";
		};
		class rhs_6b13_EMR_6sh92
		{
			model="RHS_6B13_EMR";
			Pouches="6Sh92";
		};
		class rhs_6b13_EMR_6sh92_headset_mapcase
		{
			model="RHS_6B13_EMR";
			Pouches="6Sh92HM";
		};
		class rhs_6b13_EMR_6sh92_radio
		{
			model="RHS_6B13_EMR";
			Pouches="6Sh92R";
		};
		class rhs_6b13_EMR_6sh92_vog
		{
			model="RHS_6B13_EMR";
			Pouches="6Sh92VOG";
		};
//6B13 Flora
		class rhs_6b13_Flora
		{
			model="RHS_6B13_Flora";
			Pouches="Slick";
		};
		class rhs_6b13_Flora_6sh92
		{
			model="RHS_6B13_Flora";
			Pouches="6Sh92";
		};
		class rhs_6b13_Flora_6sh92_headset_mapcase
		{
			model="RHS_6B13_Flora";
			Pouches="6Sh92HM";
		};
		class rhs_6b13_Flora_6sh92_radio
		{
			model="RHS_6B13_Flora";
			Pouches="6Sh92R";
		};
		class rhs_6b13_Flora_6sh92_vog
		{
			model="RHS_6B13_Flora";
			Pouches="6Sh92VOG";
		};
		class rhs_6b13_Flora_crewofficer
		{
			model="RHS_6B13_Flora";
			Pouches="CrewOfficer";
		};
//6B26 Slick
		class rhs_6b26_green
		{
			model="RHS_6B26_Slick";
			ESS="No";
			Balaclava="No";
		};
		class rhs_6b26_bala_green
		{
			model="RHS_6B26_Slick";
			ESS="No";
			Balaclava="Yes";
		};
		class rhs_6b26_ess_green
		{
			model="RHS_6B26_Slick";
			ESS="Yes";
			Balaclava="No";
		};
		class rhs_6b26_ess_bala_green
		{
			model="RHS_6B26_Slick";
			ESS="Yes";
			Balaclava="Yes";
		};
//6B26 EMR
		class rhs_6b26_digi
		{
			model="RHS_6B26_EMR";
			ESS="No";
			Balaclava="No";
		};
		class rhs_6b26_digi_bala
		{
			model="RHS_6B26_EMR";
			ESS="No";
			Balaclava="Yes";
		};
		class rhs_6b26_digi_ess
		{
			model="RHS_6B26_EMR";
			ESS="Yes";
			Balaclava="No";
		};
		class rhs_6b26_digi_ess_bala
		{
			model="RHS_6B26_EMR";
			ESS="Yes";
			Balaclava="Yes";
		};
//6B26 Flora
		class rhs_6b26
		{
			model="RHS_6B26_Flora";
			ESS="No";
			Balaclava="No";
		};
		class rhs_6b26_bala
		{
			model="RHS_6B26_Flora";
			ESS="No";
			Balaclava="Yes";
		};
		class rhs_6b26_ess
		{
			model="RHS_6B26_Flora";
			ESS="Yes";
			Balaclava="No";
		};
		class rhs_6b26_ess_bala
		{
			model="RHS_6B26_Flora";
			ESS="Yes";
			Balaclava="Yes";
		};
//6B27 Slick
		class rhs_6b27m_green
		{
			model="RHS_6B27_Slick";
			ESS="No";
			Balaclava="No";
		};
		class rhs_6b27m_green_bala
		{
			model="RHS_6B27_Slick";
			ESS="No";
			Balaclava="Yes";
		}; 
		class rhs_6b27m_green_ess
		{
			model="RHS_6B27_Slick";
			ESS="Yes";
			Balaclava="No";
		};
		class rhs_6b27m_green_ess_bala
		{
			model="RHS_6B27_Slick";
			ESS="Yes";
			Balaclava="Yes";
		};
//6B27 EMR
		class rhs_6b27m_digi
		{
			model="RHS_6B27_EMR";
			ESS="No";
			Balaclava="No";
		};
		class rhs_6b27m_digi_bala
		{
			model="RHS_6B27_EMR";
			ESS="No";
			Balaclava="Yes";
		}; 
		class rhs_6b27m_digi_ess
		{
			model="RHS_6B27_EMR";
			ESS="Yes";
			Balaclava="No";
		};
		class rhs_6b27m_digi_ess_bala
		{
			model="RHS_6B27_EMR";
			ESS="Yes";
			Balaclava="Yes";
		};
//6B27 Flora
		class rhs_6b27m
		{
			model="RHS_6B27_Flora";
			ESS="No";
			Balaclava="No";
		};
		class rhs_6b27m_bala
		{
			model="RHS_6B27_Flora";
			ESS="No";
			Balaclava="Yes";
		}; 
		class rhs_6b27m_ess
		{
			model="RHS_6B27_Flora";
			ESS="Yes";
			Balaclava="No";
		};
		class rhs_6b27m_ess_bala
		{
			model="RHS_6B27_Flora";
			ESS="Yes";
			Balaclava="Yes";
		};
//6B27 MTN Les
		class rhs_6b27m_ml
		{
			model="RHS_6B27_MTN";
			ESS="No";
			Balaclava="No";
		};
		class rhs_6b27m_ml_bala
		{
			model="RHS_6B27_MTN";
			ESS="No";
			Balaclava="Yes";
		}; 
		class rhs_6b27m_ml_ess
		{
			model="RHS_6B27_MTN";
			ESS="Yes";
			Balaclava="No";
		};
		class rhs_6b27m_ML_ess_bala
		{
			model="RHS_6B27_MTN";
			ESS="Yes";
			Balaclava="Yes";
		};
//6B28 Slick
		class rhs_6b28_green
		{
			model="RHS_6B28_Slick";
			ESS="No";
			Balaclava="No";
		};
		class rhs_6b28_green_bala
		{
			model="RHS_6B28_Slick";
			ESS="No";
			Balaclava="Yes";
		}; 
		class rhs_6b28_green_ess
		{
			model="RHS_6B28_Slick";
			ESS="Yes";
			Balaclava="No";
		};
		class rhs_6b28_green_ess_bala
		{
			model="RHS_6B28_Slick";
			ESS="Yes";
			Balaclava="Yes";
		};
//6B28 EMR
		class rhs_6b28
		{
			model="RHS_6B28_EMR";
			ESS="No";
			Balaclava="No";
		};
		class rhs_6b28_bala
		{
			model="RHS_6B28_EMR";
			ESS="No";
			Balaclava="Yes";
		}; 
		class rhs_6b28_ess
		{
			model="RHS_6B28_EMR";
			ESS="Yes";
			Balaclava="No";
		};
		class rhs_6b28_ess_bala
		{
			model="RHS_6B28_EMR";
			ESS="Yes";
			Balaclava="Yes";
		};
//6B28 Flora
		class rhs_6b28_flora
		{
			model="RHS_6B28_Flora";
			ESS="No";
			Balaclava="No";
		};
		class rhs_6b28_flora_bala
		{
			model="RHS_6B28_Flora";
			ESS="No";
			Balaclava="Yes";
		}; 
		class rhs_6b28_flora_ess
		{
			model="RHS_6B28_Flora";
			ESS="Yes";
			Balaclava="No";
		};
		class rhs_6b28_flora_ess_bala
		{
			model="RHS_6B28_Flora";
			ESS="Yes";
			Balaclava="Yes";
		};
//6B47 EMR
		class rhs_6b47
		{
			model="RHS_6B47";
			Version= "1";
			ESS="No";
			Balaclava="No";
			Headset="No";
		};
		class rhs_6b47_6m2_1
		{
			model="RHS_6B47";
			Version= "1";
			ESS="No";
			Balaclava="No";
			Headset="6M21";
		};
		class rhs_6b47_6m2
		{
			model="RHS_6B47";
			Version= "1";
			ESS="No";
			Balaclava="No";
			Headset="6M2";
		};
		class rhs_6b47_bala
		{
			model="RHS_6B47";
			Version= "1";
			ESS="No";
			Balaclava="Yes";
			Headset="6M2";
		};
		class rhs_6b47_emr_2
		{
			model="RHS_6B47";
			Version= "2";
			ESS="No";
			Balaclava="No";
			Headset="No";
		};
		class rhs_6b47_emr_1
		{
			model="RHS_6B47";
			Version= "3";
			ESS="No";
			Balaclava="No";
			Headset="No";
		};
		class rhs_6b47_emr
		{
			model="RHS_6B47";
			Version= "4";
			ESS="No";
			Balaclava="No";
			Headset="No";
		};
		class rhs_6b47_6B50
		{
			model="RHS_6B47";
			Version= "4";
			ESS="Yes";
			Balaclava="No";
			Headset="No";
		};
		class rhs_6b47_ess
		{
			model="RHS_6B47";
			Version= "1";
			ESS="Yes";
			Balaclava="No";
			Headset="No";
		};
		class rhs_6b47_ess_bala
		{
			model="RHS_6B47";
			Version= "1";
			ESS="Yes";
			Balaclava="Yes";
			Headset="No";
		};
//6B7 Slick
		class rhs_6b7_1m
		{
			model="RHS_6B47";
			ESS="No";
			Balaclava="No";
		};
		class rhs_6b7_1m_bala2
		{
			model="RHS_6B47";
			ESS="No";
			Balaclava="Alt";
		};
		class rhs_6b7_1m_bala1
		{
			model="RHS_6B47";
			ESS="No";
			Balaclava="Yes";
		};
		class rhs_6b7_1m_ess
		{
			model="RHS_6B47";
			ESS="Yes";
			Balaclava="No";
		};
		class rhs_6b7_1m_ess_bala
		{
			model="RHS_6B47";
			ESS="Yes";
			Balaclava="Yes";
		};
//6B7 EMR
		class rhs_6b7_1m_emr
		{
			model="RHS_6B7_EMR";
			ESS="No";
			Balaclava="No";
		};
		class rhs_6b7_1m_bala2_emr
		{
			model="RHS_6B7_EMR";
			ESS="No";
			Balaclava="Alt";
		};
		class rhs_6b7_1m_bala1_emr
		{
			model="RHS_6B7_EMR";
			ESS="No";
			Balaclava="Yes";
		};
		class rhs_6b7_1m_emr_ess
		{
			model="RHS_6B7_EMR";
			ESS="Yes";
			Balaclava="No";
		};
		class rhs_6b7_1m_emr_ess_bala
		{
			model="RHS_6B7_EMR";
			ESS="Yes";
			Balaclava="Yes";
		};
//6B7 Flora
		class rhs_6b7_1m_flora
		{
			model="RHS_6B7_Flora";
			ESS="No";
			Balaclava="No";
		};
		class rhs_6b7_1m_bala1_flora
		{
			model="RHS_6B7_Flora";
			ESS="No";
			Balaclava="Alt";
		};
		class rhs_6b7_1m_bala2_flora
		{
			model="RHS_6B7_Flora";
			ESS="No";
			Balaclava="Yes";
		};
		class rhs_6b7_1m_flora_ns3
		{
			model="RHS_6B7_Flora";
			ESS="Yes";
			Balaclava="No";
		};
//6B7 Olive
		class rhs_6b7_1m_olive
		{
			model="RHS_6B7_Olive";
			Balaclava="No";
		};
		class rhs_6b7_1m_bala2_olive
		{
			model="RHS_6B7_Olive";
			Balaclava="Alt";
		};
		class rhs_6b7_1m_bala1_olive
		{
			model="RHS_6B7_Olive";
			Balaclava="Yes";
		};
//Altyn
		class rhs_altyn_novisor
		{
			model="RHS_Altyn";
			ESS="No";
			Balaclava="No";
			Visor="No";
		};
		class rhs_altyn_novisor_bala
		{
			model="RHS_Altyn";
			ESS="No";
			Balaclava="Yes";
			Visor="No";
		};
		class rhs_altyn_novisor_ess
		{
			model="RHS_Altyn";
			ESS="Yes";
			Balaclava="No";
			Visor="No";
		};
		class rhs_altyn_novisor_ess_bala
		{
			model="RHS_Altyn";
			ESS="Yes";
			Balaclava="Yes";
			Visor="No";
		};
		class rhs_altyn_visordown
		{
			model="RHS_Altyn";
			ESS="No";
			Balaclava="No";
			Visor="Down";
		};
		class rhs_altyn
		{
			model="RHS_Altyn";
			ESS="No";
			Balaclava="No";
			Visor="Up";
		};
		class rhs_altyn_bala
		{
			model="RHS_Altyn";
			ESS="No";
			Balaclava="Yes";
			Visor="Up";
		};
//Field Cap M88
		class rhs_fieldcap
		{
			model="RHS_M88Cap";
			Camo="Flora";
			Facing="Front";
		};
		class rhs_fieldcap_m88
		{
			model="RHS_M88Cap";
			Camo="M88";
			Facing="Front";
		};
		class rhs_fieldcap_m88_back
		{
			model="RHS_M88Cap";
			Camo="M88";
			Facing="Back";
		};
		class rhs_fieldcap_m88_grey
		{
			model="RHS_M88Cap";
			Camo="Grey";
			Facing="Front";
		};
		class rhs_fieldcap_m88_grey_back
		{
			model="RHS_M88Cap";
			Camo="Grey";
			Facing="Back";
		};
		class rhs_fieldcap_m88_klmk
		{
			model="RHS_M88Cap";
			Camo="KLMK";
			Facing="Front";
		};
		class rhs_fieldcap_m88_klmk_back
		{
			model="RHS_M88Cap";
			Camo="KLMK";
			Facing="Back";
		};
		class rhs_fieldcap_m88_moldovan_ttsko_blue
		{
			model="RHS_M88Cap";
			Camo="TTsKOMoldovanB";
			Facing="Front";
		};
		class rhs_fieldcap_m88_moldovan_ttsko_blue_back
		{
			model="RHS_M88Cap";
			Camo="TTsKOMoldovanB";
			Facing="Back";
		};
		class rhs_fieldcap_m88_moldovan_ttsko_cold
		{
			model="RHS_M88Cap";
			Camo="TTsKOMoldovanCold";
			Facing="Front";
		};
		class rhs_fieldcap_m88_moldovan_ttsko_cold_back
		{
			model="RHS_M88Cap";
			Camo="TTsKOMoldovanCold";
			Facing="Back";
		};
		class rhs_fieldcap_m88_moldovan_ttsko_desat
		{
			model="RHS_M88Cap";
			Camo="TTsKOmoldovanDesat";
			Facing="Front";
		};
		class rhs_fieldcap_m88_moldovan_ttsko_desat_back
		{
			model="RHS_M88Cap";
			Camo="TTsKOmoldovanDesat";
			Facing="Back";
		};
		class rhs_fieldcap_m88_moldovan_ttsko_hot
		{
			model="RHS_M88Cap";
			Camo="TTsKOMoldovanHot";
			Facing="Front";
		};
		class rhs_fieldcap_m88_moldovan_ttsko_hot_back
		{
			model="RHS_M88Cap";
			Camo="TTsKOMoldovanHot";
			Facing="Back";
		};
		class rhs_fieldcap_m88_ttsko_alt
		{
			model="RHS_M88Cap";
			Camo="TTsKOAlt";
			Facing="Front";
		};
		class rhs_fieldcap_m88_ttsko_alt_back
		{
			model="RHS_M88Cap";
			Camo="TTsKOAlt";
			Facing="Back";
		};
		class rhs_fieldcap_m88_ttsko_vdv
		{
			model="RHS_M88Cap";
			Camo="TTsKOABN";
			Facing="Front";
		};
		class rhs_fieldcap_m88_ttsko_vdv_back
		{
			model="RHS_M88Cap";
			Camo="TTsKOABN";
			Facing="Back";
		};
		class rhs_fieldcap_m88_ttsko
		{
			model="RHS_M88Cap";
			Camo="TTsKO";
			Facing="Front";
		};
		class rhs_fieldcap_m88_ttsko_back
		{
			model="RHS_M88Cap";
			Camo="TTsKO";
			Facing="Back";
		};
		class rhs_fieldcap_m88_vsr_2
		{
			model="RHS_M88Cap";
			Camo="VSR2";
			Facing="Front";
		};
		class rhs_fieldcap_m88_vsr_2_back
		{
			model="RHS_M88Cap";
			Camo="VSR2";
			Facing="Back";
		};
		class rhs_fieldcap_m88_vsr
		{
			model="RHS_M88Cap";
			Camo="VSR1";
			Facing="Front";
		};
		class rhs_fieldcap_m88_vsr_back
		{
			model="RHS_M88Cap";
			Camo="VSR1";
			Facing="Back";
		};
		class rhs_fieldcap_m88_woodland
		{
			model="RHS_M88Cap";
			Camo="M81";
			Facing="Front";
		};
		class rhs_fieldcap_m88_woodland_back
		{
			model="RHS_M88Cap";
			Camo="M81";
			Facing="Back";
		};
		class rhs_fieldcap_ml
		{
			model="RHS_M88Cap";
			Camo="ML";
			Facing="Front";
		};
		class rhs_fieldcap_khk
		{
			model="RHS_M88Cap";
			Camo="Khaki";
			Facing="Front";
		};
		class rhs_fieldcap_vsr
		{
			model="RHS_M88Cap";
			Camo="VSR";
			Facing="Front";
		};
		class rhsgref_fieldcap_ttsko_digi
		{
			model="RHS_M88Cap";
			Camo="Digi";
			Facing="Front";
		};
		class rhsgref_fieldcap_ttsko_forest
		{
			model="RHS_M88Cap";
			Camo="TTsKOForrest";
			Facing="Front";
		};
		class rhsgref_fieldcap_ttsko_mountain
		{
			model="RHS_M88Cap";
			Camo="TTsKOM";
			Facing="Front";
		};
		class rhsgref_fieldcap_ttsko_urban
		{
			model="RHS_M88Cap";
			Camo="TTsKOU";
			Facing="Front";
		};
//TSh-4
		class rhs_tsh4
		{
			model="RHS_TSh4";
			ESS="No";
			Balaclava="No";
		};
		class rhs_tsh4_bala
		{
			model="RHS_TSh4";
			ESS="No";
			Balaclava="Yes";
		}; 
		class rhs_tsh4_ess
		{
			model="RHS_TSh4";
			ESS="Yes";
			Balaclava="No";
		};
		class rhs_tsh4_ess_bala
		{
			model="RHS_TSh4";
			ESS="Yes";
			Balaclava="Yes";
		};
//ZSh-7A
		class rhs_zsh7a_mike
		{
			model="RHS_ZSh7A";
			Camo="White";
			Visor="Up";
			KM35="No";
		};
		class rhs_zsh7a_mike_alt
		{
			model="RHS_ZSh7A";
			Camo="White";
			Visor="Down";
			KM35="No";
		};
		class rhs_zsh7a_mike_green
		{
			model="RHS_ZSh7A";
			Camo="OD";
			Visor="Up";
			KM35="No";
		};
		class rhs_zsh7a_mike_green_alt
		{
			model="RHS_ZSh7A";
			Camo="OD";
			Visor="Down";
			KM35="No";
		};
		class rhs_zsh7a
		{
			model="RHS_ZSh7A";
			Camo="White";
			Visor="Up";
			KM35="Yes";
		};
		class rhs_zsh7a_alt
		{
			model="RHS_ZSh7A";
			Camo="White";
			Visor="Down";
			KM35="Yes";
		};
//Berets
		class rhs_beret_mp2
		{
			model="RHS_Russian_Berets";
			Unit="MP";
			Version="1";
		};
		class rhs_beret_mp1
		{
			model="RHS_Russian_Berets";
			Unit="MP";
			Version="2";
		};
		class rhs_beret_mvd
		{
			model="RHS_Russian_Berets";
			Unit="MVD";
			Version="1";
		};
		class rhs_beret_omon
		{
			model="RHS_Russian_Berets";
			Unit="OMON";
			Version="1";
		};
		class rhs_beret_vdv2
		{
			model="RHS_Russian_Berets";
			Unit="VDV";
			Version="1";
		};
		class rhs_beret_vdv_early
		{
			model="RHS_Russian_Berets";
			Unit="VDV";
			Version="2";
		};
		class rhs_beret_vdv3
		{
			model="RHS_Russian_Berets";
			Unit="VDV";
			Version="3";
		};
		class rhs_beret_vdv1
		{
			model="RHS_Russian_Berets";
			Unit="VDV";
			Version="4";
		};
		class rhs_beret_milp
		{
			model="RHS_Russian_Berets";
			Unit="VP";
			Version="1";
		};
//RHS Helmet With Cap
		class rhs_beret_milp
		{
			model="RHS_HMwC";
			Camo="EMR";
		};
		class rhs_beret_milp
		{
			model="RHS_HMwC";
			Camo="MTN";
		};
		class rhs_beret_milp
		{
			model="RHS_HMwC";
			Camo="Flora";
		};
	};
};