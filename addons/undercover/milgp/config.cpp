#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_aor1_heavy",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_aor1_medium",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_aor1_light",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_aor2_heavy",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_aor2_medium",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_aor2_light",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_blk_heavy",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_blk_medium",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_blk_light",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_cb_heavy",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_cb_medium",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_cb_light",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_khk_heavy",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_khk_medium",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_khk_light",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_mc_heavy",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_mc_medium",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_mc_light",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_rgr_heavy",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_rgr_medium",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_rgr_light",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_wht_heavy",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_wht_medium",
            "synixe_armoury_synixe_mgp_vest_battle_belt_assaulter_wht_light",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_aor1_heavy",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_aor1_medium",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_aor1_light",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_aor2_heavy",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_aor2_medium",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_aor2_light",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_blk_heavy",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_blk_medium",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_blk_light",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_cb_heavy",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_cb_medium",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_cb_light",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_khk_heavy",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_khk_medium",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_khk_light",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_mc_heavy",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_mc_medium",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_mc_light",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_rgr_heavy",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_rgr_medium",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_rgr_light",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_wht_heavy",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_wht_medium",
            "synixe_armoury_synixe_mgp_vest_battle_belt_hgunner_wht_light",
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
