class arifle_Velko_lxWS;
class arifle_VelkoR5_lxWS;
class arifle_VelkoR5_snake_lxWS;
class arifle_VelkoR5_GL_lxWS;
class arifle_VelkoR5_GL_snake_lxWS;
class CLASS(arifle_Vektor762_long): arifle_Velko_lxWS {
    baseWeapon = QCLASS(arifle_Vektor762_long);
    displayName = "STV-380 (Black)";
    MAGAZINE_AKM;
};
class CLASS(arifle_Vektor762): arifle_VelkoR5_lxWS {
    baseWeapon = QCLASS(arifle_Vektor762);
    displayName = "STV-215 (Black)";
    MAGAZINE_AKM;
};
class CLASS(arifle_Vektor762_GL): arifle_VelkoR5_GL_lxWS {
    baseWeapon = QCLASS(arifle_Vektor762_GL);
    displayName = "STV-215 GL (Black)";
    MAGAZINE_AKM;
};
class CLASS(arifle_Vektor762_snake): arifle_VelkoR5_snake_lxWS {
    baseWeapon = QCLASS(arifle_Vektor762_snake);
    displayName = "STV-215 (Snake)";
    MAGAZINE_AKM;
};
class CLASS(arifle_Vektor762_GL_snake): arifle_VelkoR5_GL_snake_lxWS {
    baseWeapon = QCLASS(arifle_Vektor762_GL_snake);
    displayName = "STV-215 GL (Snake)";
    MAGAZINE_AKM;
};
