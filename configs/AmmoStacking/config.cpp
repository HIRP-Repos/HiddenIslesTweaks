class CfgPatches
{
	class HIRPTweaks_AmmoStacking
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"HIRPTweaks"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
    class Ammunition_Base: Magazine_Base {};

    /////////////////////////////////////////////////////////////////////////////// Make Items Combinable ////////////////////////////////////////////////////////////////////

    class Ammo_45ACP: Ammunition_Base
	{
		count=100;
	};

	class Ammo_308Win: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_308WinTracer: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_9x19: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_380: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_556x45: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_556x45Tracer: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_762x54: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_762x54Tracer: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_762x39: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_762x39Tracer: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_9x39AP: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_9x39: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_22: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_12gaPellets: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_12gaSlug: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_12gaRubberSlug: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_12gaBeanbag: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_357: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_545x39: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_545x39Tracer: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_HuntingBolt: Ammunition_Base
	{
		scope = 2;
		count=20;
	};

	class Ammo_ImprovisedBolt_1: Ammunition_Base
	{
		scope = 2;
		count=20;
	};

	class Ammo_ImprovisedBolt_2: Ammunition_Base
	{
		scope = 2;
		count=20;
	};

	class Ammo_CupidsBolt: Ammunition_Base
	{
		scope = 2;
		count=20;
	};

	class Ammo_Flare: Ammunition_Base
	{
		scope = 2;
		count=20;
	};

	class Ammo_HA_12gSteel: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_HA_338LM: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_HA_408CT: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_HA_44Magnum: Ammunition_Base
	{
		scope = 2;
		count=100;
	};

	class Ammo_HA_50BMG: Ammunition_Base
	{
		scope = 2;
		count=100;
	};
};   