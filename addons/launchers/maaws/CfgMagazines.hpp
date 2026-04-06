class CfgMagazines {
    class MRAWS_HE_F;
    class CLASS(MAAWS_GMM_HEAT): MRAWS_HE_F {
        ammo = QCLASS(ammo_GMM_launch_HEAT);
        MACRO_SCOPE;
        displayNameShort = "SALH AT";
        descriptionShort = "Type: Guided Multi-purpose Missile<br />Rounds: 1<br />Used in: MAAWS";
        displayName = "MAAWS GMM AT Missile";
        initSpeed = 75;
        mass = 150;
        picture = QPATHTOF(maaws\data\gmm.paa);
    };
    class CLASS(MAAWS_GMM_HE): CLASS(MAAWS_GMM_HEAT) {
        ammo = QCLASS(ammo_GMM_launch_HE);
        displayNameShort = "SALH HE";
        displayName = "MAAWS GMM HE Missile";
        picture = QPATHTOF(maaws\data\gmm_he.paa);
    };
    class CLASS(MAAWS_HEDP): MRAWS_HE_F {
        ammo = QCLASS(ammo_MAAWS_HEDP);
        displayNameShort = "HEDP";
        descriptionShort = "Type: High Explosive Dual Purpose<br />Rounds: 1<br />Used in: MAAWS";
        displayName = "MAAWS HEDP 502 Round";
        picture = QPATHTOF(maaws\data\hedp.paa);
        // HEAT75 mass
        mass = 60;
    };
    class CLASS(MAAWS_Smoke): MRAWS_HE_F {
        ammo = QCLASS(ammo_MAAWS_Smoke_launch);
        displayNameShort = "Smoke";
        descriptionShort = "Type: Smoke <br />Rounds: 1<br />Used in: MAAWS";
        displayName = "MAAWS SMOKE 469 Round";
        picture = QPATHTOF(maaws\data\smoke.paa);
        mass = 25;
    };
    class CLASS(MAAWS_Flare): MRAWS_HE_F {
        ammo = QCLASS(ammo_MAAWS_Flare_launch);
        displayNameShort = "Flare";
        descriptionShort = "Type: Illumination Flare <br />Rounds: 1<br />Used in: MAAWS";
        displayName = "MAAWS ILUM 545 Round";
        picture = QPATHTOF(maaws\data\ilum.paa);
        mass = 25;
    };
};
