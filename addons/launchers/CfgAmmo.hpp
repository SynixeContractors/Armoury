class CfgAmmo {
    // Smoke
    class G_40mm_Smoke;
    class CLASS(ammo_launcher_smoke): G_40mm_Smoke {
        model = "\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F.p3d";
        thrust = 0;
        thrustTime = 0;
        timeToLive = 120; // vs 45s of 40mm smoke
    };

    // Flare
    class ACE_40mm_Flare_white;
    class CLASS(ammo_launcher_flare): ACE_40mm_Flare_white {
        flareSize = 24;
        submunitionInitSpeed = 1;
    };

    // GMM Ejection Charge
    class RocketBase;
    class CLASS(ammo_GMM_launch_HEAT): RocketBase {
        model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
        submunitionAmmo = QCLASS(ammo_GMM_Guidance_HEAT);
        submunitionCount = 1;
        submunitionConeAngle = 0;
        triggerTime = 0.5;
        triggerOnImpact = 1;
        thrust = 40;
        thrustTime = 0.5;
        // backblast from nlaw (soft launch)
        ace_overpressure_priority = 2;
        ace_overpressure_range = 2;
        ace_overpressure_offset = 1.05;
        ace_overpressure_angle = 30;
        ace_overpressure_backblastRange = 1;
        class Eventhandlers {
            fired = QUOTE(call ace_missile_clgp_fnc_submunition_ammoFired);
        };
    };
    class CLASS(ammo_GMM_launch_HE): CLASS(ammo_GMM_launch_HEAT) {
        submunitionAmmo = QCLASS(ammo_GMM_Guidance_HE);
    };

    // GMM actual hitting part
    class MissileBase;
    class ace_missile_clgp_pike_guidance: MissileBase {
        class ace_missileguidance;
    };
    class CLASS(ammo_GMM_Guidance): ace_missile_clgp_pike_guidance {
        maxSpeed = 600;
        thrust = 40;
        thrustTime = 40;
        initTime = 0;
        maxControlRange = 2500;
        fuseDistance = 50;
        triggerOnImpact = 1;

        // visuals
        effectsMissile = "missile3";
        model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
        class ace_missileguidance: ace_missileguidance {
            pitchRate = 30;
            yawRate = 25;
            seekLastTargetPos = 1; // has inertial guidance
        };
    };
    class CLASS(ammo_GMM_Guidance_HE): CLASS(ammo_GMM_Guidance) {
        ace_frag_skip = 0;
        // from Metis HE
        ace_frag_charge = 4950;
        ace_frag_classes[] = {"ace_frag_tiny"};
        ace_frag_gurney_c = 2800;
        ace_frag_gurney_k = 0.5;
        ace_frag_metal = 13800;
        ace_vehicle_damage_incendiary = 0.2;
        hit = 220;
        explosive = 0.8;
        ExplosionEffects = "MortarExplosion";
        warheadName = "HE";
        indirectHit = 45;
        indirectHitRange = 8;
        submunitionAmmo = "";
        submunitionDirectionType = "";
    };
    class CLASS(ammo_GMM_Guidance_HEAT): CLASS(ammo_GMM_Guidance) {
        ace_frag_skip = 1;
        // warhead from Metis HEAT
        submunitionAmmo = "ammo_Penetrator_Vorona";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0,0,-0.2};
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
        hit = 150;
        explosive = 0.8;
        indirectHitRange = 3.5;
        indirectHit = 25;
        warheadName = "TandemHEAT";
    };
};
