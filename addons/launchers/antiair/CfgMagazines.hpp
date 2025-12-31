class CfgMagazines {
    class Vorona_HE;
    class CLASS(Stinger_LOAL): Vorona_HE {
        ammo = QCLASS(M_Stinger_LOAL);
        displayName = "Stinger LOAL";
        displayNameShort = "MANPADS";
    };
    class CLASS(NSAM_LOAL): CLASS(Stinger_LOAL) {
    //just for shop difference
    };
};
