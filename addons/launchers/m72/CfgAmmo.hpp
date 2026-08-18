class CfgAmmo {
    class RocketBase;
    class JCA_R_M72_HEAT_F: RocketBase {
        //M72A7 should be increased blast effect and less penetration
        //frag from rpg7 ace
        ace_frag_skip = 0;
        ace_frag_charge = 560;
        ace_frag_classes[] = {"ace_frag_tiny","ace_frag_small_HD"};
        ace_frag_force = 0;
        ace_frag_gurney_c = 2730;
        ace_frag_gurney_k = 0.5;
        ace_frag_metal = 100;
        warheadName = "HE";
        hit = 60;
        // weaker penetrator than base RPG7
        submunitionAmmo = QCLASS(penetrator_m72_HEDP);
    };
    class CLASS(M_M72_HEAT): JCA_R_M72_HEAT_F {
        scope = 1;
        scopeArsenal = 1;
        // M72A5 is higher penetration warhead
        // claims 300mm, using PG-7 of 260mm pen
        submunitionAmmo = "ammo_Penetrator_PG7";
        hit = 95;
        indirectHit = 10;
        indirectHitRange = 2;
        craterEffects = "GrenadeCrater";
        explosionEffects = "GrenadeExplosion";
    };
    class CLASS(M_M72_HE): JCA_R_M72_HEAT_F {
        scope = 1;
        scopeArsenal = 1;
        // M72A9 is HE, taken from PSRL frag round
        submunitionAmmo = "";
        ace_frag_charge = 210;
        ace_frag_classes[] = {"ace_frag_medium_HD"};
        ace_frag_gurney_c = 2800;
        ace_frag_gurney_k = 0.6;
        ace_frag_metal = 400;
        ace_frag_skip = 0;
        indirectHitRange = 6;
        indirectHit = 32;
    };
    class ammo_Penetrator_PG7;
    class CLASS(penetrator_m72_HEDP): ammo_Penetrator_PG7 {
        // weaker penetrator for HEDP version
        // claims 150mm of penetration vs 260mm of RPG7
        hit = 170;
    };
};
