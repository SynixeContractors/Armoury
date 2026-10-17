class asdg_UnderSlot;
class asdg_MuzzleSlot_556;

class CfgWeapons {
    class Rifle_Base_F;
    class arifle_Katiba_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    //Fix bipod slot broken by aegis
    class arifle_Katiba_F: arifle_Katiba_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class UnderBarrelSlot: asdg_UnderSlot {
                iconPosition[] = {0.24, 0.8};
                iconScale = 0.3;
            };
        };
    };
    class arifle_Katiba_GL_F: arifle_Katiba_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class arifle_Katiba_C_F: arifle_Katiba_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    #include "CfgWeapons_KH2009.hpp"
};
