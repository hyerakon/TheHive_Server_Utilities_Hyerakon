class TheHive_PlateCarrierVest_Blue: PlateCarrierVest 
{
	override void OnWasAttached( EntityAI parent, int slot_id )
	{
		super.OnWasAttached( parent, slot_id );
		
		if ( GetGame().IsServer() && parent.IsInherited( DayZInfected ) )
		{
			float coef = Math.RandomFloatInclusive( 0.2, 0.4 );
			SetHealth01( "", "", coef);
		}
	}
	
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{
			entity.GetInventory().CreateInInventory( "TheHive_PlateCarrierPouches_Blue" );
			entity.GetInventory().CreateInInventory( "TheHive_PlateCarrierHolster_Blue" );
		}
	}
};
class TheHive_PlateCarrierPouches_Blue: PlateCarrierPouches {};
class TheHive_PlateCarrierVest_Delta: PlateCarrierVest 
{
	override void OnWasAttached( EntityAI parent, int slot_id )
	{
		super.OnWasAttached( parent, slot_id );
		
		if ( GetGame().IsServer() && parent.IsInherited( DayZInfected ) )
		{
			float coef = Math.RandomFloatInclusive( 0.2, 0.4 );
			SetHealth01( "", "", coef);
		}
	}
	
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{
			entity.GetInventory().CreateInInventory( "TheHive_PlateCarrierPouches_Delta" );
			entity.GetInventory().CreateInInventory( "TheHive_PlateCarrierHolster_Delta" );
		}
	}
};
class TheHive_PlateCarrierPouches_Delta: PlateCarrierPouches {};
class TheHive_PlateCarrierVest_Red: PlateCarrierVest 
{
	override void OnWasAttached( EntityAI parent, int slot_id )
	{
		super.OnWasAttached( parent, slot_id );
		
		if ( GetGame().IsServer() && parent.IsInherited( DayZInfected ) )
		{
			float coef = Math.RandomFloatInclusive( 0.2, 0.4 );
			SetHealth01( "", "", coef);
		}
	}
	
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{
			entity.GetInventory().CreateInInventory( "TheHive_PlateCarrierPouches_Red" );
			entity.GetInventory().CreateInInventory( "TheHive_PlateCarrierHolster_Red" );
		}
	}
};
class TheHive_PlateCarrierPouches_Red: PlateCarrierPouches {};

class TheHive_PressVest_Black: PressVest_ColorBase {};
class TheHive_PressVest_Blue: PressVest_ColorBase {};
class TheHive_PressVest_Green: PressVest_ColorBase {};
class TheHive_PressVest_Grey: PressVest_ColorBase {};
class TheHive_PressVest_Red: PressVest_ColorBase {};

class TheHive_SmershVest_Black: Vest_Base 
{
    override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item,slot_name);
		
		if (TheHive_SmershBag_Black.Cast(item))
		{
			ShowSelection("Buttpack");
		}
	}
	
	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item,slot_name);
		
		if (TheHive_SmershBag_Black.Cast(item))
		{
			HideSelection("Buttpack");
		}
	}

	override void OnDebugSpawn()
	{
		GetInventory().CreateInInventory( "TheHive_SmershBag_Black" );
		EntityAI item = GetInventory().CreateInInventory("GPSReceiver");
		item.GetInventory().CreateInInventory("Battery9V");
		item = GetInventory().CreateEntityInCargo("PersonalRadio");
		item.GetInventory().CreateInInventory("Battery9V");
		super.OnDebugSpawn();
	}
};

class TheHive_SmershVest_Concordia: Vest_Base 
{
    override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item,slot_name);
		
		if (TheHive_SmershBag_Concordia.Cast(item))
		{
			ShowSelection("Buttpack");
		}
	}
	
	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item,slot_name);
		
		if (TheHive_SmershBag_Concordia.Cast(item))
		{
			HideSelection("Buttpack");
		}
	}

	override void OnDebugSpawn()
	{
		GetInventory().CreateInInventory( "TheHive_SmershBag_Concordia" );
		EntityAI item = GetInventory().CreateInInventory("GPSReceiver");
		item.GetInventory().CreateInInventory("Battery9V");
		item = GetInventory().CreateEntityInCargo("PersonalRadio");
		item.GetInventory().CreateInInventory("Battery9V");
		GetInventory().CreateInInventory( "Morphine" );
		GetInventory().CreateInInventory( "Epinephrine" );
		GetInventory().CreateInInventory( "AntiChemInjector" );
		GetInventory().CreateInInventory( "Syringe" );
	}
	
};