#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(Wall_E),
            QCLASS(Wall_E_Backpack)
        };
        weapons[] = {
            QCLASS(Diffuser)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_armoury_main",
            "synixe_armoury_ammunition"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
