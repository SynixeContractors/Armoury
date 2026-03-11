class CfgMagazines {
    class JCA_12Rnd_45ACP_Mk23_Mag;
    class CLASS(12Rnd_45ACP_Ball_Mk23_JCA): JCA_12Rnd_45ACP_Mk23_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(45ACP_Ball);
        lastRoundsTracer = 2;
        tracersEvery = 4;
        AMMO_DESCRIPTION(45ACP,Ball,12,Reload Tracer,Mk23);
    };
    class CLASS(12Rnd_45ACP_JHP_Mk23_JCA): CLASS(12Rnd_45ACP_Ball_Mk23_JCA) {
        ammo = QCLASS(45ACP_Ball);
        AMMO_DESCRIPTION(45ACP,JHP,12,Reload Tracer,Mk23);
    };
};
