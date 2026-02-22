class CfgMagazines {
    class JCA_12Rnd_45ACP_Mk23_Mag;
    class CLASS(12Rnd_45ACP_Ball_Mk23_JCA): JCA_12Rnd_45ACP_Mk23_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(45ACP_Ball);
        descriptionShort = ".45ACP Ball Reload Tracer";
        displayName = ".45ACP 12Rnd Mk23 (Ball)";
        lastRoundsTracer = 2;
        tracersEvery = 4;
    };
};
