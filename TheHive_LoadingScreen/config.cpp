class CfgPatches
{
    class TheHive_LoadingScreen_Scripts
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
			"DZ_Scripts"
        };
    };
};

class CfgMods
{
	class TheHive_LoadingScreen
	{
		dir="TheHive_LoadingScreen"
		action = "";
		hideName = 0;
		hidePicture = 0;
		name = "The Hive - Loading Screen - Hyerakon";
		credits = "DayZ Expansion and Hyerakon";
		author = "Hyerakon - Luigi Francesco Ricatti";
		authorID = "";
		version = "0.1";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"TheHive_Server_Utilities_Hyerakon/TheHive_LoadingScreen/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"TheHive_Server_Utilities_Hyerakon/TheHive_LoadingScreen/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"TheHive_Server_Utilities_Hyerakon/TheHive_LoadingScreen/Scripts/5_Mission"};
			};
		};
	};
};