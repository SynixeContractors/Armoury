class CfgWeapons {
    class Rifle_Long_Base_F;
    class Pistol_Base_F;
    class srifle_h6_base_rf: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_556x45_STANAG"};
    };
    class hgun_Glock19_RF: Pistol_Base_F {
        magazineWell[] += {"CBA_9x19_Glock_Full",QCLASS(9x19_Glock_Extended),"G17_9x21"};
    };
};
