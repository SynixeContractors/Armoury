/*
    INCLUDE INHERITED ENTRIES: false
    SHOW CLASSES ONLY: false
    UNLOCALIZED TEXT: true
    CONFIG PATH: bin\config.bin/CfgWeapons/CUP_optic_Elcan
    SOURCE ADD-ON(S): CUP_Weapons_West_Attachments, ace_compat_cup_weapons
*/

class CUP_optic_Elcan: ItemCore
{
    author = $STR_CUP_AUTHOR_STRING;
    dlc = "CUP_Weapons";
    scope = 2;
    displayName = $STR_CUP_DN_OPTIC_ELCANSPECTEROS_BLACK;
    picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\BAF_Elcan\data\ui\gear_acco_specteros_black_x_ca.paa";
    model = "\CUP\Weapons\CUP_Weapons_West_Attachments\BAF_Elcan\Elcan_SpecterOS4x_black.p3d";
    descriptionShort = $STR_CUP_OPTIC_ELCAN_SPECTERDR_DESCRIPTIONSHORT;
    weaponInfoType = "CBA_ScriptedOptic";
    class CBA_ScriptedOptic
    {
        reticleTexture = "\CUP\Weapons\CUP_Weapons_West_Attachments\BAF_Elcan\data\specterOS4x_reticle_ca.paa";
        reticleTextureNight = "\CUP\Weapons\CUP_Weapons_West_Attachments\BAF_Elcan\data\specterOS4x_reticle_night_ca.paa";
        reticleTextureSize = 1;
        manualReticleNightSwitch = 1;
        bodyTexture = "\CUP\Weapons\CUP_Weapons_West_Attachments\BAF_Elcan\data\specterOS4x_body_black_ca.paa";
        bodyTextureNight = "\CUP\Weapons\CUP_Weapons_West_Attachments\BAF_Elcan\data\specterOS4x_body_night_ca.paa";
        bodyTextureSize = 1.8;
    };
    class ItemInfo: InventoryOpticsItem_Base_F
    {
        mass = 11.8687;
        optics = 1;
        opticType = 1;
        modelOptics = "\x\cba\addons\optics\cba_optic_big_90.p3d";
        class OpticsModes
        {
            class Specter
            {
                opticsID = 1;
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
                opticsZoomMin = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                opticsZoomInit = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                opticsZoomMax = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                memoryPointCamera = "opticView2";
                visionMode[] = {"Normal"};
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                cameraDir = "";
            };
            class Ironsights: Specter
            {
                opticsID = 2;
                useModelOptics = 0;
                opticsPPEffects[] = {};
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.25;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};
            };
        };
    };
    inertia = 0.1;
    MRT_SwitchItemNextClass = "CUP_optic_Elcan_3D";
    MRT_SwitchItemPrevClass = "CUP_optic_Elcan_3D";
    MRT_switchItemHintText = $STR_CUP_DN_OPTICSMODE_2D;
    ace_ScopeHeightAboveRail = 4.17443;
};
