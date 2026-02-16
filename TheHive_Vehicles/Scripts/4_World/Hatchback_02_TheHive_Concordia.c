class Hatchback_02_TheHive_Concordia extends Hatchback_02
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
    
        GetInventory().CreateInInventory("Hatchback_02_TheHive_Door_1_1_Concordia");
        GetInventory().CreateInInventory("Hatchback_02_TheHive_Door_2_1_Concordia");
        GetInventory().CreateInInventory("Hatchback_02_TheHive_Door_1_2_Concordia");
        GetInventory().CreateInInventory("Hatchback_02_TheHive_Door_2_2_Concordia");
        GetInventory().CreateInInventory("Hatchback_02_TheHive_Hood_Concordia");
        GetInventory().CreateInInventory("Hatchback_02_TheHive_Trunk_Concordia");
    
        //-----IN CAR CARGO
        GetInventory().CreateInInventory("Hatchback_02_Wheel");
        GetInventory().CreateInInventory("Hatchback_02_Wheel");
    }
};

class Hatchback_02_TheHive_Door_1_1_Concordia extends Hatchback_02_Door_1_1 {};
class Hatchback_02_TheHive_Door_2_1_Concordia extends Hatchback_02_Door_1_2 {};
class Hatchback_02_TheHive_Door_1_2_Concordia extends Hatchback_02_Door_2_1 {};
class Hatchback_02_TheHive_Door_2_2_Concordia extends Hatchback_02_Door_2_2 {};
class Hatchback_02_TheHive_Hood_Concordia extends Hatchback_02_Hood {};
class Hatchback_02_TheHive_Trunk_Concordia extends Hatchback_02_Trunk {};