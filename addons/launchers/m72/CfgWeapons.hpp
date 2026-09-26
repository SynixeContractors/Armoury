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
        hiddenSelectionsTextures[] = {QPATHTOF(m72\data\m72_olive_orange.paa)};
        picture = QPATHTOF(m72\data\icon_m72_olive_orange.paa);
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
