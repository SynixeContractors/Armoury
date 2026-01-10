#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
          QCLASS(arifle_MSBS),
          QCLASS(arifle_MSBS_geo),
          QCLASS(arifle_MSBS_sand),
          QCLASS(arifle_MSBS_black),
          QCLASS(arifle_MSBS_GL),
          QCLASS(arifle_MSBS_GL_geo),
          QCLASS(arifle_MSBS_GL_sand),
          QCLASS(arifle_MSBS_GL_black),
          QCLASS(arifle_MSBS_UBS),
          QCLASS(arifle_MSBS_UBS_geo),
          QCLASS(arifle_MSBS_UBS_sand),
          QCLASS(arifle_MSBS_UBS_black),
          QCLASS(arifle_MSBS_long),
          QCLASS(arifle_MSBS_long_geo),
          QCLASS(arifle_MSBS_long_sand),
          QCLASS(arifle_MSBS_long_black),
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
          "synixe_armoury_main",
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Philippe Connect"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
