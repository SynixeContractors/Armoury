#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_aor1_heavy),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_aor1_medium),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_aor1_light),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_aor2_heavy),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_aor2_medium),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_aor2_light),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_blk_heavy),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_blk_medium),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_blk_light),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_cb_heavy),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_cb_medium),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_cb_light),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_khk_heavy),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_khk_medium),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_khk_light),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_mc_heavy),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_mc_medium),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_mc_light),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_rgr_heavy),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_rgr_medium),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_rgr_light),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_wht_heavy),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_wht_medium),
            QCLASS(synixe_mgp_vest_battle_belt_assaulter_wht_light),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_aor1_heavy),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_aor1_medium),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_aor1_light),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_aor2_heavy),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_aor2_medium),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_aor2_light),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_blk_heavy),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_blk_medium),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_blk_light),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_cb_heavy),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_cb_medium),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_cb_light),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_khk_heavy),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_khk_medium),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_khk_light),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_mc_heavy),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_mc_medium),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_mc_light),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_rgr_heavy),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_rgr_medium),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_rgr_light),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_wht_heavy),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_wht_medium),
            QCLASS(synixe_mgp_vest_battle_belt_hgunner_wht_light),
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_main",
            "synixe_milgp_vests",
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
