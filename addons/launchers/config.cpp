#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common"};
        author = ECSTRING(main,Author);
        authors[] = {"Philippe Connect"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};
