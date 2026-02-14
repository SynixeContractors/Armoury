class CfgWeapons {
    class Rifle_Short_Base_F;
    class JCA_smg_UMP_base_F: Rifle_Short_Base_F {
        // https://www.heckler-koch.com/en/Products/Military%20and%20Law%20Enforcement/Submachine%20guns/UMP?section=variants&s=true
        ACE_barrelTwist = 406.4; // 1 in 16 in
        ACE_barrelLength = 200.0;
    };
    class JCA_smg_MP5_base_F: Rifle_Short_Base_F {
        // https://www.heckler-koch.com/en/Products/Military%20and%20Law%20Enforcement/Submachine%20guns/MP5?section=variants&variant=1175&s=1
        ACE_barrelTwist = 254.0; // 1 in 10 in (aftermarket barrels)
        ACE_barrelLength = 225.0;
  };
};
