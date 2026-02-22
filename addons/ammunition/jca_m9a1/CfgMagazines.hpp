class CfgMagazines {
    class JCA_15Rnd_9x21_M9A1_Mag;
    class CLASS(15Rnd_9x21_Ball_M9A1_JCA): JCA_15Rnd_9x21_M9A1_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x21_Ball);
        descriptionShort = "9mm Ball Reload Tracer";
        displayName = "9mm 15Rnd M9A1 (Ball)";
        lastRoundsTracer = 2;
    };
    class CLASS(15Rnd_9x21_Ball_Tracer_M9A1_JCA): JCA_15Rnd_9x21_M9A1_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x21_Ball);
        descriptionShort = "9mm Ball Tracer";
        displayName = "9mm 15Rnd M9A1 [T] (Ball)";
        tracersEvery = 1;
    };
    class CLASS(15Rnd_9x21_EPR_M9A1_JCA): JCA_15Rnd_9x21_M9A1_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x21_EPR);
        descriptionShort = "9mm Ball EPR";
        displayName = "9mm 15Rnd M9A1 (EPR)";
        lastRoundsTracer = 2;
    };
    class CLASS(15Rnd_9x21_AP_M9A1_JCA): JCA_15Rnd_9x21_M9A1_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x21_AP);
        descriptionShort = "9mm AP";
        displayName = "9mm 15Rnd M9A1 (AP)";
        lastRoundsTracer = 2;
    };
};
