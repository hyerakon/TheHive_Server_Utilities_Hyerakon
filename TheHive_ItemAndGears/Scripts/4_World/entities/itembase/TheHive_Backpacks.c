class TheHive_AssaultBag_Concordia: AssaultBag_ColorBase {};
class TheHive_AssaultBag_Delta: AssaultBag_ColorBase {};
class TheHive_AssaultBag_G4: AssaultBag_ColorBase {};

class TheHive_ChildBag_Ape: ChildBag_ColorBase {};
class TheHive_ChildBag_Aquila: ChildBag_ColorBase {};
class TheHive_ChildBag_Leone: ChildBag_ColorBase {};
class TheHive_ChildBag_Pene: ChildBag_ColorBase {};

class TheHive_CoyoteBag_Brown: CoyoteBag_ColorBase {};

class TheHive_DryBag_Concordia: DryBag_ColorBase {};
class TheHive_DryBag_Delta: DryBag_ColorBase {};

class TheHive_DuffelBagSmall_Black: DuffelBagSmall_ColorBase {};
class TheHive_DuffelBagSmall_Green: DuffelBagSmall_ColorBase {};
class TheHive_DuffelBagSmall_NotaCola: DuffelBagSmall_ColorBase {};
class TheHive_DuffelBagSmall_Pipsi: DuffelBagSmall_ColorBase {};
class TheHive_DuffelBagSmall_Yellow: DuffelBagSmall_ColorBase {};

class TheHive_HuntingBag_Black: HuntingBag {};
class TheHive_HuntingBag_Blue: HuntingBag {};
class TheHive_HuntingBag_G1: HuntingBag {};
class TheHive_HuntingBag_Green: HuntingBag {};
class TheHive_HuntingBag_Grey: HuntingBag {};
class TheHive_HuntingBag_Red: HuntingBag {};

class TheHive_MountainBag_Green: MountainBag_ColorBase {};

class TheHive_SlingBag_Brown: SlingBag_ColorBase {};

class TheHive_TaloonBag_Black: TaloonBag_ColorBase {};
class TheHive_TaloonBag_Blue: TaloonBag_ColorBase {};
class TheHive_TaloonBag_Concordia: TaloonBag_ColorBase {};
class TheHive_TaloonBag_Green: TaloonBag_ColorBase {};
class TheHive_TaloonBag_Grey: TaloonBag_ColorBase {};
class TheHive_TaloonBag_Red: TaloonBag_ColorBase {};
class TheHive_TaloonBag_Yellow: TaloonBag_ColorBase {};

class TheHive_TortillaBag_Winter: TortillaBag {};

class TheHive_SmershBag_Black: Backpack_Base 
{
    override void OnDebugSpawn()
	{
		EntityAI item = GetInventory().CreateInInventory("GPSReceiver");
		item.GetInventory().CreateInInventory("Battery9V");
		item = GetInventory().CreateEntityInCargo("PersonalRadio");
		item.GetInventory().CreateInInventory("Battery9V");
	}
};
class TheHive_SmershBag_Concordia: Backpack_Base 
{
    override void OnDebugSpawn()
	{
		EntityAI item = GetInventory().CreateInInventory("GPSReceiver");
		item.GetInventory().CreateInInventory("Battery9V");
		item = GetInventory().CreateEntityInCargo("PersonalRadio");
		item.GetInventory().CreateInInventory("Battery9V");
	}
};