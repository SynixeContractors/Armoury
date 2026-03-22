class CfgMagazines {
    class MRAWS_HE_F;
    class CLASS(MAAWS_GMM_HEAT): MRAWS_HE_F {
        ammo = QCLASS(ammo_GMM_launch_HEAT);
        MACRO_SCOPE;
        displayNameShort = "SALH AT";
        descriptionShort = "Type: Guided Multi-purpose Missile<br />Rounds: 1<br />Used in: MAAWS";
        displayName = "84mm GMM Tandem HEAT";
        initSpeed = 25;
        mass = 150;
        picture = QPATHTOF(maaws\data\gmm.paa);
    };
    class CLASS(MAAWS_GMM_HE): CLASS(MAAWS_GMM_HEAT) {
        ammo = QCLASS(ammo_GMM_launch_HE);
        displayNameShort = "SALH HE";
        displayName = "84mm GMM HE";
    };
    class CLASS(MAAWS_HEDP): MRAWS_HE_F {
        ammo = QCLASS(ammo_MAAWS_HEDP);
        displayNameShort = "HEDP";
        descriptionShort = "Type: High Explosive Dual Purpose<br />Rounds: 1<br />Used in: MAAWS";
        displayName = "84mm HEDP";
        mass = 60;
    };
};
