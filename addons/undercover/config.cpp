#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_armoury_main"
        };
        author = "Brett";
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
