class TheHive_Hatchback_02_Concordia extends Hatchback_02
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
    
        GetInventory().CreateInInventory("TheHive_Hatchback_02_Door_1_1_Concordia");
        GetInventory().CreateInInventory("TheHive_Hatchback_02_Door_2_1_Concordia");
        GetInventory().CreateInInventory("TheHive_Hatchback_02_Door_1_2_Concordia");
        GetInventory().CreateInInventory("TheHive_Hatchback_02_Door_2_2_Concordia");
        GetInventory().CreateInInventory("TheHive_Hatchback_02_Hood_Concordia");
        GetInventory().CreateInInventory("TheHive_Hatchback_02_Trunk_Concordia");
    
        //-----IN CAR CARGO
        GetInventory().CreateInInventory("Hatchback_02_Wheel");
        GetInventory().CreateInInventory("Hatchback_02_Wheel");
    }
};

class TheHive_Hatchback_02_Door_1_1_Concordia extends Hatchback_02_Door_1_1 {};
class TheHive_Hatchback_02_Door_2_1_Concordia extends Hatchback_02_Door_1_2 {};
class TheHive_Hatchback_02_Door_1_2_Concordia extends Hatchback_02_Door_2_1 {};
class TheHive_Hatchback_02_Door_2_2_Concordia extends Hatchback_02_Door_2_2 {};
class TheHive_Hatchback_02_Hood_Concordia extends Hatchback_02_Hood {};
class TheHive_Hatchback_02_Trunk_Concordia extends Hatchback_02_Trunk {};