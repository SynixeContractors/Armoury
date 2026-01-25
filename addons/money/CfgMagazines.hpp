class CfgMagazines {
    class OM_Magazine;
    class Money: OM_Magazine {
        scope = 2;
        scopeArsenal = 2;
        ACE_isUnique = 1;
    };

    class Money_bunch: Money {
        descriptionShort = "$250 (5 x $50 bills)";
        mass = 0.1;
    };

    class Money_roll: Money {
        descriptionShort = "$5000 (100 x $50 bills)";
        mass = 2;
    };

    class Money_stack: Money {
        descriptionShort = "$50000 (1000 x $50 bills)";
        mass = 20;
    };

    class Money_stack_quest: Money_stack {
        scope = 1;
        scopeArsenal = 1;
    };
};
