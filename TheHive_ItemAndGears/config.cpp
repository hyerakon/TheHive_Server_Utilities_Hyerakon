class CfgPatches
{
    class TheHive_ItemAndGears_Scripts
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
			"DZ_Scripts"
        };
    };
};

class CfgMods
{
	class TheHive_ItemAndGears
	{
		action = "";
		hideName = 0;
		hidePicture = 0;
		name = "The Hive - Item & Gears - Hyerakon";
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
				files[] = {"TheHive_Server_Utilities/TheHive_ItemAndGears/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"TheHive_Server_Utilities/TheHive_ItemAndGears/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value="";
				files[]= {"TheHive_Server_Utilities/TheHive_ItemAndGears/Quests/Scripts/5_Mission"};
			};
		};
	};
};

class CfgVehicles
{
    
    class Clothing;
	class NBCHoodBase : Clothing
	{
		// inventorySlot = define which attachments this item can go on.
		inventorySlot[] +=
		{
			"TheHive_NBC_Hood"
		};
	};
    class NBCJacketBase : Clothing
	{
		// inventorySlot = define which attachments this item can go on.
		inventorySlot[] +=
		{
			"TheHive_NBC_Jacket"
		};
	};
    class NBCPantsBase : Clothing
	{
		// inventorySlot = define which attachments this item can go on.
		inventorySlot[] +=
		{
			"TheHive_NBC_Pants"
		};
	};
    class NBCBootsBase : Clothing
	{
		// inventorySlot = define which attachments this item can go on.
		inventorySlot[] +=
		{
			"TheHive_NBC_Boots"
		};
	};
    class NBCGloves_ColorBase : Clothing
	{
		// inventorySlot = define which attachments this item can go on.
		inventorySlot[] +=
		{
			"TheHive_NBC_Gloves"
		};
	
	};

	class Inventory_Base;
    class Edible_Base;
    class Morphine: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TheHive_Injectors1",
            "TheHive_Injectors2",
            "TheHive_Injectors3",
            "TheHive_Injectors4"
        };
    };
    class Epinephrine: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TheHive_Injectors1",
            "TheHive_Injectors2",
            "TheHive_Injectors3",
            "TheHive_Injectors4"
        };
    };
    class AntiChemInjector: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TheHive_Injectors1",
            "TheHive_Injectors2",
            "TheHive_Injectors3",
            "TheHive_Injectors4"
        };
    };
    class PainkillerTablets: Edible_Base
    {
        inventorySlot[]+=
        {
            "TheHive_Pills1",
            "TheHive_Pills2",
            "TheHive_Pills3",
            "TheHive_Pills4",
            "TheHive_Pills5",
            "TheHive_Pills6"
        };
    };
    class CharcoalTablets: Edible_Base
    {
        inventorySlot[]+=
        {
            "TheHive_Pills1",
            "TheHive_Pills2",
            "TheHive_Pills3",
            "TheHive_Pills4",
            "TheHive_Pills5",
            "TheHive_Pills6"
        };
    };
    class TetracyclineAntibiotics: Edible_Base
    {
        inventorySlot[]+=
        {
            "TheHive_Pills1",
            "TheHive_Pills2",
            "TheHive_Pills3",
            "TheHive_Pills4",
            "TheHive_Pills5",
            "TheHive_Pills6"
        };
    };
    class ChelatingTablets: Edible_Base
    {
        inventorySlot[]+=
        {
            "TheHive_Pills1",
            "TheHive_Pills2",
            "TheHive_Pills3",
            "TheHive_Pills4",
            "TheHive_Pills5",
            "TheHive_Pills6"
        };
    };
    class VitaminBottle: Edible_Base
    {
        inventorySlot[]+=
        {
            "TheHive_Pills1",
            "TheHive_Pills2",
            "TheHive_Pills3",
            "TheHive_Pills4",
            "TheHive_Pills5",
            "TheHive_Pills6"
        };
    };
    class PurificationTablets: Edible_Base
    {
        inventorySlot[]+=
        {
            "TheHive_Pills1",
            "TheHive_Pills2",
            "TheHive_Pills3",
            "TheHive_Pills4",
            "TheHive_Pills5",
            "TheHive_Pills6"
        };
    };
    class BandageDressing: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TheHive_Bandages1",
            "TheHive_Bandages2",
            "TheHive_Bandages3",
            "TheHive_Bandages4"
        };
    };	
	class IodineTincture: Edible_Base
    {
        inventorySlot[]+=
        {
            "TheHive_Disinfectants1"
        };
    };
    class DisinfectantSpray: Edible_Base
    {
        inventorySlot[]+=
        {
            "TheHive_Disinfectants1"
        };
    };
    class DisinfectantAlcohol: Edible_Base
    {
        inventorySlot[]+=
        {
            "TheHive_Disinfectants1"
        };
    };
    class BloodBagEmpty: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TheHive_BloodSupplies1",
            "TheHive_BloodSupplies2",
            "TheHive_BloodSupplies3"
        };
    };
    class BloodBagFull: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TheHive_BloodSupplies1",
            "TheHive_BloodSupplies2",
            "TheHive_BloodSupplies3"
        };
    };
    class BloodBagIV: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TheHive_BloodSupplies1",
            "TheHive_BloodSupplies2",
            "TheHive_BloodSupplies3"
        };
    };
    class SalineBag: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TheHive_BloodSupplies1",
            "TheHive_BloodSupplies2",
            "TheHive_BloodSupplies3"
        };
    };
    class SalineBagIV: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TheHive_BloodSupplies1",
            "TheHive_BloodSupplies2",
            "TheHive_BloodSupplies3"
        };
    };
    class StartKitIV: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TheHive_BloodSupplies1",
            "TheHive_BloodSupplies2",
            "TheHive_BloodSupplies3"
        };
    };
		
    //! BACKPACKs
    class AssaultBag_ColorBase;
    class TheHive_AssaultBag_Concordia: AssaultBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_boulder_m53_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_boulder_m53_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_boulder_m53_concordia_co.paa"
		};
	};
    class TheHive_AssaultBag_Delta: AssaultBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_boulder_m53_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_boulder_m53_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_boulder_m53_delta_co.paa"
		};
	};
    class TheHive_AssaultBag_G4: AssaultBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_boulder_m53_g4_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_boulder_m53_g4_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_boulder_m53_g4_co.paa"
		};
	};
    
    class ChildBag_ColorBase;
    class TheHive_ChildBag_Ape: ChildBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_childs_ape_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_childs_ape_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_childs_ape_co.paa"
		};
	};
    class TheHive_ChildBag_Aquila: ChildBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_childs_aquila_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_childs_aquila_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_childs_aquila_co.paa"
		};
	};
    class TheHive_ChildBag_Leone: ChildBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_childs_leone_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_childs_leone_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_childs_leone_co.paa"
		};
	};
    class TheHive_ChildBag_Pene: ChildBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_childs_pene_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_childs_pene_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_childs_pene_co.paa"
		};
	};
    
    class CoyoteBag_ColorBase;
    class TheHive_CoyoteBag_Brown: CoyoteBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\CoyoteBP_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\CoyoteBP_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\CoyoteBP_co.paa"
		};
	};

    class DryBag_ColorBase;
    class TheHive_DryBag_Concordia: DryBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_drybag_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_drybag_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_drybag_concordia_co.paa"
		};
	};
    class TheHive_DryBag_Delta: DryBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_drybag_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_drybag_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_drybag_delta_co.paa"
		};
	};
    
    class DuffelBagSmall_ColorBase;
    class TheHive_DuffelBagSmall_Black: DuffelBagSmall_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_duffelbagsmall_black_ca.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_duffelbagsmall_black_ca.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_duffelbagsmall_black_ca.paa"
		};
	};
    class TheHive_DuffelBagSmall_Green: DuffelBagSmall_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_duffelbagsmall_green_ca.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_duffelbagsmall_green_ca.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_duffelbagsmall_green_ca.paa"
		};
	};
    class TheHive_DuffelBagSmall_NotaCola: DuffelBagSmall_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_duffelbagsmall_notacola_ca.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_duffelbagsmall_notacola_ca.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_duffelbagsmall_notacola_ca.paa"
		};
	};
    class TheHive_DuffelBagSmall_Pipsi: DuffelBagSmall_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_duffelbagsmall_pipsi_ca.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_duffelbagsmall_pipsi_ca.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_duffelbagsmall_pipsi_ca.paa"
		};
	};
    class TheHive_DuffelBagSmall_Yellow: DuffelBagSmall_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_duffelbagsmall_yellow_ca.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_duffelbagsmall_yellow_ca.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_duffelbagsmall_yellow_ca.paa"
		};
	};
    
    class HuntingBag;
    class TheHive_HuntingBag_Black: HuntingBag
    {
        scope=2;
        visibilityModifier=0.80000001;
        hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_black_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_black_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_black_co.paa"
		};
    };
    class TheHive_HuntingBag_Blue: HuntingBag
    {
        scope=2;
        visibilityModifier=0.80000001;
        hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_blu_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_blu_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_blu_co.paa"
		};
    };
    class TheHive_HuntingBag_G1: HuntingBag
    {
        scope=2;
        visibilityModifier=0.80000001;
        hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_g1_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_g1_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_g1_co.paa"
		};
    };    
    class TheHive_HuntingBag_Green: HuntingBag
    {
        scope=2;
        visibilityModifier=0.80000001;
        hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_green_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_green_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_green_co.paa"
		};

    };
    class TheHive_HuntingBag_Grey: HuntingBag
    {
        scope=2;
        visibilityModifier=0.80000001;
        hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_grey_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_grey_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_grey_co.paa"
		};

    };
    class TheHive_HuntingBag_Red: HuntingBag
    {
        scope=2;
        visibilityModifier=0.80000001;
        hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_red_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_red_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_hunting_red_co.paa"
		};

    };
    
    class MountainBag_ColorBase;
    class TheHive_MountainBag_Green: MountainBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\Mountain_Green_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\Mountain_Green_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\Mountain_Green_co.paa"
		};
	};
    
    class SlingBag_ColorBase;
    class TheHive_SlingBag_Brown: SlingBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\SlingBag_CO.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\SlingBag_CO.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\SlingBag_CO.paa"
		};
	};
    
    class TaloonBag_ColorBase;
    class TheHive_TaloonBag_Black: TaloonBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_black_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_black_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_black_co.paa"
		};
	};
    class TheHive_TaloonBag_Blue: TaloonBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_blue_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_blue_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_blue_co.paa"
		};
	};
    class TheHive_TaloonBag_Concordia: TaloonBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_concordia_co.paa"
		};
	};
    class TheHive_TaloonBag_Green: TaloonBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_green_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_green_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_green_co.paa"
		};
	};
    class TheHive_TaloonBag_Grey: TaloonBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_grey_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_grey_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_grey_co.paa"
		};
	};
    class TheHive_TaloonBag_Red: TaloonBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_red_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_red_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_red_co.paa"
		};
	};
    class TheHive_TaloonBag_Yellow: TaloonBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_yellow_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_yellow_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\thehive_taloon_yellow_co.paa"
		};
	};
    
    
    class TortillaBag;
    class TheHive_TortillaBag_Winter: TortillaBag
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\tortila_winter_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\tortila_winter_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\backpacks\data\tortila_winter_co.paa"
		};
	};
    
	class SmershBag;
    class TheHive_SmershBag_Black: SmershBag
	{
		scope=2;
		displayName="$STR_cfgVehicles_SmershBag0";
		descriptionShort="$STR_cfgVehicles_SmershBag1";
		model="\dz\characters\backpacks\SmershBag_alternate_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back",
			"VestBackpack"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={4,4};
		itemsCargoSize[]={6,4};
		weight=600;
		varWetMax=0.79000002;
		heatIsolation=0.2;
		visibilityModifier=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Military";
		randomQuantity=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_smersh_black_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_smersh_black_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_smersh_black_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\SmershBag_m.p3d";
			female="\DZ\characters\backpacks\SmershBag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\Smersh.rvmat",
								"DZ\Characters\backpacks\data\Smersh_g.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\Smersh.rvmat",
								"DZ\Characters\backpacks\data\Smersh_g.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\Smersh_damage.rvmat",
								"DZ\Characters\backpacks\data\Smersh_g_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\Smersh_damage.rvmat",
								"DZ\Characters\backpacks\data\Smersh_g_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\Smersh_destruct.rvmat",
								"DZ\Characters\backpacks\data\Smersh_g_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Metal_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Metal_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
    class TheHive_SmershBag_Concordia: SmershBag
	{
		scope=2;
		displayName="$STR_cfgVehicles_SmershBag0";
		descriptionShort="$STR_cfgVehicles_SmershBag1";
		model="\dz\characters\backpacks\SmershBag_alternate_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back",
			"VestBackpack"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={4,4};
		itemsCargoSize[]={6,4};
		weight=600;
		varWetMax=0.79000002;
		heatIsolation=0.2;
		visibilityModifier=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Military";
		randomQuantity=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_smersh_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_smersh_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_smersh_concordia_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\SmershBag_m.p3d";
			female="\DZ\characters\backpacks\SmershBag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\Smersh.rvmat",
								"DZ\Characters\backpacks\data\Smersh_g.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\Smersh.rvmat",
								"DZ\Characters\backpacks\data\Smersh_g.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\Smersh_damage.rvmat",
								"DZ\Characters\backpacks\data\Smersh_g_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\Smersh_damage.rvmat",
								"DZ\Characters\backpacks\data\Smersh_g_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\Smersh_destruct.rvmat",
								"DZ\Characters\backpacks\data\Smersh_g_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Metal_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Metal_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};

    //! BELTs
    class PlateCarrierHolster_Black;
    class TheHive_PlateCarrierHolster_Blue: PlateCarrierHolster_Black
    {
        hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_blue_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_blue_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_blue_co.paa"
		};
    };
    class TheHive_PlateCarrierHolster_Delta: PlateCarrierHolster_Black
    {
        hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_delta_co.paa"
		};
    };
    class TheHive_PlateCarrierHolster_Red: PlateCarrierHolster_Black
    {
        hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_red_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_red_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_red_co.paa"
		};
    };

    //! HEADGEARs
    class DarkMotoHelmet_ColorBase;
    class TheHive_DarkMotoHelmet_Giallo1: DarkMotoHelmet_ColorBase
	{
		scope=2;
        displayName="Casco Giallo";
		descriptionShort="Il Casco di Giallo 1";
		model="\DZ\characters\headgear\MotoHelmet_scarred_ground.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo_scarred",
			"camoGround",
			"camoGround_scarred"
		};
        hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\motohelmetvisor_dark_co.paa",
			"dz\characters\headgear\data\motohelmetvisor_scarred_co.paa",
            "dz\characters\headgear\data\motohelmet_yellow_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_motohelmet_scarred_giallo1_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MotoHelmet_scarred.p3d";
			female="\DZ\characters\headgear\MotoHelmet_scarred.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=60;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\MotoHelmet.rvmat",
								"DZ\characters\headgear\data\motohelmetvisor_nontrans.rvmat",
								"DZ\characters\headgear\data\motohelmet_scarred.rvmat",
								"DZ\characters\headgear\data\MotoHelmetVisor_scarred.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\MotoHelmet.rvmat",
								"DZ\characters\headgear\data\motohelmetvisor_nontrans.rvmat",
								"DZ\characters\headgear\data\motohelmet_scarred.rvmat",
								"DZ\characters\headgear\data\MotoHelmetVisor_scarred.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
								"DZ\characters\headgear\data\motohelmetvisor_nontrans_damage.rvmat",
								"DZ\characters\headgear\data\motohelmet_scarred_damage.rvmat",
								"DZ\characters\headgear\data\MotoHelmetVisor_scarred_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
								"DZ\characters\headgear\data\motohelmetvisor_nontrans_damage.rvmat",
								"DZ\characters\headgear\data\motohelmet_scarred_damage.rvmat",
								"DZ\characters\headgear\data\MotoHelmetVisor_scarred_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat",
								"DZ\characters\headgear\data\motohelmetvisor_nontrans_destruct.rvmat",
								"DZ\characters\headgear\data\motohelmet_scarred_destruct.rvmat",
								"DZ\characters\headgear\data\MotoHelmetVisor_scarred_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.34999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.34999999;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.34999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.34999999;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeMachete";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeMachete_Heavy";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeMachete_Heavy";
				range=3.3;
			};
		};
	};
    class TheHive_DarkMotoHelmet_Giallo2: TheHive_DarkMotoHelmet_Giallo1
    {
        descriptionShort="Il Casco di Giallo 2";

        hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\motohelmetvisor_dark_co.paa",
			"dz\characters\headgear\data\motohelmetvisor_scarred_co.paa",
            "dz\characters\headgear\data\motohelmet_yellow_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_motohelmet_scarred_giallo2_co.paa"
		};

    }; 
    class TheHive_DarkMotoHelmet_Giallo3: TheHive_DarkMotoHelmet_Giallo1
    {
        descriptionShort="Il Casco di Giallo 3";

        hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\motohelmetvisor_dark_co.paa",
			"dz\characters\headgear\data\motohelmetvisor_scarred_co.paa",
            "dz\characters\headgear\data\motohelmet_yellow_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_motohelmet_scarred_giallo3_co.paa"
		};

    }; 
    class TheHive_DarkMotoHelmet_Giallo4: TheHive_DarkMotoHelmet_Giallo1
    {
        descriptionShort="Il Casco di Giallo 4";

        hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\motohelmetvisor_dark_co.paa",
			"dz\characters\headgear\data\motohelmetvisor_scarred_co.paa",
            "dz\characters\headgear\data\motohelmet_yellow_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_motohelmet_scarred_giallo4_co.paa"
		};

    }; 
    class TheHive_DarkMotoHelmet_Giallo5: TheHive_DarkMotoHelmet_Giallo1
    {
        descriptionShort="Il Casco di Giallo 5";

        hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\motohelmetvisor_dark_co.paa",
			"dz\characters\headgear\data\motohelmetvisor_scarred_co.paa",
            "dz\characters\headgear\data\motohelmet_yellow_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_motohelmet_scarred_giallo5_co.paa"
		};

    }; 
    class TheHive_DarkMotoHelmet_GialloX: TheHive_DarkMotoHelmet_Giallo1
    {
        descriptionShort="Il Casco di un Giallo ignoto";

        hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\motohelmetvisor_dark_co.paa",
			"dz\characters\headgear\data\motohelmetvisor_scarred_co.paa",
            "dz\characters\headgear\data\motohelmet_yellow_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_motohelmet_scarred_giallox_co.paa"
		};

    }; 
	
    class Bandana_ColorBase;
    class TheHive_Bandana_Blue: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_blue_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_blue_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_blue_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_blue_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_blue_co.paa"
		};
	};
	class TheHive_Bandana_Green: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_green_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_green_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_green_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_green_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_green_co.paa"
		};
	};
	class TheHive_Bandana_Red: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_red_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_red_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_red_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_red_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_red_co.paa"
		};
	};
	class TheHive_Bandana_Yellow: Bandana_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_yellow_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_yellow_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_yellow_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_yellow_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_bandana_yellow_co.paa"
		};
	};

    //! PANTs
    class ParamedicPants_ColorBase;
    class TheHive_ParamedicPants_Concordia: ParamedicPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\pants\data\thehive_paramedic_pants_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\pants\data\thehive_paramedic_pants_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\pants\data\thehive_paramedic_pants_concordia_co.paa",
		};
	};

    //! TOPS
    class ParamedicJacket_ColorBase;
    class TShirt_ColorBase;
    class TheHive_ParamedicJacket_Concordia: ParamedicJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\tops\data\thehive_paramedic_jacket_g_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\tops\data\thehive_paramedic_jacket_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\tops\data\thehive_paramedic_jacket_concordia_co.paa"
		};
	};
    class TheHive_TShirt_Delta: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_tshirt_ground_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_tshirt_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\headgear\data\thehive_tshirt_delta_co.paa"
		};
	};
    
    class Armband_ColorBase;
    class TheHive_Armband_Concordia: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		color="Livonia";
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_concordia_co.paa"
		};
	};
    class TheHive_Armband_Delta: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		color="Livonia";
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_delta_co.paa"
		};
	};
    class TheHive_Armband_Livonia: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		color="Livonia";
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_livonia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_livonia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_livonia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_livonia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_livonia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_livonia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_livonia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_livonia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_livonia_co.paa"
		};
	};
    class TheHive_Armband_TheHive: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		color="Livonia";
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_thehive_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_thehive_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_thehive_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_thehive_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_thehive_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_thehive_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_thehive_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_thehive_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_thehive_co.paa"
		};
	};
    
    //! VESTs
    class PlateCarrierVest_Black;
    class PlateCarrierPouches_Black;
	class TheHive_PlateCarrierVest_Blue: PlateCarrierVest_Black
    {
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_blue_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_blue_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_blue_co.paa"
		};
    };
    class TheHive_PlateCarrierPouches_Blue: PlateCarrierPouches_Black
    {
        hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_blue_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_blue_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_blue_co.paa"
		};
    };
    class TheHive_PlateCarrierVest_Delta: PlateCarrierVest_Black
    {
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_delta_co.paa"
		};
    };
    class TheHive_PlateCarrierPouches_Delta: PlateCarrierPouches_Black
    {
        hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_delta_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_delta_co.paa"
		};
    };
    class TheHive_PlateCarrierVest_Red: PlateCarrierVest_Black
    {
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_red_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_red_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_red_co.paa"
		};
    };
    class TheHive_PlateCarrierPouches_Red: PlateCarrierPouches_Black
    {
        hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_red_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_red_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_ballisticvest_red_co.paa"
		};
    };
    
    class PressVest_ColorBase;
    class TheHive_PressVest_Black: PressVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_pressvest_black_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_pressvest_black_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_pressvest_black_co.paa"
		};
	};
    class TheHive_PressVest_Blue: PressVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_pressvest_blue_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_pressvest_blue_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_pressvest_blue_co.paa"
		};
	};
    class TheHive_PressVest_Green: PressVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_pressvest_green_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_pressvest_green_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_pressvest_green_co.paa"
		};
	};
    class TheHive_PressVest_Grey: PressVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_pressvest_grey_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_pressvest_grey_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_pressvest_grey_co.paa"
		};
	};
    class TheHive_PressVest_Red: PressVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_pressvest_red_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_pressvest_red_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_pressvest_red_co.paa"
		};
	};

    
    class TheHive_SmershVest_Black: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_SmershVest0";
		descriptionShort="$STR_CfgVehicles_SmershVest1";
		model="\DZ\characters\vests\smersh_g.p3d";
		attachments[]=
		{
			"VestBackpack",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
		inventorySlot[]=
		{
			"Vest"
		};
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=220;
		itemSize[]={3,3};
		itemsCargoSize[]={4,4};
		quickBarBonus=2;
		varWetMax=0.49000001;
		heatIsolation=0.1;
		repairableWithKits[]={3};
		repairCosts[]={25};
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_smersh_g_black_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_smersh_black_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_smersh_black_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\vests\smersh_m.p3d";
			female="\DZ\characters\vests\smersh_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=110;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\vests\Data\Smersh.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\vests\Data\Smersh.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\vests\Data\Smersh_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\vests\Data\Smersh_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\vests\Data\Smersh_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimationSources
		{
			class Buttpack
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
    class TheHive_SmershVest_Concordia: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_SmershVest0";
		descriptionShort="$STR_CfgVehicles_SmershVest1";
		model="\DZ\characters\vests\smersh_g.p3d";
		attachments[]=
		{
			"VestBackpack",
			"TheHive_Injectors1",
            "TheHive_Injectors2",
            "TheHive_Injectors3",
            "TheHive_Injectors4"
		};
		inventorySlot[]=
		{
			"Vest"
		};
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=220;
		itemSize[]={3,3};
		itemsCargoSize[]={4,4};
		quickBarBonus=2;
		varWetMax=0.49000001;
		heatIsolation=0.1;
		repairableWithKits[]={3};
		repairCosts[]={25};
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_smersh_g_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_smersh_concordia_co.paa",
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\characters\vests\data\thehive_smersh_concordia_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\vests\smersh_m.p3d";
			female="\DZ\characters\vests\smersh_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=110;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\vests\Data\Smersh.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\vests\Data\Smersh.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\vests\Data\Smersh_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\vests\Data\Smersh_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\vests\Data\Smersh_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimationSources
		{
			class Buttpack
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};

    //! CONTAINERs
    class SmallProtectorCase;

	class TheHive_AdminCase: SmallProtectorCase
	{
		displayName="Il Buco di Poyson";
		descriptionShort = "Come buttare una tiktak in un canyon";
		itemSize[] = {1,1};
		attachments[]+=
		{
			"Shoulder",
			"Melee",
			"Vest",
			"Body",
			"Hips",
			"Legs",
			"Back",
			"Headgear",
			"Mask",
			"Eyewear",
			"Gloves",
			"Feet",
			"Armband"
		};
		class Cargo
		{
			itemsCargoSize[]={10,500};
		};

		hiddenSelections[]={"zbytek"};
        hiddenSelectionsMaterials[]={"DZ\gear\containers\data\Protector_Case.rvmat"};
        hiddenSelectionsTextures[]={"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\containers\data\thehive_loot_protectorcase_delta_co.paa"};
	};

    class TheHive_ProtectorCase: SmallProtectorCase
	{
		displayName = "Custodia Protettiva Δ-NBC";
		descriptionShort = "Custodia protettiva The Hive per equipaggiamento NBC.";
		itemSize[] = {4,3};
		itemCargoSize[] = {4,4};

        hiddenSelections[]={"zbytek"};
        hiddenSelectionsMaterials[]={"DZ\gear\containers\data\Protector_Case.rvmat"};
        hiddenSelectionsTextures[]={"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\containers\data\thehive_loot_protectorcase_delta_co.paa"};

		// attachments = define which items can attach onto this item.
		attachments[] +=
		{
			"TheHive_NBC_Hood",
            "TheHive_NBC_Jacket",
            "TheHive_NBC_Pants",
            "TheHive_NBC_Boots",
            "TheHive_NBC_Gloves"
		};
		
		// inventorySlot = define which attachments this item can go on.
		inventorySlot[] +=
		{
			"Backpack_1",
			"Belt_Left",
			"Belt_Back"
		};

        class InventorySlotsOffsets
        {
            class Belt_Left
            {
                position[]={0,-0.05,0}; // Position offset: X (left/right), Y (up/down), Z (forward/backward)
                orientation[]={0,180,180}; // Rotation: X (tilt forward/backward), Y (rotate left/right), Z (tilt sideways)
            };

            class Belt_Back
            {
                position[]={0,-0.05,0}; // Position offset: X (left/right), Y (up/down), Z (forward/backward)
                orientation[]={90,180,180}; // Rotation: X (tilt forward/backward), Y (rotate left/right), Z (tilt sideways)
            };
        };
    };

    class TheHive_FirstAidCase_Concordia: SmallProtectorCase
    {
        scope=2;
        displayName="Kit Raccolta Campioni - Progetto Concordia";
        descriptionShort="Un Kit Medico Completo di The Hive";
        model="\dz\gear\containers\Protector_Case.p3d";
        rotationFlags=17;
        weight=980;
        itemSize[]={4,4};
        itemsCargoSize[]={4,4};
        canBeDigged=1;
        isMeleeWeapon=1;
        allowOwnedCargoManipulation=1;
        randomQuantity=2;
        repairableWithKits[]={8};
        repairCosts[]={25};

        hiddenSelections[]={"zbytek"};
        hiddenSelectionsMaterials[]={"DZ\gear\containers\data\Protector_Case.rvmat"};
        hiddenSelectionsTextures[]={"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\containers\data\thehive_loot_protectorcase_concordia_co.paa"};

        attachments[] +=
        {
            "TheHive_Pills1",
            "TheHive_Pills2",
            "TheHive_Pills3",
            "TheHive_Pills4",
            "TheHive_Pills5",
            "TheHive_Pills6",
            "TheHive_BloodSupplies1",
            "TheHive_BloodSupplies2",
            "TheHive_BloodSupplies3",
            "Rags",
            "TheHive_Disinfectants1",
            "TheHive_Bandages1",
            "TheHive_Bandages2",
            "TheHive_Bandages3",
            "TheHive_Bandages4",
            "TheHive_Injectors1",
            "TheHive_Injectors2",
            "TheHive_Injectors3",
            "TheHive_Injectors4"
        };

        inventorySlot[] +=
		{
			"Backpack_1",
			"Belt_Left",
			"Belt_Back"
		};
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=750;
                    healthLevels[]={{1,{"DZ\gear\containers\data\Protector_Case.rvmat"}},{0.7,{"DZ\gear\containers\data\Protector_Case.rvmat"}},{0.5,{"DZ\gear\containers\data\Protector_Case_damage.rvmat"}},{0.3,{"DZ\gear\containers\data\Protector_Case_damage.rvmat"}},{0,{"DZ\gear\containers\data\Protector_Case_destruct.rvmat"}}};
                };
            };
        };

        soundImpactType="plastic";
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUpItem
                {
                    soundSet="smallprotectorcase_pickup_SoundSet";
                    id=797;
                };
                class drop
                {
                    soundset="smallprotectorcase_drop_SoundSet";
                    id=898;
                };
            };
        };

       class InventorySlotsOffsets
        {
            class Belt_Left
            {
                position[]={0,-0.05,0}; // Position offset: X (left/right), Y (up/down), Z (forward/backward)
                orientation[]={0,180,180}; // Rotation: X (tilt forward/backward), Y (rotate left/right), Z (tilt sideways)
            };

            class Belt_Back
            {
                position[]={0,-0.05,0}; // Position offset: X (left/right), Y (up/down), Z (forward/backward)
                orientation[]={90,180,180}; // Rotation: X (tilt forward/backward), Y (rotate left/right), Z (tilt sideways)
            };
        };

        soundImpactType="plastic";
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUpItem
                {
                    soundSet="smallprotectorcase_pickup_SoundSet";
                    id=797;
                };
                class drop
                {
                    soundset="smallprotectorcase_drop_SoundSet";
                    id=898;
                };
            };
        };

       class InventorySlotsOffsets
        {
            class Belt_Left
            {
                position[]={0,-0.05,0}; // Position offset: X (left/right), Y (up/down), Z (forward/backward)
                orientation[]={0,180,180}; // Rotation: X (tilt forward/backward), Y (rotate left/right), Z (tilt sideways)
            };

            class Belt_Back
            {
                position[]={0,-0.05,0}; // Position offset: X (left/right), Y (up/down), Z (forward/backward)
                orientation[]={90,180,180}; // Rotation: X (tilt forward/backward), Y (rotate left/right), Z (tilt sideways)
            };
        };
    };

	class FirstAidKit;
    class TheHive_FirstAidKit_Concordia: FirstAidKit
    {
        scope=2;
        displayName="Sacchetta Medica - Progetto Concordia";
        descriptionShort="Kit per il Pronto Intervento Individuale";
        model="\dz\gear\containers\FirstAidKit.p3d";
        rotationFlags=17;
        weight=140;
        itemSize[]={3,3};
        itemsCargoSize[]={3,2};
        allowOwnedCargoManipulation=1;
        randomQuantity=2;
        canBeDigged=1;
        repairableWithKits[]={2};
        repairCosts[]={25};
        isMeleeWeapon=1;

        hiddenSelections[]={"zbytek"};
        hiddenSelectionsMaterials[]={"DZ\gear\containers\data\FirsAidKit.rvmat"};
        hiddenSelectionsTextures[]={"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\containers\data\thehive_firstaidkit_concordia_co.paa"};

        attachments[]=
        {
            "TheHive_Pills1",
            "TheHive_Pills2",
            "TheHive_Pills3",
            "TheHive_Bandages1",
            "TheHive_Injectors1",
            "TheHive_BloodSupplies1",
            "TheHive_Disinfectants1"
        };

        inventorySlot[]+=
        {
            "Backpack_1",
			"Belt_Left",
			"Belt_Back"
        };

        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=80;
                    healthLevels[]={
                        {1,{"DZ\gear\containers\data\FirsAidKit.rvmat"}},
                        {0.69999999,{"DZ\gear\containers\data\FirsAidKit.rvmat"}},
                        {0.5,{"DZ\gear\containers\data\FirsAidKit_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\containers\data\FirsAidKit_damage.rvmat"}},
                        {0,{"DZ\gear\containers\data\FirsAidKit_destruct.rvmat"}}
                    };
                };
            };
        };

        soundImpactType="textile";
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUpItem_Light
                {
                    soundSet="pickUpCourierBag_Light_SoundSet";
                    id=796;
                };
                class pickUpItem
                {
                    soundSet="pickUpCourierBag_SoundSet";
                    id=797;
                };
            };
        };

        class InventorySlotsOffsets
        {
            class Belt_Left
            {
                position[]={0,-0.05,0}; // Position offset: X (left/right), Y (up/down), Z (forward/backward)
                orientation[]={0,180,180}; // Rotation: X (tilt forward/backward), Y (rotate left/right), Z (tilt sideways)
            };

            class Belt_Back
            {
                position[]={0,-0.05,0}; // Position offset: X (left/right), Y (up/down), Z (forward/backward)
                orientation[]={90,180,180}; // Rotation: X (tilt forward/backward), Y (rotate left/right), Z (tilt sideways)
            };
        };
    };
    class TheHive_FirstAidKit_Delta : TheHive_FirstAidKit_Concordia
    {
        displayName="Sacchetta Medica Δ";
        descriptionShort="Kit per il Pronto Intervento Individuale";
        hiddenSelectionsTextures[]={"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\containers\data\thehive_firstaidkit_delta_co.paa"};
    }

    //! CAMPING
    class Flag_Base;    
    class TheHive_Flag_Concordia: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_concordia_co.paa"
		};
		color="White";
	};
    class TheHive_Flag_Delta: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_delta_co.paa"
		};
		color="White";
	};
    class TheHive_Flag_Livonia: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_livonia_co.paa"
		};
		color="White";
	};
    class TheHive_Flag_TheHive: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"TheHive_Server_Utilities\TheHive_ItemAndGears\textures\gear\camping\Data\flag_thehive_co.paa"
		};
		color="White";
	};

};

// Attachment slot config
class CfgSlots
{
	class Slot_TheHive_Bag_Attachment 
	{
		name = "TheHive_Bag_Attachment";
		displayName = "The Hive Protector Case Attachment Slot";
		//ghostIcon = "set:zen_attachment_icons image:purification_tablets_upsidedown";
		ghostIcon = "missing";
	};

	class Slot_TheHive_NBC_Hood
	{
		name = "TheHive_NBC_Hood";
		displayName = "Slot Cappuccio NBC";
		//ghostIcon = "set:zen_attachment_icons image:purification_tablets_upsidedown";
        ghostIcon = "missing";
	};
	class Slot_TheHive_NBC_Jacket
	{
		name = "TheHive_NBC_Jacket";
		displayName = "Slot Giacca NBC";
		//ghostIcon = "set:zen_attachment_icons image:purification_tablets_upsidedown";
        ghostIcon = "missing";
	};
	class Slot_TheHive_NBC_Pants
    {
        name = "TheHive_NBC_Pants";
        displayName = "Slot Pantaloni NBC";
        //ghostIcon = "set:zen_attachment_icons image:purification_tablets_upsidedown";
        ghostIcon = "missing";
    };
	class Slot_TheHive_NBC_Boots
    {
        name = "TheHive_NBC_Boots";
        displayName = "Slot Scarpe NBC";
        //ghostIcon = "set:zen_attachment_icons image:purification_tablets_upsidedown";
        ghostIcon = "missing";
    };
	class Slot_TheHive_NBC_Gloves
    {
        name = "TheHive_NBC_Gloves";
        displayName = "Slot Guanti NBC";
        //ghostIcon = "set:zen_attachment_icons image:purification_tablets_upsidedown";
        ghostIcon = "missing";
    };
	class Slot_TheHive_NBC_Face
    {
        name = "TheHive_NBC_Face";
        displayName = "Maschera NBC";
        //ghostIcon = "set:zen_attachment_icons image:purification_tablets_upsidedown";
        ghostIcon = "missing";
    };
	
	class Slot_TheHive_Bandages1
    {
        name="TheHive_Bandages1";
        displayName = "Slot per Bendaggi";
        ghostIcon = "missing";
    };
	class Slot_TheHive_Bandages2
    {
        name="TheHive_Bandages2";
        displayName = "Slot per Bendaggi";
        ghostIcon = "missing";
    };
	class Slot_TheHive_Bandages3
    {
        name="TheHive_Bandages3";
        displayName = "Slot per Bendaggi";
        ghostIcon = "missing";
    };
	class Slot_TheHive_Bandages4
    {
        name="TheHive_Bandages4";
        displayName = "Slot per Bendaggi";
        ghostIcon = "missing";
    };
	class Slot_TheHive_Injectors1
    {
        name="TheHive_Injectors1";
        displayName = "Sloth per Iniettori";
        ghostIcon = "missing";
    };
	class Slot_TheHive_Injectors2
    {
        name="TheHive_Injectors2";
        displayName = "Sloth per Iniettori";
        ghostIcon = "missing";
    };
	class Slot_TheHive_Injectors3
    {
        name="TheHive_Injectors3";
        displayName = "Sloth per Iniettori";
        ghostIcon = "missing";
    };
	class Slot_TheHive_Injectors4
    {
        name="TheHive_Injectors4";
        displayName = "Sloth per Iniettori";
        ghostIcon = "missing";
    };
	class Slot_TheHive_Disinfectants1
    {
        name="TheHive_Disinfectants1";
        displayName="Slot per Disinfettante";
        ghostIcon="set:dayz_inventory image:disinfectant";
    };
	class Slot_TheHive_Pills1
    {
        name="TheHive_Pills1";
        displayName="Slot per Pillole";
        ghostIcon = "missing";
    };
	class Slot_TheHive_Pills2
    {
        name="TheHive_Pills2";
        displayName="Slot per Pillole";
        ghostIcon = "missing";
    };
	class Slot_TheHive_Pills3
    {
        name="TheHive_Pills3";
        displayName="Slot per Pillole";
        ghostIcon = "missing";
    };
	class Slot_TheHive_Pills4
    {
        name="TheHive_Pills4";
        displayName="Slot per Pillole";
        ghostIcon = "missing";
    };
	class Slot_TheHive_Pills5
    {
        name="TheHive_Pills5";
        displayName="Slot per Pillole";
        ghostIcon = "missing";
    };
	class Slot_TheHive_Pills6
    {
        name="TheHive_Pills6";
        displayName="Slot per Pillole";
        ghostIcon = "missing";
    };
	class Slot_TheHive_BloodSupplies1
    {
        name="TheHive_BloodSupplies1";
        displayName="Slot per Strumenti Emetici";
        ghostIcon = "missing";
    };
	class Slot_TheHive_BloodSupplies2
    {
        name="TheHive_BloodSupplies2";
        displayName="Slot per Strumenti Emetici";
        ghostIcon = "missing";
    };
	class Slot_TheHive_BloodSupplies3
    {
        name="TheHive_BloodSupplies3";
        displayName="Slot per Strumenti Emetici";
        ghostIcon = "missing";
    };

};