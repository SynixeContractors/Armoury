class ace_missileguidance_type_RBS70;
class CLASS(missileguidance_type_Metis_aa): ace_missileguidance_type_RBS70 {
};
class ace_missileguidance_type_Stinger;
class CLASS(missileguidance_type_Stinger_LOAL): ace_missileguidance_type_Stinger {
    seekerLockModes[] = {"LOAL"};
};
class CfgAmmo {
    class ace_missile_manpad_stinger;
    class CLASS(M_Stinger_LOAL): ace_missile_manpad_stinger {
        class ace_missileguidance: CLASS(missileguidance_type_Stinger_LOAL) {
            enabled = 1;
        };
    };

    class ace_missile_aim9_m;
    class CLASS(M_verona_airburst): ace_missile_aim9_m {
        proximityExplosionDistance = 40;
        proxyShape = "\A3\Weapons_F_Sams\Ammo\Missile_SAM_03_fly_F.p3d";
        maxControlRange = 5000;
        //ace metis guidance
        manualControl = 0;
        irLock = 0;
        laserLock = 0;
        airLock = 0;
        lockType = 0;
        class ace_missileguidance: CLASS(missileguidance_type_Metis_aa) {
            enabled = 1;
        };
    };
};
