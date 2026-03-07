// Makarov Pistol 9x18
class CLASS(10Rnd_9x18_Ball): 10Rnd_9x21_Mag {
    MACRO_SCOPE;
    ammo = QCLASS(9x18_Ball);
    displayName = "9mm 10Rnd Makarov (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "9x18mm Ball Reload Tracer";
    lastRoundsTracer = 2;
    tracersEvery = 4;
};
class CLASS(10Rnd_9x18_EPR): CLASS(10Rnd_9x18_Ball) {
    ammo = QCLASS(9x18_EPR);
    descriptionShort = "9x18mm EPR Reload Tracer";
    displayName = "9mm 10Rnd Makarov (EPR)";
    displayNameShort = "EPR";
};
class CLASS(10Rnd_9x18_AP): CLASS(10Rnd_9x18_Ball) {
    ammo = QCLASS(9x18_AP);
    descriptionShort = "9x18mm Ball Reload Tracer";
    displayName = "9mm 10Rnd Makarov (AP)";
    displayNameShort = "AP";
};
