class CLASS(7Rnd_50AE_Ball_Mag_RF): 7Rnd_50AE_Mag_RF {
    MACRO_SCOPE;
    ammo = QCLASS(50AE_Ball);
    lastRoundsTracer = 2;
    tracersEvery = 4;
    AMMO_DESCRIPTION(50AE,Ball,7,Reload Tracer,Desert Eagle);
};
class CLASS(7Rnd_50AE_JHP_Mag_RF): CLASS(7Rnd_50AE_Ball_Mag_RF) {
    ammo = QCLASS(50AE_JHP);
    AMMO_DESCRIPTION(50AE,JHP,7,Reload Tracer,Desert Eagle);
};
