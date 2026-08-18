#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(launch_M72_HEAT_F),
            QCLASS(launch_M72_HE_F),
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_common",
            "Weapons_F_JCA_IA"
        };
        author = ECSTRING(main,Author);
        authors[] = {"Philippe Connect"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};
class CBA_DisposableLaunchers {
    CLASS(launch_M72_HEAT_ready_F)[] = {QCLASS(launch_M72_HEAT_F), QCLASS(launch_M72_HEAT_used_F)};
    CLASS(launch_M72_HE_ready_F)[] = {QCLASS(launch_M72_HE_F), QCLASS(launch_M72_HE_used_F)};
};


#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
