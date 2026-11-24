#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(hidden_ballistic_vest_01),
            QCLASS(hidden_ballistic_vest_02),
            QCLASS(hidden_ballistic_vest_03),
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_armoury_main"
        };
        author = ECSTRING(main,Author);
        authors[] = {"Brett"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
