class CfgMagazines {
    class Vorona_HEAT;
    class CLASS(Stinger_LOAL): Vorona_HEAT {
        ammo = QCLASS(M_Stinger_LOAL);
        displayName = "NSAM LOAL";
        displaynameshort = "MANPADS";
	descriptionShort = "Type: NSAM Missile<br />Rounds: 1<br />Used in: RPG32, NSAM";
    };
    class CLASS(Stinger_LOAL_MAAWS): CLASS(Stinger_LOAL) {
	descriptionShort = "Type: NSAM Missile<br />Rounds: 1<br />Used in: MAAWS";
    };
    class CLASS(NSAM_LOAL): CLASS(Stinger_LOAL) {
        //just for shop difference
        displayName = "NSAM LOAL (Prepacked)";
	scope = 1;
	scopeArsenal = 1;
    };
};
