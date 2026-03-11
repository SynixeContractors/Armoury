// .45ACP FNX-45
class CLASS(15Rnd_45ACP_FNX45_Ball): 11Rnd_45ACP_Mag {
    MACRO_SCOPE;
    ammo = QCLASS(45ACP_Ball);
    lastRoundsTracer = 2;
    tracersEvery = 4;
    AMMO_DESCRIPTION(.45ACP,Ball,15,Reload Tracer,FNX);
};
class CLASS(15Rnd_45ACP_FNX45_JHP): CLASS(15Rnd_45ACP_FNX45_Ball) {
    ammo = QCLASS(45ACP_JHP);
    AMMO_DESCRIPTION(.45ACP,JHP,15,Reload Tracer,FNX);
};

// .45ACP C-1911
class CLASS(8Rnd_45ACP_C1911_Ball): 9Rnd_45ACP_Mag {
    MACRO_SCOPE;
    ammo = QCLASS(45ACP_Ball);
    lastRoundsTracer = 2;
    tracersEvery = 4;
    AMMO_DESCRIPTION(.45ACP,Ball,8,Reload Tracer,1911);
};
class CLASS(8Rnd_45ACP_C1911_JHP):  CLASS(8Rnd_45ACP_C1911_Ball) {
    ammo = QCLASS(45ACP_JHP);
    AMMO_DESCRIPTION(.45ACP,Ball,8,Reload Tracer,1911);
};

// .45ACP SMG
class CLASS(25Rnd_45ACP_Ball): 30Rnd_45ACP_Mag_SMG_01 {
    MACRO_SCOPE;
    count = 25;
    ammo = QCLASS(45ACP_Ball);
    lastRoundsTracer = 4;
    tracersEvery = 4;
    mass = 9;
    AMMO_DESCRIPTION(.45ACP,Ball,25,Reload Tracer,Glock);
};
class CLASS(25Rnd_45ACP_Ball_Tracer): CLASS(25Rnd_45ACP_Ball) {
    tracersEvery = 1;
    AMMO_DESCRIPTION(.45ACP,Ball [T],25,Tracer,Glock);
};
class CLASS(25Rnd_45ACP_JHP): CLASS(25Rnd_45ACP_Ball) {
    ammo = QCLASS(45ACP_JHP);
    AMMO_DESCRIPTION(.45ACP,JHP,25,Reload Tracer,Glock);
};
//revolver
class CLASS(6Rnd_45ACP_Ball_Cylinder): 6Rnd_45ACP_Cylinder {
    MACRO_SCOPE;
    ammo = QCLASS(45ACP_Ball);
    lastRoundsTracer = 2;
    tracersEvery = 4;
    AMMO_DESCRIPTION(.45ACP,Ball,6,Reload Tracer,Cylinder);
};
