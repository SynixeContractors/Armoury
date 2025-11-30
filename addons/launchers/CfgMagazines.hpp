class CfgMagazines {
    class Titan_AA;
    class CLASS(air_to_air_magazine): Titan_AA {
        ammo = QCLASS(air_to_air_missile);
        displayName = "Super AA missile";
        displayNameShort = "SAM";
    };
    class Vorona_HE;
    class CLASS(Verona_AA): Vorona_HE {
        ammo = QCLASS(M_verona_airburst);
        displayName = "Super AA missile";
        displayNameShort = "SAM";
    };
    class CLASS(Stinger_LOAL): Vorona_HE {
        ammo = QCLASS(M_Stinger_LOAL);
        displayName = "Stinger LOAL";
        displayNameShort = "MANPADS";
    };
};
