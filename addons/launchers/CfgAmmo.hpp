class ace_missileguidance_type_Stinger;
class CLASS(missileguidance_type_Stinger_LOAL): ace_missileguidance_type_Stinger {
    seekerLockModes[] = {"LOAL"};
};
class CfgAmmo {
    class ace_missile_manpad_stinger;
    class CLASS(M_Stinger_LOAL): ace_missile_manpad_stinger {
        class ace_missileguidance: CLASS(missileguidance_type_Stinger_LOAL) {
            enabled = 1;
        };
    };
};
