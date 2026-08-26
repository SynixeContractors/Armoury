#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(JCA_arifle_M16A3_black),
            QCLASS(JCA_arifle_M16A3_olive),
            QCLASS(JCA_arifle_M16A3_sand),
            QCLASS(JCA_arifle_M16A3_FG_black),
            QCLASS(JCA_arifle_M16A3_FG_olive),
            QCLASS(JCA_arifle_M16A3_FG_sand),
            QCLASS(JCA_arifle_M16A3_GL_black),
            QCLASS(JCA_arifle_M16A3_GL_olive),
            QCLASS(JCA_arifle_M16A3_GL_sand),
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_armoury_main",
            "Weapons_F_lxWS_Rifles",
            "Weapons_F_JCA_IA_Rifles_M16A4",
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Philippe Connect"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
