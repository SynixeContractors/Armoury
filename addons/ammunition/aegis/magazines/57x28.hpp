// 5.7x28mm RP57
class Aegis_10Rnd_570x28_RP57_Mag;
class Aegis_20Rnd_570x28_RP57_Mag;
class CLASS(10Rnd_57x28_Ball): Aegis_10Rnd_570x28_RP57_Mag {
    MACRO_SCOPE;
    ammo = QCLASS(57x28_AP);
    lastRoundsTracer = 2;
    mass = 3;
    AMMO_DESCRIPTION(5.7mm,AP,10,Reload Tracer,RP57);
};
class CLASS(20Rnd_57x28_Ball): Aegis_20Rnd_570x28_RP57_Mag {
    MACRO_SCOPE;
    ammo = QCLASS(57x28_AP);
    lastRoundsTracer = 4;
    AMMO_DESCRIPTION(5.7mm,AP,20,Reload Tracer,RP57);
    mass = 6;
};
