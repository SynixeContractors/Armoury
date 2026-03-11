class CfgMagazines {
    class JCA_15Rnd_9x19_M9A1_Yellow_Mag;
    class CLASS(15Rnd_9x19_Ball_M9A1_JCA): JCA_15Rnd_9x19_M9A1_Yellow_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_Ball);
        lastRoundsTracer = 2;
        AMMO_DESCRIPTION(9x19mm,Ball,15,Reload Tracer,Beretta);
    };
    class CLASS(15Rnd_9x19_JHP_M9A1_JCA): CLASS(15Rnd_9x19_Ball_M9A1_JCA) {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_JHP);
        lastRoundsTracer = 2;
        AMMO_DESCRIPTION(9x19mm,JHP,15,Reload Tracer,Beretta);
    };
    class CLASS(15Rnd_9x19_AP_M9A1_JCA): CLASS(15Rnd_9x19_Ball_M9A1_JCA) {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_AP);
        lastRoundsTracer = 2;
        AMMO_DESCRIPTION(9x19mm,AP,15,Reload Tracer,Beretta);
    };
    //new flush 17Rnd still fit old beretta 92FS
    class CLASS(17Rnd_9x19_Ball_M9A1_JCA): CLASS(15Rnd_9x19_Ball_M9A1_JCA) {
        count = 17;
        AMMO_DESCRIPTION(9x19mm,Ball,17,Reload Tracer,M9A3);
    };
    class CLASS(17Rnd_9x19_JHP_M9A1_JCA): CLASS(15Rnd_9x19_JHP_M9A1_JCA) {
        count = 17;
        AMMO_DESCRIPTION(9x19mm,JHP,17,Reload Tracer,M9A3);
    };
    class CLASS(17Rnd_9x19_AP_M9A1_JCA): CLASS(15Rnd_9x19_AP_M9A1_JCA) {
        count = 17;
        AMMO_DESCRIPTION(9x19mm,AP,17,Reload Tracer,M9A3);
    };
};
