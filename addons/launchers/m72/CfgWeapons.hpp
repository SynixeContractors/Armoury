class WeaponSlotsInfo;
class CfgWeapons {
    class Launcher_Base_F;
    class JCA_launch_M72_base_F: Launcher_Base_F  {
        descriptionShort = "Rocket Launcher<br />Ammo: M72 HEDP";
    };
    class CLASS(launch_M72_HEAT_F): JCA_launch_M72_base_F {
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = QCLASS(launch_M72_HEAT_F);
        displayname = "M72A5 (Olive)";
        descriptionShort = "Rocket Launcher<br />Ammo: M72 HEAT";
        hiddenSelectionsTextures[] = {QPATHTOF(m72\data\m72_olive_orange.paa)};
        picture = "\weapons_f_JCA_IA\Launchers\M72\data\UI\Icon_launch_LAW_olive_F_CA.paa";
        magazineReloadTime = 0.1;
        magazines[] = {};
        magazineWell[] = {};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 20;
        };
    };
    class CLASS(launch_M72_HEAT_ready_F): CLASS(launch_M72_HEAT_F) {
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = QCLASS(launch_M72_HEAT_F);
        magazines[] = {QCLASS(M72_HEAT)};
        class EventHandlers {
            fired = "call CBA_fnc_firedDisposable";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 40;
        };
    };
    class CLASS(launch_M72_HEAT_used_F): CLASS(launch_M72_HEAT_F) {
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = QCLASS(launch_M72_HEAT_used_F);
        displayName = "M72A5 (Olive) [Expended]";
        descriptionShort = "empty";
        weaponPoolAvailable = 0;
        model = "weapons_f_JCA_IA\Launchers\M72\launch_M72_expended_F.p3d";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 20;
        };
    };
    class CLASS(launch_M72_HE_F): CLASS(launch_M72_HEAT_F) {
        displayname = "M72A9 (Olive)";
        descriptionShort = "Rocket Launcher<br />Ammo: M72 HE";
        hiddenSelectionsTextures[] = {QPATHTOF(m72\data\m72_olive_blue.paa)};
        baseWeapon = QCLASS(launch_M72_HE_F);
    };
    class CLASS(launch_M72_HE_ready_F): CLASS(launch_M72_HE_F) {
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = QCLASS(launch_M72_HE_F);
        magazines[] = {QCLASS(M72_HE)};
        class EventHandlers {
            fired = "call CBA_fnc_firedDisposable";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 40;
        };
    };
    class CLASS(launch_M72_HE_used_F): CLASS(launch_M72_HE_F) {
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = QCLASS(launch_M72_HE_used_F);
        displayName = "M72A9 (Olive) [Expended]";
        descriptionShort = "empty";
        weaponPoolAvailable = 0;
        model = "weapons_f_JCA_IA\Launchers\M72\launch_M72_expended_F.p3d";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 20;
        };
    };
};
