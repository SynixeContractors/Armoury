class CfgWeapons {
  class Rifle_Base_F;
  class Rifle_Long_Base_F;
  class Rifle_Short_Base_F;
  class Pistol_Base_F;
  class sgun_Mp153_black_F: Rifle_Base_F {
    ACE_barrelTwist = SHOTGUN_BARREL_TWIST;
    ACE_barrelLength = 610.0;
  };
  class sgun_Mp153_classic_F: Rifle_Base_F {
    ACE_barrelTwist = SHOTGUN_BARREL_TWIST;
    ACE_barrelLength = 750.0;
  };
  class Aegis_arifle_M16A4_base_F: Rifle_Base_F {
    ACE_barrelTwist = 177.8; //1 in 7in
    ACE_barrelLength = 508.0;
  };
  class Aegis_MMG_FNMAG_Base: Rifle_Long_Base_F {
    ACE_barrelTwist = 305; // like m14?
    ACE_barrelLength = 630.0;
  };
  class Aegis_MMG_FNMAG_240_F: Aegis_MMG_FNMAG_Base {
    ACE_barrelLength = 528.0;
  };
  class sgun_M4_F: Rifle_Short_Base_F {
    ACE_barrelTwist = SHOTGUN_BARREL_TWIST;
    ACE_barrelLength = 470.0;
  };
  class GL_M32_F: Rifle_Base_F {
    ACE_barrelLength = 300.0;
  };
  class hgun_G17_F: Pistol_Base_F {
    ACE_barrelTwist = 254; // like 9mm pistols
    ACE_barrelLength = 114.0;
  };  
  class hgun_Mk26_F: Pistol_Base_F {
    ACE_barrelTwist = 482; // copied from .50 DE
    ACE_barrelLength = 152.0;
  };
  class Aegis_hgun_Pistol_R57_F: Pistol_Base_F {
    ACE_barrelTwist = 152; //like MP7
    ACE_barrelLength = 125.0;
  };
  class sgun_KSG_F: Rifle_Short_Base_F {
    ACE_barrelTwist = SHOTGUN_BARREL_TWIST;
    ACE_barrelLength = 470.0;
  };
  class GM6_base_F: Rifle_Long_Base_F {
    //copied from ace which applies it on weapon not base
    ACE_barrelLength = 730;
    ACE_barrelTwist = 381;
  };
};
