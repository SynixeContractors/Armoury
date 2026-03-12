class CfgMagazines {
    class JCA_30Rnd_9x21_MP5_Mag;
    class CLASS(30Rnd_9x19_Ball_MP5_JCA): JCA_30Rnd_9x21_MP5_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_Ball);
        lastRoundsTracer = 2;
        AMMO_DESCRIPTION(9x19mm,Ball,30,Reload Tracer,MP5);
    };
    class CLASS(30Rnd_9x19_Ball_Tracer_MP5_JCA): JCA_30Rnd_9x21_MP5_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_Ball);
        tracersEvery = 1;
        AMMO_DESCRIPTION(9x19mm,Ball [T],30,Tracer,MP5);
    };
    class CLASS(30Rnd_9x19_JHP_MP5_JCA): JCA_30Rnd_9x21_MP5_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_JHP);
        lastRoundsTracer = 2;
        AMMO_DESCRIPTION(9x19mm,JHP,30,Reload Tracer,MP5);
    };
    class CLASS(30Rnd_9x19_AP_MP5_JCA): JCA_30Rnd_9x21_MP5_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_AP);
        lastRoundsTracer = 2;
        AMMO_DESCRIPTION(9x19mm,AP,30,Reload Tracer,MP5);
    };
};
