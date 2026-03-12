// Makarov Pistol 9x18
class CLASS(10Rnd_9x18_Ball): 10Rnd_9x21_Mag {
    MACRO_SCOPE;
    ammo = QCLASS(9x18_Ball);
    lastRoundsTracer = 2;
    tracersEvery = 4;
    AMMO_DESCRIPTION(9x18mm,Ball,10,Reload Tracer,PM);
};
class CLASS(10Rnd_9x18_JHP): CLASS(10Rnd_9x18_Ball) {
    ammo = QCLASS(9x18_JHP);
    AMMO_DESCRIPTION(9x18mm,JHP,10,Reload Tracer,PM);
};
class CLASS(10Rnd_9x18_AP): CLASS(10Rnd_9x18_Ball) {
    ammo = QCLASS(9x18_AP);
    AMMO_DESCRIPTION(9x18mm,AP,10,Reload Tracer,PM);
};
