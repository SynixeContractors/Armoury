#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_armoury_main",
            "A3_Aegis_Weapons_F_Aegis",
            "A3_Aegis_Weapons_F_Aegis_Rifles_M16",
            "A3_Aegis_Weapons_F_Aegis_Machineguns_MAG",
            "A3_Aegis_Weapons_F_Aegis_Shotguns_M4_SSAS",
            "A3_Aegis_Weapons_F_Aegis_GrenadeLaunchers_M32",
            "A3_Aegis_Weapons_F_Aegis_Pistols_G17",
            "A3_Aegis_Weapons_F_Aegis_Pistols_Mk26",
            "A3_Aegis_Weapons_F_Aegis_Pistols_Ruger57",
            "A3_Aegis_Weapons_F_Aegis_Shotguns_KSG"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Philippe Connect"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
