class CfgPatches {
    class Overgrown_Player {
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
    class BoxCerealCrunchin;
    class WWB_Laelia_Cookies: BoxCerealCrunchin {
		displayName = "Box of Cookies";
		descriptionShort = "If you're not careful, these cookies might nom YOU.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"\Overgrown\data\player\Laelia_Cookies.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 600;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};

    class AK74_WoodBttstck;
    class WWB_Wing_AK74_WoodBttstck: AK74_WoodBttstck {
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]={"\Overgrown\data\player\Asher_AK74_WoodBttstck_co.paa"};
    };

	class BookTranslationsOfShakuntala;
	class WWB_BookQuran: BookTranslationsOfShakuntala {
        title="The Noble Qur'an in the english language";
        displayName="The Noble Qur'an in the english language";/
        descriptionShort="Interpretation of the Meanings of the Noble Qur'an in the english language";
        hiddenSelectionsTextures[]={"\Overgrown\data\player\Midi_Quran_co.paa"};
    };
};