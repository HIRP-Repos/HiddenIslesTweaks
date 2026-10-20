class CfgPatches
{
	class HIRPTweaks_CombiningStuff
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
class CfgVehicles
{
    class Inventory_Base;
	class Edible_Base;

    /////////////////////////////////////////////////////////////////////////////// Make Items Combinable ////////////////////////////////////////////////////////////////////

    class BandageDressing: Inventory_Base
	{
        scope=2;
		canBeSplit = 1;
		weight=75;
		varQuantityInit=4;
		varQuantityMin=0;
		varQuantityMax=4;
	};

    class Whetstone: Inventory_Base
	{
        scope=2;
		canBeSplit = 1;
		weight=2;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
	};
    
    class DuctTape: Inventory_Base
	{
        scope=2;
        canBeSplit = 1;
		weight=5;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
    };

    class SewingKit: Inventory_Base
	{
		scope=2;
        canBeSplit = 2.1;
		weight=.1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
    };

    class LeatherSewingKit: Inventory_Base
	{
		scope=2;
        canBeSplit = 1;
		weight=7.5;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
    };

    class EpoxyPutty: Inventory_Base
	{
		scope=2;
        canBeSplit = 1;
		weight=0.4;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
    };

    class ElectronicRepairKit: Inventory_Base
	{
		scope=2;
        canBeSplit = 1;
		weight=10;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
    };

    class WeaponCleaningKit: Inventory_Base
	{
		scope=2;
        canBeSplit = 1;
		weight=10;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
    };

    class TireRepairKit: Inventory_Base
	{
		scope=2;
        canBeSplit = 1;
		weight=10;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
    };

	class IodineTincture: Edible_Base
	{
		scope=2;
		canBeSplit = 1;
		weight=0.4;
		varQuantityInit=250;
		varQuantityMin=0;
		varQuantityMax=250;
	};

	class DisinfectantAlcohol: Edible_Base
	{
		scope=2;
		canBeSplit = 1;
		weight=0.5;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
	};

	class TerjeAmpouleBase: Inventory_Base
	{
		scope=1;
		canBeSplit = 1;
		weight = 20;
		varQuantityInit = 5;
		varQuantityMin = 0;
		varQuantityMax = 5;
	};

	class TerjeSalveBase: Inventory_Base
	{
		scope=1;
		canBeSplit = 1;
		weight = 24;
		varQuantityInit = 5;
		varQuantityMin = 0;
		varQuantityMax = 5;
	};

	class DisinfectantSpray: Edible_Base
	{
		scope=2;
		canBeSplit = 1;
		weight=1.1;
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
	};
};    