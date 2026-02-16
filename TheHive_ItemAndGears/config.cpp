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
    // Required vanilla base classes
    class Container_Base;
    class SmallProtectorCase;
    class Clothing;
    class Inventory_Base;
    class Edible_Base;
    class DarkMotoHelmet_ColorBase;

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
    }

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
	
	
	class TheHive_ProtectorCase: SmallProtectorCase
	{
		displayName = "Custodia Protettiva Δ-NBC";
		descriptionShort = "Custodia protettiva The Hive per equipaggiamento NBC.";
		itemSize[] = {4,3};
		itemCargoSize[] = {4,4};

        hiddenSelections[]={"zbytek"};
        hiddenSelectionsMaterials[]={"DZ\gear\containers\data\Protector_Case.rvmat"};
        hiddenSelectionsTextures[]={"TheHive_Server_Utilities\TheHive_ItemAndGears\gear\containers\data\thehive_loot_protectorcase_delta_co.paa"};

		// attachments = define which items can attach onto this item.
		attachments[] +=
		{
			"TheHive_NBC_Hood",
            "TheHive_NBC_Jacket",
            "TheHive_NBC_Pants",
            "TheHive_NBC_Boots",
            "TheHive_NBC_Gloves",
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
        hiddenSelectionsTextures[]={"TheHive_Server_Utilities\TheHive_ItemAndGears\gear\containers\data\thehive_loot_protectorcase_concordia_co.paa"};

        attachments[]+=
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
    };

	class TheHive_FirstAidKit_Concordia: Container_Base
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
        hiddenSelectionsTextures[]={"TheHive_Server_Utilities\TheHive_ItemAndGears\gear\containers\data\thehive_firstaidkit_concordia_co.paa"};

        attachments[]+=
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
        hiddenSelectionsTextures[]={"TheHive_Server_Utilities\TheHive_ItemAndGears\gear\containers\data\thehive_firstaidkit_delta_co.paa"};
    }

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
			"TheHive_Server_Utilities\TheHive_ItemAndGears\gear\characters\headgears\data\thehive_motohelmet_scarred_giallo1_co.paa"
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
			"TheHive_Server_Utilities\TheHive_ItemAndGears\gear\characters\headgears\data\thehive_motohelmet_scarred_giallo2_co.paa"
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
			"TheHive_Server_Utilities\TheHive_ItemAndGears\gear\characters\headgears\data\thehive_motohelmet_scarred_giallo3_co.paa"
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
			"TheHive_Server_Utilities\TheHive_ItemAndGears\gear\characters\headgears\data\thehive_motohelmet_scarred_giallo4_co.paa"
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
			"TheHive_Server_Utilities\TheHive_ItemAndGears\gear\characters\headgears\data\thehive_motohelmet_scarred_giallo5_co.paa"
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
			"TheHive_Server_Utilities\TheHive_ItemAndGears\gear\characters\headgears\data\thehive_motohelmet_scarred_giallox_co.paa"
		};

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
	
	//! Example slot. Classname must be Slot_NameParameter. Then the slot is identified by name= parameter.
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

	//class TheHive_NBC_Filter
	//{
	//	name = "TheHive_NBC_Filter";
	//	displayName = "Filtro Maschera NBC";
	//	//ghostIcon = "set:zen_attachment_icons image:purification_tablets_upsidedown";
	//	ghostIcon = "set:dayz_inventory image:gasmaskfilter";
	//};

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
