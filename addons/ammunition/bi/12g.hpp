class CLASS(2Rnd_P_000): 2Rnd_12Gauge_Pellets {
    MACRO_SCOPE;
    displayName = "2Rnd (Magnum)";
    displayNameShort = "#00 Magnum";
    descriptionShort = "#00 Magnum Shells";
    ammo = QCLASS(P_12G_000);
    mass = 2;
    initSpeed = 385;
};

class CLASS(2Rnd_S_AP20): CLASS(2Rnd_P_000) {
    ammo = QCLASS(S_12G_AP20);
    displayName = "2Rnd (Slug)";
    displayNameShort = "AP-20";
    descriptionShort = "AP-20 Slug";
};

class CLASS(2Rnd_Smoke): CLASS(2Rnd_S_AP20) {
    ammo = "B_12gauge_Smoke_Cartridge_lxWS";
    displayName = "2Rnd (Smoke)";
    displayNameShort = "Smoke Screen";
    descriptionShort = "Smoke Shell";
};

// 4Rnd
class CLASS(4Rnd_P_000): CLASS(2Rnd_P_000) {
    displayName = "4Rnd (Magnum)";
    displayNameShort = "#00 Magnum";
    descriptionShort = "#00 Magnum Shells";
    count = 4;
    mass = 4;
};

class CLASS(4Rnd_S_AP20): CLASS(2Rnd_S_AP20) {
    displayName = "4Rnd (Slug)";
};

class CLASS(4Rnd_Smoke): CLASS(2Rnd_Smoke) {
    displayName = "4Rnd (Smoke)";
};

// 6Rnd
class CLASS(6Rnd_P_000): CLASS(4Rnd_P_000) {
    displayName = "6Rnd (Magnum)";
    count = 6;
    mass = 6;
};

class CLASS(6Rnd_S_AP20): CLASS(4Rnd_P_000) {
    displayName = "6Rnd (Slug)";
    count = 6;
    mass = 6;
};

class CLASS(6Rnd_Smoke): CLASS(4Rnd_Smoke) {
    displayName = "6Rnd (Smoke)";
    count = 6;
    mass = 6;
};

// 8Rnd
class CLASS(8Rnd_P_000): CLASS(6Rnd_P_000) {
    displayName = "8Rnd (Magnum)";
    count = 8;
    mass = 8;
};

class CLASS(8Rnd_S_AP20): CLASS(6Rnd_S_AP20) {
    displayName = "8Rnd (Slug)";
    count = 8;
    mass = 8;
};

class CLASS(8Rnd_Smoke): CLASS(6Rnd_Smoke) {
    displayName = "8Rnd (Smoke)";
    count = 8;
    mass = 8;
};

// 6Rnd MSBS GROT
class CLASS(6Rnd_P_UGL): 6Rnd_12Gauge_Pellets {
    MACRO_SCOPE;
    ammo = QCLASS(P_12G_000);
    displayName = "6Rnd MSBS (Magnum)";
    displayNameShort = "#00 Magnum";
    descriptionShort = "#00 Magnum Shells";
};

class CLASS(6Rnd_S_UGL): 6Rnd_12Gauge_Slug {
    MACRO_SCOPE;
    ammo = QCLASS(S_12G_AP20);
    displayName = "6Rnd MSBS (Slug)";
    displayNameShort = "AP-20";
    descriptionShort = "AP-20 Slug";
};

class CLASS(6Rnd_Smoke_UGL): CLASS(6Rnd_S_UGL) {
    ammo = "B_12gauge_Smoke_Cartridge_lxWS";
    displayName = "6Rnd MSBS (Smoke)";
    displayNameShort = "Smoke Screen";
    descriptionShort = "Smoke Shell";
};
