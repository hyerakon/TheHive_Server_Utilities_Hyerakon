class CfgPatches
{
	class Hatchback02
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{            
			"DZ_Scripts",
			"DZ_Data",
            "DZ_Vehicles_Wheeled"
		};
	};
};

class CfgVehicles
{
    class Inventory_Base;
    class Container_Base;
    class WorldContainer_Base;
    class CarScript;
    class Clothing;
    class Bottle_Base;
    class DamageSystem;
    class DamageZones;
    class Chassis;
    class Reflector_1_1;
    class Reflector_2_1;
    class WindowFront;
    class Engine;
    class Roof;
    class Front;
    class Back;
    class Fender_1_1;
    class Fender_1_2;
    class Fender_2_1;
    class Fender_2_2;
    class FuelTank;
    class Health;
    class GlobalHealth;
    class Window;
    class Doors;
    class CarDoor;

	//! Hatchback_02 Imports
	class Hatchback_02;
	class Hatchback_02_Door_1_1;
	class Hatchback_02_Door_2_1;
	class Hatchback_02_Door_1_2;
	class Hatchback_02_Door_2_2;
	class Hatchback_02_Hood;
	class Hatchback_02_Trunk;
	
    //! Hatchback_02_Concordia
	class Hatchback_02_TheHive_Concordia: Hatchback_02
	{
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\hatchback_02_body.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones: DamageZones
			{
				class Chassis: Chassis
				{
					class Health: Health
					{
					};
				};
				class Front: Front
				{
					class Health: Health
					{
					};
				};
				class Back: Back
				{
					class Health: Health
					{
					};
				};
				class Reflector_1_1: Reflector_1_1
				{
					class Health: Health
					{
					};
				};
				class Reflector_2_1: Reflector_2_1
				{
					class Health: Health
					{
					};
				};
				class WindowFront: WindowFront
				{
					class Health: Health
					{
					};
				};
				class Engine: Engine
				{
					class Health: Health
					{
					};
				};
				class FuelTank: FuelTank
				{
					class Health: Health
					{
					};
				};
				class Roof: Roof
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_1: Fender_1_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_2: Fender_1_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_1: Fender_2_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_2: Fender_2_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Body_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_02_TheHive_Door_1_1_Concordia: Hatchback_02_Door_1_1
	{
		hiddenSelectionsMaterials[]=
		{
			"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\hatchback_02_frontdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\hatchback_02_frontdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_frontdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_frontdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_frontdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_frontdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_frontdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_02_TheHive_Door_2_1_Concordia: Hatchback_02_Door_2_1
	{
		hiddenSelectionsMaterials[]=
		{
			"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\hatchback_02_frontdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\hatchback_02_frontdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_frontdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_frontdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_frontdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_frontdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_frontdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_02_TheHive_Door_1_2_Concordia: Hatchback_02_Door_1_2
	{
		hiddenSelectionsMaterials[]=
		{
			"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\hatchback_02_backdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\hatchback_02_backdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_backdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_backdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_backdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_backdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_backdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_02_TheHive_Door_2_2_Concordia: Hatchback_02_Door_2_2
	{
		hiddenSelectionsMaterials[]=
		{
			"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\hatchback_02_backdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\hatchback_02_backdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_backdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_backdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_backdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_backdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_backdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_02_TheHive_Hood_Concordia: Hatchback_02_Hood
	{
		hiddenSelectionsMaterials[]=
		{
			"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Hood.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[]=
					{
						"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\hatchback_02_hood.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_hood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_hood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_hood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Hatchback_02_TheHive_Trunk_Concordia: Hatchback_02_Trunk
	{
		hiddenSelectionsMaterials[]=
		{
			"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_Trunk.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\hatchback_02_trunk.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_trunk.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_trunk.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_trunk_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_trunk_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\concordia\Hatchback_02_trunk_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
    

	//! Hatchback_02_Delta
	class Hatchback_02_TheHive_Delta: Hatchback_02
	{
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\hatchback_02_body.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones: DamageZones
			{
				class Chassis: Chassis
				{
					class Health: Health
					{
					};
				};
				class Front: Front
				{
					class Health: Health
					{
					};
				};
				class Back: Back
				{
					class Health: Health
					{
					};
				};
				class Reflector_1_1: Reflector_1_1
				{
					class Health: Health
					{
					};
				};
				class Reflector_2_1: Reflector_2_1
				{
					class Health: Health
					{
					};
				};
				class WindowFront: WindowFront
				{
					class Health: Health
					{
					};
				};
				class Engine: Engine
				{
					class Health: Health
					{
					};
				};
				class FuelTank: FuelTank
				{
					class Health: Health
					{
					};
				};
				class Roof: Roof
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_1: Fender_1_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_2: Fender_1_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_1: Fender_2_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_2: Fender_2_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Body_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_02_TheHive_Door_1_1_Delta: Hatchback_02_Door_1_1
	{
		hiddenSelectionsMaterials[]=
		{
			"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\hatchback_02_frontdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\hatchback_02_frontdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_frontdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_frontdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_frontdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_frontdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_frontdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_02_TheHive_Door_2_1_Delta: Hatchback_02_Door_2_1
	{
		hiddenSelectionsMaterials[]=
		{
			"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\hatchback_02_frontdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\hatchback_02_frontdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_frontdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_frontdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_frontdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_frontdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_frontdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_02_TheHive_Door_1_2_Delta: Hatchback_02_Door_1_2
	{
		hiddenSelectionsMaterials[]=
		{
			"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\hatchback_02_backdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\hatchback_02_backdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_backdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_backdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_backdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_backdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_backdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_02_TheHive_Door_2_2_Delta: Hatchback_02_Door_2_2
	{
		hiddenSelectionsMaterials[]=
		{
			"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\hatchback_02_backdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\hatchback_02_backdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_backdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_backdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_backdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_backdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_backdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_02_TheHive_Hood_Delta: Hatchback_02_Hood
	{
		hiddenSelectionsMaterials[]=
		{
			"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Hood.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[]=
					{
						"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\hatchback_02_hood.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_hood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_hood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_hood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Hatchback_02_TheHive_Trunk_Delta: Hatchback_02_Trunk
	{
		hiddenSelectionsMaterials[]=
		{
			"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_Trunk.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\hatchback_02_trunk.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_trunk.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_trunk.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_trunk_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_trunk_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"TheHive_Server_Utilities_Hyerakon\TheHive_Vehicles\vehicles\wheeled\Hatchback_02\data\delta\Hatchback_02_trunk_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
    
};