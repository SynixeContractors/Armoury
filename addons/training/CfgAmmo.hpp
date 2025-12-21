#define TRAINING_EXPLOSIVE ace_explosives_size = 0;\
    ace_explosives_detonator = 0;\
    CraterEffects = "";\
    explosionEffects = "TrainingMineEffect";\
    hit = 1;\
    indirectHit = 0;\
    indirectHitRange = 1;\
    minDamageForCamShakeHit = 1.55;\
    SoundSetExplosion[] = {"TrainingMine_Exp_SoundSet","TrainingMine_Flag_SoundSet"};\
    suppressionRadiusHit = 0

class CfgAmmo {
    class APERSBoundingMine_Range_Ammo;
    class CLASS(APERSBoundingMine_Range_Training_Ammo): APERSBoundingMine_Range_Ammo {
        TRAINING_EXPLOSIVE;
        ace_explosives_magazine = QCLASS(APERSBoundingMine_Range_Training_Mag);
        defaultMagazine = QCLASS(APERSBoundingMine_Range_Training_Mag);
    };

    class APERSMine_Range_Ammo;
    class CLASS(APERSMine_Range_Training_Ammo): APERSMine_Range_Ammo {
        TRAINING_EXPLOSIVE;
        ace_explosives_magazine = QCLASS(APERSMine_Range_Training_Mag);
        defaultMagazine = QCLASS(APERSMine_Range_Training_Mag);
    };

    class APERSTripMine_Wire_Ammo;
    class CLASS(APERSTripMine_Wire_Training_Ammo): APERSTripMine_Wire_Ammo {
        TRAINING_EXPLOSIVE;
        ace_explosives_magazine = QCLASS(APERSTripMine_Wire_Training_Mag);
        defaultMagazine = QCLASS(APERSTripMine_Wire_Training_Mag);
    };

    class ATMine_Range_Ammo;
    class CLASS(ATMine_Range_Training_Ammo): ATMine_Range_Ammo {
        TRAINING_EXPLOSIVE;
        ace_explosives_magazine = QCLASS(ATMine_Range_Training_Mag);
        defaultMagazine = QCLASS(ATMine_Range_Training_Mag);
    };

    class ClaymoreDirectionalMine_Remote_Ammo;
    class CLASS(ClaymoreDirectionalMine_Remote_Training_Ammo): ClaymoreDirectionalMine_Remote_Ammo {
        TRAINING_EXPLOSIVE;
        ace_explosives_magazine = QCLASS(ClaymoreDirectionalMine_Remote_Training_Mag);
        defaultMagazine = QCLASS(ClaymoreDirectionalMine_Remote_Training_Mag);
    };

    class DemoCharge_Remote_Ammo;
    class CLASS(DemoCharge_Remote_Training_Ammo): DemoCharge_Remote_Ammo {
        TRAINING_EXPLOSIVE;
        ace_explosives_magazine = QCLASS(DemoCharge_Remote_Training_Mag);
        defaultMagazine = QCLASS(DemoCharge_Remote_Training_Mag);
    };

    class SatchelCharge_Remote_Ammo;
    class CLASS(SatchelCharge_Remote_Training_Ammo): SatchelCharge_Remote_Ammo {
        TRAINING_EXPLOSIVE;
        ace_explosives_magazine = QCLASS(SatchelCharge_Remote_Training_Mag);
        defaultMagazine = QCLASS(SatchelCharge_Remote_Training_Mag);
    };

    class SmokeShell;
    class CLASS(SmokeShell_Training): SmokeShell {
        timeToLive = 10;
    };
    class SmokeShellRed;
    class CLASS(SmokeShellRed_Training): SmokeShellRed {
        timeToLive = 10;
    };
    class SmokeShellGreen;
    class CLASS(SmokeShellGreen_Training): SmokeShellGreen {
        timeToLive = 10;
    };
    class SmokeShellYellow;
    class CLASS(SmokeShellYellow_Training): SmokeShellYellow {
        timeToLive = 10;
    };
    class SmokeShellPurple;
    class CLASS(SmokeShellPurple_Training): SmokeShellPurple {
        timeToLive = 10;
    };
    class SmokeShellBlue;
    class CLASS(SmokeShellBlue_Training): SmokeShellBlue {
        timeToLive = 10;
    };
    class SmokeShellOrange;
    class CLASS(SmokeShellOrange_Training): SmokeShellOrange {
        timeToLive = 10;
    };

    class G_40mm_Smoke;
    class CLASS(G_40mm_Smoke_Training): G_40mm_Smoke {
        timeToLive = 20;
    };
    class G_40mm_SmokeRed;
    class CLASS(G_40mm_SmokeRed_Training): G_40mm_SmokeRed {
        timeToLive = 20;
    };
    class G_40mm_SmokeGreen;
    class CLASS(G_40mm_SmokeGreen_Training): G_40mm_SmokeGreen {
        timeToLive = 20;
    };
    class G_40mm_SmokeYellow;
    class CLASS(G_40mm_SmokeYellow_Training): G_40mm_SmokeYellow {
        timeToLive = 20;
    };
    class G_40mm_SmokePurple;
    class CLASS(G_40mm_SmokePurple_Training): G_40mm_SmokePurple {
        timeToLive = 20;
    };
    class G_40mm_SmokeBlue;
    class CLASS(G_40mm_SmokeBlue_Training): G_40mm_SmokeBlue {
        timeToLive = 20;
    };
    class G_40mm_SmokeOrange;
    class CLASS(G_40mm_SmokeOrange_Training): G_40mm_SmokeOrange {
        timeToLive = 20;
    };
};
