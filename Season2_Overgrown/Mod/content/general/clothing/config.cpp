class CfgPatches {
    class Overgrown_Clothing {
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
    class Shemagh_ColorBase; // Shemagh 
    class Shemagh_Scarf_ColorBase; // Shemagh Scarf
    class Shemagh_Bandit_ColorBase; // Shemagh Bandit
    class Shemagh_Facemask_ColorBase; // Shemagh Facemask
    class WWB_Shemagh_Black: Shemagh_ColorBase {
        visibilityModifier=0.85000002;
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\clothing\Shemagh_Black.paa",
            "\Overgrown\data\clothing\Shemagh_Black.paa",
            "\Overgrown\data\clothing\Shemagh_Black.paa"
        };
    };
	class WWB_Shemagh_Scarf_Black: Shemagh_Scarf_ColorBase {
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\Overgrown\data\clothing\Shemagh_Scarf_Black.paa",
			"\Overgrown\data\clothing\Shemagh_Scarf_Black.paa",
			"\Overgrown\data\clothing\Shemagh_Scarf_Black.paa"
		};
	};
    class WWB_Shemagh_Bandit_Black: Shemagh_Bandit_ColorBase {
        visibilityModifier=0.85000002;
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\clothing\Shemagh_Bandit_Black.paa",
            "\Overgrown\data\clothing\Shemagh_Bandit_Black.paa",
            "\Overgrown\data\clothing\Shemagh_Bandit_Black.paa"
        };
    };
    class WWB_Shemagh_Facemask_Black: Shemagh_Facemask_ColorBase {
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\Overgrown\data\clothing\Shemagh_Facemask_Black.paa",
			"\Overgrown\data\clothing\Shemagh_Facemask_Black.paa",
			"\Overgrown\data\clothing\Shemagh_Facemask_Black.paa"
		};
	};
	
	class Winter_Parka_Base; // Parka with Fur
	class Winter_Parka_Green; // Parka without Fur
    class WWB_Winter_Parka_Tan: Winter_Parka_Base {
        hiddenSelections[]={"zbytek","fur"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\clothing\Winter_Parka_Tan_co.paa",
            "\Overgrown\data\clothing\Winter_Parka_Fur_Black_ca.paa"
        };
    };
	class WWB_Winter_Parka_NoFurTan: Winter_Parka_Green {
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"\Overgrown\data\clothing\Winter_Parka_Tan_co.paa"
		};
	};
};