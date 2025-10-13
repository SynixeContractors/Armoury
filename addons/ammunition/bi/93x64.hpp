// 9.3 brenneke

// HK121 belts
// base game mag is 120 rounds even tho it says 150
class CLASS(120Rnd_93x64_Ball): 150Rnd_93x64_Mag {
    MACRO_SCOPE;
    ammo = QCLASS(93x64_Ball);
    displayName = "9.3x64 120Rnd Belt (TE4) (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = "9.3x64 Ball Tracer Every 4";
    tracersEvery = 4;
};
class CLASS(120Rnd_93x64_Ball_Tracer): CLASS(120Rnd_93x64_Ball) {
    displayName = "9.3x64 120Rnd Belt (T) (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "9.3x64 Ball Tracer";
    tracersEvery = 1;
};
class CLASS(120Rnd_93x64_EPR): CLASS(120Rnd_93x64_Ball) {
    ammo = QCLASS(93x64_EPR);
    displayName = "9.3x64 120Rnd Belt (TE4) (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = "9.3x64 EPR Tracer Every 4";
};
class CLASS(120Rnd_93x64_AP): CLASS(120Rnd_93x64_EPR) {
    ammo = QCLASS(93x64_AP);
    displayName = "9.3x64 120Rnd Belt (TE4) (AP)";
    displayNameShort = "AP TE4";
    descriptionShort = "9.3x64 AP Tracer Every 4";
};

// Cyrus mags

class CLASS(10Rnd_93x64_EPR): 10Rnd_93x64_DMR_05_Mag {
    MACRO_SCOPE;
    ammo = QCLASS(93x64_EPR);
    lastRoundsTracer = 2;
    displayName = "9.3x64 10Rnd (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "9.3x64 EPR";
};
class CLASS(10Rnd_93x64_AP): CLASS(10Rnd_93x64_EPR) {
    ammo = QCLASS(93x64_AP);
    displayName = "9.3x64 10Rnd (AP)";
    displayNameShort = "AP";
    descriptionShort = "9.3x64 AP";
};
