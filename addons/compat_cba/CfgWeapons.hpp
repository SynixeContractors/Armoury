class WeaponSlotsInfo;
class asdg_FrontSideRail;
class asdg_MuzzleSlot_545R;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_65;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail;
class asdg_UnderSlot;
class asdg_PistolUnderRail;

class CfgWeapons {
    class Rifle_Base_F;
    #include "CfgWeapons_aegis.hpp"
    //F2000 (Mk20) JR compat
    // i have no idea why i cant do the same thing as MSBS
    class mk20_base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class arifle_Mk20_F: mk20_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_556 {
                iconPosition[] = {0, 0.38};
                iconScale = 0.2;
            };
            class CowsSlot: asdg_OpticRail1913 {
                iconPosition[] = {0.37, 0.24};
                iconScale = 0.2;
            };
            class PointerSlot: asdg_FrontSideRail {
                iconPosition[] = {0.21, 0.38};
                iconScale = 0.2;
            };
        };
    };
    class arifle_Mk20_GL_F: mk20_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_556 {
                iconPosition[] = {0, 0.38};
                iconScale = 0.2;
            };
            class CowsSlot: asdg_OpticRail1913 {
                iconPosition[] = {0.37, 0.24};
                iconScale = 0.2;
            };
            class PointerSlot: asdg_FrontSideRail {
                iconPosition[] = {0.21, 0.38};
                iconScale = 0.2;
            };
        };
    };
    class arifle_Mk20C_F: mk20_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_556 {
                iconPosition[] = {0, 0.38};
                iconScale = 0.2;
            };
            class CowsSlot: asdg_OpticRail1913 {
                iconPosition[] = {0.37, 0.24};
                iconScale = 0.2;
            };
            class PointerSlot: asdg_FrontSideRail {
                iconPosition[] = {0.21, 0.38};
                iconScale = 0.2;
            };
        };
    };

    //MSBS (Promet) JR compat
    class arifle_MSBS65_base_F : Rifle_Base_F {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class MuzzleSlot : asdg_MuzzleSlot_65 {
                iconPosition[] = {0, 0.38};
                iconScale = 0.2;
            };
            class CowsSlot : asdg_OpticRail1913 {
                iconPosition[] = {0.37, 0.24};
                iconScale = 0.2;
            };
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = {0.21, 0.38};
                iconScale = 0.2;
            };
        };
    };
    class arifle_MSBS65_base_black_F : arifle_MSBS65_base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_base_camo_F : arifle_MSBS65_base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_base_sand_F : arifle_MSBS65_base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_F : arifle_MSBS65_base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_GL_base_F : arifle_MSBS65_base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_GL_base_black_F : arifle_MSBS65_GL_base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_GL_base_camo_F : arifle_MSBS65_GL_base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_GL_base_sand_F : arifle_MSBS65_GL_base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_GL_F : arifle_MSBS65_GL_base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_UBS_base_F : arifle_MSBS65_base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_UBS_base_black_F : arifle_MSBS65_UBS_base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_UBS_base_camo_F : arifle_MSBS65_UBS_base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_UBS_base_sand_F : arifle_MSBS65_UBS_base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_UBS_F : arifle_MSBS65_UBS_base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_Mark_base_F : arifle_MSBS65_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_65 {
                iconPosition[] = {0, 0.38};
                iconScale = 0.2;
            };
            class CowsSlot: asdg_OpticRail1913 {
                iconPosition[] = {0.45, 0.24};
                iconScale = 0.2;
            };
            class PointerSlot: asdg_FrontSideRail {
                iconPosition[] = {0.38, 0.38};
                iconScale = 0.2;
            };
            class UnderBarrelSlot: asdg_UnderSlot {
                iconPosition[] = {0.31, 0.75};
                iconScale = 0.3;
            };
        };
    };
    class arifle_MSBS65_Mark_base_black_F : arifle_MSBS65_Mark_base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_Mark_base_camo_F : arifle_MSBS65_Mark_base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_Mark_base_sand_F : arifle_MSBS65_Mark_base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MSBS65_Mark_F : arifle_MSBS65_Mark_base_F {
        class WeaponSlotsInfo;
    };
};
