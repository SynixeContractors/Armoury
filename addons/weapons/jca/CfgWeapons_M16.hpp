class Rifle_Base_F;
class JCA_arifle_M16A4_base_F: Rifle_Base_F {
    class FullAuto: Mode_FullAuto
    {
        class BaseSoundModeType
        {
        };
        class StandardSound: BaseSoundModeType {
            soundSetShot[] = {"JCA_M4A1_Shot_SoundSet","JCA_M4A1_Tail_SoundSet","JCA_M4A1_Tail_Interior_SoundSet"};
            beginwater1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",1,1,400};
            beginwater2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",1,1,400};
            beginwater3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",1,1,400};
            soundBeginWater[] = {"beginwater1",0.33,"beginwater2",0.33,"beginwater3",0.34};
        };
        class SilencedSound: BaseSoundModeType {
            soundSetShot[] = {"JCA_M4A1_suppressed_Shot_SoundSet","JCA_M4A1_suppressed_Tail_SoundSet","JCA_M4A1_suppressed_Tail_Interior_SoundSet"};
            beginwater1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",1,1,400};
            beginwater2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",1,1,400};
            beginwater3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",1,1,400};
            soundBeginWater[] = {"beginwater1",0.33,"beginwater2",0.33,"beginwater3",0.34};
        };
        reloadTime = 0.08;
        minRange = 2;
        minRangeProbab = 0.9;
        midRange = 15;
        midRangeProbab = 0.7;
        maxRange = 30;
        maxRangeProbab = 0.05;
        aiRateOfFire = 1e-06;
        dispersion = 0.00054;
    };
};

#define WEAPON_M16A3(CLS, PARENT, NAME) \
class PARENT; \
class CLASS(CLS): PARENT { \
    baseWeapon = QCLASS(CLS); \
    displayName = NAME; \
    modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","Burst_medium"}; \
}

WEAPON_M16A3(JCA_arifle_M16A3_black,JCA_arifle_M16A4_black_F,"M16A3 (Black)");
WEAPON_M16A3(JCA_arifle_M16A3_olive,JCA_arifle_M16A4_olive_F,"M16A3 (Olive)");
WEAPON_M16A3(JCA_arifle_M16A3_sand,JCA_arifle_M16A4_sand_F,"M16A3 (Sand)");

WEAPON_M16A3(JCA_arifle_M16A3_FG_black,JCA_arifle_M16A4_FG_black_F,"M16A3 FG (Black)");
WEAPON_M16A3(JCA_arifle_M16A3_FG_olive,JCA_arifle_M16A4_FG_olive_F,"M16A3 FG (Olive)");
WEAPON_M16A3(JCA_arifle_M16A3_FG_sand,JCA_arifle_M16A4_FG_sand_F,"M16A3 FG (Sand)");

WEAPON_M16A3(JCA_arifle_M16A3_GL_black,JCA_arifle_M16A4_GL_black_F,"M16A3 GL (Black)");
WEAPON_M16A3(JCA_arifle_M16A3_GL_olive,JCA_arifle_M16A4_GL_olive_F,"M16A3 GL (Olive)");
WEAPON_M16A3(JCA_arifle_M16A3_GL_sand,JCA_arifle_M16A4_GL_sand_F,"M16A3 GL (Sand)");


// class JCA_arifle_M16A4_black_F;
// class CLASS(JCA_arifle_M16A3): JCA_arifle_M16A4_black_F {
//     baseWeapon = QCLASS(JCA_arifle_M16A3);
//     displayName = "M16A3 (Black)";
//     modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","Burst_medium"};
// };
