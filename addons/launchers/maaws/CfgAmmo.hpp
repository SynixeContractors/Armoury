class CfgAmmo {
    //HEDP
    class R_MRAAWS_HE_F;
    class CLASS(ammo_MAAWS_HEDP): R_MRAAWS_HE_F {
        //HE55 penetrator on HE44
        triggerOnImpact = 1;
        submunitionAmmo = "ammo_Penetrator_MRAAWS_HEAT55";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0,0,-0.2};
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
        warheadName = "HEAT";
    };
    //Smoke
    class CLASS(ammo_MAAWS_Smoke_launch): R_MRAAWS_HE_F {
        ace_frag_skip=1;
        submunitionAmmo = QCLASS(ammo_launcher_smoke);
        hit = -1;
        explosive = 0;
        caliber = 1;
        indirectHit = -1;
        indirectHitRange = 0;
        submunitionConeAngle = 0;
        submunitionConeAngleHorizontal = 0;
        triggerDistance = 5;
        triggerOnImpact = 1;
        triggerTime = 1;
        ExplosionEffects = "";
        explosionEffectsDir = "";
        submunitionInitSpeed = 0;
    };
    //Flare
    class CLASS(ammo_MAAWS_Flare_launch): CLASS(ammo_MAAWS_Smoke_launch) {
        submunitionAmmo = QCLASS(ammo_launcher_flare);
    };
};
