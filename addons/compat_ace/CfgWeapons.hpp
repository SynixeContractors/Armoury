class CfgWeapons {
  class Rifle_Base_F;
  class Rifle_Long_Base_F;
  class Rifle_Short_Base_F;
  class Pistol_Base_F;
  class Atlas_Arifle_Famas_Base: Rifle_Base_F {
    ACE_barrelTwist = 177.8; //1 in 9in for all
    ACE_barrelLength = 488.0;
  };
  class Atlas_ARifle_FamasF1_Base: Atlas_Arifle_Famas_Base  {
    ACE_barrelTwist = 228.6; //1 in 12in
    ACE_barrelLength = 488.0;
  };
  class arifle_XMS_Base_lxWS;
  class arifle_XMS_M_lxWS: arifle_XMS_Base_lxWS {
    ACE_barrelLength = 450.0;
  };
  class arifle_AUG_base_F: Rifle_Base_F {
    ACE_barrelTwist = 177.8; //1 in 7in
    ACE_barrelLength = 508.0;
  };
  class arifle_AUG_C_base_F: arifle_AUG_base_F {
    ACE_barrelLength = 417.0;
  };
  class sgun_Mp153_black_F: Rifle_Base_F {
    ACE_barrelTwist = SHOTGUN_BARREL_TWIST;
    ACE_barrelLength = 610.0;
  };
  class sgun_Mp153_classic_F: Rifle_Base_F {
    ACE_barrelTwist = SHOTGUN_BARREL_TWIST;
    ACE_barrelLength = 750.0;
  };
  class sgun_KSG_F: Rifle_Short_Base_F {
    ACE_barrelTwist = SHOTGUN_BARREL_TWIST;
    ACE_barrelLength = 470.0;
  };
  class sgun_HunterShotgun_01_base_F: Rifle_Long_Base_F {
    ACE_barrelTwist = SHOTGUN_BARREL_TWIST;
    ACE_barrelLength = 700.0;
  };
  class sgun_HunterShotgun_01_sawedoff_base_F: sgun_HunterShotgun_01_base_F {
    //fixme sawedoff
    ACE_barrelLength = 300.0;
  };
  class arifle_G36_base_F: Rifle_Base_F {
    ACE_barrelTwist = 177.8; //1 in 7in
    ACE_barrelLength = 318.0;
  };
  class arifle_G36C_base_F: arifle_G36_base_F {
    ACE_barrelLength = 228.0;
  };
  class Aegis_arifle_M16A4_base_F: Rifle_Base_F {
    ACE_barrelTwist = 177.8; //1 in 7in
    ACE_barrelLength = 508.0;
  };
  class GM6_base_F: Rifle_Long_Base_F {
    ACE_barrelLength = 730; //copied from ace which applies it on weapon not base
    ACE_barrelTwist = 381;
  };
  class Aegis_MMG_FNMAG_Base: Rifle_Long_Base_F {
    ACE_barrelLength = 630.0;
  };
  class Aegis_MMG_FNMAG_240_F: Aegis_MMG_FNMAG_Base {
    ACE_barrelLength = 528.0;
  };
  class GL_M32_F: Rifle_Base_F {
    ACE_barrelLength = 300.0;
  };
  class sgun_M4_F: Rifle_Short_Base_F {
    ACE_barrelTwist = SHOTGUN_BARREL_TWIST;
    ACE_barrelLength = 470.0;
  };
  class JCA_smg_MP5_base_F: Rifle_Short_Base_F {
    //fixme
    ACE_barrelTwist = 254; // like 9mm pistols?
    ACE_barrelLength = 225.0;
  };
  // class GL_XM25_F;
  class Opf_arifle_SKS_base_F: Rifle_Base_F {
    ACE_barrelTwist = 240.0; //like AK?
    ACE_barrelLength = 521.0;
  };
  class JCA_smg_UMP_base_F: Rifle_Short_Base_F {
    //fixme
    ACE_barrelTwist = 406; //like .45 pistols?
    ACE_barrelLength = 200.0;
  };
  class hgun_G17_F: Pistol_Base_F {
    ACE_barrelTwist = 254; // like 9mm pistols
    ACE_barrelLength = 114.0;
  };
  class hgun_Mk26_F: Pistol_Base_F {
    //fixme
    ACE_barrelTwist = 0; //???
    ACE_barrelLength = 125.0;
  };
  class Aegis_hgun_Pistol_R57_F: Pistol_Base_F {
    //fixme
    ACE_barrelTwist = 0; //???
    ACE_barrelLength = 125.0;
  };
};
