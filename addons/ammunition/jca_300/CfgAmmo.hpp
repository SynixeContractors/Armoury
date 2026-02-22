class CfgAmmo {
    class JCA_B_300BLK_Ball;

    class CLASS(300BLK_Ball): JCA_B_300BLK_Ball {
        aiAmmoUsageFlags = 192;
        caliber = 0.19;
        cartridge = "FxCartridge_762";
        hit = 12;
        MACRO_TRACERS;
    };
    class CLASS(300BLK_EPR): CLASS(300BLK_Ball) {
        caliber = 1.2;
        hit = 13;
    };
    class CLASS(300BLK_AP): CLASS(300BLK_EPR) {
        caliber = 1.4;
        hit = 13.5;
    };
};
