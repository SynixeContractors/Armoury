// 7.62x51mm
class CLASS(20Rnd_762x51_Ball): 20Rnd_762x51_Mag {
    MACRO_SCOPE;
    ammo = QCLASS(762x51_Ball);
    lastRoundsTracer = 2;
    tracersEvery = 4;
    mass = 11;
    AMMO_DESCRIPTION(7.62mm,Ball,20,Reload Tracer,Metal);
};
class CLASS(20Rnd_762x51_Ball_Tracer): CLASS(20Rnd_762x51_Ball) {
    tracersEvery = 1;
    AMMO_DESCRIPTION(7.62mm,Ball [T],20,Tracer,Metal);
};
class CLASS(20Rnd_762x51_EPR): CLASS(20Rnd_762x51_Ball) {
    ammo = QCLASS(762x51_EPR);
    AMMO_DESCRIPTION(7.62mm,EPR,20,Reload Tracer,Metal);
};
class CLASS(20Rnd_762x51_EPR_Tracer): CLASS(20Rnd_762x51_EPR) {
    tracersEvery = 1;
    AMMO_DESCRIPTION(7.62mm,EPR [T],20,Tracer,Metal);
};
class CLASS(20Rnd_762x51_AP): CLASS(20Rnd_762x51_Ball) {
    ammo = QCLASS(762x51_AP);
    AMMO_DESCRIPTION(7.62mm,AP,20,Reload Tracer,Metal);
};
