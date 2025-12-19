class WeaponSlotsInfo;
class CfgWeapons {
    class Launcher_Base_F;
    class launch_Vorona_base_F: Launcher_Base_F {
      magazineWell[] += {"Verona_Long"};
    };
    class launch_NLAW_F;
    class CLASS(launch_NSAM_F): launch_NLAW_F {
      scope = 2;
      scopeArsenal = 2;
      baseWeapon = QCLASS(launch_NSAM_F);
      canLock = 0;
      displayName = "NSAM";
      modes[] = {"Single"};
      //FIXME: add different icon and external texture
      picture = "\A3\weapons_f\launchers\nlaw\data\UI\gear_nlaw_ca.paa";
      UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
      hiddenSelectionsTextures[] = {
        QPATHTOF(data\nlaw_co.paa),
        QPATHTOF(data\nlaw_co.paa),
        QPATHTOF(data\nlaw_co.paa),
      };
    };
    class CLASS(launch_NSAM_ready_F): CLASS(launch_NSAM_F) {
      scope = 1;
      scopeArsenal = 1;
      baseWeapon = QCLASS(launch_NSAM_F);
      magazines[] = {QCLASS(NSAM_LOAL)};
      class EventHandlers {
        fired = "call CBA_fnc_firedDisposable";
      };
    };
    class CLASS(launch_NSAM_used_F): CLASS(launch_NSAM_F) {
      scope = 1;
      scopeArsenal = 1;
      baseWeapon = QCLASS(launch_NSAM_used_F);
      displayName = "used NSAM";
      descriptionShort = "empty";
      weaponPoolAvailable = 0;
      class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 100;
      };
    };
};
