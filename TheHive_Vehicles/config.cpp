class CfgPatches
{
    class TheHive_Vehicles_Scripts
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
			"DZ_Scripts",
			"DZ_Data",
            "DZ_Vehicles_Wheeled"
        };
    };
};

class CfgMods
{
	class TheHive_Vehicles
	{
		dir="TheHive_Vehicles"
		action = "";
		hideName = 0;
		hidePicture = 0;
		name = "The Hive - Vehicles - Hyerakon";
		credits = "Hyerakon";
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
				files[] = {"TheHive_Server_Utilities/TheHive_Vehicles/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"TheHive_Server_Utilities/TheHive_Vehicles/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"TheHive_Server_Utilities/TheHive_Vehicles/Scripts/5_Mission"};
			};
		};
	};

	//class PreloadVehicles
	//{
	//	class Hatchback_02_TheHive_Concordia
	//	{
	//		loadStyle=2;
	//	};
	//
	//	class Hatchback_02_TheHive_Delta
	//	{
	//		loadStyle=2;
	//	};
	//};
};