#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {
            QCLASS(aegis_v_carrierrigkbt_01_holster_black_f_heavy),
            QCLASS(aegis_v_carrierrigkbt_01_holster_black_f_medium),
            QCLASS(aegis_v_carrierrigkbt_01_holster_black_f_light),
            QCLASS(aegis_v_carrierrigkbt_01_holster_cbr_f_heavy),
            QCLASS(aegis_v_carrierrigkbt_01_holster_cbr_f_medium),
            QCLASS(aegis_v_carrierrigkbt_01_holster_cbr_f_light),
            QCLASS(aegis_v_carrierrigkbt_01_holster_khk_f_heavy),
            QCLASS(aegis_v_carrierrigkbt_01_holster_khk_f_medium),
            QCLASS(aegis_v_carrierrigkbt_01_holster_khk_f_light),
            QCLASS(aegis_v_carrierrigkbt_01_holster_olive_f_heavy),
            QCLASS(aegis_v_carrierrigkbt_01_holster_olive_f_medium),
            QCLASS(aegis_v_carrierrigkbt_01_holster_olive_f_light),
            QCLASS(v_rangemaster_belt_heavy),
            QCLASS(v_rangemaster_belt_medium),
            QCLASS(v_rangemaster_belt_light),
            QCLASS(v_rangemaster_belt_blk_heavy),
            QCLASS(v_rangemaster_belt_blk_medium),
            QCLASS(v_rangemaster_belt_blk_light),
            QCLASS(v_rangemaster_belt_cbr_heavy),
            QCLASS(v_rangemaster_belt_cbr_medium),
            QCLASS(v_rangemaster_belt_cbr_light),
            QCLASS(v_rangemaster_belt_khk_heavy),
            QCLASS(v_rangemaster_belt_khk_medium),
            QCLASS(v_rangemaster_belt_khk_light),
            QCLASS(v_rangemaster_belt_oli_heavy),
            QCLASS(v_rangemaster_belt_oli_medium),
            QCLASS(v_rangemaster_belt_oli_light),
            QCLASS(v_rangemaster_belt_tna_f_heavy),
            QCLASS(v_rangemaster_belt_tna_f_medium),
            QCLASS(v_rangemaster_belt_tna_f_light),
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_main",
            // "noloadplease",
            "A3_Aegis_Characters_F_Aegis_Vests"
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
