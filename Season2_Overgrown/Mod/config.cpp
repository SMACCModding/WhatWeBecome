class CfgPatches {
    class Overgrown {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
			"DZ_Data"
        };
    };
};
class CfgMods {
    class Overgrown {
        hideName=1;
        hidePicture=1;
        name="Overgrown";
        credits="";
        author="Mac Robberts";
        version="0.1";
        type="mod";
        dependencies[]=
        {
            "Game",
            "World"//,
//            "Mission"
        };
        class defs {
            class gameScriptModule {
                value="";
                files[]=
                {
                    "Overgrown\scripts\3_Game"
                };
            };
            class worldScriptModule {
                value="";
                files[]=
                {
                    "Overgrown\scripts\4_World"
                };
            };
//            class missionScriptModule {
//                value="";
//                files[]=
//                {
//                    "Overgrown\scripts\5_Mission"
//                };
//            };
        };
    };
};
//No muffle
class CfgVehicles
{
    class Clothing;
	class DarkMotoHelmet_ColorBase: Clothing {
		soundVoiceType="none";
		soundVoicePriority=3;
	};
	class MotoHelmet_ColorBase: Clothing {
		soundVoiceType="none";
		soundVoicePriority=3;
	};
	class GasMask: Clothing {
		soundVoiceType="none";
		soundVoicePriority=3;
	};
	class GP5GasMask: Clothing {
		soundVoiceType="none";
		soundVoicePriority=3;
	};
    class AirborneMask: Clothing {
        soundVoiceType="none";
        soundVoicePriority=3;
    };
};
//class CfgNonAIVehicles
//{
//	class StaticObject;
//};

