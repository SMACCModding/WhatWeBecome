void main()
{
	//INIT WEATHER BEFORE ECONOMY INIT------------------------
	Weather weather = g_Game.GetWeather();

	weather.MissionWeather(false);    // false = use weather controller from Weather.c

	weather.GetOvercast().Set( Math.RandomFloatInclusive(0.4, 0.6), 1, 0);
	weather.GetRain().Set( 0, 0, 1);
	weather.GetFog().Set( Math.RandomFloatInclusive(0.05, 0.1), 1, 0);

	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();
	
	//GetCEApi().ExportProxyData(vector.Zero, 100000);

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 9, reset_day = 20;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}
}

class CustomMission: MissionServer
{
	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			int rndHlt = Math.RandomInt(55,100);
			itemEnt.SetHealth("","",rndHlt);
		}
	}

	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer(identity, characterName, pos, 0, "NONE");//Creates random player
		Class.CastTo(m_player, playerEnt);

		GetGame().SelectPlayer(identity, m_player);

		return m_player;
	}

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
		player.RemoveAllItems();

        EntityAI itemEnt;
        ItemBase itemBs;

        //Clothing
        ref TStringArray hatArray = {"BaseballCap_Blue", "BaseballCap_Beige","", "BaseballCap_Black", "BaseballCap_Olive", "BaseballCap_Pink", "BaseballCap_Red", "BaseballCap_Camo","", "BeanieHat_Beige", "BeanieHat_Black", "BeanieHat_Blue", "BeanieHat_Brown","","","", "BeanieHat_Green", "BeanieHat_Grey", "BeanieHat_Pink", "BeanieHat_Red", "RadarCap_Black","","","", "RadarCap_Blue", "RadarCap_Brown", "RadarCap_Green", "RadarCap_Red", "CowboyHat_Brown", "CowboyHat_black", "CowboyHat_darkBrown", "BoonieHat_Black", "BoonieHat_Blue", "BoonieHat_Tan", "Poncho_Red_Checkered", "Poncho_Blue_Checkered", "Poncho_Brown" ,"Poncho_Green", "Poncho_BlackAndWhite", "Poncho_BlackAndWhite2"};
        ref TStringArray topArray = {"Shirt_BlueCheck", "Shirt_BlueCheckBright", "Shirt_GreenCheck", "Shirt_RedCheck", "Shirt_WhiteCheck", "Shirt_PlaneBlack", "TShirt_Beige", "TShirt_Black", "TShirt_OrangeWhiteStripes", "TShirt_Red", "TShirt_White", "TShirt_Grey", "Hoodie_Blue", "Hoodie_Black", "Hoodie_Brown", "Hoodie_Green", "Hoodie_Grey", "Hoodie_Red", "TacticalShirt_Grey", "TacticalShirt_Black", "TacticalShirt_Tan", "HikingJacket_Black", "M65Jacket_Black", "M65Jacket_Tan", "TacticalShirt_Dark", "TacticalShirt_Camo", "TacticalShirt_Navy", "TacticalShirt_DarkGreen", "Medium_Sleeves_Shirt", "Medium_Sleeves_Shirt_Red", "Medium_Sleeves_Shirt_Blue"};
        ref TStringArray pantsArray = {"Jeans_Black", "Jeans_Blue", "Jeans_Grey", "CargoPants_Beige", "CargoPants_Black", "CargoPants_Grey", "CanvasPants_Beige", "CanvasPants_Blue", "CanvasPants_Grey", "CargoPants_Dark", "Jeans_Corduroy_Green", "Jeans_Corduroy_Maroon", "Jeans_Corduroy_Tan", "Jeans_Corduroy_DarkTan", "Jeans_Ripped_Blue", "Jeans_Ripped_Black", "Skinny_Jeans_Black", "Skinny_Jeans_Blue", "Kneepads_Jeans_Base", "Kneepads_Jeans_Black"};
        //ref TStringArray vestArray  = {"SmershVest","", "BallisticVest","", "UKAssVest_Black","", "UKAssVest_Camo","", "UKAssVest_Khaki","", "UKAssVest_Olive","", "HighCapacityVest_Black","", "HighCapacityVest_Olive",""};
        ref TStringArray glassesArray = {"SportGlasses_Blue","","SportGlasses_Black","","", "SportGlasses_Green","","", "SportGlasses_Orange","","", "AviatorGlasses","","TacticalGoggles"};
        ref TStringArray shoesArray = {"AthleticShoes_Blue", "AthleticShoes_Black", "AthleticShoes_Brown", "AthleticShoes_Green", "AthleticShoes_Grey", "HikingBoots_Brown", "HikingBoots_Black", "HikingBootsLow_Black", "HikingBootsLow_Blue", "HikingBootsLow_Beige", "HikingBootsLow_Grey"};
        ref TStringArray glovesArray = {"WorkingGloves_Black","WorkingGloves_Beige","", "WorkingGloves_Brown","","","","","","WorkingGloves_Yellow", "TacticalGloves_Black", "TacticalGloves_Beige", "TacticalGloves_Green","", "OMNOGloves_Brown","", "OMNOGloves_Gray","Fingerless_Gloves","Fingerless_Gloves_Brown","Fingerless_Gloves_Wool","Fingerless_Gloves_Wool_Grey","Fingerless_Gloves_Wool_Black"};
        ref TStringArray maskArray = {"BandanaMask_RedPattern","","","","","","BandanaMask_BlackPattern","BandanaMask_PolkaPattern","","","","","","BandanaMask_GreenPattern","BandanaMask_CamoPattern", "BalaclavaMask_Green","BalaclavaMask_ColorBase","BalaclavaMask_Black","BalaclavaMask_Beige","BalaclavaMask_Green","Shemagh_Brown","","","","","","Shemagh_Green","Shemagh_Red","Shemagh_White",""};
        ref TStringArray backpackArray = {"TaloonBag_Blue", "TaloonBag_Green", "TaloonBag_Orange", "TaloonBag_Violet", "CourierBag", "SmershBag", "LeatherSack_Natural", "LeatherSack_Black", "LeatherSack_Beige", "LeatherSack_Brown", "AssaultBag_Black", "AssaultBag_Green", "SmershBag_Black", "SmershBag_Spur_Tan", "SmershBag_Spur_MultiCamo", "Spur_Treker_Yellow", "Spur_Treker_Green", "Spur_Treker_Red", "Spur_Treker_Black", "Spur_Treker_Blue", "Canvas_Backpack_Black", "Canvas_Backpack_White", "Canvas_Backpack_Red"};
        itemEnt = player.GetInventory().CreateInInventory(hatArray.GetRandomElement());
        SetRandomHealth( itemEnt );
        itemEnt = player.GetInventory().CreateInInventory(topArray.GetRandomElement());
        SetRandomHealth( itemEnt );
        itemEnt = player.GetInventory().CreateInInventory(pantsArray.GetRandomElement());
        SetRandomHealth( itemEnt );
        //itemEnt = player.GetInventory().CreateInInventory(vestArray.GetRandomElement());
        //SetRandomHealth( itemEnt );
        itemEnt = player.GetInventory().CreateInInventory(glassesArray.GetRandomElement());
        SetRandomHealth( itemEnt );
        itemEnt = player.GetInventory().CreateInInventory(shoesArray.GetRandomElement());
        SetRandomHealth( itemEnt );
        itemEnt = player.GetInventory().CreateInInventory(glovesArray.GetRandomElement());
        SetRandomHealth( itemEnt );
        itemEnt = player.GetInventory().CreateInInventory(maskArray.GetRandomElement());
        SetRandomHealth( itemEnt );
        itemEnt = player.GetInventory().CreateInInventory(backpackArray.GetRandomElement());
        EntityAI StarterBag = itemEnt
        SetRandomHealth( itemEnt );

        //Weapons
        EntityAI StarterGun
        switch (Math.RandomIntInclusive( 1, 9 )) {
        case 1:
            StarterGun = player.GetInventory().CreateInInventory("Colt1911");
            player.GetInventory().CreateInInventory("Mag_1911_7Rnd");
            player.GetInventory().CreateInInventory("Mag_1911_7Rnd");
            itemEnt = player.GetInventory().CreateInInventory("Ammo_45ACP");
//            itemBs = ItemBase.Cast(itemEnt);
//            itemBs.SetQuantity(20);
            break;
        case 2:
            StarterGun = player.GetInventory().CreateInInventory("CZ75");
            player.GetInventory().CreateInInventory("Mag_CZ75_15Rnd");
            player.GetInventory().CreateInInventory("Mag_CZ75_15Rnd");
            itemEnt = player.GetInventory().CreateInInventory("Ammo_9x19");
//            itemBs = ItemBase.Cast(itemEnt);
//            itemBs.SetQuantity(20);
            break;
        case 3:
            StarterGun = player.GetInventory().CreateInInventory("FNX45");
            player.GetInventory().CreateInInventory("Mag_FNX45_15Rnd");
            player.GetInventory().CreateInInventory("Mag_FNX45_15Rnd");
            itemEnt = player.GetInventory().CreateInInventory("Ammo_45ACP");
//            itemBs = ItemBase.Cast(itemEnt);
//            itemBs.SetQuantity(20);
            break;
        case 4:
            StarterGun = player.GetInventory().CreateInInventory("Glock19");
            player.GetInventory().CreateInInventory("Mag_Glock_15Rnd");
            player.GetInventory().CreateInInventory("Mag_Glock_15Rnd");
            itemEnt = player.GetInventory().CreateInInventory("Ammo_9x19");
//            itemBs = ItemBase.Cast(itemEnt);
//            itemBs.SetQuantity(20);
            break;
        case 5:
            StarterGun = player.GetInventory().CreateInInventory("Magnum");
            itemEnt = player.GetInventory().CreateInInventory("Ammo_357");
//            itemBs = ItemBase.Cast(itemEnt);
//            itemBs.SetQuantity(40);
            break;
        case 6:
            StarterGun = player.GetInventory().CreateInInventory("MakarovIJ70");
            player.GetInventory().CreateInInventory("Mag_IJ70_8Rnd");
            player.GetInventory().CreateInInventory("Mag_IJ70_8Rnd");
            itemEnt = player.GetInventory().CreateInInventory("Ammo_380");
//            itemBs = ItemBase.Cast(itemEnt);
//            itemBs.SetQuantity(20);
            break;
        case 7:
            StarterGun = player.GetInventory().CreateInInventory("TTC_M9");
            player.GetInventory().CreateInInventory("TTC_Mag_M9_15Rnd");
            player.GetInventory().CreateInInventory("TTC_Mag_M9_15Rnd");
            itemEnt = player.GetInventory().CreateInInventory("Ammo_9x19");
//            itemBs = ItemBase.Cast(itemEnt);
//            itemBs.SetQuantity(20);
            break;
        case 8:
            StarterGun = player.GetInventory().CreateInInventory("TTC_Kimber");
            player.GetInventory().CreateInInventory("Mag_1911_7Rnd");
            player.GetInventory().CreateInInventory("Mag_1911_7Rnd");
            itemEnt = player.GetInventory().CreateInInventory("Ammo_45ACP");
//            itemBs = ItemBase.Cast(itemEnt);
//            itemBs.SetQuantity(20);
            break;
        case 9:
            StarterGun = player.GetInventory().CreateInInventory("TTC_Glock17");
            player.GetInventory().CreateInInventory("Mag_Glock_15Rnd");
            player.GetInventory().CreateInInventory("Mag_Glock_15Rnd");
            itemEnt = player.GetInventory().CreateInInventory("Ammo_9x19");
//            itemBs = ItemBase.Cast(itemEnt);
//            itemBs.SetQuantity(20);
            break;
        }

        ref TStringArray knifeArray = {"HuntingKnife","KitchenKnife","CombatKnife","Machete"};
        EntityAI StarterKnife = player.GetInventory().CreateInInventory(knifeArray.GetRandomElement());

        // Generic
        ref TStringArray fruitArray = {"Apple","Plum","Tomato","GreenBellPepper","Zucchini","SlicedPumpkin"};
        player.GetInventory().CreateInInventory(fruitArray.GetRandomElement());
        player.GetInventory().CreateInInventory(fruitArray.GetRandomElement());

        ref TStringArray foodArray = {"BoxCerealCrunchin","PowderedMilk","Rice","BakedBeansCan","PeachesCan","SpaghettiCan","SardinesCan","TunaCan"};
        player.GetInventory().CreateInInventory(foodArray.GetRandomElement());
        player.GetInventory().CreateInInventory(foodArray.GetRandomElement());

        ref TStringArray drinkArray = {"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","SodaCan_Kvass","WaterBottle"};
        player.GetInventory().CreateInInventory(drinkArray.GetRandomElement());
        player.GetInventory().CreateInInventory(drinkArray.GetRandomElement());

        ref TStringArray lightArray = {"Chemlight_White","Chemlight_Blue","Chemlight_Green","Chemlight_White","Chemlight_Red","Chemlight_Yellow","Roadflare","Chemlight_White"};
        player.GetInventory().CreateInInventory(lightArray.GetRandomElement());
        player.GetInventory().CreateInInventory(lightArray.GetRandomElement());

        //Electronics
        switch (Math.RandomIntInclusive( 1, 4 )) {
        case 1:
            ItemBase light = player.GetInventory().CreateInInventory("Headtorch_Grey");
            light.GetInventory().CreateAttachment("Battery9V");
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        }

        ItemBase radio = StarterBag.GetInventory().CreateAttachment("PersonalRadio")
        EntityAI StarterRadio = radio
        radio.GetInventory().CreateAttachment("Battery9V");

        //Navigation
        EntityAI StarterCompass = player.GetInventory().CreateInInventory("Compass");
        EntityAI StarterMap = player.GetInventory().CreateInInventory("TakistanPlusMap");

        //Medical
        EntityAI StarterMed = player.GetInventory().CreateInInventory("BandageDressing");
        itemEnt = player.GetInventory().CreateInInventory("Rag");
        itemBs = ItemBase.Cast(itemEnt);
        itemBs.SetQuantity(4);
        player.GetInventory().CreateInInventory("DisinfectantAlcohol");
        itemEnt = player.GetInventory().CreateInInventory("TetracyclineAntibiotics");
        itemBs = ItemBase.Cast(itemEnt);
        itemBs.SetQuantity(Math.RandomIntInclusive( 5, 11 ));

        //Hotbar Items
        player.SetQuickBarEntityShortcut(StarterGun, 0, true);
        player.SetQuickBarEntityShortcut(StarterKnife, 1, true);
        player.SetQuickBarEntityShortcut(StarterMed, 2, true);
        player.SetQuickBarEntityShortcut(StarterCompass, 3, true);
        player.SetQuickBarEntityShortcut(StarterMap, 4, true);
        player.SetQuickBarEntityShortcut(StarterRadio, 5, true);
		}
	}
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
}