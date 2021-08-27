class CfgPatches {
    class Deserted_Custom {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
			"DZ_Characters"
        };
    };
};
class CfgVehicles {
    class BoxCerealCrunchin;
    class Pie_Laelia_Cookies_Food: BoxCerealCrunchin {
		scope = 2;
		displayName = "Laelia Cookies";
		descriptionShort = "If you're not careful, these cookies might nom YOU.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"\Deserted\data\custom\textures\Laelia_Cookies_Food.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 600;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
    class Battery9V;
    class Pie_Battery9V_Black: Battery9V {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Deserted\data\custom\textures\9v_Black_co.paa",
        };
    };
    class Pie_Battery9V_Blue: Battery9V {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Deserted\data\custom\textures\9v_Blue_co.paa",
        };
    };
    class Pie_Battery9V_Gray: Battery9V {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Deserted\data\custom\textures\9v_Gray_co.paa",
        };
    };
    class Pie_Battery9V_Green: Battery9V {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Deserted\data\custom\textures\9v_Green_co.paa",
        };
    };
    class AK74_WoodBttstck;
    class Pie_Wing_AK74_WoodBttstck: AK74_WoodBttstck {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]=
        {
            "\Deserted\data\custom\textures\Asher_Wing_co.paa"
        };
    };
    class Shemagh_Scarf_ColorBase;
    class Shemagh_Bandit_ColorBase;
    class Shemagh_Facemask_ColorBase;
    class Shemagh_ColorBase;
    class Pie_Shemagh_Black_color: Shemagh_ColorBase {
        visibilityModifier=0.85000002;
        hiddenSelectionsTextures[]=
        {
            "\Deserted\data\custom\textures\Laelia_Shemagh_Black.paa",
            "\Deserted\data\custom\textures\Laelia_Shemagh_Black.paa",
            "\Deserted\data\custom\textures\Laelia_Shemagh_Black.paa"
        };
    };
    class Pie_Shemagh_Bandit_Black_color: Shemagh_Bandit_ColorBase {
        visibilityModifier=0.85000002;
        hiddenSelectionsTextures[]=
        {
            "\Deserted\data\custom\textures\Laelia_Bandit_Black.paa",
            "\Deserted\data\custom\textures\Laelia_Bandit_Black.paa",
            "\Deserted\data\custom\textures\Laelia_Bandit_Black.paa"
        };
    };
    class Pie_Shemagh_Facemask_Black_color: Shemagh_Facemask_ColorBase {
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\Deserted\data\custom\textures\Laelia_Facemask_Black.paa",
			"\Deserted\data\custom\textures\Laelia_Facemask_Black.paa",
			"\Deserted\data\custom\textures\Laelia_Facemask_Black.paa"
		};
	};
	class Pie_Shemagh_Scarf_Black_color: Shemagh_Scarf_ColorBase {
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\Deserted\data\custom\textures\Laelia_Scarf_Black.paa",
			"\Deserted\data\custom\textures\Laelia_Scarf_Black.paa",
			"\Deserted\data\custom\textures\Laelia_Scarf_Black.paa"
		};
	};
	class Winter_Parka_Base;
    class Pie_Winter_Parka_Tan: Winter_Parka_Base {
        hiddenSelections[]={"zbytek","fur"};
        hiddenSelectionsTextures[]=
        {
            "\Deserted\data\custom\textures\winterparka_Tan_co.paa",
            "\Deserted\data\custom\textures\winterparka_fur_Black_ca.paa"
        };
    };
	class Winter_Parka_Green;
	class Pie_Winter_Parka_NoFurTan: Winter_Parka_Green {
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"\Deserted\data\custom\textures\winterparka_Tan_co.paa"
		};
	};
	class BookTranslationsOfShakuntala;
	class Pie_BookQuran: BookTranslationsOfShakuntala {
        title="The Noble Qur'an in the english language";
        displayName="The Noble Qur'an in the english language";
        descriptionShort="Interpretation of the Meanings of the Noble Qur'an in the english language";
        hiddenSelectionsTextures[]=
        {
            "\Deserted\data\custom\textures\book_quran_co.paa"
        };
    };
};