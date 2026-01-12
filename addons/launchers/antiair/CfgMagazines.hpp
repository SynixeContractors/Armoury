class CfgMagazines {
    class Vorona_HEAT;
    class CLASS(Stinger_LOAL): Vorona_HEAT {
        ammo = QCLASS(M_NSAM_LOAL);
        displayName = "NSAM LOAL (105mm)";
        displaynameshort = "MANPADS";
        descriptionShort = "Type: NSAM Missile<br />Rounds: 1<br />Used in: RPG32";
    };
    class CLASS(Stinger_LOAL_MAAWS): CLASS(Stinger_LOAL) {
        displayName = "NSAM LOAL (84mm)";
        descriptionShort = "Type: NSAM Missile<br />Rounds: 1<br />Used in: MAAWS";
    };
    class CLASS(Stinger_LOAL_Metis): CLASS(Stinger_LOAL) {
        displayName = "NSAM LOAL (130mm)";
        descriptionShort = "Type: NSAM Missile<br />Rounds: 1<br />Used in: Metis";
    };
    class CLASS(Stinger_LOBL): CLASS(Stinger_LOAL) {
        ammo = QCLASS(M_NSAM_LOBL);
        displayName = "NSAM";
        descriptionShort = "Type: NSAM Missile<br />Rounds: 1<br />Used in: Titan MPRL";
    };
    class CLASS(NSAM_LOAL): CLASS(Stinger_LOAL) {
        //just for shop difference
        modelSpecial = "\A3\weapons_f\launchers\nlaw\nlaw_loaded_F";
        displayName = "NSAM LOAL (Prepacked)";
        descriptionShort = "";
        scope = 1;
        scopeArsenal = 1;
    };
    class CLASS(NSAM_LOBL): CLASS(Stinger_LOBL) {
        //just for shop difference
        modelSpecial = "\A3\weapons_f\launchers\nlaw\nlaw_loaded_F";
        displayName = "NSAM (Prepacked)";
        descriptionShort = "";
        scope = 1;
        scopeArsenal = 1;
    };
};
