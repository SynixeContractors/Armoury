class CfgMagazines {
    class JCA_15Rnd_9x19_M9A1_Yellow_Mag;
    class CLASS(15Rnd_9x19_Ball_M9A1_JCA): JCA_15Rnd_9x19_M9A1_Yellow_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_Ball);
        descriptionShort = "9mm Ball Reload Tracer";
        displayName = "9mm 15Rnd M9A1 (Ball)";
        lastRoundsTracer = 2;
    };
    class CLASS(15Rnd_9x19_JHP_M9A1_JCA): CLASS(15Rnd_9x19_Ball_M9A1_JCA) {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_JHP);
        descriptionShort = "9mm Ball EPR";
        displayName = "9mm 15Rnd M9A1 (EPR)";
        lastRoundsTracer = 2;
    };
    class CLASS(15Rnd_9x19_AP_M9A1_JCA): CLASS(15Rnd_9x19_Ball_M9A1_JCA) {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_AP);
        descriptionShort = "9mm AP";
        displayName = "9mm 15Rnd M9A1 (AP)";
        lastRoundsTracer = 2;
    };
};
