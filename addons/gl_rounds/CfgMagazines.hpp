class CfgMagazines {
    class 1Rnd_SmokeYellow_Grenade_shell;
    class CLASS(1Rnd_Stun_Grenade): 1Rnd_SmokeYellow_Grenade_shell {
        displayName = "XM748 Stun Grenade (Aerial Burst)";
        displayNameShort = "Stun (0.8s Fuze)";
        ammo = QCLASS(G_40mm_Stun);
        picture = QPATHTOF(data\gl_stun.paa);
    };
    class CLASS(6Rnd_Stun_Grenade): CLASS(1Rnd_Stun_Grenade) {
        displayName = "6Rnd XM748 Stun Grenade (Aerial Burst)";
        count = 6;
        mass = 24;
    };
};
