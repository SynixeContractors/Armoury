class CfgMagazines {
    class JCA_25Rnd_45ACP_UMP_Mag;
    class CLASS(25Rnd_45ACP_Ball_UMP_JCA): JCA_25Rnd_45ACP_UMP_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(45ACP_Ball);
        lastRoundsTracer = 2;
        AMMO_DESCRIPTION(45ACP,Ball,25,Reload Tracer,UMP);
    };
    class CLASS(25Rnd_45ACP_JHP_UMP_JCA): CLASS(25Rnd_45ACP_Ball_UMP_JCA) {
        ammo = QCLASS(45ACP_JHP);
        AMMO_DESCRIPTION(45ACP,JHP,25,Reload Tracer,UMP);
    };
};
