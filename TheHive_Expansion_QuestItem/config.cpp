class CfgPatches
{
    class TheHive_QuestItems_Scripts
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DayZExpansion_Quests_Scripts"
        };
    };
};

class CfgMods
{
	class TheHive_QuestItems
	{
		action = "";
		hideName = 0;
		hidePicture = 0;
		name = "The Hive - Quest Items - Hyerakon";
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
				files[] = {"TheHive_Server_Utilities/TheHive_Expansion_QuestItem/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"TheHive_Server_Utilities/TheHive_Expansion_QuestItem/Scripts/4_World"};
			};
            class missionScriptModule
			{
				value="";
				files[]= {"TheHive_Server_Utilities/TheHive_Expansion_QuestItem/Quests/Scripts/5_Mission"};
			};
		};
	};
};

class CfgVehicles
{
    class ExpansionQuestItemPaper;
    class ExpansionQuestItemPackage;
    class ExpansionQuestItemBook;

    class TheHive_4_Paper: ExpansionQuestItemPaper
    {
        scope = 2;
        name = "TheHive_4_Paper";
        displayName = "$STR_THEHIVE_QUEST_ITEM_4";
        descriptionShort="$STR_THEHIVE_QUEST_ITEM_4_DESCRIPTION";
    };
    
    class TheHive_1002_Paper: ExpansionQuestItemPaper
    {
        scope = 2;
        name = "TheHive_1002_Paper";
        displayName = "$STR_THEHIVE_QUEST_ITEM_1002";
        descriptionShort="$STR_THEHIVE_QUEST_ITEM_1002_DESCRIPTION";
    };

	class TheHive_1005_Paper: ExpansionQuestItemPaper
    {
        scope = 2;
        name = "TheHive_1005_Paper";
        displayName = "$STR_THEHIVE_QUEST_ITEM_1005";
        descriptionShort="$STR_THEHIVE_QUEST_ITEM_1005_DESCRIPTION";
    };

    class TheHive_10000_Paper: ExpansionQuestItemPaper
    {
        scope = 2;
        name = "TheHive_10000_Paper";
        displayName = "$STR_THEHIVE_QUEST_ITEM_10000";
        descriptionShort="$STR_THEHIVE_QUEST_ITEM_10000_DESCRIPTION";
    };

    class TheHive_20000_Paper: ExpansionQuestItemPaper
    {
        scope = 2;
        name = "TheHive_20000_Paper";
        displayName = "$STR_THEHIVE_QUEST_ITEM_20000";
        descriptionShort ="$STR_THEHIVE_QUEST_ITEM_20000_DESCRIPTION";
    };
    
    class TheHive_QuestItemPackageSKS: ExpansionQuestItemPackage
    {
        scope = 2;
        name = "TheHive_QuestItemPackageSKS";
        displayName = "$STR_THEHIVE_QUEST_ITEM_SKS_PACKAGE";
        descriptionShort ="$STR_THEHIVE_QUEST_ITEM_SKS_PACKAGE_DESCRIPTION";
    };

    class TheHive_QuestItemPackagePioneer: ExpansionQuestItemPackage
    {
        scope = 2;
        name = "TheHive_QuestItemPackagePioneer";
        displayName = "$STR_THEHIVE_QUEST_ITEM_PIONEER_PACKAGE";
        descriptionShort ="$STR_THEHIVE_QUEST_ITEM_PIONEER_PACKAGE_DESCRIPTION";
    };

    class TheHive_QuestItemPackageFoodOMatic: ExpansionQuestItemPackage
    {
        scope = 2;
        name = "TheHive_QuestItemPackageFoodOMatic";
        displayName = "$STR_THEHIVE_QUEST_ITEM_FOODOMATIC_PACKAGE";
        descriptionShort="$STR_THEHIVE_QUEST_ITEM_FOODOMATIC_PACKAGE_DESCRIPTION";
    };
};