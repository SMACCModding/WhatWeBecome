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
    class Battery9V;
    class WWB_Battery9V_Black: Battery9V {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\Battery9V_Black_co.paa",
        };
    };
    class WWB_Battery9V_Blue: Battery9V {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\Battery9V_Blue_co.paa",
        };
    };
    class WWB_Battery9V_Gray: Battery9V {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\Battery9V_Gray_co.paa",
        };
    };
    class WWB_Battery9V_Green: Battery9V {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\item\Battery9V_Green_co.paa",
        };
    };
};