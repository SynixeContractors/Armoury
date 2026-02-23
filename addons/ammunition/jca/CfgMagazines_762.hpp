class JCA_20Rnd_762x51_SMAG;
class JCA_20Rnd_762x51_PMAG;
class JCA_20Rnd_762x51_Sand_SMAG;
class JCA_20Rnd_762x51_Sand_PMAG;

//pmag
class CLASS(20Rnd_762x51_Ball_JCA_PMAG): JCA_20Rnd_762x51_PMAG {
    MACRO_SCOPE;
    ammo = QCLASS(762x51_Ball);
    displayName = "7.62mm 20Rnd PMAG (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x51mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
};
class CLASS(20Rnd_762x51_Ball_Tracer_JCA_PMAG): CLASS(20Rnd_762x51_Ball_JCA_PMAG) {
    displayName = "7.62mm 20Rnd PMAG [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x51mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(20Rnd_762x51_EPR_JCA_PMAG): CLASS(20Rnd_762x51_Ball_JCA_PMAG) {
    ammo = QCLASS(762x51_EPR);
    displayName = "7.62mm 20Rnd PMAG (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "7.62x51mm EPR Reload Tracer";
};
class CLASS(20Rnd_762x51_AP_JCA_PMAG): CLASS(20Rnd_762x51_Ball_JCA_PMAG) {
    ammo = QCLASS(762x51_AP);
    displayName = "7.62mm 20Rnd PMAG (AP)";
    displayNameShort = "AP";
    descriptionShort = "7.62x51mm AP Reload Tracer";
};
//pmag tan
class CLASS(20Rnd_762x51_Ball_JCA_PMAG_Sand): JCA_20Rnd_762x51_Sand_PMAG {
    MACRO_SCOPE;
    ammo = QCLASS(762x51_Ball);
    displayName = "7.62mm 20Rnd PMAG Tan (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x51mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
};
class CLASS(20Rnd_762x51_Ball_Tracer_JCA_PMAG_Sand): CLASS(20Rnd_762x51_Ball_JCA_PMAG_Sand) {
    displayName = "7.62mm 20Rnd PMAG Tan [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x51mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(20Rnd_762x51_EPR_JCA_PMAG_Sand): CLASS(20Rnd_762x51_Ball_JCA_PMAG_Sand) {
    ammo = QCLASS(762x51_EPR);
    displayName = "7.62mm 20Rnd PMAG Tan (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "7.62x51mm EPR Reload Tracer";
};
class CLASS(20Rnd_762x51_AP_JCA_PMAG_Sand): CLASS(20Rnd_762x51_Ball_JCA_PMAG_Sand) {
    ammo = QCLASS(762x51_AP);
    displayName = "7.62mm 20Rnd PMAG Tan (AP)";
    displayNameShort = "AP";
    descriptionShort = "7.62x51mm AP Reload Tracer";
};

//smag
class CLASS(20Rnd_762x51_Ball_JCA_SMAG): JCA_20Rnd_762x51_SMAG {
    MACRO_SCOPE;
    ammo = QCLASS(762x51_Ball);
    displayName = "7.62mm 20Rnd SMAG (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x51mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
};
class CLASS(20Rnd_762x51_Ball_Tracer_JCA_SMAG): CLASS(20Rnd_762x51_Ball_JCA_SMAG) {
    displayName = "7.62mm 20Rnd SMAG [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x51mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(20Rnd_762x51_EPR_JCA_SMAG): CLASS(20Rnd_762x51_Ball_JCA_SMAG) {
    ammo = QCLASS(762x51_EPR);
    displayName = "7.62mm 20Rnd SMAG (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "7.62x51mm EPR Reload Tracer";
};
class CLASS(20Rnd_762x51_AP_JCA_SMAG): CLASS(20Rnd_762x51_Ball_JCA_SMAG) {
    ammo = QCLASS(762x51_AP);
    displayName = "7.62mm 20Rnd SMAG (AP)";
    displayNameShort = "AP";
    descriptionShort = "7.62x51mm AP Reload Tracer";
};
//smag tan
class CLASS(20Rnd_762x51_Ball_JCA_SMAG_Sand): JCA_20Rnd_762x51_Sand_SMAG {
    MACRO_SCOPE;
    ammo = QCLASS(762x51_Ball);
    displayName = "7.62mm 20Rnd SMAG Tan (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x51mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
};
class CLASS(20Rnd_762x51_Ball_Tracer_JCA_SMAG_Sand): CLASS(20Rnd_762x51_Ball_JCA_SMAG_Sand) {
    displayName = "7.62mm 20Rnd SMAG Tan [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x51mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(20Rnd_762x51_EPR_JCA_SMAG_Sand): CLASS(20Rnd_762x51_Ball_JCA_SMAG_Sand) {
    ammo = QCLASS(762x51_EPR);
    displayName = "7.62mm 20Rnd SMAG Tan (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "7.62x51mm EPR Reload Tracer";
};
class CLASS(20Rnd_762x51_AP_JCA_SMAG_Sand): CLASS(20Rnd_762x51_Ball_JCA_SMAG_Sand) {
    ammo = QCLASS(762x51_AP);
    displayName = "7.62mm 20Rnd SMAG Tan (AP)";
    displayNameShort = "AP";
    descriptionShort = "7.62x51mm AP Reload Tracer";
};
