class CfgPatches
{
    class TheHive_Billboards_Scripts
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
			"DZ_Scripts",
			"DZ_Data",
            "DZ_Structures_Signs"
        };
    };
};

class CfgMods
{
	class TheHive_Billboards
	{
		dir="TheHive_Billboards"
		action = "";
		hideName = 0;
		hidePicture = 0;
		name = "The Hive - Billboards - Hyerakon";
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
				files[] = {"TheHive_Server_Utilities/TheHive_Billboards/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"TheHive_Server_Utilities/TheHive_Billboards/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"TheHive_Server_Utilities/TheHive_Billboards/Scripts/5_Mission"};
			};
		};
	};
};

class CfgVehicles
{
    class HouseNoDestruct;
    class Land_Bilboard_Base;

    //! From https://steamcommunity.com/sharedfiles/filedetails/?id=3464498306
    //! YOUUBE GUIDE: https://www.youtube.com/watch?v=iPNfUO4rknY
    //! NOT WORKING
    //class Land_TheHive_BenvenutiALivonia: HouseNoDestruct
    //{
    //    model="TheHive_Server_Utilities\TheHive_Billboards\textures\structures\signs\billboards\Land_TheHive_BenvenutiALivonia.p3d";
    //    hiddenSelectionsTextures[]=
    //    {
    //        "TheHive_Server_Utilities\TheHive_Billboards\textures\structures\signs\billboards\data\board_thehive1_co.paa"
    //    };
    //};    
    //
    //class Land_TheHive_TastiRapidi: HouseNoDestruct
    //{
    //    model="TheHive_Server_Utilities\TheHive_Billboards\textures\structures\signs\billboards\Land_TheHive_TastiRapidi.p3d";
    //    hiddenSelectionsTextures[]=
    //    {
    //        "TheHive_Server_Utilities\TheHive_Billboards\textures\structures\signs\billboards\data\board_thehive2_co.paa"
    //    };
    //};

    /*
        class Land_YOUR_SIGN: Land_Bilboard_Base
        {
            model="\DZ\structures\Signs\Billboards\Bilboard_Livonia_2.p3d";
            hiddenSelectionsTextures[]=
            {
                "YOUR_TEXTURE.paa"
            };
        };    
        
    
    
    */

    class Land_TheHive_BenvenutiALivonia: Land_Bilboard_Base
    {
        model="\DZ\structures\Signs\Billboards\Bilboard_Livonia_2.p3d";
        hiddenSelectionsTextures[]=
        {
            "TheHive_Server_Utilities\TheHive_Billboards\textures\structures\signs\billboards\data\board_thehive1_co.paa"
        };
    };

    class Land_TheHive_TastiRapidi: Land_Bilboard_Base
    {
        model="\DZ\structures\Signs\Billboards\Bilboard_Livonia_2.p3d";
        hiddenSelectionsTextures[]=
        {
            "TheHive_Server_Utilities\TheHive_Billboards\textures\structures\signs\billboards\data\board_thehive2_co.paa"
        };
    };
};