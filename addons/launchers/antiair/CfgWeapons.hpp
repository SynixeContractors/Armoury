class WeaponSlotsInfo;
class CfgWeapons {
    class Launcher_Base_F;
    class launch_Vorona_base_F: Launcher_Base_F {
      magazineWell[] += {"Verona_Long"};
    };
    class launch_B_Titan_F;
    class CLASS(launch_NSAM_F): launch_B_Titan_F {
      scope = 2;
      scopeArsenal = 2;
      baseWeapon = QCLASS(launch_NSAM_F);
      displayname = "NSAM";
      descriptionShort = "Next Generation Surface to Air Missile";
      modes[] = {"Single"};
      magazineReloadTime = 0;
      //find a different model and/or retexture
      modelOptics = "\z\ace\addons\javelin\data\reticle_titan.p3d";
      model = "\A3\weapons_F\launchers\nlaw\nlaw_F.p3d";
      picture = "\A3\weapons_f\launchers\nlaw\data\UI\gear_nlaw_ca.paa";
      UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
      magazines[] = {};
      magazineWell[] = {};
      class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 50;
      };
    };
    class CLASS(launch_NSAM_ready_F): CLASS(launch_NSAM_F) {
      scope = 1;
      scopeArsenal = 1;
      baseWeapon = QCLASS(launch_NSAM_F);
      magazines[] = {QCLASS(NSAM_LOBL)};
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
        mass = 45;
      };
    };
};
