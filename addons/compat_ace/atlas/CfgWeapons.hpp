class CfgWeapons {
    class Rifle_Base_F;
    class Atlas_Arifle_Famas_Base: Rifle_Base_F {
        ACE_barrelTwist = 177.8; // 1 in 9 in for modern ones
        ACE_barrelLength = 488.0;
    };
    class Atlas_ARifle_FamasF1_Base: Atlas_Arifle_Famas_Base  {
        ACE_barrelTwist = 228.6; // 1 in 12 in for F1 profile
        ACE_barrelLength = 488.0;
    };
    class Atlas_Arifle_Famas_M203_base;
    class Atlas_arifle_famasF1_GL_F: Atlas_Arifle_Famas_M203_base {
        ACE_barrelTwist = 228.6; // 1 in 12 in F1 profile
        ACE_barrelLength = 488.0;
    };
    class arifle_G36_base_F: Rifle_Base_F {
        ACE_barrelTwist = 177.8; // 1 in 7 in
        // guess since it doesnt match G36K profile (longer barrel same chassis) of 12.5 in
        ACE_barrelLength = 406.4; // 16 in
    };
    class arifle_G36C_base_F: arifle_G36_base_F {
        // https://www.heckler-koch.com/en/Products/Military%20and%20Law%20Enforcement/Assault%20rifles/G36?section=variants&variant=1182&s=1
        ACE_barrelLength = 228.6; // 9 in matching G36C profile
    };
    class arifle_AUG_base_F: Rifle_Base_F {
        // https://www.steyr-arms.com/en/military-law-enforcement/assault-rifles/aug-a3/
        ACE_barrelTwist = 177.8; // 1 in 7 in
        ACE_barrelLength = 508.0; // 20 in
    };
    class arifle_AUG_C_base_F: arifle_AUG_base_F {
      ACE_barrelLength = 417.0; // 16.4 in
    };
};
