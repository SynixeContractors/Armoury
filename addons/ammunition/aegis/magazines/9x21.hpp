// 9x21 PPL-20M Upyr
class Aegis_20Rnd_9x21_Gepard_Mag_F;
class Aegis_40Rnd_9x21_Gepard_Mag_F;
class CLASS(20Rnd_9x21_Ball_PPL_Aegis): Aegis_20Rnd_9x21_Gepard_Mag_F {
    MACRO_SCOPE;
    ammo = QCLASS(9x21_Ball);
    tracersEvery = 4;
    lastRoundsTracer = 4;
    AMMO_DESCRIPTION(9x21mm,Ball,20,Reload Tracer,PPL);
};
class CLASS(20Rnd_9x21_Ball_Tracer_PPL_Aegis): CLASS(20Rnd_9x21_Ball_PPL_Aegis) {
    tracersEvery = 1;
    AMMO_DESCRIPTION(9x21mm,Ball [T],20,Tracer,PPL);
};
class CLASS(20Rnd_9x21_JHP_PPL_Aegis): CLASS(20Rnd_9x21_Ball_PPL_Aegis) {
    ammo = QCLASS(9x21_JHP);
    AMMO_DESCRIPTION(9x21mm,JHP,20,Reload Tracer,PPL);
};
class CLASS(20Rnd_9x21_AP_PPL_Aegis): CLASS(20Rnd_9x21_Ball_PPL_Aegis) {
    ammo = QCLASS(9x21_AP);
    AMMO_DESCRIPTION(9x21mm,AP,20,Reload Tracer,PPL);
};
class CLASS(40Rnd_9x21_Ball_PPL_Aegis): Aegis_40Rnd_9x21_Gepard_Mag_F {
    MACRO_SCOPE;
    ammo = QCLASS(9x21_Ball);
    lastRoundsTracer = 4;
    tracersEvery = 4;
    AMMO_DESCRIPTION(9x21mm,Ball,40,Reload Tracer,PPL);
};
class CLASS(40Rnd_9x21_Ball_Tracer_PPL_Aegis): CLASS(40Rnd_9x21_Ball_PPL_Aegis) {
    tracersEvery = 1;
    AMMO_DESCRIPTION(9x21mm,Ball [T],40,Tracer,PPL);
};
class CLASS(40Rnd_9x21_JHP_PPL_Aegis): CLASS(40Rnd_9x21_Ball_PPL_Aegis) {
    ammo = QCLASS(9x21_JHP);
    AMMO_DESCRIPTION(9x21mm,JHP,40,Reload Tracer,PPL);
};
class CLASS(40Rnd_9x21_AP_PPL_Aegis): CLASS(40Rnd_9x21_Ball_PPL_Aegis) {
    ammo = QCLASS(9x21_AP);
    AMMO_DESCRIPTION(9x21mm,AP,40,Reload Tracer,PPL);
};
