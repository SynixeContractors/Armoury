
#define UNDERCOVER(GRANDPARENT,INFO,PARENT,DISPLAY) \
    class PARENT: GRANDPARENT { \
        class ItemInfo: INFO { \
            mass = 10; \
        }; \
    }; \
    class CLASS(PARENT##_Heavy): PARENT { \
        scope = 2; \
        displayName = QUOTE(DISPLAY [Level 3]); \
        class ItemInfo: ItemInfo { \
            mass = 10 + 50; \
            class HitpointsProtectionInfo { \
                class Chest { \
                    hitpointName = "HitChest"; \
                    armor = 12; \
                    passThrough = 0.2; \
                }; \
                class Diaphragm { \
                    hitpointName = "HitDiaphragm"; \
                    armor = 12; \
                    passThrough = 0.2; \
                }; \
                class Abdomen { \
                    hitpointName = "HitAbdomen"; \
                    armor = 12; \
                    passThrough = 0.2; \
                }; \
                class Body { \
                    hitpointName = "HitBody"; \
                    passThrough = 0.2; \
                }; \
            }; \
        }; \
    }; \
    class CLASS(PARENT##_Medium): PARENT { \
        scope = 2; \
        displayName = QUOTE(DISPLAY [Level 2]); \
        class ItemInfo: ItemInfo { \
            mass = 10 + 30; \
            class HitpointsProtectionInfo { \
                class Chest { \
                    hitpointName = "HitChest"; \
                    armor = 8; \
                    passThrough = 0.2; \
                }; \
                class Diaphragm { \
                    hitpointName = "HitDiaphragm"; \
                    armor = 8; \
                    passThrough = 0.2; \
                }; \
                class Abdomen { \
                    hitpointName = "HitAbdomen"; \
                    armor = 8; \
                    passThrough = 0.2; \
                }; \
                class Body { \
                    hitpointName = "HitBody"; \
                    passThrough = 0.2; \
                }; \
            }; \
        }; \
    }; \
    class CLASS(PARENT##_Light): PARENT { \
        scope = 2; \
        displayName = QUOTE(DISPLAY [Level 1]); \
        class ItemInfo: ItemInfo { \
            mass = 10 + 15; \
            class HitpointsProtectionInfo { \
                class Chest { \
                    hitpointName = "HitChest"; \
                    armor = 4; \
                    passThrough = 0.2; \
                }; \
                class Diaphragm { \
                    hitpointName = "HitDiaphragm"; \
                    armor = 4; \
                    passThrough = 0.2; \
                }; \
                class Abdomen { \
                    hitpointName = "HitAbdomen"; \
                    armor = 4; \
                    passThrough = 0.2; \
                }; \
                class Body { \
                    hitpointName = "HitBody"; \
                    passThrough = 0.2; \
                }; \
            }; \
        }; \
    }
