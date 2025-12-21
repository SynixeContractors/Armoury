class CfgAmmo {
    class SmokeShell;
    class G_40mm_Smoke: SmokeShell {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.1;
    };

    class G_40mm_SmokeYellow;
    class CLASS(G_40mm_Stun): G_40mm_SmokeYellow {
        aiAmmoUsageFlags = "64"; // infantry
        smokeColor[] = {0,0,0,0};
        effectsSmoke = "ACE_M84FlashbangEffect";
        dangerRadiusHit = -1;
        explosive = 1;
    };
};
