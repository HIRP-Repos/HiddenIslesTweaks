class CfgPatches
{
	class HiddenIsles_Retextures_SlotsAttachments
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Tops","DZ_Characters_Headgear","DZ_Characters_Backpacks","DZ_Characters_Glasses","DZ_Characters_Masks","DZ_Characters_Gloves","DZ_Characters_Shoes","DZ_Characters_Belts","DZ_Characters_Vests","DZ_Gear_Camping","DZ_Gear_Containers","DZ_Gear_Consumables","DZ_Gear_Drinks","DZ_Gear_Books","ACO_Headgear","ACO_Lower","ACO_Other","ACO_Upper","WindstrideClothing","FOG_Data_Patches","ACO_Core_Attachments","ACO_Headgear_Glasses","ACO_Headgear_Headgear","ACO_Headgear_Masks","ACO_Headgear_Scarves","ACO_Other_Armband","ACO_Other_Backpacks","ACO_Upper_Vests","ACO_Lower_Belts","ACO_Lower_Pants","ACO_Lower_Shoes","ACO_Other_Other","ACO_Upper_Gloves","ACO_Upper_Jackets","ACO_Upper_Tops","Canvas_Backpack"};
	};
};

class CfgSlots
{
	class Slot_MassMP153Short
	{
		name = "MassMP153Short";
		displayName = "MassMP153Short";
		ghostIcon = "shoulderright";
	};
	class Slot_MassStevens301SuperShort
	{
		name = "MassStevens301SuperShort";
		displayName = "MassStevens301SuperShort";
		ghostIcon = "shoulderright";
	};
	class Slot_SawedoffMosin9130
	{
		name = "SawedoffMosin9130";
		displayName = "SawedoffMosin9130";
		ghostIcon = "shoulderright";
	};
	class Slot_SawedoffIzh18
	{
		name = "SawedoffIzh18";
		displayName = "SawedoffIzh18";
		ghostIcon = "shoulderright";
	};
	class Slot_SawedoffIzh18Shotgun
	{
		name = "SawedoffIzh18Shotgun";
		displayName = "SawedoffIzh18Shotgun";
		ghostIcon = "shoulderright";
	};
	class Slot_SawedoffB95
	{
		name = "SawedoffB95";
		displayName = "SawedoffB95";
		ghostIcon = "shoulderright";
	};
	class Slot_SawedoffIzh43Shotgun
	{
		name = "SawedoffIzh43Shotgun";
		displayName = "SawedoffIzh43Shotgun";
		ghostIcon = "shoulderright";
	};
	class Slot_Hatchet
	{
		name = "Hatchet";
		displayName = "Hatchet";
		ghostIcon = "shoulderright";
	};
	class Slot_DummySlot
	{
		name = "DummySlot";
		displayName = "Medium Melee/Sawn off Weapon";
		ghostIcon = "set:windstrides_ghost_icons image:machete_icon";
	};
	class Slot_Machete
	{
		name = "Machete";
		displayName = "Machete";
		ghostIcon = "shoulderright";
	};
	class Slot_KukriKnife
	{
		name = "KukriKnife";
		displayName = "Kukri Knife";
		ghostIcon = "shoulderright";
	};
	class Slot_CrudeMachete
	{
		name = "CrudeMachete";
		displayName = "Tactical Machete";
		ghostIcon = "shoulderright";
	};
	class Slot_OrientalMachete
	{
		name = "OrientalMachete";
		displayName = "Oriental Machete";
		ghostIcon = "shoulderright";
	};
	class Slot_FangeKnife
	{
		name = "FangeKnife";
		displayName = "Fange Knife";
		ghostIcon = "shoulderright";
	};
	class Slot_Hammer
	{
		name = "Hammer";
		displayName = "Hammer";
		ghostIcon = "shoulderright";
	};
	class Slot_WaterBottle
	{
		name = "WaterBottle";
		displayName = "Water Bottle";
		ghostIcon = "set:windstrides_ghost_icons image:water_bottle_icon";
		show = "true";
	};
	class Slot_Pin1
	{
		name = "Pin1";
		displayName = "Pin";
		ghostIcon = "missing";
		show = "true";
	};
	class Slot_Pin2
	{
		name = "Pin2";
		displayName = "Pin";
		ghostIcon = "missing";
		show = "true";
	};
	class Slot_Pin3
	{
		name = "Pin3";
		displayName = "Pin";
		ghostIcon = "missing";
		show = "true";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySuperShort: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"MassStevens301SuperShort"};
		model = "\WindstrideClothing\Models\Canvas_Backpack\MassProxies\SuperShort.p3d";
	};
	class ProxyMP153Short: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"MassMP153Short"};
		model = "\WindstrideClothing\Models\Canvas_Backpack\MassProxies\MP153Short.p3d";
	};
	class Proxymosin_sawn: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"SawedoffMosin9130"};
		model = "\DZ\weapons\firearms\mosin9130\mosin_sawn.p3d";
	};
	class Proxyb95_sawn: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"SawedoffB95"};
		model = "\DZ\weapons\firearms\b95\b95_sawn.p3d";
	};
	class Proxyizh18_sawedoff: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"SawedoffIzh18"};
		model = "\DZ\weapons\firearms\izh18\izh18_sawedoff.p3d";
	};
	class Proxyizh18shotgun_sawedoff: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"SawedoffIzh18Shotgun"};
		model = "\DZ\weapons\shotguns\izh18shotgun\izh18shotgun_sawedoff.p3d";
	};
	class Proxyizh43_sawedoff: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"SawedoffIzh43Shotgun"};
		model = "\DZ\weapons\shotguns\izh43\izh43_sawedoff.p3d";
	};
	class ProxyHatchet: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"Hatchet"};
		model = "\DZ\weapons\melee\blade\hatchet.p3d";
	};
	class ProxyMachete: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"Machete"};
		model = "\DZ\weapons\melee\blade\machete.p3d";
	};
	class Proxykukri_knife: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"KukriKnife"};
		model = "\DZ\weapons\melee\blade\kukri_knife.p3d";
	};
	class Proxyfange_knife: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"FangeKnife"};
		model = "\DZ\weapons\melee\blade\fange_knife.p3d";
	};
	class Proxymachete_tactical: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"CrudeMachete"};
		model = "\DZ\weapons\melee\blade\machete_tactical.p3d";
	};
	class Proxymachete_oriental: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"OrientalMachete"};
		model = "\DZ\weapons\melee\blade\machete_oriental.p3d";
	};
	class ProxyHammer: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"Hammer"};
		model = "\DZ\gear\tools\hammer.p3d";
	};
	class ProxyWaterBottle: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"WaterBottle"};
		model = "\DZ\gear\drinks\waterbottle.p3d";
	};
	class Proxypin1: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"Pin1"};
		model = "\WindstrideClothing\Models\Pins\Proxies\pin1.p3d";
	};
	class Proxypin2: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"Pin2"};
		model = "\WindstrideClothing\Models\Pins\Proxies\pin2.p3d";
	};
	class Proxypin3: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"Pin3"};
		model = "\WindstrideClothing\Models\Pins\Proxies\pin3.p3d";
	};
};