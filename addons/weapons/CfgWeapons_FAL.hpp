class arifle_SLR_lxWS;
class CLASS(arifle_SLR): arifle_SLR_lxWS {
    displayName = "FN FAL SLR RIS (Classic)";
    modes[] = {"Single"};
};
class arifle_SLR_V_lxWS;
class CLASS(arifle_SLR_black): arifle_SLR_V_lxWS {
    displayName = "FN FAL SLR RIS (Black)";
    modes[] = {"Single"};
};
class arifle_SLR_D_lxWS;
class CLASS(arifle_SLR_desert): arifle_SLR_D_lxWS {
    displayName = "FN FAL SLR RIS (Desert)";
    modes[] = {"Single"};
    baseWeapon = QUOTE(arifle_SLR_desert);
};
class arifle_SLR_V_camo_lxWS;
class CLASS(arifle_SLR_jungle): arifle_SLR_V_camo_lxWS {
    displayName = "FN FAL SLR RIS (Jungle)";
    modes[] = {"Single"};
    baseWeapon = QUOTE(arifle_SLR_jungle);
};
class CLASS(arifle_SLR_norail): CLASS(arifle_SLR) {
    displayName = "FN FAL SLR (Classic)";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot : asdg_MuzzleSlot_762 {
            linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            iconPosition[] = {0.06, 0.4};
            iconScale = 0.2;
        };
        class CowsSlot : CowsSlot {
            compatibleItems[] = {};
        };
        class PointerSlot : PointerSlot {
            iconPosition[] = {0.06, 0.4};
            iconScale = 0.2;
        };
    };
};

