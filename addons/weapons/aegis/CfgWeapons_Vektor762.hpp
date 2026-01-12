class CLASS(arifle_Vektor762_long_oak): Aegis_arifle_Velko_oak {
    baseWeapon = QCLASS(arifle_Vektor762_long_oak);
    displayName = "STV-380 (Classic)";
    MAGAZINE_AKM;
};
class CLASS(arifle_Vektor762_long_sand): Aegis_arifle_Velko_sand {
    baseWeapon = QCLASS(arifle_Vektor762_long_sand);
    displayName = "STV-380 (Sand)";
    MAGAZINE_AKM;
};
class CLASS(arifle_Vektor762_oak): Aegis_arifle_VelkoR5_oak {
    baseWeapon = QCLASS(arifle_Vektor762_oak);
    displayName = "STV-215 (Classic)";
    MAGAZINE_AKM;
};
class CLASS(arifle_Vektor762_sand): Aegis_arifle_VelkoR5_sand {
    baseWeapon = QCLASS(arifle_Vektor762_sand);
    displayName = "STV-215 (Sand)";
    MAGAZINE_AKM;
};
class CLASS(arifle_Vektor762_GL_sand): arifle_VelkoR5_GL_lxWS {
    baseWeapon = QCLASS(arifle_Vektor762_GL_sand);
    displayName = "STV-215 GL (Sand)";
    MAGAZINE_AKM;
    hiddenSelectionsTextures[] = {
        "A3_Aegis\weapons_f_aegis\Rifles\Velko\data\galatr4_sand_co.paa",
        "A3_Aegis\weapons_f_aegis\Rifles\Velko\data\handguard_sand_co.paa",
        "lxWS\weapons_1_f_lxWS\Rifles\velkor5\data\m203_co.paa",
        "a3\weapons_f\data\gl_holo_co.paa",
        "A3_Aegis\weapons_f_aegis\Rifles\Velko\data\r5handguard_sand_co.paa",
    };
};
