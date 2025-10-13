// 9x21 PPL-20M Upyr
class Aegis_20Rnd_9x21_Gepard_Mag_F;
class Aegis_40Rnd_9x21_Gepard_Mag_F;
class CLASS(20Rnd_9x21_Ball_PPL_Aegis): Aegis_20Rnd_9x21_Gepard_Mag_F {
    MACRO_SCOPE;
    ammo = QCLASS(9x21_Ball);
    displayName = "9mm 20Rnd PPL (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "9x21mm Ball Reload Tracer";
    tracersEvery = 4;
    lastRoundsTracer = 4;
};
class CLASS(20Rnd_9x21_Ball_Tracer_PPL_Aegis): CLASS(20Rnd_9x21_Ball_PPL_Aegis) {
    displayName = "9mm 20Rnd PPL [T] (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "9x21mm EPR Reload Tracer";
    tracersEvery = 1;
};
class CLASS(20Rnd_9x21_EPR_PPL_Aegis): CLASS(20Rnd_9x21_Ball_PPL_Aegis) {
    ammo = QCLASS(9x21_EPR);
    displayName = "9mm 20Rnd PPL (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "9x21mm Ball Tracer";
};
class CLASS(20Rnd_9x21_AP_PPL_Aegis): CLASS(20Rnd_9x21_Ball_PPL_Aegis) {
    ammo = QCLASS(9x21_AP);
    displayName = "9mm 20Rnd PPL (AP)";
    displayNameShort = "AP";
    descriptionShort = "9x21mm EPR Reload Tracer";
};
class CLASS(40Rnd_9x21_Ball_PPL_Aegis): Aegis_40Rnd_9x21_Gepard_Mag_F {
    MACRO_SCOPE;
    ammo = QCLASS(9x21_Ball);
    displayName = "9mm 40Rnd PPL (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "9x21mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
};
class CLASS(40Rnd_9x21_Ball_Tracer_PPL_Aegis): CLASS(40Rnd_9x21_Ball_PPL_Aegis) {
    displayName = "9mm 40Rnd PPL [T] (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "9x21mm EPR Reload Tracer";
    tracersEvery = 1;
};
class CLASS(40Rnd_9x21_EPR_PPL_Aegis): CLASS(40Rnd_9x21_Ball_PPL_Aegis) {
    ammo = QCLASS(9x21_EPR);
    displayName = "9mm 40Rnd PPL (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "9x21mm Ball Tracer";
};
class CLASS(40Rnd_9x21_AP_PPL_Aegis): CLASS(40Rnd_9x21_Ball_PPL_Aegis) {
    ammo = QCLASS(9x21_AP);
    displayName = "9mm 40Rnd PPL (AP)";
    displayNameShort = "AP";
    descriptionShort = "9x21mm EPR Reload Tracer";
};
