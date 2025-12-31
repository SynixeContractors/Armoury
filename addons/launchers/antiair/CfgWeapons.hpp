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
      descriptionShort = "Next Generation Surface to Air Missile";
      modes[] = {"Single"};
      model = "\z\ace\addons\dragon\models\ace_m47_magazine.p3d";
      modelOptics = "";
      // Potentially add different texture
      picture = "\z\ace\addons\dragon\data\m47_dragon_item_ca.paa";
      UiPicture = "\A3\Weapons_F\Data\UI\icon_aa_CA.paa";
      class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 50;
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
        mass = 45;
      };
    };
};
