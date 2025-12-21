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
            "A3_Aegis_Weapons_F_Aegis_Machineguns_MAG",
            "A3_Aegis_Weapons_F_Aegis_Rifles_AKM74",
            "A3_Aegis_Weapons_F_Aegis_LongRangeRifles_GM6",
            "A3_Aegis_Weapons_F_Aegis_Rifles_AK12",
            "A3_Aegis_Weapons_F_Aegis_Rifles_RPK",
            "A3_Aegis_Weapons_F_Aegis_Rifles_RPK74"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Philippe Connect"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
