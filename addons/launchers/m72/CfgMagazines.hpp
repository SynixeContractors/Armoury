class CfgMagazines {
    class CA_LauncherMagazine;
    class JCA_M72_HEAT_F: CA_LauncherMagazine {
        descriptionShort = "Type: M72A7 HEDP Rocket<br />Rounds: 1<br />Used in: M72A7";
        displayName = "M72A7 HEDP Round";
        displayNameShort = "HEDP";
    };
    class CLASS(M72_HEAT): JCA_M72_HEAT_F {
        ammo = QCLASS(M_M72_HEAT);
        descriptionShort = "Type: M72A7 HEAT Rocket<br />Rounds: 1<br />Used in: M72A5";
        displayName = "M72A5 HEAT Round";
        displayNameShort = "HEAT";
    };
    class CLASS(M72_HE): JCA_M72_HEAT_F {
        ammo = QCLASS(M_M72_HE);
        descriptionShort = "Type: M72A9 HE Rocket<br />Rounds: 1<br />Used in: M72A9";
        displayName = "M72A9 HE Round";
        displayNameShort = "HE";
    };
};
