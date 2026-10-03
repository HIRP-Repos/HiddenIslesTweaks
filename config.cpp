#define _ARMA_

class CfgPatches
{
	class HIRPTweaks
	{
		requiredAddons[] = {"DZ_Data","DZ_Scripts"};
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
				files[] = {"HIRPServerPack\scripts\3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"HIRPServerPack\scripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"HIRPServerPack\scripts\5_Mission"};
			};
		};
	};
};