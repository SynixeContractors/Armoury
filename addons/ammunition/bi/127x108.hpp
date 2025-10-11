// 12.7x108 Soviet

// GM6 mags
class CLASS(5Rnd_127x108_Ball): 5Rnd_127x108_Mag {
    ammo = QCLASS(127x108_Ball);
    displayName = "12.7mm 5Rnd (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "12.7mm Ball";
};
class CLASS(5Rnd_127x108_AP): CLASS(5Rnd_127x108_Ball) {
    ammo = QCLASS(127x108_AP);
    displayName = "12.7mm 5Rnd (AP)";
    displayNameShort = "AP";
    descriptionShort = "12.7mm AP";
};
class CLASS(5Rnd_127x108_APDS): CLASS(5Rnd_127x108_Ball) {
    ammo = QCLASS(127x108_APDS);
    displayName = "12.7mm 5Rnd (SLAP)";
    displayNameShort = "APDS";
    descriptionShort = "12.7mm SLAP";
};

