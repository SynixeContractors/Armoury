#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_armoury_main",
            "synixe_armoury_ammunition",
            "Weapons_F_JCA_IA_Rifles_M16A4",
            "Weapons_F_JCA_IA_Rifles_M4A4",
            "Weapons_F_JCA_IA_Rifles_M4A1",
            "Weapons_F_JCA_IA_Rifles_HK433",
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Philippe"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
