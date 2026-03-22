class CfgMagazines {
    class MRAWS_HE_F;
    class CLASS(MAAWS_GMM_HEAT): MRAWS_HE_F {
        ammo = QCLASS(ammo_GMM_launch_HEAT);
        MACRO_SCOPE;
        displayNameShort = "SALH AT";
        descriptionShort = "Type: Guided Multi-purpose Missile<br />Rounds: 1<br />Used in: MAAWS";
        displayName = "MAAWS GMM AT Missile";
        initSpeed = 25;
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
        displayName = "MAAWS HEDP 52 Round";
	picture = QPATHTOF(maaws\data\hedp.paa);
	//HEAT75 mass
        mass = 60;
    };
};
