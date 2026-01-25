#define HIDDEN(CLASSNAME,PARENT) \
    class CLASSNAME: PARENT { \
        scope = 0; \
        scopeCurator = 0; \
    }

class CfgVehicles {
    class Item_Base_F;
    class Strategic;

    // Electronics
    // ELECTRONICS(UMI_Item_Land_Laptop_F);
    // ELECTRONICS(UMI_Item_Land_Laptop_Open_F);
    // ELECTRONICS(UMI_Item_Land_Camera_F);
    // ELECTRONICS(UMI_Item_Land_Camcorder_F);
    // ELECTRONICS(UMI_Item_Land_MobilePhone_F);
    // ELECTRONICS(UMI_Item_Land_MobilePhone_Old_F);
    // ELECTRONICS(UMI_Item_Land_Tablet_Rugged_F);
    // ELECTRONICS(UMI_Item_Land_Tablet_F);
    // Contraband
    // CONTRABAND(UMI_Item_Briefcase_Money_Open,Item_Base_F);
    // CONTRABAND(UMI_Item_Cocaine_Brick,Item_Base_F);
    // CONTRABAND(UMI_Item_Weed_Bale,Item_Base_F);
    // CONTRABAND(UMI_Item_Coke_Pile_01,Item_Base_F);
    // CONTRABAND(UMI_VX_NerveAgent_Container,Strategic);
    // Hidden
    HIDDEN(UMI_Item_Land_Portable_HDD_F,Item_Base_F);
    HIDDEN(UMI_Item_Money,Item_Base_F);
    HIDDEN(UMI_Item_RhinoHorn_01,Item_Base_F);
    HIDDEN(UMI_Nuke_WarHead,Strategic);
};
