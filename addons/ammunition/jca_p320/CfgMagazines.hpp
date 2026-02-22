class CfgMagazines {
    class JCA_17Rnd_9x19_P320_Mag;
    class CLASS(17Rnd_9x19_Ball_P320_JCA): JCA_17Rnd_9x19_P320_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_Ball);
        descriptionShort = "9mm Ball Reload Tracer";
        displayName = "9mm 17Rnd P320 (Ball)";
        lastRoundsTracer = 2;
    };
    class CLASS(17Rnd_9x19_Ball_Tracer_P320_JCA): JCA_17Rnd_9x19_P320_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_Ball);
        descriptionShort = "9mm Ball Tracer";
        displayName = "9mm 17Rnd P320 [T] (Ball)";
        tracersEvery = 1;
    };
    class CLASS(17Rnd_9x19_EPR_P320_JCA): JCA_17Rnd_9x19_P320_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_EPR);
        descriptionShort = "9mm Ball EPR";
        displayName = "9mm 17Rnd P320 (EPR)";
        lastRoundsTracer = 2;
    };
    class CLASS(17Rnd_9x19_AP_P320_JCA): JCA_17Rnd_9x19_P320_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_AP);
        descriptionShort = "9mm AP";
        displayName = "9mm 17Rnd P320 (AP)";
        lastRoundsTracer = 2;
    };
};
