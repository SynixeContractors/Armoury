class CfgMagazines {
    class JCA_15Rnd_9x19_P320C_FMJ_Mag;
    class CLASS(17Rnd_9x19_Ball_P320_JCA): JCA_15Rnd_9x19_P320C_FMJ_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_Ball);
        lastRoundsTracer = 2;
        count = 17; //even compact fits the flush army 17Rnd
        AMMO_DESCRIPTION(9x19mm,Ball,17,Reload Tracer,P320);
    };
    class CLASS(17Rnd_9x19_JHP_P320_JCA): CLASS(17Rnd_9x19_Ball_P320_JCA) {
        ammo = QCLASS(9x19_JHP);
        AMMO_DESCRIPTION(9x19mm,JHP,17,Reload Tracer,P320);
    };
    class CLASS(17Rnd_9x19_AP_P320_JCA): CLASS(17Rnd_9x19_Ball_P320_JCA) {
        ammo = QCLASS(9x19_AP);
        AMMO_DESCRIPTION(9x19mm,AP,17,Reload Tracer,P320);
    };
};
