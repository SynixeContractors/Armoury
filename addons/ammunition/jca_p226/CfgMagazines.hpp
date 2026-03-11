class CfgMagazines {
    class JCA_15Rnd_9x19_P226_Yellow_Mag;
    class CLASS(15Rnd_9x19_Ball_P226_JCA): JCA_15Rnd_9x19_P226_Yellow_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_Ball);
        lastRoundsTracer = 2;
        AMMO_DESCRIPTION(9x19mm,Ball,15,Reload Tracer,P226);
    };
    class CLASS(15Rnd_9x19_JHP_P226_JCA): JCA_15Rnd_9x19_P226_Yellow_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_JHP);
        lastRoundsTracer = 2;
        AMMO_DESCRIPTION(9x19mm,JHP,15,Reload Tracer,P226);
    };
    class CLASS(15Rnd_9x19_AP_P226_JCA): JCA_15Rnd_9x19_P226_Yellow_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_AP);
        lastRoundsTracer = 2;
        AMMO_DESCRIPTION(9x19mm,AP,15,Reload Tracer,P226);
    };
};
