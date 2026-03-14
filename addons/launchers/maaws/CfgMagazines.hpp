class CfgMagazines {
    class MRAWS_HE_F;
    class CLASS(MAAWS_GMM): MRAWS_HE_F {
        ammo = QCLASS(ammo_GMM_launch);
        MACRO_SCOPE;
        displayNameShort = "SALH MSL";
        descriptionShort = "Type: Guided Multi-purpose Missile<br />Rounds: 1<br />Used in: MAAWS";
        displayName = "84mm GMM Tandem Heat";
        initSpeed = 25;
        mass = 150;
    };
    class CLASS(MAAWS_HEDP): MRAWS_HE_F {
        ammo = QCLASS(ammo_MAAWS_HEDP);
        displayNameShort = "HEDP";
        descriptionShort = "Type: High Explosive Dual Purpose<br />Rounds: 1<br />Used in: MAAWS";
        displayName = "84mm HEDP";
        mass = 60;
    };
};
