#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "A3_Weapons_F",
	    "A3_Weapons_F_Exp",
	    "cba_jr",
	    "A3_Weapons_F_Enoch"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"thisconnect"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
