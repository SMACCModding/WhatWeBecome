class CfgPatches {
    class Overgrown_ResizeItems {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
            "DZ_Weapons_Magazines",
            "DZ_Weapons_Optics",
            "DZ_Gear_Cultivation",
            "DZ_Gear_Food",
            "DZ_Gear_Consumables",
            "DZ_Radio",
            "DZ_Gear_Camping",
            "DZ_Gear_Containers",
            "DZ_Gear_Cooking",
            "DZ_Gear_Tools",
            "MSP_Deco"
        };
    };
};
class CfgMagazines {
    class Magazine_Base;
    class Ammunition_Base: Magazine_Base
    {
    };
    // AmmoStacks
    // HellRetex
    class HRS_Crafted_AmmoBolt: Ammunition_Base {
        count=10;
    };
    // Mortys
    class TTC_Ammo_8mm: Ammunition_Base {
        count=40;
    };
    class TTC_Ammo_338: Ammunition_Base {
        count=20;
    };
    class TTC_Ammo_300blk: Ammunition_Base {
        count=40;
    };
    class TTC_Ammo_50Beo: Ammunition_Base {
        count=20;
    };
    class TTC_Ammo_50BMG: Ammunition_Base {
        count=10;
    };
    class TTC_Ammo_303: Ammunition_Base {
        count=40;
    };
    class TTC_Ammo_3006: Ammunition_Base {
        count=40;
    };
    class TTC_Ammo_4570: Ammunition_Base {
        count=40;
    };
    class TTC_Ammo_50AE: Ammunition_Base {
        count=40;
    };
    class TTC_Ammo_4630: Ammunition_Base {
        count=80;
    };
    // Vanilla
    class Ammo_12gaPellets: Ammunition_Base {
        count=40;
    };
    class Ammo_12gaRubberSlug: Ammunition_Base {
        count=40;
    };
    class Ammo_12gaSlug: Ammunition_Base {
        count=40;
    };
    class Ammo_22: Ammunition_Base {
        count=120;
    };
    class Ammo_308Win: Ammunition_Base {
        count=40;
    };
    class Ammo_308WinTracer: Ammunition_Base {
        count=40;
    };
    class Ammo_357: Ammunition_Base {
        count=40;
    };
    class Ammo_380: Ammunition_Base {
        count=80;
    };
    class Ammo_45ACP: Ammunition_Base {
        count=80;
    };
    class Ammo_545x39: Ammunition_Base {
        count=60;
    };
    class Ammo_545x39Tracer: Ammunition_Base {
        count=60;
    };
    class Ammo_556x45: Ammunition_Base {
        count=60;
    };
    class Ammo_556x45Tracer: Ammunition_Base {
        count=60;
    };
    class Ammo_762x39: Ammunition_Base {
        count=60;
    };
    class Ammo_762x39Tracer: Ammunition_Base {
        count=60;
    };
    class Ammo_762x54: Ammunition_Base {
        count=40;
    };
    class Ammo_762x54Tracer: Ammunition_Base {
        count=40;
    };
    class Ammo_9x19: Ammunition_Base {
        count=80;
    };
    class Ammo_9x39: Ammunition_Base {
        count=60;
    };
    class Ammo_9x39AP: Ammunition_Base {
        count=60;
    };
    class Ammo_Flare: Ammunition_Base {
        count=20;
    };
    class Ammo_FlareBlue: Ammunition_Base {
        count=20;
    };
    class Ammo_FlareGreen: Ammunition_Base {
        count=20;
    };
    class Ammo_FlareRed: Ammunition_Base {
        count=20;
    };
}
class CfgVehicles {
    // ====  Manual edits  ====
    // Basics
    class Inventory_Base;
    class Box_Base;
    class Pelt_Base;
    class Container_Base;
    class Bottle_Base;
    class Edible_Base;
    class SeedBase: Inventory_Base {};
    class ItemOptics;
    class Transmitter_Base: Inventory_Base {};
    class MushroomBase;
    class TentBase;
    class Msp_Foldable_Item;

    // Containers!!
    class FirstAidKit: Container_Base {
        itemSize[]={2,2};
        itemsCargoSize[]={5,3};
        inventorySlot[]=
        {
            "FirstAidKit",
            "firstaidkit",
            "Belt_Left",
            "VestGrenadeA"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=300;
                };
            };
        };
    };
    class PlateCarrierPouches: Container_Base {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={5,3}; // 15
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=400;
                };
            };
        };
    };

    class SmallProtectorCase: Container_Base {
        itemSize[]={3,3}; // 9
        itemsCargoSize[]={4,5}; // 20
    };
    class Bear_ColorBase: Container_Base {
        itemSize[]={2,2}; // 4
        itemsCargoSize[]={2,3}; // 6
    };
    class WaterproofBag_ColorBase: Container_Base {
        itemSize[]={3,4}; // 12
        itemsCargoSize[]={4,5}; // 20
    };

    class PortableGasStove: Inventory_Base {
        itemSize[]={3,3}; // 9
    }
	class Pot: Bottle_Base {
		itemSize[]={3,3}; // 9
		itemsCargoSize[]={4,4}; // 16
	};
	class FryingPan: Inventory_Base {
		itemSize[]={2,3}; // 6
		itemsCargoSize[]={4,4}; // 16
	};
	class PortableGasLamp: Inventory_Base {
        itemSize[]={2,3}; // 6
    };

    // Items!!
    // Battery x2
    class Battery9V: Inventory_Base {
        varQuantityInit=100;
        varQuantityMax=100;
        class EnergyManager {
            hasIcon=1;
            switchOnAtSpawn=1;
            isPassiveDevice=1;
            energyStorageMax=100;
            energyAtSpawn=100;
            convertEnergyToQuantity=1;
            reduceMaxEnergyByDamageCoef=1;
            powerSocketsCount=1;
            compatiblePlugTypes[]={1};
        };
    };
    class Binoculars: ItemOptics {
        itemSize[]={2,2}; // 4
        inventorySlot[]=
        {
            "FirstAidKit",
            "firstaidkit",
            "Belt_Left"
        };
    };
    class Roadflare: Inventory_Base {
        itemSize[]={1,2}; // 2
        inventorySlot[]=
        {
            "tripWireAttachment",
            "VestGrenadeA",
            "VestGrenadeB",
            "VestGrenadeC",
            "VestGrenadeD"
        };
    }

    //Hide actual names of meats
    class HumanSteakMeat: Edible_Base {
        displayName="Steak";
        descriptionShort="A chunk of meat. Slightly reminiscent of Pork, hmm or maybe Beef, something like that...";
        model="\dz\gear\food\meat_steak.p3d";
        itemSize[]={1,2};
    };
    class GoatSteakMeat: Edible_Base {
        displayName="Steak";
        descriptionShort="A chunk of meat. Slightly reminiscent of Pork, hmm or maybe Beef, something like that...";
        model="\dz\gear\food\meat_steak.p3d";
        itemSize[]={1,2};
    };
    class MouflonSteakMeat: Edible_Base {
        displayName="Steak";
        descriptionShort="A chunk of meat. Slightly reminiscent of Pork, hmm or maybe Beef, something like that...";
        model="\dz\gear\food\meat_steak.p3d";
        itemSize[]={1,2};
    };
    class BoarSteakMeat: Edible_Base {
        displayName="Steak";
        descriptionShort="A chunk of meat. Slightly reminiscent of Pork, hmm or maybe Beef, something like that...";
        model="\dz\gear\food\meat_steak.p3d";
        itemSize[]={1,2};
    };
    class PigSteakMeat: Edible_Base {
        displayName="Steak";
        descriptionShort="A chunk of meat. Slightly reminiscent of Pork, hmm or maybe Beef, something like that...";
        model="\dz\gear\food\meat_steak.p3d";
        itemSize[]={1,2};
    };
    class DeerSteakMeat: Edible_Base {
        displayName="Steak";
        descriptionShort="A chunk of meat. Slightly reminiscent of Pork, hmm or maybe Beef, something like that...";
        model="\dz\gear\food\meat_steak.p3d";
        itemSize[]={1,2};
    };
    class WolfSteakMeat: Edible_Base {
        displayName="Steak";
        descriptionShort="A chunk of meat. Slightly reminiscent of Pork, hmm or maybe Beef, something like that...";
        model="\dz\gear\food\meat_steak.p3d";
        itemSize[]={1,2};
    };
    class BearSteakMeat: Edible_Base {
        displayName="Steak";
        descriptionShort="A chunk of meat. Slightly reminiscent of Pork, hmm or maybe Beef, something like that...";
        model="\dz\gear\food\meat_steak.p3d";
        itemSize[]={1,2};
    };
    class CowSteakMeat: Edible_Base {
        displayName="Steak";
        descriptionShort="A chunk of meat. Slightly reminiscent of Pork, hmm or maybe Beef, something like that...";
        model="\dz\gear\food\meat_steak.p3d";
        itemSize[]={1,2};
    };
    class SheepSteakMeat: Edible_Base {
        displayName="Steak";
        descriptionShort="A chunk of meat. Slightly reminiscent of Pork, hmm or maybe Beef, something like that...";
        model="\dz\gear\food\meat_steak.p3d";
        itemSize[]={1,2};
    };
    class FoxSteakMeat: Edible_Base {
        displayName="Steak";
        descriptionShort="A chunk of meat. Slightly reminiscent of Pork, hmm or maybe Beef, something like that...";
        itemSize[]={1,2};
    };
    class ChickenBreastMeat: Edible_Base {
        displayName="Steak";
        descriptionShort="A chunk of meat. Slightly reminiscent of Chicken, or some kind of other bird...";
        itemSize[]={1,2};
    };
    class CarpFilletMeat: Edible_Base {
        displayName="Fillet of fish";
        descriptionShort="A cut and cleaned fish, ready to cook.";
    };
    class MackerelFilletMeat: Edible_Base {
        displayName="Fillet of fish";
        descriptionShort="A cut and cleaned fish, ready to cook.";
    };
    class Carp: Edible_Base {
        displayName="Fish";
        descriptionShort="A fresh fish, can be gutted and cleaned to be eaten.";
    };
    class Sardines: Edible_Base {
        displayName="Fish";
        descriptionShort="A fresh fish, can be gutted and cleaned to be eaten.";
    };
    class Mackerel: Edible_Base {
        displayName="Fish";
        descriptionShort="A fresh fish, can be gutted and cleaned to be eaten.";
    };

    //Hid actual names of seeds
    class TomatoSeeds: SeedBase {
        displayName="Seeds";
        descriptionShort="A small pile of seeds, could be planted to grow something.";
    };
    class PepperSeeds: SeedBase {
        displayName="Seeds";
        descriptionShort="A small pile of seeds, could be planted to grow something.";
    };
    class PumpkinSeeds: SeedBase {
        displayName="Seeds";
        descriptionShort="A small pile of seeds, could be planted to grow something.";
    };
    class ZucchiniSeeds: SeedBase {
        displayName="Seeds";
        descriptionShort="A small pile of seeds, could be planted to grow something.";
    };
    class CannabisSeeds: SeedBase {
        displayName="Seeds";
        descriptionShort="A small pile of seeds, could be planted to grow something.";
    };

    //Hid actual names of mushrooms
    class AgaricusMushroom: MushroomBase {
        displayName="Mushroom";
        descriptionShort="A mushroom which may or may not be edible.";
    };
    class AmanitaMushroom: MushroomBase {
        displayName="Mushroom";
        descriptionShort="A mushroom which may or may not be edible.";
    };
    class MacrolepiotaMushroom: MushroomBase {
        displayName="Mushroom";
        descriptionShort="A mushroom which may or may not be edible.";
    };
    class LactariusMushroom: MushroomBase {
        displayName="Mushroom";
        descriptionShort="A mushroom which may or may not be edible.";
    };
    class PsilocybeMushroom: MushroomBase {
        displayName="Mushroom";
        descriptionShort="A mushroom which may or may not be edible.";
    };
    class AuriculariaMushroom: MushroomBase {
        displayName="Mushroom";
        descriptionShort="A mushroom which may or may not be edible.";
    };
    class BoletusMushroom: MushroomBase {
        displayName="Mushroom";
        descriptionShort="A mushroom which may or may not be edible.";
    };
    class PleurotusMushroom: MushroomBase {
        displayName="Mushroom";
        descriptionShort="A mushroom which may or may not be edible.";
    };

    //Hid actual names of berries
    class SambucusBerry: Edible_Base {
        displayName="Berry";
        descriptionShort="A berry which may or may not be edible.";
    }
    class CaninaBerry: Edible_Base {
        displayName="Berry";
        descriptionShort="A berry which may or may not be edible.";
    }

    //Knife fixes
    class KitchenKnife: Inventory_Base {
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=300;
                };
            };
        };
    };
    class SteakKnife: Inventory_Base {
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=300;
                };
            };
        };
    };
    class HayHook: Inventory_Base {
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=300;
                };
            };
        };
    };
    class Cleaver: Inventory_Base {
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=300;
                };
            };
        };
    };
    class CombatKnife: Inventory_Base {
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=300;
                };
            };
        };
    };
    class HuntingKnife: Inventory_Base {
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=300;
                };
            };
        };
    };
    class Machete: Inventory_Base {
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=300;
                };
            };
        };
    };
    class Pickaxe: Inventory_Base {
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=300;
                };
            };
        };
    };
    class KukriKnife: Inventory_Base {
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=300;
                };
            };
        };
    };
    class FangeKnife: Inventory_Base {
        itemSize[]={1,3}; // 3
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=300;
                };
            };
        };
    };

    // Don't make changes past this point, any changes will be wiped with each compile!!!
    // ==== Auto Generated ====
    // Last build: Sun Aug  8 16:39:51 BST 2021.

    // ======= MODDED-STUFF =======
    // MSP
    // ======= VANILLA-STUFF =======
    class DuctTape: Inventory_Base {
        weight=0;
        canBeSplit=1;
    };
    class LargeGasCanister: Inventory_Base {
        itemSize[]={2,3}; // 6
    };
    class MediumGasCanister: Inventory_Base {
        itemSize[]={2,2}; // 4
    };
    class SmallGasCanister: Inventory_Base {
        itemSize[]={2,2}; // 4
    };
    class ButaneCanister: Inventory_Base {
        itemSize[]={1,3}; // 3
    };
    class Spraycan_ColorBase: Inventory_Base {
        itemSize[]={1,3}; // 3
    };
    class WildboarPelt: Pelt_Base {
        itemSize[]={4,3}; // 12
    };
    class CowPelt: Pelt_Base {
        itemSize[]={4,3}; // 12
    };
    class PigPelt: Pelt_Base {
        itemSize[]={4,3}; // 12
    };
    class DeerPelt: Pelt_Base {
        itemSize[]={4,3}; // 12
    };
    class GoatPelt: Pelt_Base {
        itemSize[]={4,3}; // 12
    };
    class BearPelt: Pelt_Base {
        itemSize[]={4,3}; // 12
    };
    class WolfPelt: Pelt_Base {
        itemSize[]={4,3}; // 12
    };
    class SheepPelt: Pelt_Base {
        itemSize[]={4,3}; // 12
    };
    class MouflonPelt: Pelt_Base {
        itemSize[]={4,3}; // 12
    };
    class FoxPelt: Pelt_Base {
        itemSize[]={4,3}; // 12
    };
    class TannedLeather: Inventory_Base {
        itemSize[]={4,3}; // 12
    };
    class GardenLime: Inventory_Base {
        itemSize[]={3,3}; // 9
        weight=0;
    };
    class Netting: Inventory_Base {
        itemSize[]={1,3}; // 3
        weight=300;
    };
    class Paper: Inventory_Base {
        varQuantityInit=1;
        varQuantityMin=0;
        varQuantityMax=20;
        canBeSplit=1;
    };
    class CombinationLock: Inventory_Base {
        itemSize[]={2,2}; // 4
    };
    class CombinationLock4: CombinationLock {
        itemSize[]={2,2}; // 4
    };
    class CamoNet: Inventory_Base {
        itemSize[]={5,2}; // 10
    };
    class SeaChest: Container_Base {
        itemSize[]={7,7}; // 49
    };
    class Spotlight: Inventory_Base {
        itemSize[]={3,6}; // 18
    };
    class CableReel: Inventory_Base {
        itemSize[]={2,3}; // 6
    };
    class HescoBox: Inventory_Base {
        itemSize[]={5,5}; // 25
    };
    class WoodenStick: Inventory_Base {
        itemSize[]={4,1}; // 4
    };
    class LongWoodenStick: Inventory_Base {
        itemSize[]={1,7}; // 7
    };
    class SharpWoodenStick: Inventory_Base {
        itemSize[]={1,6}; // 6
    };
    class Spear: Inventory_Base {
        itemSize[]={1,7}; // 7
    };
    class HandDrillKit: Inventory_Base {
        itemSize[]={1,3}; // 3
    };
    class WaterPouch_ColorBase: Bottle_Base {
        itemSize[]={2,3}; // 6
    };
    class BoxCerealCrunchin: Edible_Base {
        itemSize[]={2,3}; // 6
    };
    class BaseRadio: Transmitter_Base {
        itemSize[]={4,4}; // 16
        weight=10000;
    };
    class PersonalRadio: Transmitter_Base {
        itemSize[]={1,2}; // 2
        weight=500;
    };
    class Megaphone: Inventory_Base {
        itemSize[]={3,2}; // 6
        weight=1500;
    };
    class Flashlight: Inventory_Base {
        itemSize[]={2,1}; // 2
    };
    class Pliers: Inventory_Base {
        itemSize[]={1,2}; // 2
    };
    class WeaponCleaningKit: Inventory_Base {
        itemSize[]={1,3}; // 3
        weight=0;
    };
    class SewingKit: Inventory_Base {
        weight=0;
    };
    class LeatherSewingKit: Inventory_Base {
        itemSize[]={1,3}; // 3
        weight=0;
    };
    class EpoxyPutty: Inventory_Base {
        itemSize[]={1,2}; // 2
        weight=0;
    };
    class ElectronicRepairKit: Inventory_Base {
        itemSize[]={1,3}; // 3
        weight=0;
    };
    class Rag: Inventory_Base {
        itemSize[]={1,2}; // 2
    };
    class MediumTent: TentBase {
        itemSize[]={6,3}; // 18
    };
    class LargeTent: TentBase {
        itemSize[]={6,3}; // 18
    };
    class PartyTent: TentBase {
        itemSize[]={6,3}; // 18
    };
    class MetalWire: Inventory_Base {
        itemSize[]={2,2}; // 4
    };
    class BarbedWire: Inventory_Base {
        itemSize[]={2,2}; // 4
    };
    // ======= MODDED-STUFF =======
    // Codelock
    class CodeLock: CombinationLock {
        itemSize[]={2,2}; // 4
    };
    // MSP
    class Msp_SleepingBag_Base: Msp_Foldable_Item {
        itemSize[]={2,3}; // 6
    };
    class Msp_Mattress_Base: Msp_Foldable_Item {
        itemSize[]={3,4}; // 12
    };
};
