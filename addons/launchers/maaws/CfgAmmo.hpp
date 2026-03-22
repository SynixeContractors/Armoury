class CfgAmmo {
    class RocketBase;
    class CLASS(ammo_GMM_launch_HEAT): RocketBase {
        model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
        submunitionAmmo = QCLASS(ammo_GMM_Guidance_HEAT);
        submunitionCount = 1;
        submunitionConeAngle = 0;
        triggerTime = 1;
        class Eventhandlers {
            fired = QUOTE(call ace_missile_clgp_fnc_submunition_ammoFired);
        };
    };
    class CLASS(ammo_GMM_launch_HE): CLASS(ammo_GMM_launch_HEAT) {
        submunitionAmmo = QCLASS(ammo_GMM_Guidance_HE);
    };
    class ace_missile_clgp_pike_guidance;
    class CLASS(ammo_GMM_Guidance): ace_missile_clgp_pike_guidance {
        maxSpeed = 600;
        thrust = 4;
        thrustTime = 20;
        initTime = 0;
        maxControlRange = 2500;
        fuseDistance = 50;
        // visuals
        effectsMissile = "missile3";
        model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
    };
    class CLASS(ammo_GMM_Guidance_HE): CLASS(ammo_GMM_Guidance) {
        ace_frag_skip = 0;
        //from HE44
        ace_frag_charge = 590;
        ace_frag_classes[] = {"ace_frag_small_HD"};
        ace_frag_gurney_c = 2800;
        ace_frag_gurney_k = 0.6;
        ace_frag_metal = 2300;
        ace_vehicle_damage_incendiary = 0.4;
        hit = 200;
        explosive = 1;
        ExplosionEffects = "MortarExplosion";
        warheadName = "HE";
        indirectHit = 45;
        indirectHitRange = 8;
    };
    class CLASS(ammo_GMM_Guidance_HEAT): CLASS(ammo_GMM_Guidance) {
        ace_frag_skip = 1;
        //warhead from Metis HEAT
        submunitionAmmo = "ammo_Penetrator_Vorona";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0,0,-0.2};
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
        triggerOnImpact = 1;
        hit = 150;
        explosive = 0.8;
        indirectHitRange = 3.5;
        indirectHit = 25;
        warheadName = "TandemHEAT";
    };

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
    class CLASS(ammo_MAAWS_Smoke_launch): R_MRAAWS_HE_F {
        ace_frag_skip=1;
        //lol
        submunitionAmmo = QCLASS(ammo_MAAWS_Smoke);
        hit = 30;
        explosive = 0;
        caliber = 1;
        indirectHit = -1;
        indirectHitRange = 0;
        submunitionConeAngle = 0;
        submunitionConeAngleHorizontal = 0;
        triggerDistance = 5;
        triggerOnImpact = 1;
        ExplosionEffects = "";
        explosionEffectsDir = "";
        submunitionInitSpeed = 0;
    };
    class Smoke_82mm_AMOS_White;
    class G_40mm_Smoke;
    class CLASS(ammo_MAAWS_Smoke): Smoke_82mm_AMOS_White {
        model = "\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F.p3d";
        thrust = 0;
        thrustTime = 0;
    };
    class Flare_82mm_AMOS_White;
    class CLASS(ammo_MAAWS_Flare): Flare_82mm_AMOS_White {};
};
