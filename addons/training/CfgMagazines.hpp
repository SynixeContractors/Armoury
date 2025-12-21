class CfgMagazines {
    class APERSBoundingMine_Range_Mag;
    class CLASS(APERSBoundingMine_Range_Training_Mag): APERSBoundingMine_Range_Mag {
        displayName = "M26 Anti-Personnel Bounding Mine (Training)";
        ammo = QCLASS(APERSBoundingMine_Range_Training_Ammo);
    };

    class APERSMine_Range_Mag;
    class CLASS(APERSMine_Range_Training_Mag): APERSMine_Range_Mag {
        displayName = "VS-50 Anti-Personnel Mine (Training)";
        ammo = QCLASS(APERSMine_Range_Training_Ammo);
    };

    class APERSTripMine_Wire_Mag;
    class CLASS(APERSTripMine_Wire_Training_Mag): APERSTripMine_Wire_Mag {
        displayName = "PMR-3 Anti-Personnel Tripwire Mine (Training)";
        ammo = QCLASS(APERSTripMine_Wire_Training_Ammo);
    };

    class ATMine_Range_Mag;
    class CLASS(ATMine_Range_Training): ATMine_Range_Mag {
        displayName = "AT Mine (Training)";
        ammo = QCLASS(ATMine_Range_Training_Ammo);
    };

    class ClaymoreDirectionalMine_Remote_Mag;
    class CLASS(ClaymoreDirectionalMine_Remote_Training_Mag): ClaymoreDirectionalMine_Remote_Mag {
        displayName = "M18A1 Claymore (Training)";
        ammo = QCLASS(ClaymoreDirectionalMine_Remote_Training_Ammo);
    };

    class DemoCharge_Remote_Mag;
    class CLASS(DemoCharge_Remote_Training_Mag): DemoCharge_Remote_Mag {
        displayName = "M112 Demolition Block (Training)";
        ammo = QCLASS(DemoCharge_Remote_Training_Ammo);
    };

    class SatchelCharge_Remote_Mag;
    class CLASS(SatchelCharge_Remote_Training_Mag): SatchelCharge_Remote_Mag {
        displayName = "M183 Demolition Charge Assembly (Training)";
        ammo = QCLASS(SatchelCharge_Remote_Training_Ammo);
    };

    class SmokeShell;
    class CLASS(SmokeShell_Training): SmokeShell {
        displayName = "M83T Smoke Grenade (White)";
        displayNameShort = "White (Training)";
        ammo = QCLASS(SmokeShell_Training);
    };

    class SmokeShellGreen;
    class CLASS(SmokeShellGreen_Training): SmokeShellGreen {
        displayName = "M18T Smoke Grenade (Green)";
        displayNameShort = "Green (Training)";
        ammo = QCLASS(SmokeShellGreen_Training);
    };

    class SmokeShellRed;
    class CLASS(SmokeShellRed_Training): SmokeShellRed {
        displayName = "M18T Smoke Grenade (Red)";
        displayNameShort = "Red (Training)";
        ammo = QCLASS(SmokeShellRed_Training);
    };

    class SmokeShellYellow;
    class CLASS(SmokeShellYellow_Training): SmokeShellYellow {
        displayName = "M18T Smoke Grenade (Yellow)";
        displayNameShort = "Yellow (Training)";
        ammo = QCLASS(SmokeShellYellow_Training);
    };

    class SmokeShellPurple;
    class CLASS(SmokeShellPurple_Training): SmokeShellPurple {
        displayName = "M18T Smoke Grenade (Purple)";
        displayNameShort = "Purple (Training)";
        ammo = QCLASS(SmokeShellPurple_Training);
    };

    class SmokeShellBlue;
    class CLASS(SmokeShellBlue_Training): SmokeShellBlue {
        displayName = "M18T Smoke Grenade (Blue)";
        displayNameShort = "Blue (Training)";
        ammo = QCLASS(SmokeShellBlue_Training);
    };

    class SmokeShellOrange;
    class CLASS(SmokeShellOrange_Training): SmokeShellOrange {
        displayName = "M18T Smoke Grenade (Orange)";
        displayNameShort = "Orange (Training)";
        ammo = QCLASS(SmokeShellOrange_Training);
    };

    class 1Rnd_HE_Grenade_shell;
    class 1Rnd_Smoke_Grenade_shell: 1Rnd_HE_Grenade_shell {
        displayName = "M715 Smoke (White)";
    };
    class CLASS(1Rnd_Smoke_Grenade_shell_Training): 1Rnd_Smoke_Grenade_shell {
        displayName = "M715T Smoke (White)";
        displayNameShort = "White (Training)";
        ammo = QCLASS(SmokeShell_Training);
    };

    class 1Rnd_SmokeGreen_Grenade_shell: 1Rnd_Smoke_Grenade_shell {
        displayName = "M720 Smoke (Green)";
    };
    class CLASS(1Rnd_SmokeGreen_Grenade_shell_Training): 1Rnd_SmokeGreen_Grenade_shell {
        displayName = "M720T Smoke (Green)";
        displayNameShort = "Green (Training)";
        ammo = QCLASS(G_40mm_SmokeGreen_Training);
    };

    class 1Rnd_SmokeRed_Grenade_shell: 1Rnd_Smoke_Grenade_shell {
        displayName = "M720 Smoke (Red)";
    };
    class CLASS(1Rnd_SmokeRed_Grenade_shell_Training): 1Rnd_SmokeRed_Grenade_shell {
        displayName = "M720T Smoke (Red)";
        displayNameShort = "Red (Training)";
        ammo = QCLASS(G_40mm_SmokeRed_Training);
    };

    class 1Rnd_SmokeYellow_Grenade_shell: 1Rnd_Smoke_Grenade_shell {
        displayName = "M720 Smoke (Yellow)";
    };
    class CLASS(1Rnd_SmokeYellow_Grenade_shell_Training): 1Rnd_SmokeYellow_Grenade_shell {
        displayName = "M720T Smoke (Yellow)";
        displayNameShort = "Yellow (Training)";
        ammo = QCLASS(G_40mm_SmokeYellow_Training);
    };

    class 1Rnd_SmokePurple_Grenade_shell: 1Rnd_Smoke_Grenade_shell {
        displayName = "M720 Smoke (Purple)";
    };
    class CLASS(1Rnd_SmokePurple_Grenade_shell_Training): 1Rnd_SmokePurple_Grenade_shell {
        displayName = "M720T Smoke (Purple)";
        displayNameShort = "Purple (Training)";
        ammo = QCLASS(G_40mm_SmokePurple_Training);
    };

    class 1Rnd_SmokeBlue_Grenade_shell: 1Rnd_Smoke_Grenade_shell {
        displayName = "M720 Smoke (Blue)";
    };
    class CLASS(1Rnd_SmokeBlue_Grenade_shell_Training): 1Rnd_SmokeBlue_Grenade_shell {
        displayName = "M720T Smoke (Blue)";
        displayNameShort = "Blue (Training)";
        ammo = QCLASS(G_40mm_SmokeBlue_Training);
    };

    class 1Rnd_SmokeOrange_Grenade_shell: 1Rnd_Smoke_Grenade_shell {
        displayName = "M720 Smoke (Orange)";
    };
    class CLASS(1Rnd_SmokeOrange_Grenade_shell_Training): 1Rnd_SmokeOrange_Grenade_shell {
        displayName = "M720T Smoke (Orange)";
        displayNameShort = "Orange (Training)";
        ammo = QCLASS(G_40mm_SmokeOrange_Training);
    };
};
