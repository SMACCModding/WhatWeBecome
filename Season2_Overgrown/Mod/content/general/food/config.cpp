class CfgPatches {
    class Overgrown_Food {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data"
        };
    };
};
class MeatStageTransitions;
class CfgVehicles {
    // Should probably automate this shit causes omfg its huge now

    // ====  Manual edits  ====
    // Basics
    class Edible_Base;
    class BakedBeansCan;

    // ======= VANILLA-STUFF =======
    class BakedBeansCan_Opened: Edible_Base {
        inventorySlot[]=
        {
            "Ingredient",
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC",
            "SmokingA",
            "SmokingB",
            "SmokingC",
            "SmokingD"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
        class Food {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[]={0,0,0};
                    nutrition_properties[]={7,50,50,1,0,4};
                    cooking_properties[]={0,0};
                };
                class Rotten
                {
                    visual_properties[]={-1,-1,5};
                    nutrition_properties[]=
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[]={0,0};
                };
                class Baked
                {
                    visual_properties[]={0,1,1};
                    nutrition_properties[]={4,200,50,1,0};
                    cooking_properties[]={70,45};
                };
                class Boiled
                {
                    visual_properties[]={0,2,2};
                    nutrition_properties[]={4,150,150,1,0};
                    cooking_properties[]={70,55};
                };
                class Dried
                {
                    visual_properties[]={0,3,3};
                    nutrition_properties[]={5,150,0,1,0};
                    cooking_properties[]={70,120,80};
                };
                class Burned
                {
                    visual_properties[]={0,4,4};
                    nutrition_properties[]={7,50,0,1,0,16};
                    cooking_properties[]={100,30};
                };
            };
            class FoodStageTransitions: MeatStageTransitions
            {
            };
        };
    };
    class PeachesCan_Opened: Edible_Base {
            inventorySlot[]=
            {
                "Ingredient",
                "DirectCookingA",
                "DirectCookingB",
                "DirectCookingC",
                "SmokingA",
                "SmokingB",
                "SmokingC",
                "SmokingD"
            };
            ContinuousActions[]={101,105};
            InteractActions[]={};
            class Food
            {
                class FoodStages
                {
                    class Raw
                    {
                        visual_properties[]={0,0,0};
                        nutrition_properties[]={7,50,50,1,0,4};
                        cooking_properties[]={0,0};
                    };
                    class Rotten
                    {
                        visual_properties[]={-1,-1,5};
                        nutrition_properties[]=
                        {
                            10,
                            25,
                            25,
                            1,
                            0,
                            "4 + 		  16"
                        };
                        cooking_properties[]={0,0};
                    };
                    class Baked
                    {
                        visual_properties[]={0,1,1};
                        nutrition_properties[]={4,200,50,1,0};
                        cooking_properties[]={70,45};
                    };
                    class Boiled
                    {
                        visual_properties[]={0,2,2};
                        nutrition_properties[]={4,150,150,1,0};
                        cooking_properties[]={70,55};
                    };
                    class Dried
                    {
                        visual_properties[]={0,3,3};
                        nutrition_properties[]={5,150,0,1,0};
                        cooking_properties[]={70,120,80};
                    };
                    class Burned
                    {
                        visual_properties[]={0,4,4};
                        nutrition_properties[]={7,50,0,1,0,16};
                        cooking_properties[]={100,30};
                    };
                };
                class FoodStageTransitions: MeatStageTransitions
                {
                };
            };
        };
    class TacticalBaconCan_Opened: Edible_Base {
            inventorySlot[]=
            {
                "Ingredient",
                "DirectCookingA",
                "DirectCookingB",
                "DirectCookingC",
                "SmokingA",
                "SmokingB",
                "SmokingC",
                "SmokingD"
            };
            ContinuousActions[]={101,105};
            InteractActions[]={};
            class Food
            {
                class FoodStages
                {
                    class Raw
                    {
                        visual_properties[]={0,0,0};
                        nutrition_properties[]={7,50,50,1,0,4};
                        cooking_properties[]={0,0};
                    };
                    class Rotten
                    {
                        visual_properties[]={-1,-1,5};
                        nutrition_properties[]=
                        {
                            10,
                            25,
                            25,
                            1,
                            0,
                            "4 + 		  16"
                        };
                        cooking_properties[]={0,0};
                    };
                    class Baked
                    {
                        visual_properties[]={0,1,1};
                        nutrition_properties[]={4,200,50,1,0};
                        cooking_properties[]={70,45};
                    };
                    class Boiled
                    {
                        visual_properties[]={0,2,2};
                        nutrition_properties[]={4,150,150,1,0};
                        cooking_properties[]={70,55};
                    };
                    class Dried
                    {
                        visual_properties[]={0,3,3};
                        nutrition_properties[]={5,150,0,1,0};
                        cooking_properties[]={70,120,80};
                    };
                    class Burned
                    {
                        visual_properties[]={0,4,4};
                        nutrition_properties[]={7,50,0,1,0,16};
                        cooking_properties[]={100,30};
                    };
                };
                class FoodStageTransitions: MeatStageTransitions
                {
                };
            };
        };
    class SpaghettiCan_Opened: Edible_Base {
            inventorySlot[]=
            {
                "Ingredient",
                "DirectCookingA",
                "DirectCookingB",
                "DirectCookingC",
                "SmokingA",
                "SmokingB",
                "SmokingC",
                "SmokingD"
            };
            ContinuousActions[]={101,105};
            InteractActions[]={};
            class Food
            {
                class FoodStages
                {
                    class Raw
                    {
                        visual_properties[]={0,0,0};
                        nutrition_properties[]={7,50,50,1,0,4};
                        cooking_properties[]={0,0};
                    };
                    class Rotten
                    {
                        visual_properties[]={-1,-1,5};
                        nutrition_properties[]=
                        {
                            10,
                            25,
                            25,
                            1,
                            0,
                            "4 + 		  16"
                        };
                        cooking_properties[]={0,0};
                    };
                    class Baked
                    {
                        visual_properties[]={0,1,1};
                        nutrition_properties[]={4,200,50,1,0};
                        cooking_properties[]={70,45};
                    };
                    class Boiled
                    {
                        visual_properties[]={0,2,2};
                        nutrition_properties[]={4,150,150,1,0};
                        cooking_properties[]={70,55};
                    };
                    class Dried
                    {
                        visual_properties[]={0,3,3};
                        nutrition_properties[]={5,150,0,1,0};
                        cooking_properties[]={70,120,80};
                    };
                    class Burned
                    {
                        visual_properties[]={0,4,4};
                        nutrition_properties[]={7,50,0,1,0,16};
                        cooking_properties[]={100,30};
                    };
                };
                class FoodStageTransitions: MeatStageTransitions
                {
                };
            };
        };
    class SardinesCan_Opened: Edible_Base {
            inventorySlot[]=
            {
                "Ingredient",
                "DirectCookingA",
                "DirectCookingB",
                "DirectCookingC",
                "SmokingA",
                "SmokingB",
                "SmokingC",
                "SmokingD"
            };
            ContinuousActions[]={101,105};
            InteractActions[]={};
            class Food
            {
                class FoodStages
                {
                    class Raw
                    {
                        visual_properties[]={0,0,0};
                        nutrition_properties[]={7,50,50,1,0,4};
                        cooking_properties[]={0,0};
                    };
                    class Rotten
                    {
                        visual_properties[]={-1,-1,5};
                        nutrition_properties[]=
                        {
                            10,
                            25,
                            25,
                            1,
                            0,
                            "4 + 		  16"
                        };
                        cooking_properties[]={0,0};
                    };
                    class Baked
                    {
                        visual_properties[]={0,1,1};
                        nutrition_properties[]={4,200,50,1,0};
                        cooking_properties[]={70,45};
                    };
                    class Boiled
                    {
                        visual_properties[]={0,2,2};
                        nutrition_properties[]={4,150,150,1,0};
                        cooking_properties[]={70,55};
                    };
                    class Dried
                    {
                        visual_properties[]={0,3,3};
                        nutrition_properties[]={5,150,0,1,0};
                        cooking_properties[]={70,120,80};
                    };
                    class Burned
                    {
                        visual_properties[]={0,4,4};
                        nutrition_properties[]={7,50,0,1,0,16};
                        cooking_properties[]={100,30};
                    };
                };
                class FoodStageTransitions: MeatStageTransitions
                {
                };
            };
        };
    class TunaCan_Opened: Edible_Base {
            inventorySlot[]=
            {
                "Ingredient",
                "DirectCookingA",
                "DirectCookingB",
                "DirectCookingC",
                "SmokingA",
                "SmokingB",
                "SmokingC",
                "SmokingD"
            };
            ContinuousActions[]={101,105};
            InteractActions[]={};
            class Food
            {
                class FoodStages
                {
                    class Raw
                    {
                        visual_properties[]={0,0,0};
                        nutrition_properties[]={7,50,50,1,0,4};
                        cooking_properties[]={0,0};
                    };
                    class Rotten
                    {
                        visual_properties[]={-1,-1,5};
                        nutrition_properties[]=
                        {
                            10,
                            25,
                            25,
                            1,
                            0,
                            "4 + 		  16"
                        };
                        cooking_properties[]={0,0};
                    };
                    class Baked
                    {
                        visual_properties[]={0,1,1};
                        nutrition_properties[]={4,200,50,1,0};
                        cooking_properties[]={70,45};
                    };
                    class Boiled
                    {
                        visual_properties[]={0,2,2};
                        nutrition_properties[]={4,150,150,1,0};
                        cooking_properties[]={70,55};
                    };
                    class Dried
                    {
                        visual_properties[]={0,3,3};
                        nutrition_properties[]={5,150,0,1,0};
                        cooking_properties[]={70,120,80};
                    };
                    class Burned
                    {
                        visual_properties[]={0,4,4};
                        nutrition_properties[]={7,50,0,1,0,16};
                        cooking_properties[]={100,30};
                    };
                };
                class FoodStageTransitions: MeatStageTransitions
                {
                };
            };
        };
    class FoodCan_250g_Opened_ColorBase: Edible_Base {
            inventorySlot[]=
            {
                "Ingredient",
                "DirectCookingA",
                "DirectCookingB",
                "DirectCookingC",
                "SmokingA",
                "SmokingB",
                "SmokingC",
                "SmokingD"
            };
            ContinuousActions[]={101,105};
            InteractActions[]={};
            class Food
            {
                class FoodStages
                {
                    class Raw
                    {
                        visual_properties[]={0,0,0};
                        nutrition_properties[]={7,50,50,1,0,4};
                        cooking_properties[]={0,0};
                    };
                    class Rotten
                    {
                        visual_properties[]={-1,-1,5};
                        nutrition_properties[]=
                        {
                            10,
                            25,
                            25,
                            1,
                            0,
                            "4 + 		  16"
                        };
                        cooking_properties[]={0,0};
                    };
                    class Baked
                    {
                        visual_properties[]={0,1,1};
                        nutrition_properties[]={4,200,50,1,0};
                        cooking_properties[]={70,45};
                    };
                    class Boiled
                    {
                        visual_properties[]={0,2,2};
                        nutrition_properties[]={4,150,150,1,0};
                        cooking_properties[]={70,55};
                    };
                    class Dried
                    {
                        visual_properties[]={0,3,3};
                        nutrition_properties[]={5,150,0,1,0};
                        cooking_properties[]={70,120,80};
                    };
                    class Burned
                    {
                        visual_properties[]={0,4,4};
                        nutrition_properties[]={7,50,0,1,0,16};
                        cooking_properties[]={100,30};
                    };
                };
                class FoodStageTransitions: MeatStageTransitions
                {
                };
            };
        };
    class UnknownFoodCan_Opened: Edible_Base {
            inventorySlot[]=
            {
                "Ingredient",
                "DirectCookingA",
                "DirectCookingB",
                "DirectCookingC",
                "SmokingA",
                "SmokingB",
                "SmokingC",
                "SmokingD"
            };
            ContinuousActions[]={101,105};
            InteractActions[]={};
            class Food
            {
                class FoodStages
                {
                    class Raw
                    {
                        visual_properties[]={0,0,0};
                        nutrition_properties[]={7,50,50,1,0,4};
                        cooking_properties[]={0,0};
                    };
                    class Rotten
                    {
                        visual_properties[]={-1,-1,5};
                        nutrition_properties[]=
                        {
                            10,
                            25,
                            25,
                            1,
                            0,
                            "4 + 		  16"
                        };
                        cooking_properties[]={0,0};
                    };
                    class Baked
                    {
                        visual_properties[]={0,1,1};
                        nutrition_properties[]={4,200,50,1,0};
                        cooking_properties[]={70,45};
                    };
                    class Boiled
                    {
                        visual_properties[]={0,2,2};
                        nutrition_properties[]={4,150,150,1,0};
                        cooking_properties[]={70,55};
                    };
                    class Dried
                    {
                        visual_properties[]={0,3,3};
                        nutrition_properties[]={5,150,0,1,0};
                        cooking_properties[]={70,120,80};
                    };
                    class Burned
                    {
                        visual_properties[]={0,4,4};
                        nutrition_properties[]={7,50,0,1,0,16};
                        cooking_properties[]={100,30};
                    };
                };
                class FoodStageTransitions: MeatStageTransitions
                {
                };
            };
        };
    class FoodCan_100g_Opened_ColorBase: Edible_Base {
            inventorySlot[]=
            {
                "Ingredient",
                "DirectCookingA",
                "DirectCookingB",
                "DirectCookingC",
                "SmokingA",
                "SmokingB",
                "SmokingC",
                "SmokingD"
            };
            ContinuousActions[]={101,105};
            InteractActions[]={};
            class Food
            {
                class FoodStages
                {
                    class Raw
                    {
                        visual_properties[]={0,0,0};
                        nutrition_properties[]={7,50,50,1,0,4};
                        cooking_properties[]={0,0};
                    };
                    class Rotten
                    {
                        visual_properties[]={-1,-1,5};
                        nutrition_properties[]=
                        {
                            10,
                            25,
                            25,
                            1,
                            0,
                            "4 + 		  16"
                        };
                        cooking_properties[]={0,0};
                    };
                    class Baked
                    {
                        visual_properties[]={0,1,1};
                        nutrition_properties[]={4,200,50,1,0};
                        cooking_properties[]={70,45};
                    };
                    class Boiled
                    {
                        visual_properties[]={0,2,2};
                        nutrition_properties[]={4,150,150,1,0};
                        cooking_properties[]={70,55};
                    };
                    class Dried
                    {
                        visual_properties[]={0,3,3};
                        nutrition_properties[]={5,150,0,1,0};
                        cooking_properties[]={70,120,80};
                    };
                    class Burned
                    {
                        visual_properties[]={0,4,4};
                        nutrition_properties[]={7,50,0,1,0,16};
                        cooking_properties[]={100,30};
                    };
                };
                class FoodStageTransitions: MeatStageTransitions
                {
                };
            };
        };

    // ======= MODDED-STUFF =======
    // New Cans!
    // Beans & Peas
    class WWB_Can_BlackBeansCan: BakedBeansCan {
        displayName="Canned Black Beans";
        descriptionShort="A tin can filled with black beans in water. Will last many years if it remains sealed.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_BlackBeans_co.paa"
        };
    };
    class WWB_Can_BlackBeansCan_Opened: BakedBeansCan_Opened {
        displayName="Canned Black Beans";
        descriptionShort="A tin can filled with black beans in water. Will last a week or so now its open.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_BlackBeans_co.paa"
        };
    };
    class WWB_Can_MixedBeansCan: BakedBeansCan {
        displayName="Canned Mixed Beans";
        descriptionShort="A tin can filled with mixed beans in water. Will last many years if it remains sealed.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_MixedBeans_co.paa"
        };
    };
    class WWB_Can_MixedBeanCan_Opened: BakedBeansCan_Opened {
        displayName="Canned Mixed Beans";
        descriptionShort="A tin can filled with mixed beans in water. Will last a week or so now its open.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_MixedBeans_co.paa"
        };
    };
    class WWB_Can_KidneyBeansCan: BakedBeansCan {
        displayName="Canned Kidney Beans";
        descriptionShort="A tin can filled with Kidney beans in water. Will last many years if it remains sealed.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_KidneyBeans_co.paa"
        };
    };
    class WWB_Can_KidneyBeansCan_Opened: BakedBeansCan_Opened {
        displayName="Canned Kidney Beans";
        descriptionShort="A tin can filled with Kidney beans in water. Will last a week or so now its open.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_KidneyBeans_co.paa"
        };
        inventorySlot[]=
        {
            "Ingredient",
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC",
            "SmokingA",
            "SmokingB",
            "SmokingC",
            "SmokingD"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
        class Food {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[]={0,0,0};
                    nutrition_properties[]={7,50,50,1,0,4};
                    cooking_properties[]={0,0};
                };
                class Rotten
                {
                    visual_properties[]={-1,-1,5};
                    nutrition_properties[]=
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[]={0,0};
                };
                class Baked
                {
                    visual_properties[]={0,1,1};
                    nutrition_properties[]={4,200,50,1,0};
                    cooking_properties[]={70,45};
                };
                class Boiled
                {
                    visual_properties[]={0,2,2};
                    nutrition_properties[]={4,150,150,1,0};
                    cooking_properties[]={70,55};
                };
                class Dried
                {
                    visual_properties[]={0,3,3};
                    nutrition_properties[]={5,150,0,1,0};
                    cooking_properties[]={70,120,80};
                };
                class Burned
                {
                    visual_properties[]={0,4,4};
                    nutrition_properties[]={7,50,0,1,0,16};
                    cooking_properties[]={100,30};
                };
            };
            class FoodStageTransitions: MeatStageTransitions
            {
            };
        };
    };
    class WWB_Can_PintoBeansCan: BakedBeansCan {
        displayName="Canned Pinto Beans";
        descriptionShort="A tin can filled with pinto beans in water. Will last many years if it remains sealed.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_PintoBeans_co.paa"
        };
    };
    class WWB_Can_PintoBeansCan_Opened: BakedBeansCan_Opened {
        displayName="Canned Pinto Beans";
        descriptionShort="A tin can filled with pinto beans in water. Will last a week or so now its open.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_PintoBeans_co.paa"
        };
        inventorySlot[]=
        {
            "Ingredient",
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC",
            "SmokingA",
            "SmokingB",
            "SmokingC",
            "SmokingD"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
        class Food {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[]={0,0,0};
                    nutrition_properties[]={7,50,50,1,0,4};
                    cooking_properties[]={0,0};
                };
                class Rotten
                {
                    visual_properties[]={-1,-1,5};
                    nutrition_properties[]=
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[]={0,0};
                };
                class Baked
                {
                    visual_properties[]={0,1,1};
                    nutrition_properties[]={4,200,50,1,0};
                    cooking_properties[]={70,45};
                };
                class Boiled
                {
                    visual_properties[]={0,2,2};
                    nutrition_properties[]={4,150,150,1,0};
                    cooking_properties[]={70,55};
                };
                class Dried
                {
                    visual_properties[]={0,3,3};
                    nutrition_properties[]={5,150,0,1,0};
                    cooking_properties[]={70,120,80};
                };
                class Burned
                {
                    visual_properties[]={0,4,4};
                    nutrition_properties[]={7,50,0,1,0,16};
                    cooking_properties[]={100,30};
                };
            };
            class FoodStageTransitions: MeatStageTransitions
            {
            };
        };
    };
    class WWB_Can_PeasCan: BakedBeansCan {
        displayName="Canned Peas";
        descriptionShort="A tin can filled with green peas in water. Will last many years if it remains sealed.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_Peas_co.paa"
        };
    };
    class WWB_Can_PeasCan_Opened: BakedBeansCan_Opened {
        displayName="Canned Peas";
        descriptionShort="A tin can filled with green peas in water. Will last a week or so now its open.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_Peas_co.paa"
        };
        inventorySlot[]=
        {
            "Ingredient",
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC",
            "SmokingA",
            "SmokingB",
            "SmokingC",
            "SmokingD"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
        class Food {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[]={0,0,0};
                    nutrition_properties[]={7,50,50,1,0,4};
                    cooking_properties[]={0,0};
                };
                class Rotten
                {
                    visual_properties[]={-1,-1,5};
                    nutrition_properties[]=
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[]={0,0};
                };
                class Baked
                {
                    visual_properties[]={0,1,1};
                    nutrition_properties[]={4,200,50,1,0};
                    cooking_properties[]={70,45};
                };
                class Boiled
                {
                    visual_properties[]={0,2,2};
                    nutrition_properties[]={4,150,150,1,0};
                    cooking_properties[]={70,55};
                };
                class Dried
                {
                    visual_properties[]={0,3,3};
                    nutrition_properties[]={5,150,0,1,0};
                    cooking_properties[]={70,120,80};
                };
                class Burned
                {
                    visual_properties[]={0,4,4};
                    nutrition_properties[]={7,50,0,1,0,16};
                    cooking_properties[]={100,30};
                };
            };
            class FoodStageTransitions: MeatStageTransitions
            {
            };
        };
    };
    // Fruits & Veg
    class WWB_Can_ApplesCan: BakedBeansCan {
        displayName="Canned Apples";
        descriptionShort="A tin can filled with apples in juices. Will last many years if it remains sealed.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_Apples_co.paa"
        };
    };
    class WWB_Can_ApplesCan_Opened: BakedBeansCan_Opened {
        displayName="Canned Apples";
        descriptionShort="A tin can filled with apples in juices. Will last a week or so now its open.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_Apples_co.paa"
        };
        inventorySlot[]=
        {
            "Ingredient",
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC",
            "SmokingA",
            "SmokingB",
            "SmokingC",
            "SmokingD"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
        class Food {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[]={0,0,0};
                    nutrition_properties[]={7,50,50,1,0,4};
                    cooking_properties[]={0,0};
                };
                class Rotten
                {
                    visual_properties[]={-1,-1,5};
                    nutrition_properties[]=
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[]={0,0};
                };
                class Baked
                {
                    visual_properties[]={0,1,1};
                    nutrition_properties[]={4,200,50,1,0};
                    cooking_properties[]={70,45};
                };
                class Boiled
                {
                    visual_properties[]={0,2,2};
                    nutrition_properties[]={4,150,150,1,0};
                    cooking_properties[]={70,55};
                };
                class Dried
                {
                    visual_properties[]={0,3,3};
                    nutrition_properties[]={5,150,0,1,0};
                    cooking_properties[]={70,120,80};
                };
                class Burned
                {
                    visual_properties[]={0,4,4};
                    nutrition_properties[]={7,50,0,1,0,16};
                    cooking_properties[]={100,30};
                };
            };
            class FoodStageTransitions: MeatStageTransitions
            {
            };
        };
    };
    class WWB_Can_CherriesCan: BakedBeansCan {
        displayName="Canned Cherries";
        descriptionShort="A tin can filled with cherries in juices. Will last many years if it remains sealed.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_Cherries_co.paa"
        };
    };
    class WWB_Can_CherriesCan_Opened: BakedBeansCan_Opened {
        displayName="Canned Cherries";
        descriptionShort="A tin can filled with cherries in juices. Will last a week or so now its open.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_Cherries_co.paa"
        };
        inventorySlot[]=
        {
            "Ingredient",
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC",
            "SmokingA",
            "SmokingB",
            "SmokingC",
            "SmokingD"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
        class Food {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[]={0,0,0};
                    nutrition_properties[]={7,50,50,1,0,4};
                    cooking_properties[]={0,0};
                };
                class Rotten
                {
                    visual_properties[]={-1,-1,5};
                    nutrition_properties[]=
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[]={0,0};
                };
                class Baked
                {
                    visual_properties[]={0,1,1};
                    nutrition_properties[]={4,200,50,1,0};
                    cooking_properties[]={70,45};
                };
                class Boiled
                {
                    visual_properties[]={0,2,2};
                    nutrition_properties[]={4,150,150,1,0};
                    cooking_properties[]={70,55};
                };
                class Dried
                {
                    visual_properties[]={0,3,3};
                    nutrition_properties[]={5,150,0,1,0};
                    cooking_properties[]={70,120,80};
                };
                class Burned
                {
                    visual_properties[]={0,4,4};
                    nutrition_properties[]={7,50,0,1,0,16};
                    cooking_properties[]={100,30};
                };
            };
            class FoodStageTransitions: MeatStageTransitions
            {
            };
        };
    };
    class WWB_Can_PearsCan: BakedBeansCan {
        displayName="Canned Pears";
        descriptionShort="A tin can filled with pears in juices. Will last many years if it remains sealed.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_Pears_co.paa"
        };
    };
    class WWB_Can_PearsCan_Opened: BakedBeansCan_Opened {
        displayName="Canned Pears";
        descriptionShort="A tin can filled with pears in juices. Will last a week or so now its open.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_Pears_co.paa"
        };
        inventorySlot[]=
        {
            "Ingredient",
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC",
            "SmokingA",
            "SmokingB",
            "SmokingC",
            "SmokingD"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
        class Food {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[]={0,0,0};
                    nutrition_properties[]={7,50,50,1,0,4};
                    cooking_properties[]={0,0};
                };
                class Rotten
                {
                    visual_properties[]={-1,-1,5};
                    nutrition_properties[]=
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[]={0,0};
                };
                class Baked
                {
                    visual_properties[]={0,1,1};
                    nutrition_properties[]={4,200,50,1,0};
                    cooking_properties[]={70,45};
                };
                class Boiled
                {
                    visual_properties[]={0,2,2};
                    nutrition_properties[]={4,150,150,1,0};
                    cooking_properties[]={70,55};
                };
                class Dried
                {
                    visual_properties[]={0,3,3};
                    nutrition_properties[]={5,150,0,1,0};
                    cooking_properties[]={70,120,80};
                };
                class Burned
                {
                    visual_properties[]={0,4,4};
                    nutrition_properties[]={7,50,0,1,0,16};
                    cooking_properties[]={100,30};
                };
            };
            class FoodStageTransitions: MeatStageTransitions
            {
            };
        };
    };
    class WWB_Can_RhubarbCan: BakedBeansCan {
        displayName="Canned Rhubarb";
        descriptionShort="A tin can filled with rhubarb in water. Will last many years if it remains sealed.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_Rhubarb_co.paa"
        };
    };
    class WWB_Can_RhubarbCan_Opened: BakedBeansCan_Opened {
        displayName="Canned Rhubarb";
        descriptionShort="A tin can filled with rhubarb in water. Will last a week or so now its open.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_Rhubarb_co.paa"
        };
        inventorySlot[]=
        {
            "Ingredient",
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC",
            "SmokingA",
            "SmokingB",
            "SmokingC",
            "SmokingD"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
        class Food {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[]={0,0,0};
                    nutrition_properties[]={7,50,50,1,0,4};
                    cooking_properties[]={0,0};
                };
                class Rotten
                {
                    visual_properties[]={-1,-1,5};
                    nutrition_properties[]=
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[]={0,0};
                };
                class Baked
                {
                    visual_properties[]={0,1,1};
                    nutrition_properties[]={4,200,50,1,0};
                    cooking_properties[]={70,45};
                };
                class Boiled
                {
                    visual_properties[]={0,2,2};
                    nutrition_properties[]={4,150,150,1,0};
                    cooking_properties[]={70,55};
                };
                class Dried
                {
                    visual_properties[]={0,3,3};
                    nutrition_properties[]={5,150,0,1,0};
                    cooking_properties[]={70,120,80};
                };
                class Burned
                {
                    visual_properties[]={0,4,4};
                    nutrition_properties[]={7,50,0,1,0,16};
                    cooking_properties[]={100,30};
                };
            };
            class FoodStageTransitions: MeatStageTransitions
            {
            };
        };
    };
    class WWB_Can_PlumsCan: BakedBeansCan {
        displayName="Canned Plums";
        descriptionShort="A tin can filled with plums in juices. Will last many years if it remains sealed.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_Plums_co.paa"
        };
    };
    class WWB_Can_PlumsCan_Opened: BakedBeansCan_Opened {
        displayName="Canned Plums";
        descriptionShort="A tin can filled with plums in juices. Will last a week or so now its open.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_Plums_co.paa"
        };
        inventorySlot[]=
        {
            "Ingredient",
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC",
            "SmokingA",
            "SmokingB",
            "SmokingC",
            "SmokingD"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
        class Food {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[]={0,0,0};
                    nutrition_properties[]={7,50,50,1,0,4};
                    cooking_properties[]={0,0};
                };
                class Rotten
                {
                    visual_properties[]={-1,-1,5};
                    nutrition_properties[]=
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[]={0,0};
                };
                class Baked
                {
                    visual_properties[]={0,1,1};
                    nutrition_properties[]={4,200,50,1,0};
                    cooking_properties[]={70,45};
                };
                class Boiled
                {
                    visual_properties[]={0,2,2};
                    nutrition_properties[]={4,150,150,1,0};
                    cooking_properties[]={70,55};
                };
                class Dried
                {
                    visual_properties[]={0,3,3};
                    nutrition_properties[]={5,150,0,1,0};
                    cooking_properties[]={70,120,80};
                };
                class Burned
                {
                    visual_properties[]={0,4,4};
                    nutrition_properties[]={7,50,0,1,0,16};
                    cooking_properties[]={100,30};
                };
            };
            class FoodStageTransitions: MeatStageTransitions
            {
            };
        };
    };
    class WWB_Can_LentilsCan: BakedBeansCan {
        displayName="Canned Lentils";
        descriptionShort="A tin can filled with dry lentils. Will last many years if it remains sealed.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_Lentils_co.paa"
        };
    };
    class WWB_Can_LentilsCan_Opened: BakedBeansCan_Opened {
        displayName="Canned Lentils";
        descriptionShort="A tin can filled with dry lentils. Should last a while if they stay dry, even if its open.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_Lentils_co.paa"
        };
        inventorySlot[]=
        {
            "Ingredient",
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC",
            "SmokingA",
            "SmokingB",
            "SmokingC",
            "SmokingD"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
        class Food {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[]={0,0,0};
                    nutrition_properties[]={7,50,50,1,0,4};
                    cooking_properties[]={0,0};
                };
                class Rotten
                {
                    visual_properties[]={-1,-1,5};
                    nutrition_properties[]=
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[]={0,0};
                };
                class Baked
                {
                    visual_properties[]={0,1,1};
                    nutrition_properties[]={4,200,50,1,0};
                    cooking_properties[]={70,45};
                };
                class Boiled
                {
                    visual_properties[]={0,2,2};
                    nutrition_properties[]={4,150,150,1,0};
                    cooking_properties[]={70,55};
                };
                class Dried
                {
                    visual_properties[]={0,3,3};
                    nutrition_properties[]={5,150,0,1,0};
                    cooking_properties[]={70,120,80};
                };
                class Burned
                {
                    visual_properties[]={0,4,4};
                    nutrition_properties[]={7,50,0,1,0,16};
                    cooking_properties[]={100,30};
                };
            };
            class FoodStageTransitions: MeatStageTransitions
            {
            };
        };
    };
    // Treats etc
    class WWB_Can_CondensedMilkCan: BakedBeansCan {
        displayName="Canned Condensed Milk";
        descriptionShort="A tin can filled with dry condensed milk. Will last many years if it remains sealed.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_CondensedMilk_co.paa"
        };
    };
    class WWB_Can_CondensedMilkCan_Opened: BakedBeansCan_Opened {
        displayName="Canned Condensed Milk";
        descriptionShort="A tin can filled with dry condensed milk. Will last a week or so now its open.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_CondensedMilk_co.paa"
        };
        inventorySlot[]=
        {
            "Ingredient",
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC",
            "SmokingA",
            "SmokingB",
            "SmokingC",
            "SmokingD"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
        class Food {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[]={0,0,0};
                    nutrition_properties[]={7,50,50,1,0,4};
                    cooking_properties[]={0,0};
                };
                class Rotten
                {
                    visual_properties[]={-1,-1,5};
                    nutrition_properties[]=
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[]={0,0};
                };
                class Baked
                {
                    visual_properties[]={0,1,1};
                    nutrition_properties[]={4,200,50,1,0};
                    cooking_properties[]={70,45};
                };
                class Boiled
                {
                    visual_properties[]={0,2,2};
                    nutrition_properties[]={4,150,150,1,0};
                    cooking_properties[]={70,55};
                };
                class Dried
                {
                    visual_properties[]={0,3,3};
                    nutrition_properties[]={5,150,0,1,0};
                    cooking_properties[]={70,120,80};
                };
                class Burned
                {
                    visual_properties[]={0,4,4};
                    nutrition_properties[]={7,50,0,1,0,16};
                    cooking_properties[]={100,30};
                };
            };
            class FoodStageTransitions: MeatStageTransitions
            {
            };
        };
    };
    class WWB_Can_CaramelCan: BakedBeansCan {
        displayName="Canned Caramel";
        descriptionShort="A tin can filled with caramel. Will last a week or so now its been warmed.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_Caramel_co.paa"
        };
    };
    class WWB_Can_CaramelCan_Opened: BakedBeansCan_Opened {
        displayName="Canned Caramel";
        descriptionShort="A tin can filled with caramel. Will last a few days or so now its open.";
        hiddenSelectionsTextures[]=
        {
            "Overgrown\data\food\Can_Caramel_co.paa"
        };
        inventorySlot[]=
        {
            "Ingredient",
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC",
            "SmokingA",
            "SmokingB",
            "SmokingC",
            "SmokingD"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
        class Food {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[]={0,0,0};
                    nutrition_properties[]={7,50,50,1,0,4};
                    cooking_properties[]={0,0};
                };
                class Rotten
                {
                    visual_properties[]={-1,-1,5};
                    nutrition_properties[]=
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[]={0,0};
                };
                class Baked
                {
                    visual_properties[]={0,1,1};
                    nutrition_properties[]={4,200,50,1,0};
                    cooking_properties[]={70,45};
                };
                class Boiled
                {
                    visual_properties[]={0,2,2};
                    nutrition_properties[]={4,150,150,1,0};
                    cooking_properties[]={70,55};
                };
                class Dried
                {
                    visual_properties[]={0,3,3};
                    nutrition_properties[]={5,150,0,1,0};
                    cooking_properties[]={70,120,80};
                };
                class Burned
                {
                    visual_properties[]={0,4,4};
                    nutrition_properties[]={7,50,0,1,0,16};
                    cooking_properties[]={100,30};
                };
            };
            class FoodStageTransitions: MeatStageTransitions
            {
            };
        };
    };
};