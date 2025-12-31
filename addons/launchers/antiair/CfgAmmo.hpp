class ace_missileguidance_type_Stinger;
class CLASS(missileguidance_type_Stinger_LOAL): ace_missileguidance_type_Stinger {
    seekerLockModes[] = {"LOAL"};
    defaultSeekerLockMode = "LOAL";
    navigationTypes[] = {"ZeroEffortMiss"}; //seems to work better then prop with limited acq time
    defaultNavigationType = "ZeroEffortMiss";
    pitchRate = 90;
    yawRate = 90;
    seekLastTargetPos = 1;
};
class CLASS(missileguidance_type_Stinger_LOBL): CLASS(missileguidance_type_Stinger_LOAL) {
    seekerLockModes[] = {"LOBL","LOBL"};
    defaultSeekerLockMode = "LOBL";
};
class CfgAmmo {
    class ace_missile_manpad_stinger;
    class CLASS(M_Stinger_LOAL): ace_missile_manpad_stinger {
	thrust = 190; // half thrust so it doesnt go crazy with LOAL
	thrustTime = 4.5; // twice the time to match
	deflecting = 1; // thrust vectoring so LOAL doesnt make it miss _all_the_time_
        class ace_missileguidance: CLASS(missileguidance_type_Stinger_LOAL) {
            enabled = 1;
        };
    };
    class CLASS(M_Stinger_LOBL): CLASS(M_Stinger_LOAL) {
        class ace_missileguidance: CLASS(missileguidance_type_Stinger_LOBL) {
            enabled = 1;
        };
    };
};
