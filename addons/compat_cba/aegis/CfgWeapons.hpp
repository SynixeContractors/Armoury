class WeaponSlotsInfo;
class asdg_FrontSideRail;
class asdg_MuzzleSlot_545R;
class asdg_MuzzleSlot_762;
class asdg_MuzzleSlot_762R;
class asdg_OpticRail1913_long;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_short_MG;
class asdg_PistolUnderRail;

class CfgWeapons {
    class Rifle_Base_F;
    class arifle_RPK_base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_762R {
                iconPosition[] = {-0.02,0.41};
                iconScale = 0.2;
            };
            class CowsSlot: asdg_OpticRail1913_short {
                iconPosition[] = {0.55,0.28};
                iconScale = 0.2;
            };
            class PointerSlot: asdg_PistolUnderRail {
                iconPosition[] = {0.2,0.44};
                iconScale = 0.2;
            };
            class UnderBarrelSlot {};
        };
    };

    class arifle_AKM_F;
    class Aegis_arifle_AKM74_F: arifle_AKM_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: asdg_OpticRail1913_short {
                iconPosition[] = {0.55,0.28};
                iconScale = 0.2;
            };
            class MuzzleSlot: asdg_MuzzleSlot_545R {
                iconPosition[] = {-0.02,0.41};
                iconScale = 0.2;
            };
            class UnderBarrelSlot {};
            class PointerSlot: asdg_PistolUnderRail {
                iconPosition[] = {0.2,0.44};
                iconScale = 0.2;
            };
        };
    };

    class arifle_RPK12_base_F;
    class Aegis_arifle_RPK12_545_base_F: arifle_RPK12_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_545R {};
            class CowsSlot: asdg_OpticRail1913_long {
                iconPosition[] = {0.57,0.31};
                iconScale = 0.17;
            };
            class PointerSlot: asdg_FrontSideRail {
                iconPosition[] = {0.44,0.39};
                iconScale = 0.17;
            };
            class UnderBarrelSlot {};
        };
    };

    class Aegis_arifle_RPK74_base_F;
    class Aegis_arifle_RPK74M_F: Aegis_arifle_RPK74_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_545R {
                iconPosition[] = {-0.02,0.41};
                iconScale = 0.2;
            };
            class CowsSlot: asdg_OpticRail1913_short {
                iconPosition[] = {0.55,0.28};
                iconScale = 0.2;
            };
            class PointerSlot: asdg_PistolUnderRail {
                iconPosition[] = {0.2,0.44};
                iconScale = 0.2;
            };
            class UnderBarrelSlot {};
        };
    };

    class Aegis_srifle_GM6B_base_F;
    class Aegis_srifle_GM6B_F: Aegis_srifle_GM6B_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {};
            class CowsSlot: asdg_OpticRail1913_long {
                iconPosition[] = {0.55,0.3};
                iconScale = 0.2;
            };
        };
    };

    class Aegis_MMG_FNMAG_Base;
    class Aegis_MMG_FNMAG_F: Aegis_MMG_FNMAG_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_762 {
                iconPosition[] = {0,0.45};
                iconScale = 0.2;
            };
            class CowsSlot: asdg_OpticRail1913_short_MG {
                iconPosition[] = {0.57,0.37};
                iconScale = 0.15;
            };
            class PointerSlot: asdg_FrontSideRail {
                iconPosition[] = {0.35,0.46};
                iconScale = 0.2;
            };
            class UnderBarrelSlot {};
        };
    };
    class Aegis_MMG_FNMAG_240_F: Aegis_MMG_FNMAG_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_762 {
                iconPosition[] = {0,0.45};
                iconScale = 0.2;
            };
            class CowsSlot: asdg_OpticRail1913_short_MG {
                iconPosition[] = {0.57,0.37};
                iconScale = 0.15;
            };
            class PointerSlot: asdg_FrontSideRail {
                iconPosition[] = {0.35,0.46};
                iconScale = 0.2;
            };
            class UnderBarrelSlot {};
        };
    };
};
