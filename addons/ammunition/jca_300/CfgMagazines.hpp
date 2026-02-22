class CfgMagazines {
    class JCA_30Rnd_300BLK_EMAG;
    class CLASS(30Rnd_300BLK_Ball_EMAG_JCA): JCA_30Rnd_300BLK_EMAG {
        MACRO_SCOPE;
        ammo = QCLASS(300BLK_Ball);
        descriptionShort = ".300 Ball Reload Tracer";
        displayName = ".300 30Rnd EMAG (Ball)";
        lastRoundsTracer = 2;
    };
    class CLASS(30Rnd_300BLK_Ball_Tracer_EMAG_JCA): JCA_30Rnd_300BLK_EMAG {
        MACRO_SCOPE;
        ammo = QCLASS(300BLK_Ball);
        descriptionShort = ".300 Ball Tracer";
        displayName = ".300 30Rnd EMAG [T] (Ball)";
        tracersEvery = 1;
    };
    class CLASS(30Rnd_300BLK_EPR_EMAG_JCA): JCA_30Rnd_300BLK_EMAG {
        MACRO_SCOPE;
        ammo = QCLASS(300BLK_EPR);
        descriptionShort = ".300 Ball EPR";
        displayName = ".300 30Rnd EMAG (EPR)";
        lastRoundsTracer = 2;
    };
    class CLASS(30Rnd_300BLK_AP_EMAG_JCA): JCA_30Rnd_300BLK_EMAG {
        MACRO_SCOPE;
        ammo = QCLASS(300BLK_AP);
        descriptionShort = ".300 AP";
        displayName = ".300 30Rnd EMAG (AP)";
        lastRoundsTracer = 2;
    };
};
