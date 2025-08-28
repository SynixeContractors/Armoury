// 338 Norma Magnum

// LWWMG belts
class CLASS(130Rnd_338NM_Ball): 130Rnd_338_Mag {
    ammo = QCLASS(338NM_Ball);
    displayName = ".338NM 130Rnd Belt (TE4) (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = ".338NM Ball Tracer Every 4";
    tracersEvery = 4;
};
class CLASS(130Rnd_338NM_Ball_Tracer): CLASS(130Rnd_338NM_Ball) {
    displayName = ".338NM 130Rnd Belt (T) (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = ".338NM Ball Tracer";
    tracersEvery = 1;
};
class CLASS(130Rnd_338NM_EPR): CLASS(130Rnd_338NM_Ball) {
    ammo = QCLASS(338NM_EPR);
    displayName = ".338NM 130Rnd Belt (TE4) (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = ".338NM EPR Tracer Every 4";
};
class CLASS(130Rnd_338NM_AP): CLASS(130Rnd_338NM_EPR) {
    ammo = QCLASS(338NM_AP);
    displayName = ".338NM 130Rnd Belt (TE4) (AP)";
    displayNameShort = "AP TE4";
    descriptionShort = ".338NM EPR Tracer Every 4";
};

class CLASS(10Rnd_338LM_EPR): 10Rnd_338_Mag {
    ammo = QCLASS(338LM_EPR);
    displayName = ".338NM 10Rnd (EPR)";
    displayNameShort = "EPR";
    descriptionShort = ".338NM EPR";
};
class CLASS(10Rnd_338LM_AP): CLASS(10Rnd_338LM_EPR) {
    ammo = QCLASS(338LM_EPR);
    displayName = ".338NM 10Rnd (AP)";
    displayNameShort = "AP";
    descriptionShort = ".338NM AP";
};

