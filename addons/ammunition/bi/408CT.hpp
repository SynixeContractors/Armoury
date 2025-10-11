// 408 Cheyenne Tactical

// M200 Intervention mags
class CLASS(7Rnd_408C_EPR): 7Rnd_408_Mag {
    ammo = QCLASS(408C_EPR);
    displayName = ".408C 7Rnd (EPR)";
    displayNameShort = "EPR";
    descriptionShort = ".408NM EPR";
};
class CLASS(7Rnd_408C_AP): CLASS(7Rnd_408C_EPR) {
    ammo = QCLASS(408C_AP);
    displayName = ".408C 7Rnd (AP)";
    displayNameShort = "AP";
    descriptionShort = ".408NM AP";
};

