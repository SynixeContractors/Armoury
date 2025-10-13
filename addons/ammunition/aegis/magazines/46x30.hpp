// 4.6x30mm MP7
class 20Rnd_460x30_Mag_F;
class 40Rnd_460x30_Mag_F;
class CLASS(20Rnd_46x30_AP): 20Rnd_460x30_Mag_F {
    MACRO_SCOPE;
    ammo = QCLASS(46x30_AP);
    displayName = "4.6mm 20Rnd MP7 (AP)";
    displayNameShort = "AP";
    descriptionShort = "4.6x30mm AP Reload Tracer";
    lastRoundsTracer = 2;
};
class CLASS(40Rnd_46x30_AP): 40Rnd_460x30_Mag_F {
    MACRO_SCOPE;
    ammo = QCLASS(46x30_AP);
    displayName = "4.6mm 40Rnd MP7 (AP)";
    displayNameShort = "AP";
    descriptionShort = "4.6x30mm AP Reload Tracer";
    lastRoundsTracer = 2;
};

