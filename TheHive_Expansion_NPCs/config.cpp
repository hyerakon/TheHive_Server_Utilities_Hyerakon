class CfgPatches
{
    class TheHive_Expansion_NPCs_Scripts
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Characters",
            "DZ_Characters_Zombies",
            "DayZExpansion_Market_Objects",
            "DayZExpansion_Market_Scripts",
            "DayZExpansion_PersonalStorageNew_Objects",
            "DayZExpansion_Objects_BaseBuilding_Safes",
            "DayZExpansion_Quests_Dta_Core"
        };
    };
};

class CfgMods
{
	class TheHive_Expansion_NPCs
	{
		action = "";
		hideName = 0;
		hidePicture = 0;
		name = "The Hive - Expansion NPCs - Hyerakon";
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
				files[] = {"TheHive_Server_Utilities_Hyerakon/TheHive_Expansion_NPCs/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"TheHive_Server_Utilities_Hyerakon/TheHive_Expansion_NPCs/Scripts/4_World"};
			};
            class missionScriptModule
			{
				value="";
				files[]= {"TheHive_Server_Utilities_Hyerakon/TheHive_Expansion_NPCs/Quests/Scripts/5_Mission"};
			};
		};
	};
};

class CfgVehicles
{
    //! Default base classes for our config
    //! Make sure you include the correct base classes here depending on the object(s) you are going to add.
    
    //! Pad Base Clsses
    class SurvivorF_Eva;
    class ZmbM_JournalistSkinny;

    //! NPC trader base class(es) from Expansion
    class ExpansionTraderDenis;

    //! Static trader base class from Expansion
    class ExpansionTraderStaticBase;

    //! Expansion new Personal Storage
    class ExpansionPersonalStorageHubChest;

    class ExpansionQuestObjectLocker;

    //! Example Infected trader
    class TheHive_Trader_ZmbM: ZmbM_JournalistSkinny
    {
        scope = 2;
        //name = "TheHive_Trader_ZmbM_JournalistSkinny";
        displayName = "$STR_THEHIVE_ZOMBIE_TRADER";
        descriptionShort="$STR_THEHIVE_ZOMBIE_TRADER_DESCRIPTION";
        vehicleClass = "Expansion_Trader";
    };

    //! Cash Register Trader
    class TheHive_CashRegister_Trader: ExpansionTraderStaticBase
    {
        scope = 1;
        //name = "TheHive_Cash_Register_Trader";
        displayName="$STR_THEHIVE_CASH_REGISTER_TRADER";
        descriptionShort="$STR_THEHIVE_CASH_REGISTER_TRADER_DESCRIPTION";
        model="\DZ\structures\furniture\generalstore\cashier.p3d";
        rotationFlags=12;
    };

    //! Vending Machine Trader
    class TheHive_VendingMachine_Trader: ExpansionTraderStaticBase
    {
        scope = 1;
        //name = "TheHive_Cash_Register_Trader";
        displayName="$STR_THEHIVE_VENDINGMACHINE_TRADER";
        descriptionShort="$STR_THEHIVE_VENDINGMACHINE_TRADER_DESCRIPTION";
        model="\DZ\structures\furniture\eletrical_appliances\vending_machine\vending_machine.p3d";
        rotationFlags=12;
    };

    //! Personal Storage Safe
    class TheHive_ExpansionPersonalStorageHub_Safe : ExpansionPersonalStorageHubChest
    {
        scope=1;
		displayName="$STR_EXPANSION_PERSONALSTORAGE";
		model="\DayZExpansion\Objects\Basebuilding\Safes\Safe_01\Safe_01.p3d";
		expansionPersonalStorageBase="ExpansionPersonalStorageContainer";        
    };

    //! Static object
    class TheHive_ExpansionQuestObject_Workbench: ExpansionQuestObjectLocker
    {
        scope = 1;
        model="DZ\structures\Furniture\Various\workbench_DZ.p3d";
        forceFarBubble="true";
    };

    //! Static object
    //class TheHive_ExpansionQuestObject_Blood: ExpansionQuestObjectLocker
    //{
    //    scope = 1;
    //    model="\DZ\data\ParticleEffects\Excretion\Vomit_blood_ground.p3d";
    //    forceFarBubble="true";
    //};

    
    
    /* Example for a static trader object
    *! Example for a static trader object
    *class ExpansionTraderLockerClosedBlueV1Custom: ExpansionTraderStaticBase
    *{
    *    scope = 1;
    *    displayName="$STR_EXPANSION_VENDING_MACHINE";
    *    model="\DZ\structures\furniture\cases\locker\locker_closed_blue_v1.p3d";
    *    rotationFlags=12;
    *}
    *! Example for a NPC trader
    *class MyCustomTraderEva: SurvivorF_Eva
    *{
    *    scope = 2;
    *    displayName = "Eva";
    *    vehicleClass = "Expansion_Trader";
    *}
    *! Example Enfusion AI NPC trader using Expansion NPC
    *class MyCustomTraderAIDenis: ExpansionTraderDenis {}
    *! Example Enfusion AI NPC trader using your custom NPC
    *class MyCustomTraderAIEva: MyCustomTraderEva {};
    */
};