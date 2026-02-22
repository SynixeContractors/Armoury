class CfgMagazines {
    class JCA_15Rnd_9x21_P226_Mag;
    class CLASS(15Rnd_9x21_Ball_P226_JCA): JCA_15Rnd_9x21_P226_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x21_Ball);
        descriptionShort = "9mm Ball Reload Tracer";
        displayName = "9mm 15Rnd P226 (Ball)";
        lastRoundsTracer = 2;
    };
    class CLASS(15Rnd_9x21_Ball_Tracer_P226_JCA): JCA_15Rnd_9x21_P226_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x21_Ball);
        descriptionShort = "9mm Ball Tracer";
        displayName = "9mm 15Rnd P226 [T] (Ball)";
        tracersEvery = 1;
    };
    class CLASS(15Rnd_9x21_EPR_P226_JCA): JCA_15Rnd_9x21_P226_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x21_EPR);
        descriptionShort = "9mm Ball EPR";
        displayName = "9mm 15Rnd P226 (EPR)";
        lastRoundsTracer = 2;
    };
    class CLASS(15Rnd_9x21_AP_P226_JCA): JCA_15Rnd_9x21_P226_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x21_AP);
        descriptionShort = "9mm AP";
        displayName = "9mm 15Rnd P226 (AP)";
        lastRoundsTracer = 2;
    };
};
