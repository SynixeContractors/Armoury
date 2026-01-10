#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(arifle_Vektor762_long_oak),
            QCLASS(arifle_Vektor762_long_sand),
            QCLASS(arifle_Vektor762_oak),
            QCLASS(arifle_Vektor762_sand),
            QCLASS(arifle_Vektor762_GL_sand),
            QCLASS(arifle_Vektor556_GL_sand),
            QCLASS(arifle_G36),
            QCLASS(arifle_G36_sand),
            QCLASS(arifle_G36C),
            QCLASS(arifle_G36C_sand),
            QCLASS(arifle_G36_GL),
            QCLASS(arifle_G36_GL_sand),
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_armoury_main",
            "Weapons_F_lxWS_Rifles",
            "A3_Atlas_Weapons_F_Atlas_Rifles_G36",
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Philippe Connect"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
