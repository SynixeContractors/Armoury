#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
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
        author = "Brett";
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
