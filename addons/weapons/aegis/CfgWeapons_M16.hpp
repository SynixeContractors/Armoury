class Rifle_Base_F;
class Aegis_arifle_M16A4_base_F: Rifle_Base_F {
    class FullAuto: Mode_FullAuto {
        //straigh up copied from Aegis M4
        reloadTime = 0.08;
        dispersion = 0.00058;
        minRange = 2;
        minRangeProbab = 0.9;
        midRange = 15;
        midRangeProbab = 0.7;
        maxRange = 30;
        maxRangeProbab = 0.05;
        aiRateOfFire = 1e-06;
        class BaseSoundModeType {};
        class StandardSound: BaseSoundModeType {
            soundSetShot[] = {
                "Aegis_M4A1_Shot_SoundSet",
                "Aegis_M4A1_Tail_SoundSet",
                "Aegis_M4A1_InteriorTail_SoundSet"
            };
        };
        class SilencedSound: BaseSoundModeType {
            soundSetShot[] = {
                "VelkoR5_silencerShot_SoundSet",
                "AK12_silencerTail_SoundSet",
                "AK12_silencerInteriorTail_SoundSet"
            };
        };
    };
};


class Aegis_arifle_M16A4_F;
class CLASS(arifle_M16A3): Aegis_arifle_M16A4_F {
    baseWeapon = QCLASS(arifle_M16A3);
    displayName = "M16A3";
    modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","Burst_medium"};
};
class Aegis_arifle_M16A4_FG_F;
class CLASS(arifle_M16A3_FG): Aegis_arifle_M16A4_FG_F {
    baseWeapon = QCLASS(arifle_M16A3_FG);
    displayName = "M16A3 FG";
    modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","Burst_medium"};
};
class Aegis_arifle_M16A4_GL_F;
class CLASS(arifle_M16A3_GL): Aegis_arifle_M16A4_GL_F {
    baseWeapon = QCLASS(arifle_M16A3_GL);
    displayName = "M16A3 GL";
    modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","Burst_medium"};
};
