class CfgWeapons {
  class Rifle_Base_F;
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
};
