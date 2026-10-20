class CfgWeapons {
    class optic_DMS;
    class optic_DMS_ghex_F;
    class optic_DMS_weathered_F;
    class CLASS(optic_DMS): optic_DMS {
        displayName = "Burris XTR III";
        MACRO_NULL_SCOPE;
    };
    class CLASS(optic_DMS_ghex): optic_DMS_ghex_F {
        displayName = "Burris XTR III (Green Hex)";
        MACRO_NULL_SCOPE;
    };
    class CLASS(optic_DMS_weathered): optic_DMS_weathered_F {
        displayName = "Burris XTR III (Old)";
        MACRO_NULL_SCOPE;
    };
    class InventoryOpticsItem_Base_F;
    class optic_Arco;
    class ACE_optic_Arco_2D: optic_Arco {
        class CBA_ScriptedOptic;
        class ItemInfo: InventoryOpticsItem_Base_F {
          class OpticsModes {
                class ARCO2scope;
                class ARCO2collimator;
            };
        };
    };
    class CLASS(optic_DMR): ACE_optic_Arco_2D {
        displayName = "Specter DR 4x";
        weaponInfoType = "CBA_ScriptedOptic";
        model = "\A3\Weapons_F\acc\acco_Sniper_F";
        picture = "\a3\Weapons_F\acc\Data\UI\icon_optic_SOS_ca.paa";
        class CBA_ScriptedOptic: CBA_ScriptedOptic {
            reticleTexture = QPATHTOF(data\specterdr_reticle.paa);
        };
        class ItemInfo: ItemInfo {
            class OpticsModes: OpticsModes {
                class ARCO2scope: ARCO2scope {
                    opticsZoomMin = 0.25/6;
                    opticsZoomInit = 0.25/6;
                    opticsZoomMax = 0.25/6;
                };
                class ARCO2collimator: ARCO2collimator {};
            };
        };
    };
};
