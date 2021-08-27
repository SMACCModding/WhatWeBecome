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
    class Shemagh_Green; // Shemagh
    class Shemagh_Scarf_Green; // Shemagh Scarf
    class Shemagh_Bandit_Green; // Shemagh Bandit
    class Shemagh_Facemask_Green.; // Shemagh Facemask

    // Black Shemagh - TODO:Fix these
    class WWB_Shemagh_Black: Shemagh_Green {
        visibilityModifier=0.85000002;
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\clothing\Shemagh_Black.paa",
            "\Overgrown\data\clothing\Shemagh_Black.paa",
            "\Overgrown\data\clothing\Shemagh_Black.paa"
        };
    };
	class WWB_Shemagh_Scarf_Black: Shemagh_Scarf_Green {
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\Overgrown\data\clothing\Shemagh_Scarf_Black.paa",
			"\Overgrown\data\clothing\Shemagh_Scarf_Black.paa",
			"\Overgrown\data\clothing\Shemagh_Scarf_Black.paa"
		};
	};
    class WWB_Shemagh_Bandit_Black: Shemagh_Bandit_Green {
        visibilityModifier=0.85000002;
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\clothing\Shemagh_Bandit_Black.paa",
            "\Overgrown\data\clothing\Shemagh_Bandit_Black.paa",
            "\Overgrown\data\clothing\Shemagh_Bandit_Black.paa"
        };
    };
    class WWB_Shemagh_Facemask_Black: Shemagh_Facemask_Green {
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\Overgrown\data\clothing\mask\Shemagh_Facemask_Black.paa",
			"\Overgrown\data\clothing\mask\Shemagh_Facemask_Black.paa",
			"\Overgrown\data\clothing\mask\Shemagh_Facemask_Black.paa"
		};
	};
	
	class Winter_Parka_Base; // Parka with Fur
	class Winter_Parka_Green; // Parka without Fur

	//Tan Parka
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
	//Black Parka
    class WWB_Winter_Parka_Black: Winter_Parka_Base {
        hiddenSelections[]={"zbytek","fur"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\clothing\Winter_Parka_Black_co.paa",
			"Windstrideclothing\Models\Winter_Parka\data\winterparka_fur_ca.paa"
        };
    };
	class WWB_Winter_Parka_NoFurBlack: Winter_Parka_Green {
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"\Overgrown\data\clothing\Winter_Parka_Black_co.paa"
		};
	};
	//Blue Parka
    class WWB_Winter_Parka_Blue: Winter_Parka_Base {
        hiddenSelections[]={"zbytek","fur"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\clothing\Winter_Parka_Blue_co.paa",
			"Windstrideclothing\Models\Winter_Parka\data\winterparka_fur_ca.paa"
        };
    };
	class WWB_Winter_Parka_NoFurBlue: Winter_Parka_Green {
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"\Overgrown\data\clothing\Winter_Parka_Blue_co.paa"
		};
	};
	//Camo Parka
    class WWB_Winter_Parka_Camo: Winter_Parka_Base {
        hiddenSelections[]={"zbytek","fur"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\clothing\Winter_Parka_Camo_co.paa",
			"Windstrideclothing\Models\Winter_Parka\data\winterparka_fur_ca.paa"
        };
    };
	class WWB_Winter_Parka_NoFurCamo: Winter_Parka_Green {
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"\Overgrown\data\clothing\Winter_Parka_Camo_co.paa"
		};
	};
	//Gray Parka
    class WWB_Winter_Parka_Gray: Winter_Parka_Base {
        hiddenSelections[]={"zbytek","fur"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\clothing\Winter_Parka_Gray_co.paa",
			"Windstrideclothing\Models\Winter_Parka\data\winterparka_fur_ca.paa"
        };
    };
	class WWB_Winter_Parka_NoFurGray: Winter_Parka_Green {
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"\Overgrown\data\clothing\Winter_Parka_Gray_co.paa"
		};
	};
	//Orange Parka
    class WWB_Winter_Parka_Orange: Winter_Parka_Base {
        hiddenSelections[]={"zbytek","fur"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\clothing\Winter_Parka_Orange_co.paa",
			"Windstrideclothing\Models\Winter_Parka\data\winterparka_fur_ca.paa"
        };
    };
	class WWB_Winter_Parka_NoFurOrange: Winter_Parka_Green {
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"\Overgrown\data\clothing\Winter_Parka_Orange_co.paa"
		};
	};
	//Tartan Parka
    class WWB_Winter_Parka_Tartan: Winter_Parka_Base {
        hiddenSelections[]={"zbytek","fur"};
        hiddenSelectionsTextures[]=
        {
            "\Overgrown\data\clothing\Winter_Parka_Tartan_co.paa",
			"Windstrideclothing\Models\Winter_Parka\data\winterparka_fur_ca.paa"
        };
    };
	class WWB_Winter_Parka_NoFurTartan: Winter_Parka_Green {
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"\Overgrown\data\clothing\Winter_Parka_Tartan_co.paa"
		};
	};
};