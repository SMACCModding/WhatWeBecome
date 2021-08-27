//Helmets
modded class MotoHelmet_ColorBase extends HelmetBase
{
    void ~MotoHelmet_ColorBase()
    {
        PlayerBase player;
        Class.CastTo(player, GetHierarchyRootPlayer());
        if( player )
        {
            MutePlayer(player,false);
        }
    }

    override void MutePlayer(PlayerBase player, bool state)
	{
		if( GetGame() )
		{
			if (( GetGame().IsServer() && GetGame().IsMultiplayer() ) || ( GetGame().GetPlayer() == player ))
			{
				GetGame().SetVoiceEffect(player, VoiceEffectObstruction, false);
			}
		}
	}

	override bool IsObstructingVoice()
	{
		return false;
	}
}
modded class DarkMotoHelmet_ColorBase extends HelmetBase
{
	void ~DarkMotoHelmet_ColorBase()
	{
		PlayerBase player;
		Class.CastTo(player, GetHierarchyRootPlayer());
		if( player )
		{
			MutePlayer(player,false);
		}
	}

    override void MutePlayer(PlayerBase player, bool state)
	{
		if( GetGame() )
		{
			if (( GetGame().IsServer() && GetGame().IsMultiplayer() ) || ( GetGame().GetPlayer() == player ))
			{
				GetGame().SetVoiceEffect(player, VoiceEffectObstruction, false);
			}
		}
	}

	override bool IsObstructingVoice()
	{
		return false;
	}
}

//Gasmasks!
modded class AirborneMask extends ClothingBase
{
    void ~AirborneMask()
    {
        PlayerBase player;
        Class.CastTo(player, GetHierarchyRootPlayer());
        if( player )
        {
            MutePlayer(player,false);
        }
    }

    override void MutePlayer(PlayerBase player, bool state)
	{
		if( GetGame() )
		{
			if (( GetGame().IsServer() && GetGame().IsMultiplayer() ) || ( GetGame().GetPlayer() == player ))
			{
				GetGame().SetVoiceEffect(player, VoiceEffectObstruction, false);
			}
		}
	}

	override bool IsObstructingVoice()
	{
		return false;
	}
}
modded class GP5GasMask extends ClothingBase
{
    void ~GP5GasMask()
    {
        PlayerBase player;
        Class.CastTo(player, GetHierarchyRootPlayer());
        if( player )
        {
            MutePlayer(player,false);
        }
    }

    override void MutePlayer(PlayerBase player, bool state)
	{
		if( GetGame() )
		{
			if (( GetGame().IsServer() && GetGame().IsMultiplayer() ) || ( GetGame().GetPlayer() == player ))
			{
				GetGame().SetVoiceEffect(player, VoiceEffectObstruction, false);
			}
		}
	}

	override bool IsObstructingVoice()
	{
		return false;
	}
}
modded class GasMask extends ClothingBase
{
	void ~GasMask()
	{
		PlayerBase player;
		Class.CastTo(player, GetHierarchyRootPlayer());
		if( player )
		{
			MutePlayer(player,false);
		}
	}

    override void MutePlayer(PlayerBase player, bool state)
	{
		if( GetGame() )
		{
			if (( GetGame().IsServer() && GetGame().IsMultiplayer() ) || ( GetGame().GetPlayer() == player ))
			{
				GetGame().SetVoiceEffect(player, VoiceEffectObstruction, false);
			}
		}
	}

	override bool IsObstructingVoice()
	{
		return false;
	}
}