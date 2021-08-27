class CfgPatches {
    class Deserted_ResizedClothing {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
            "DZ_Characters",
            "DZ_Characters_Backpacks",
            "DZ_Characters_Glasses",
            "DZ_Characters_Gloves",
            "DZ_Characters_Headgear",
            "DZ_Characters_Heads",
            "DZ_Characters_Pants",
            "DZ_Characters_Masks",
            "DZ_Characters_Shoes",
            "DZ_Characters_Tops",
            "DZ_Characters_Vests",
            "MSP_Clothing_Data"
        };
    };
};
class CfgVehicles {
    // ====  Manual edits  ====
    // Basics
    class Clothing;
    class Switchable_Base;

    // ======= MODDED-STUFF =======
    // Windstrides
    class Tactical_Leg_Holster_ColorBase: Clothing {
        itemSize[]={2,2}; // 4
        itemsCargoSize[]={2,2}; // 4
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
    };
    // MSP
    class Msp_WaistPack_Base: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={6,3}; // 18
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
    };
    // ======= VANILLA-STUFF =======
    class PlateCarrierVest: Clothing {
        itemSize[]={3,3}; // 9
        itemCargo[]={6,4}; // 24
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
    };

    // Don't make changes past this point, any changes will be wiped with each compile!!!
    // ==== Auto Generated ====
    // Last build: Sun Aug  8 16:37:31 BST 2021.

    // ======= MODDED-STUFF =======
    // Spurgle
    class Spur_LW_Bag_ColorBase: Clothing {
        itemSize[]={5,6}; // 30
        itemsCargoSize[]={9,11}; // 99
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class Spur_MilBag_ColorBase: Clothing {
        itemSize[]={5,6}; // 30
        itemsCargoSize[]={9,11}; // 99
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class Spur_CamelBag_ColorBase: Clothing {
        itemSize[]={4,6}; // 24
        itemsCargoSize[]={8,8}; // 64
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class Spur_Treker_ColorBase: Clothing {
        itemSize[]={4,5}; // 20
        itemsCargoSize[]={7,7}; // 49
        attachments[]={
            "Chemlight",
            "WalkieTalkie",
            "Belt_Left"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class Spur_KnifeSheath: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    // Windstrides
    class Canvas_Backpack_Base: Clothing {
        itemSize[]={4,6}; // 24
        itemsCargoSize[]={8,8}; // 64
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class Fingerless_Gloves: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class FlipFlops_Colorbase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class High_Knee_Sneakers: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class Kneepads_Jeans_Base: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Layered_Shirt_Base: Clothing {
        itemSize[]={2,2}; // 4
        itemsCargoSize[]={6,5}; // 30
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Leggings_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Medium_Sleeves_Shirt: Clothing {
        itemSize[]={2,2}; // 4
        itemsCargoSize[]={6,5}; // 30
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Military_Sweater: Clothing {
        itemSize[]={2,2}; // 4
        itemsCargoSize[]={6,5}; // 30
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class PMK_5A_Gas_Mask: Clothing {
        itemSize[]={2,2}; // 4
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class WindstridePoncho: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Shemagh_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class SK8_Sneakers_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class Skinny_Jeans_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class SkullMask: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Slouch_Hat_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Winter_Parka_Base: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    // Luna
    class CivilianBelt_ColorBase: Clothing {
        itemSize[]={3,1}; // 3
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class BomberJacket_LunaBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class PlateCarrier_OD: Clothing {
        itemSize[]={3,3}; // 9
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class PlateCarrier_Grey: Clothing {
        itemSize[]={3,3}; // 9
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class PlateCarrier_Black: Clothing {
        itemSize[]={3,3}; // 9
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class PlateCarrier_BDU: Clothing {
        itemSize[]={3,3}; // 9
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    // MSP
    class Msp_BoxingShorts_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Msp_BoxingGloves_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Msp_BoxingHelmet_ColorBase: Clothing {
        itemSize[]={2,2}; // 4
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Msp_BunnyEarsHeadband: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Msp_MedicBag: Clothing {
        itemSize[]={4,6}; // 24
        itemsCargoSize[]={8,8}; // 64
        attachments[]={
            "Belt_Left",
            "Rope"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class Msp_Slouchie_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Msp_DuffleBag_ColorBase: Clothing {
        itemSize[]={4,6}; // 24
        itemsCargoSize[]={8,8}; // 64
        attachments[]={
            "Belt_Left",
            "Rope"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class Msp_ArmyBag_ColourBase: Clothing {
        itemSize[]={4,5}; // 20
        itemsCargoSize[]={7,7}; // 49
        attachments[]={
            "Belt_Left",
            "Rope"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class Msp_BaseballCap_Base: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    // ======= VANILLA-STUFF =======
    // Backpacks
    class CourierBag: Clothing {
        itemSize[]={4,4}; // 16
        itemsCargoSize[]={6,6}; // 36
        attachments[]={
            "WalkieTalkie",
            "Rope"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class FurCourierBag: Clothing {
        itemSize[]={4,4}; // 16
        itemsCargoSize[]={6,6}; // 36
        attachments[]={
            "WalkieTalkie",
            "Rope"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class SmershBag: Clothing {
        itemSize[]={4,4}; // 16
        itemsCargoSize[]={6,6}; // 36
        attachments[]={
            "Chemlight",
            "WalkieTalkie"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class ChildBag_ColorBase: Clothing {
        itemSize[]={4,4}; // 16
        itemsCargoSize[]={6,6}; // 36
        attachments[]={
            "Chemlight",
            "WalkieTalkie"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class TaloonBag_ColorBase: Clothing {
        itemSize[]={4,5}; // 20
        itemsCargoSize[]={7,7}; // 49
        attachments[]={
            "Chemlight",
            "WalkieTalkie",
            "Belt_Left"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class ImprovisedBag: Clothing {
        itemSize[]={4,5}; // 20
        itemsCargoSize[]={7,7}; // 49
        attachments[]={
            "Chemlight",
            "WalkieTalkie",
            "Rope"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class FurImprovisedBag: Clothing {
        itemSize[]={4,5}; // 20
        itemsCargoSize[]={7,7}; // 49
        attachments[]={
            "Chemlight",
            "WalkieTalkie",
            "Rope"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class AssaultBag_ColorBase: Clothing {
        itemSize[]={4,5}; // 20
        itemsCargoSize[]={7,7}; // 49
        attachments[]={
            "Chemlight",
            "WalkieTalkie",
            "Belt_Left"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class TortillaBag: Clothing {
        itemSize[]={4,6}; // 24
        itemsCargoSize[]={8,8}; // 64
        attachments[]={
            "Chemlight",
            "WalkieTalkie",
            "Belt_Left"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class DryBag_ColorBase: Clothing {
        itemSize[]={4,6}; // 24
        itemsCargoSize[]={8,8}; // 64
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class HuntingBag: Clothing {
        itemSize[]={4,6}; // 24
        itemsCargoSize[]={8,8}; // 64
        attachments[]={
            "Chemlight",
            "WalkieTalkie",
            "Belt_Left",
            "Rope"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherSack_ColorBase: Clothing {
        itemSize[]={4,6}; // 24
        itemsCargoSize[]={8,8}; // 64
        attachments[]={
            "Chemlight",
            "WalkieTalkie",
            "Rope"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class MountainBag_ColorBase: Clothing {
        itemSize[]={5,6}; // 30
        itemsCargoSize[]={9,9}; // 81
        attachments[]={
            "Chemlight",
            "WalkieTalkie",
            "Belt_Left",
            "Rope"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class CoyoteBag_ColorBase: Clothing {
        itemSize[]={5,6}; // 30
        itemsCargoSize[]={9,9}; // 81
        attachments[]={
            "Chemlight",
            "WalkieTalkie",
            "Belt_Left",
            "Rope"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class AliceBag_ColorBase: Clothing {
        itemSize[]={5,6}; // 30
        itemsCargoSize[]={9,9}; // 81
        attachments[]={
            "Chemlight",
            "WalkieTalkie",
            "Belt_Left",
            "Rope"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    // Belts
    class CivilianBelt: Clothing {
        itemSize[]={3,1}; // 3
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class MilitaryBelt: Clothing {
        itemSize[]={3,1}; // 3
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherKnifeSheath: Clothing {
        itemSize[]={2,1}; // 2
        attachments[]={
            "Knife",
            "Whetstone"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class NylonKnifeSheath: Clothing {
        itemSize[]={2,1}; // 2
        attachments[]={
            "Knife",
            "Whetstone"
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherBelt_ColorBase: Clothing {
        itemSize[]={3,1}; // 3
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherBelt_Natural: LeatherBelt_ColorBase {
        itemSize[]={3,1}; // 3
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherBelt_Beige: LeatherBelt_ColorBase {
        itemSize[]={3,1}; // 3
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherBelt_Brown: LeatherBelt_ColorBase {
        itemSize[]={3,1}; // 3
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherBelt_Black: LeatherBelt_ColorBase {
        itemSize[]={3,1}; // 3
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    // Glasses
    class SportGlasses_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class AviatorGlasses: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class DesignerGlasses: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class ThickFramesGlasses: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class ThinFramesGlasses: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class TacticalGoggles: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class NVGHeadstrap: Clothing {
        itemSize[]={2,2}; // 4
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    // Gloves
    class WorkingGloves_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class TacticalGloves_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class NBCGloves_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class SurgicalGloves_ColorBase: Clothing {
        itemSize[]={1,1}; // 1
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherGloves_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class OMNOGloves_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    // Headgear
    class BallisticHelmet_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class BaseballCap_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class ZSh3PilotHelmet: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class ConstructionHelmet_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        attachments[]={
        };
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class BurlapSackCover: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class BeanieHat_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Ushanka_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class MotoHelmet_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class DarkMotoHelmet_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class BandanaHead_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class RadarCap_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class MilitaryBeret_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class FlatCap_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class ZmijovkaCap_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class CowboyHat_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class BoonieHat_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class OfficerHat: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class PoliceCap: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class PilotkaCap: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class TankerHelmet: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class GorkaHelmet: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class FirefightersHelmet_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class SkateHelmet_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class WeldingMask: Clothing {
        itemSize[]={2,2}; // 4
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class PrisonerCap: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherHat_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherHat_Natural: LeatherHat_ColorBase {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherHat_Beige: LeatherHat_ColorBase {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherHat_Brown: LeatherHat_ColorBase {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherHat_Black: LeatherHat_ColorBase {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class MedicalScrubsHat_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class GreatHelm: Clothing {
        itemSize[]={2,2}; // 4
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Ssh68Helmet: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class DirtBikeHelmet_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class DirtBikeHelmet_Visor: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class DirtBikeHelmet_Mouthguard: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class NBCHoodBase: Clothing {
        itemSize[]={2,2}; // 4
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class HockeyHelmet_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class SantasHat: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Mich2001Helmet: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class Headtorch_ColorBase: Switchable_Base {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    // Masks
    class GasMask: Clothing {
        itemSize[]={2,2}; // 4
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class BandanaMask_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class NioshFaceMask: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class BalaclavaMask_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class GP5GasMask: Clothing {
        itemSize[]={2,2}; // 4
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class Balaclava3Holes_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class SantasBeard: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class MouthRag: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class SurgicalMask: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class HockeyMask: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    // Pants
    class Jeans_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class CargoPants_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class TTSKOPants: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class HunterPants_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class CanvasPants_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class CanvasPantsMidi_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class TrackSuitPants_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class GorkaPants_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class PolicePants: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class PolicePantsOrel: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class ParamedicPants_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class FirefightersPants_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class PrisonUniformPants: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherPants_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherPants_Natural: LeatherPants_ColorBase {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherPants_Beige: LeatherPants_ColorBase {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherPants_Brown: LeatherPants_ColorBase {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class MedicalScrubsPants_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class USMCPants_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class SlacksPants_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class BDUPants: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class NBCPantsBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Breeches_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class ShortJeans_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Skirt_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class JumpsuitPants_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    // Shoes
    class AthleticShoes_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class DressShoes_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class JoggingShoes_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherShoes_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherShoes_Black: LeatherShoes_ColorBase {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherShoes_Natural: LeatherShoes_ColorBase {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherShoes_Brown: LeatherShoes_ColorBase {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherShoes_Beige: LeatherShoes_ColorBase {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class Sneakers_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class NBCBootsBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class Ballerinas_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class HikingBoots_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class HikingBootsLow_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class Wellies_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class WorkingBoots_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class JungleBoots_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class MilitaryBoots_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class CombatBoots_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    class TTSKOBoots: Clothing {
        itemSize[]={3,2}; // 6
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=500;
                };
            };
        };
        quickBarBonus=10;
    };
    // Tops
    class Armband_ColorBase: Clothing {
        itemSize[]={2,1}; // 2
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class TelnyashkaShirt: Clothing {
        itemSize[]={2,2}; // 4
        itemsCargoSize[]={6,5}; // 30
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class ChernarusSportShirt: Clothing {
        itemSize[]={2,2}; // 4
        itemsCargoSize[]={6,5}; // 30
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class MedicalScrubsShirt_ColorBase: Clothing {
        itemSize[]={2,2}; // 4
        itemsCargoSize[]={6,5}; // 30
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class TShirt_ColorBase: Clothing {
        itemSize[]={2,2}; // 4
        itemsCargoSize[]={6,5}; // 30
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Shirt_ColorBase: Clothing {
        itemSize[]={2,2}; // 4
        itemsCargoSize[]={6,5}; // 30
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Blouse_ColorBase: Clothing {
        itemSize[]={2,2}; // 4
        itemsCargoSize[]={6,5}; // 30
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Sweater_ColorBase: Clothing {
        itemSize[]={2,2}; // 4
        itemsCargoSize[]={6,5}; // 30
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class MiniDress_ColorBase: Clothing {
        itemSize[]={2,2}; // 4
        itemsCargoSize[]={6,5}; // 30
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LabCoat: Clothing {
        itemSize[]={2,2}; // 4
        itemsCargoSize[]={6,5}; // 30
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class NurseDress_ColorBase: Clothing {
        itemSize[]={2,2}; // 4
        itemsCargoSize[]={6,5}; // 30
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class DenimJacket: Clothing {
        itemSize[]={2,2}; // 4
        itemsCargoSize[]={6,5}; // 30
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class JumpsuitJacket_ColorBase: Clothing {
        itemSize[]={2,2}; // 4
        itemsCargoSize[]={6,5}; // 30
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Hoodie_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class Raincoat_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class PrisonUniformJacket: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class TrackSuitJacket_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class PoliceJacket: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class PoliceJacketOrel: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class ParamedicJacket_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherJacket_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherJacket_Natural: LeatherJacket_ColorBase {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherJacket_Beige: LeatherJacket_ColorBase {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherJacket_Brown: LeatherJacket_ColorBase {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherJacket_Black: LeatherJacket_ColorBase {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class NBCJacketBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class ManSuit_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class WomanSuit_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherShirt_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherShirt_Natural: LeatherShirt_ColorBase {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class TacticalShirt_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class HikingJacket_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class M65Jacket_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class TTsKOJacket_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class GorkaEJacket_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class RidersJacket_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class WoolCoat_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class FirefighterJacket_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class QuiltedJacket_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class BomberJacket_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class HuntingJacket_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class USMCJacket_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    class BDUJacket: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=200;
                };
            };
        };
        quickBarBonus=10;
    };
    // Vests
    class SmershVest: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class PressVest_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class UKAssVest_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class PoliceVest: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class PlateCarrierHolster: Clothing {
        itemSize[]={2,2}; // 4
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=20;
                };
            };
        };
        quickBarBonus=10;
    };
    class ChestHolster: Clothing {
        itemSize[]={2,2}; // 4
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=20;
                };
            };
        };
        quickBarBonus=10;
    };
    class HighCapacityVest_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherStorageVest_ColorBase: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherStorageVest_Natural: LeatherStorageVest_ColorBase {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherStorageVest_Beige: LeatherStorageVest_ColorBase {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherStorageVest_Brown: LeatherStorageVest_ColorBase {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class LeatherStorageVest_Black: LeatherStorageVest_ColorBase {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class HuntingVest: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
    class ReflexVest: Clothing {
        itemSize[]={3,2}; // 6
        itemsCargoSize[]={7,6}; // 42
        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=100;
                };
            };
        };
        quickBarBonus=10;
    };
};
