class TheHive_Hatchback_02_Delta extends Hatchback_02
{
    override void OnDebugSpawn()
    {
        SpawnUniversalParts();
        SpawnAdditionalItems();
        FillUpCarFluids();

        GetInventory().CreateInInventory("Hatchback_02_Wheel");
        GetInventory().CreateInInventory("Hatchback_02_Wheel");
        GetInventory().CreateInInventory("Hatchback_02_Wheel");
        GetInventory().CreateInInventory("Hatchback_02_Wheel");
    
        GetInventory().CreateInInventory("TheHive_Hatchback_02_Door_1_1_Delta");
        GetInventory().CreateInInventory("TheHive_Hatchback_02_Door_2_1_Delta");
        GetInventory().CreateInInventory("TheHive_Hatchback_02_Door_1_2_Delta");
        GetInventory().CreateInInventory("TheHive_Hatchback_02_Door_2_2_Delta");
        GetInventory().CreateInInventory("TheHive_Hatchback_02_Hood_Delta");
        GetInventory().CreateInInventory("TheHive_Hatchback_02_Trunk_Delta");
    
        //-----IN CAR CARGO
        GetInventory().CreateInInventory("Hatchback_02_Wheel");
        GetInventory().CreateInInventory("Hatchback_02_Wheel");
    }
};

class TheHive_Hatchback_02_Door_1_1_Delta extends Hatchback_02_Door_1_1 {};
class TheHive_Hatchback_02_Door_2_1_Delta extends Hatchback_02_Door_1_2 {};
class TheHive_Hatchback_02_Door_1_2_Delta extends Hatchback_02_Door_2_1 {};
class TheHive_Hatchback_02_Door_2_2_Delta extends Hatchback_02_Door_2_2 {};
class TheHive_Hatchback_02_Hood_Delta extends Hatchback_02_Hood {};
class TheHive_Hatchback_02_Trunk_Delta extends Hatchback_02_Trunk {};
