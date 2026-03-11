//17rnd internal mag
class CLASS(17Rnd_9x19_Ball_Mag_RF): 17Rnd_9x19_Mag_RF {
    MACRO_SCOPE;
    ammo = QCLASS(9x19_Ball);
    lastRoundsTracer = 2;
    tracersEvery = 4;
    AMMO_DESCRIPTION(9x19mm,Ball,17,Reload Tracer,G19);
};
class CLASS(17Rnd_9x19_JHP_Mag_RF): CLASS(17Rnd_9x19_Ball_Mag_RF) {
    ammo = QCLASS(9x19_JHP);
    AMMO_DESCRIPTION(9x19mm,JHP,17,Reload Tracer,G19);
};
class CLASS(17Rnd_9x19_AP_Mag_RF): CLASS(17Rnd_9x19_Ball_Mag_RF) {
    ammo = QCLASS(9x19_AP);
    AMMO_DESCRIPTION(9x19mm,AP,17,Reload Tracer,G19);
};

//33rd black stick mag
class CLASS(33Rnd_9x19_Ball_Mag_RF): 33Rnd_9x19_Mag_RF {
    MACRO_SCOPE;
    ammo = QCLASS(9x19_Ball);
    lastRoundsTracer = 4;
    tracersEvery = 4;
    AMMO_DESCRIPTION(9x19mm,Ball,33,Reload Tracer,G19);
};
class CLASS(33Rnd_9x19_JHP_Mag_RF): CLASS(33Rnd_9x19_Ball_Mag_RF) {
    ammo = QCLASS(9x19_JHP);
    AMMO_DESCRIPTION(9x19mm,JHP,33,Reload Tracer,G19);
};
class CLASS(33Rnd_9x19_AP_Mag_RF): CLASS(33Rnd_9x19_Ball_Mag_RF) {
    ammo = QCLASS(9x19_AP);
    AMMO_DESCRIPTION(9x19mm,AP,33,Reload Tracer,G19);
};

//33rd khaki stick mag
class CLASS(33Rnd_9x19_Ball_Mag_khk_RF): 33Rnd_9x19_Mag_khk_RF {
    MACRO_SCOPE;
    ammo = QCLASS(9x19_Ball);
    lastRoundsTracer = 4;
    tracersEvery = 4;
    AMMO_DESCRIPTION(9x19mm,Ball,33,Reload Tracer,G19 Olive);
};
class CLASS(33Rnd_9x19_JHP_Mag_khk_RF): CLASS(33Rnd_9x19_Ball_Mag_khk_RF) {
    ammo = QCLASS(9x19_JHP);
    AMMO_DESCRIPTION(9x19mm,JHP,33,Reload Tracer,G19 Olive);
};
class CLASS(33Rnd_9x19_AP_Mag_khk_RF): CLASS(33Rnd_9x19_Ball_Mag_khk_RF) {
    ammo = QCLASS(9x19_AP);
    AMMO_DESCRIPTION(9x19mm,AP,33,Reload Tracer,G19 Olive);
};

//33rd tan stick mag
class CLASS(33Rnd_9x19_Ball_Mag_Tan_RF): 33Rnd_9x19_Mag_Tan_RF {
    MACRO_SCOPE;
    ammo = QCLASS(9x19_Ball);
    lastRoundsTracer = 4;
    tracersEvery = 4;
    AMMO_DESCRIPTION(9x19mm,Ball,33,Reload Tracer,G19 Tan);
};
class CLASS(33Rnd_9x19_JHP_Mag_Tan_RF): CLASS(33Rnd_9x19_Ball_Mag_Tan_RF) {
    ammo = QCLASS(9x19_JHP);
    AMMO_DESCRIPTION(9x19mm,JHP,33,Reload Tracer,G19 Tan);
};
class CLASS(33Rnd_9x19_AP_Mag_Tan_RF): CLASS(33Rnd_9x19_Ball_Mag_Tan_RF) {
    ammo = QCLASS(9x19_AP);
    AMMO_DESCRIPTION(9x19mm,AP,33,Reload Tracer,G19 Tan);
};

//65rnd drum mag
class CLASS(65Rnd_9x19_Ball_Mag_RF): 65Rnd_9x19_Mag_RF {
    MACRO_SCOPE;
    ammo = QCLASS(9x19_Ball);
    lastRoundsTracer = 4;
    tracersEvery = 4;
    AMMO_DESCRIPTION(9x19mm,Ball,65,Reload Tracer,G19);
};
class CLASS(65Rnd_9x19_JHP_Mag_RF): CLASS(65Rnd_9x19_Ball_Mag_RF) {
    ammo = QCLASS(9x19_JHP);
    AMMO_DESCRIPTION(9x19mm,JHP,65,Reload Tracer,G19);
};
class CLASS(65Rnd_9x19_AP_Mag_RF): CLASS(65Rnd_9x19_Ball_Mag_RF) {
    ammo = QCLASS(9x19_AP);
    AMMO_DESCRIPTION(9x19mm,AP,65,Reload Tracer,G19);
};
