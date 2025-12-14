class CfgWeapons {
    class VestItem;
    class V_TacVest_blk;
    class CLASS(Hidden_Ballistic_Vest_03): V_TacVest_blk {
        author = "DankLlamaTech";
        scope = 2;
        displayName = "Undercover Ballistic Vest [Level 3]";
        model = QPATHTOF(data\ground.p3d);
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest.paa)};
        picture = QPATHTOF(data\icon.paa);
        class ItemInfo: VestItem {
            uniformModel = QPATHTOF(data\vest.p3d);
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {QPATHTOF(data\vest.paa)};
            containerClass = "Supply0";
            mass = 75;
            class HitpointsProtectionInfo {
                class Chest {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.2;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.2;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.2;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };
    };
    class CLASS(Hidden_Ballistic_Vest_02): V_TacVest_blk {
        author = "DankLlamaTech";
        scope = 2;
        displayName = "Undercover Ballistic Vest [Level 2]";
        model = QPATHTOF(data\ground.p3d);
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest.paa)};
        picture = QPATHTOF(data\icon.paa);
        class ItemInfo: VestItem {
            uniformModel = QPATHTOF(data\vest.p3d);
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {QPATHTOF(data\vest.paa)};
            containerClass = "Supply0";
            mass = 50;
            class HitpointsProtectionInfo {
                class Chest {
                    hitpointName = "HitChest";
                    armor = 10;
                    passThrough = 0.2;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.2;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.2;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };
    };
    class CLASS(Hidden_Ballistic_Vest_01): V_TacVest_blk {
        author = "DankLlamaTech";
        scope = 2;
        displayName = "Undercover Ballistic Vest [Level 1]";
        model = QPATHTOF(data\ground.p3d);
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vest.paa)};
        picture = QPATHTOF(data\icon.paa);
        class ItemInfo: VestItem {
            uniformModel = QPATHTOF(data\vest.p3d);
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {QPATHTOF(data\vest.paa)};
            containerClass = "Supply0";
            mass = 25;
            class HitpointsProtectionInfo {
                class Chest {
                    hitpointName = "HitChest";
                    armor = 5;
                    passThrough = 0.2;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 5;
                    passThrough = 0.2;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 5;
                    passThrough = 0.2;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };
    };
};
