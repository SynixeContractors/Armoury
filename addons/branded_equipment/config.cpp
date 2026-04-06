#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Characters_F_Enoch_Vests",
            "synixe_mgp_vests",
            "synixe_mgp_headgear"
        };
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
