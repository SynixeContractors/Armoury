#define M72_HEAT_OLIVE \
hiddenSelectionsTextures[] = {QPATHTOF(m72\data\m72_olive_orange.paa)}; \
picture = QPATHTOF(m72\data\icon_m72_olive_orange.paa) \

#define M72_HEAT_SAND \
hiddenSelectionsTextures[] = {QPATHTOF(m72\data\m72_sand_orange.paa)}; \
picture = QPATHTOF(m72\data\icon_m72_sand_orange.paa) \

#define M72_HEAT_BLACK \
hiddenSelectionsTextures[] = {QPATHTOF(m72\data\m72_black_orange.paa)}; \
picture = QPATHTOF(m72\data\icon_m72_black_orange.paa) \

#define M72_HE_OLIVE \
hiddenSelectionsTextures[] = {QPATHTOF(m72\data\m72_olive_blue.paa)}; \
picture = QPATHTOF(m72\data\icon_m72_olive_blue.paa) \

#define M72_HE_SAND \
hiddenSelectionsTextures[] = {QPATHTOF(m72\data\m72_sand_blue.paa)}; \
picture = QPATHTOF(m72\data\icon_m72_sand_blue.paa) \

#define M72_HE_BLACK \
hiddenSelectionsTextures[] = {QPATHTOF(m72\data\m72_black_blue.paa)}; \
picture = QPATHTOF(m72\data\icon_m72_black_blue.paa) \

class WeaponSlotsInfo;
class CfgWeapons {
    class Launcher_Base_F;
    class JCA_launch_M72_base_F: Launcher_Base_F  {
        descriptionShort = "Rocket Launcher<br />Ammo: M72 HEDP";
    };
    class CLASS(launch_M72_HEAT_olive_F): JCA_launch_M72_base_F {
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = QCLASS(launch_M72_HEAT_olive_F);
        displayName = "M72A5 [HEAT] (Olive)";
        descriptionShort = "Rocket Launcher<br />Ammo: M72 HEAT";
        M72_HEAT_OLIVE;
        magazineReloadTime = 0.1;
        magazines[] = {};
        magazineWell[] = {};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 40;
        };
    };
    class CLASS(launch_M72_HEAT_olive_ready_F): CLASS(launch_M72_HEAT_olive_F) {
        scope = 1;
        scopeArsenal = 1;
        magazines[] = {QCLASS(M72_HEAT)};
        class EventHandlers {
            fired = "call CBA_fnc_firedDisposable";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 20;
        };
    };
    class CLASS(launch_M72_HEAT_olive_used_F): CLASS(launch_M72_HEAT_olive_F) {
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = QCLASS(launch_M72_HEAT_olive_used_F);
        displayName = "M72A5 (Olive) [Expended]";
        descriptionShort = "empty";
        weaponPoolAvailable = 0;
        model = "weapons_f_JCA_IA\Launchers\M72\launch_M72_expended_F.p3d";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 20;
        };
    };
    // colors
    class CLASS(launch_M72_HEAT_sand_F): CLASS(launch_M72_HEAT_olive_F) {
        baseWeapon = QCLASS(launch_M72_HEAT_sand_F);
        displayName = "M72A5 [HEAT] (Sand)";
        M72_HEAT_SAND;
    };
    class CLASS(launch_M72_HEAT_black_F): CLASS(launch_M72_HEAT_olive_F) {
        baseWeapon = QCLASS(launch_M72_HEAT_black_F);
        displayName = "M72A5 [HEAT] (Black)";
        M72_HEAT_BLACK;
    };
    class CLASS(launch_M72_HEAT_sand_ready_F): CLASS(launch_M72_HEAT_olive_ready_F) {
        baseWeapon = QCLASS(launch_M72_HEAT_sand_F);
        M72_HEAT_SAND;
    };
    class CLASS(launch_M72_HEAT_black_ready_F): CLASS(launch_M72_HEAT_olive_ready_F) {
        baseWeapon = QCLASS(launch_M72_HEAT_black_F);
        M72_HEAT_BLACK;
    };
    class CLASS(launch_M72_HEAT_sand_used_F): CLASS(launch_M72_HEAT_olive_used_F) {
        baseWeapon = QCLASS(launch_M72_HEAT_sand_used_F);
        displayName = "M72A5 (Sand) [Expended]";
        M72_HEAT_SAND;
    };
    class CLASS(launch_M72_HEAT_black_used_F): CLASS(launch_M72_HEAT_olive_used_F) {
        baseWeapon = QCLASS(launch_M72_HEAT_black_used_F);
        displayName = "M72A5 (Black) [Expended]";
        M72_HEAT_BLACK;
    };
    //HE warhead
    class CLASS(launch_M72_HE_olive_F): CLASS(launch_M72_HEAT_olive_F) {
        displayName = "M72A9 [HE] (Olive)";
        descriptionShort = "Rocket Launcher<br />Ammo: M72 HE";
        hiddenSelectionsTextures[] = {QPATHTOF(m72\data\m72_olive_blue.paa)};
        picture = QPATHTOF(m72\data\icon_m72_olive_blue.paa);
        baseWeapon = QCLASS(launch_M72_HE_olive_F);
    };
    class CLASS(launch_M72_HE_olive_ready_F): CLASS(launch_M72_HE_olive_F) {
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = QCLASS(launch_M72_HE_olive_F);
        magazines[] = {QCLASS(M72_HE)};
        class EventHandlers {
            fired = "call CBA_fnc_firedDisposable";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 20;
        };
    };
    class CLASS(launch_M72_HE_olive_used_F): CLASS(launch_M72_HE_olive_F) {
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = QCLASS(launch_M72_HE_olive_used_F);
        displayName = "M72A9 [HE] (Olive) [Expended]";
        descriptionShort = "empty";
        weaponPoolAvailable = 0;
        model = "weapons_f_JCA_IA\Launchers\M72\launch_M72_expended_F.p3d";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 20;
        };
    };
    // Colors for HE
    class CLASS(launch_M72_HE_sand_F): CLASS(launch_M72_HE_olive_F) {
        baseWeapon = QCLASS(launch_M72_HE_sand_F);
        displayName = "M72A9 [HE] (Sand)";
        M72_HE_SAND;
    };
    class CLASS(launch_M72_HE_black_F): CLASS(launch_M72_HE_olive_F) {
        baseWeapon = QCLASS(launch_M72_HE_black_F);
        displayName = "M72A9 [HE] (Black)";
        M72_HE_BLACK;
    };
    class CLASS(launch_M72_HE_sand_ready_F): CLASS(launch_M72_HE_olive_ready_F) {
        baseWeapon = QCLASS(launch_M72_HE_sand_F);
        M72_HE_SAND;
    };
    class CLASS(launch_M72_HE_black_ready_F): CLASS(launch_M72_HE_olive_ready_F) {
        baseWeapon = QCLASS(launch_M72_HE_black_F);
        M72_HE_BLACK;
    };
    class CLASS(launch_M72_HE_sand_used_F): CLASS(launch_M72_HE_olive_used_F) {
        baseWeapon = QCLASS(launch_M72_HE_sand_used_F);
        displayName = "M72A9 (Sand) [Expended]";
        M72_HE_SAND;
    };
    class CLASS(launch_M72_HE_black_used_F): CLASS(launch_M72_HE_olive_used_F) {
        baseWeapon = QCLASS(launch_M72_HE_black_used_F);
        displayName = "M72A9 (Black) [Expended]";
        M72_HE_BLACK;
    };
    // rename base JCA ones
    class JCA_launch_M72_black_F: JCA_launch_M72_base_F {
        displayName = "M72A7 [HEDP] (Black)";
    };
    class JCA_launch_M72_olive_F: JCA_launch_M72_base_F {
        displayName = "M72A7 [HEDP] (Olive)";
    };
    class JCA_launch_M72_sand_F: JCA_launch_M72_base_F {
        displayName = "M72A7 [HEDP] (Sand)";
    };
};
