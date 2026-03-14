class CfgAmmo {
    class RocketBase;
    class CLASS(ammo_GMM_launch): RocketBase {
        model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
        submunitionAmmo = QCLASS(ammo_GMM_Guidance);
        submunitionCount = 1;
        submunitionConeAngle = 0;
        triggerTime = 1;
        class Eventhandlers {
            fired = QUOTE(call ace_missile_clgp_fnc_submunition_ammoFired);
        };
    };
    class MissileBase;
    class ace_missile_clgp_pike_guidance: MissileBase {
        class ace_missileguidance;
    };
    class CLASS(ammo_GMM_Guidance): ace_missile_clgp_pike_guidance {
        maxSpeed = 300;
        thrust = 4;
        thrustTime = 20;
        initTime = 0;
        maxControlRange = 2500;
        deflecting = 1;
        //warhead from metis
        submunitionAmmo = "ammo_Penetrator_Titan_AT";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0,0,-0.2};
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
        triggerOnImpact = 1;
        hit = 150;
        explosive = 0.8;
        warheadName = "TandemHEAT";
        ace_frag_skip = 1;
        // visuals
        effectsMissile = "missile3";
        model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
        // class ace_missileguidance: ace_missileguidance {
        //     defaultAttackProfile = "copperhead";
        //     attackProfiles[] = {"copperhead"};
        // };
    };

    //HEDP
    class R_MRAAWS_HE_F;
    class CLASS(ammo_MAAWS_HEDP): R_MRAAWS_HE_F {
        //HE55 penetrator on HE44
        submunitionAmmo = "ammo_Penetrator_MRAAWS_HEAT55";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0,0,-0.2};
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
        warheadName = "HEAT";
    };
};
