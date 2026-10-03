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

    /////////////////////////////////////////////////////////////////////////////// Make Items Combinable ////////////////////////////////////////////////////////////////////

    class BandageDressing: Inventory_Base
	{
        scope=2;
		canBeSplit = 1;
	};

    class Whetstone: Inventory_Base
	{
        scope=2;
		canBeSplit = 1;
	};
    
    class DuctTape: Inventory_Base
	{
        scope=2;
        canBeSplit = 1;
    };

    class SewingKit: Inventory_Base
	{
		scope=2;
        canBeSplit = 1;
    };

    class LeatherSewingKit: Inventory_Base
	{
		scope=2;
        canBeSplit = 1;
    };

    class EpoxyPutty: Inventory_Base
	{
		scope=2;
        canBeSplit = 1;
    };

    class ElectronicRepairKit: Inventory_Base
	{
		scope=2;
        canBeSplit = 1;
    };

    class WeaponCleaningKit: Inventory_Base
	{
		scope=2;
        canBeSplit = 1;
    };

    class TireRepairKit: Inventory_Base
	{
		scope=2;
        canBeSplit = 1;
    };
};    

//spray cans.. 