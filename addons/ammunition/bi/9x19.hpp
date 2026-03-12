class CLASS(17Rnd_9x19mm_Walther_Ball): 16Rnd_9x21_Mag {
    MACRO_SCOPE;
    ammo = QCLASS(9x19_Ball);
    lastRoundsTracer = 2;
    tracersEvery = 4;
    AMMO_DESCRIPTION(9x19mm,Ball,17,Reload Tracer,Walther);
};
class CLASS(17Rnd_9x19mm_Walther_JHP): CLASS(17Rnd_9x19mm_Walther_Ball) {
    ammo = QCLASS(9x19_JHP);
    AMMO_DESCRIPTION(9x19mm,JHP,17,Reload Tracer,Walther);
};
class CLASS(17Rnd_9x19mm_Walther_AP): CLASS(17Rnd_9x19mm_Walther_Ball) {
    ammo = QCLASS(9x19_AP);
    AMMO_DESCRIPTION(9x19mm,AP,17,Reload Tracer,Walther);
};

// 9x19mm
class CLASS(30Rnd_9x19_Ball): 30Rnd_9x21_Mag {
    MACRO_SCOPE;
    ammo = QCLASS(9x19_Ball);
    lastRoundsTracer = 4;
    tracersEvery = 4;
    mass = 9;
    AMMO_DESCRIPTION(9x19mm,Ball,30,Reload Tracer,CZ);
};
class CLASS(30Rnd_9x19_Ball_Tracer): CLASS(30Rnd_9x19_Ball) {
    tracersEvery = 1;
    AMMO_DESCRIPTION(9x19mm,Ball [T],30,Tracer,CZ);
};
class CLASS(30Rnd_9x19_JHP): CLASS(30Rnd_9x19_Ball) {
    ammo = QCLASS(9x19_JHP);
    AMMO_DESCRIPTION(9x19mm,JHP,30,Reload Tracer,CZ);
};
class CLASS(30Rnd_9x19_AP): CLASS(30Rnd_9x19_JHP) {
    ammo = QCLASS(9x19_AP);
    AMMO_DESCRIPTION(9x19mm,AP,30,Reload Tracer,CZ);
};
