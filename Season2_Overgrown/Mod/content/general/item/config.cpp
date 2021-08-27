class CfgPatches {
    class Overgrown_Item {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data"
        };
    };
};
class CfgVehicles {
    // Nine Volt Batteries!
    class Battery9V;
    class WWB_Battery9V_Black: Battery9V {
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\Battery9V_Black_co.paa",
        };
		class EnergyManager
		{
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
    class WWB_Battery9V_Blue: Battery9V {
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\Battery9V_Blue_co.paa",
        };
		class EnergyManager
		{
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
    class WWB_Battery9V_Gray: Battery9V {
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\Battery9V_Gray_co.paa",
        };
		class EnergyManager
		{
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
    class WWB_Battery9V_Green: Battery9V {
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\Battery9V_Green_co.paa",
        };
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			energyStorageMax=200;
			energyAtSpawn=200;
			convertEnergyToQuantity=1;
			reduceMaxEnergyByDamageCoef=1;
			powerSocketsCount=1;
			compatiblePlugTypes[]={1};
		};
    }; // Supercharged one!!

    // Coloured Pouches!
    class FirstAidKit;
    class WWB_Pouch_Blank: FirstAidKit {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\container\FirstAidKit_Blank_co.paa",
        };
    };
    class WWB_Pouch_Black: FirstAidKit {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\container\FirstAidKit_Black_co.paa",
        };
    };
    class WWB_Pouch_Blue: FirstAidKit {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\container\FirstAidKit_Blue_co.paa",
        };
    };
    class WWB_Pouch_DarkGreen: FirstAidKit {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\container\FirstAidKit_DarkGreen_co.paa",
        };
    };
    class WWB_Pouch_Gray: FirstAidKit {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\container\FirstAidKit_Gray_co.paa",
        };
    };
    class WWB_Pouch_Green: FirstAidKit {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\container\FirstAidKit_Green_co.paa",
        };
    };
    class WWB_Pouch_Purple: FirstAidKit {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\container\FirstAidKit_Purple_co.paa",
        };
    };

    // Protector Cases!
    class SmallProtectorCase;
    class WWB_SmallProtectorCase_Medical: SmallProtectorCase {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\container\SmallProtectorCase_Medical_co.paa",
        };
    };
    class WWB_SmallProtectorCase_MedicalWhite: SmallProtectorCase {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\container\SmallProtectorCase_MedicalWhite_co.paa",
        };
    };
    class WWB_SmallProtectorCase_Scotland: SmallProtectorCase {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\container\SmallProtectorCase_Scotland_co.paa",
        };
    };
};