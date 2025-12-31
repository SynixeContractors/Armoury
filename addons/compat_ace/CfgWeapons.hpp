class CfgWeapons {
  class Rifle_Base_F;
  class Rifle_Long_Base_F;
  class Rifle_Short_Base_F;
  class arifle_XMS_Base_lxWS;
  class arifle_XMS_M_lxWS: arifle_XMS_Base_lxWS {
    ACE_barrelLength = 450.0;
  };
  class sgun_HunterShotgun_01_base_F: Rifle_Long_Base_F {
    ACE_barrelLength = 700.0;
  };
  class sgun_HunterShotgun_01_sawedoff_base_F: sgun_HunterShotgun_01_base_F {
    //fixme sawedoff
    ACE_barrelLength = 300.0;
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
};
