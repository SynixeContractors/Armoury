class CfgWeapons {
    class optic_DMS;
    class optic_DMS_ghex_F;
    class optic_DMS_weathered_F;

    class CLASS(optic_DMS): optic_DMS {
        displayName = "Burris XTR III";
        MACRO_NULL_SCOPE;
    };
    class CLASS(optic_DMS_ghex): optic_DMS_ghex_F {
        displayName = "Burris XTR III (Green Hex)";
        MACRO_NULL_SCOPE;
    };
    class CLASS(optic_DMS_weathered): optic_DMS_weathered_F {
        displayName = "Burris XTR III (Old)";
        MACRO_NULL_SCOPE;
    };
};
