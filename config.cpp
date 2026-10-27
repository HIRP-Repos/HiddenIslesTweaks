#define _ARMA_

class CfgPatches
{
	class HIRPTweaks
	{
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Gear_Tools","DZ_Weapons_Magazines","TerjeMedicine","HaraldsArmoryMisc"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class HIRPTweaks
	{
		dir = "HiddenIslesTweaks";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Hidden Isles Tweaks";
		credits = "";
		author = "Dada,Fenr.EXE";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"HiddenIslesTweaks/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"HiddenIslesTweaks/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"HiddenIslesTweaks/scripts/5_Mission"};
			};
		};
	};
};