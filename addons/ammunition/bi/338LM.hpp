// 338 Lapua Magnum

// Noreen Bad News ULR Mags
class CLASS(10Rnd_338LM_EPR): 10Rnd_338_Mag {
    ammo = QCLASS(338LM_EPR);
    displayName = ".338NM 10Rnd (EPR)";
    displayNameShort = "EPR";
    descriptionShort = ".338NM EPR";
};
class CLASS(10Rnd_338LM_AP): CLASS(10Rnd_338LM_EPR) {
    ammo = QCLASS(338LM_AP);
    displayName = ".338NM 10Rnd (AP)";
    displayNameShort = "AP";
    descriptionShort = ".338NM AP";
};
