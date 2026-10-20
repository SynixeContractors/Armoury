class CfgWeapons {
    class InventoryOpticsItem_Base_F;
    class ItemCore;
    class optic_DMS: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip;
                class Iron;
            };
        };
    };

    class CLASS(optic_DMS): optic_DMS {
        displayName = "Burris XTR III";
        MACRO_NULL_SCOPE;
        class ItemInfo: ItemInfo {
            //unfortunatelly ace destroys this, so we have to restore it manually
            mass = 12;
            opticType = 2;
            optics = 1;
            modelOptics = "\A3\Weapons_f\acc\reticle_marksman_F";
            class OpticsModes: OpticsModes {
                class Snip: Snip {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMin = 0.0625;
                    opticsZoomMax = 0.125;
                    opticsZoomInit = 0.125;
                    discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 300;
                    distanceZoomMax = 1200;
                    discretefov[] = {0.125,0.0625};
                    discreteInitIndex = 0;
                    memoryPointCamera = "opticView";
                    modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F","\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Iron: Iron {};
            };
        };
    };
    class CLASS(optic_DMS_ghex): CLASS(optic_DMS) {
        displayName = "Burris XTR III (Green Hex)";
        model = "\A3\Weapons_F\Acc\acco_marksman_ghex_F.p3d";
    };
    class CLASS(optic_DMS_weathered): CLASS(optic_DMS) {
        displayName = "Burris XTR III (Old)";
        model = "\A3\Weapons_F\Acc\acco_marksman_weathered_F.p3d";
    };
};
