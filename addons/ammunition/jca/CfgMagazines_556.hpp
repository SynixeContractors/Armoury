class JCA_30Rnd_556x45_PMAG;
class JCA_30Rnd_556x45_sand_PMAG;
class JCA_30Rnd_556x45_EMAG;
class JCA_30Rnd_556x45_sand_EMAG;

//pmag
class CLASS(30Rnd_556x45_Ball_JCA_PMAG): JCA_30Rnd_556x45_PMAG {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 30Rnd PMAG (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
    mass = 8.5; // to match WS plastic ones
};
class CLASS(30Rnd_556x45_Ball_Tracer_JCA_PMAG): CLASS(30Rnd_556x45_Ball_JCA_PMAG) {
    displayName = "5.56mm 30Rnd PMAG [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_556x45_EPR_JCA_PMAG): CLASS(30Rnd_556x45_Ball_JCA_PMAG) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 30Rnd PMAG (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.56x45mm EPR Reload Tracer";
};
class CLASS(30Rnd_556x45_AP_JCA_PMAG): CLASS(30Rnd_556x45_Ball_JCA_PMAG) {
    ammo = QCLASS(556x45_AP);
    displayName = "5.56mm 30Rnd PMAG (AP)";
    displayNameShort = "AP";
    descriptionShort = "5.56x45mm AP Reload Tracer";
};
//pmag tan
class CLASS(30Rnd_556x45_Ball_JCA_PMAG_Sand): JCA_30Rnd_556x45_sand_PMAG {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 30Rnd PMAG Tan (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
    mass = 8.5; // to match WS plastic ones
};
class CLASS(30Rnd_556x45_Ball_Tracer_JCA_PMAG_Sand): CLASS(30Rnd_556x45_Ball_JCA_PMAG_Sand) {
    displayName = "5.56mm 30Rnd PMAG Tan [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_556x45_EPR_JCA_PMAG_Sand): CLASS(30Rnd_556x45_Ball_JCA_PMAG_Sand) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 30Rnd PMAG Tan (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.56x45mm EPR Reload Tracer";
};
class CLASS(30Rnd_556x45_AP_JCA_PMAG_Sand): CLASS(30Rnd_556x45_Ball_JCA_PMAG_Sand) {
    ammo = QCLASS(556x45_AP);
    displayName = "5.56mm 30Rnd PMAG Tan (AP)";
    displayNameShort = "AP";
    descriptionShort = "5.56x45mm AP Reload Tracer";
};


//emag
class CLASS(30Rnd_556x45_Ball_JCA_EMAG): JCA_30Rnd_556x45_EMAG {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 30Rnd EMAG (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
    mass = 8.5; // to match WS plastic ones
};
class CLASS(30Rnd_556x45_Ball_Tracer_JCA_EMAG): CLASS(30Rnd_556x45_Ball_JCA_EMAG) {
    displayName = "5.56mm 30Rnd EMAG [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_556x45_EPR_JCA_EMAG): CLASS(30Rnd_556x45_Ball_JCA_EMAG) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 30Rnd EMAG (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.56x45mm EPR Reload Tracer";
};
class CLASS(30Rnd_556x45_AP_JCA_EMAG): CLASS(30Rnd_556x45_Ball_JCA_EMAG) {
    ammo = QCLASS(556x45_AP);
    displayName = "5.56mm 30Rnd EMAG (AP)";
    displayNameShort = "AP";
    descriptionShort = "5.56x45mm AP Reload Tracer";
};
//emag tan
class CLASS(30Rnd_556x45_Ball_JCA_EMAG_Sand): JCA_30Rnd_556x45_sand_EMAG {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 30Rnd EMAG Tan (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
    mass = 8.5; // to match WS plastic ones
};
class CLASS(30Rnd_556x45_Ball_Tracer_JCA_EMAG_Sand): CLASS(30Rnd_556x45_Ball_JCA_EMAG_Sand) {
    displayName = "5.56mm 30Rnd EMAG Tan [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_556x45_EPR_JCA_EMAG_Sand): CLASS(30Rnd_556x45_Ball_JCA_EMAG_Sand) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 30Rnd EMAG Tan (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.56x45mm EPR Reload Tracer";
};
class CLASS(30Rnd_556x45_AP_JCA_EMAG_Sand): CLASS(30Rnd_556x45_Ball_JCA_EMAG_Sand) {
    ammo = QCLASS(556x45_AP);
    displayName = "5.56mm 30Rnd EMAG Tan (AP)";
    displayNameShort = "AP";
    descriptionShort = "5.56x45mm AP Reload Tracer";
};
