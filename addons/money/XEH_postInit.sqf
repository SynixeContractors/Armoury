#include "script_component.hpp"

["Money", ["CONTAINER"], ["Combine to Roll", "Roll 20 bills"], [], "", {
    params ["_unit", "_container", "_item", "_slot", "_damage"];
    private _monies = 0;
    {
        if (_x == "Money_bunch") then {
            _monies = _monies + 1;
        };
    } forEach (magazines _unit);
    _monies >= 20
}, {
    params ["_unit", "_container", "_item", "_slot", "_damage"];
    for "_i" from 1 to 20 do {
        _unit removeMagazine "Money_bunch";
    };
    _unit addMagazine "Money_roll";
}, false] call CBA_fnc_addItemContextMenuOption;

["Money_roll", ["CONTAINER"], ["Unroll", "Unroll into 20"], [], "", {
    params ["_unit", "_container", "_item", "_slot", "_damage"];
    true
}, {
    params ["_unit", "_container", "_item", "_slot", "_damage"];
    for "_i" from 1 to 20 do {
        _unit addMagazine "Money_bunch";
    };
}, true] call CBA_fnc_addItemContextMenuOption;

["Money_roll", ["CONTAINER"], ["Stack", "Stack 10 rolls"], [], "", {
    params ["_unit", "_container", "_item", "_slot", "_damage"];
    private _stacks = 0;
    {
        if (_x == "Money_roll") then {
            _stacks = _stacks + 1;
        };
    } forEach (magazines _unit);
    _stacks >= 10
}, {
    params ["_unit", "_container", "_item", "_slot", "_damage"];
    for "_i" from 1 to 10 do {
        _unit removeMagazine "Money_roll";
    };
    _unit addMagazine "Money_stack";
}, false] call CBA_fnc_addItemContextMenuOption;

["Money_stack", ["CONTAINER"], ["Unstack", "Unstack into 10 rolls"], [], "", {
    params ["_unit", "_container", "_item", "_slot", "_damage"];
    true
}, {
    params ["_unit", "_container", "_item", "_slot", "_damage"];
    for "_i" from 1 to 10 do {
        _unit addMagazine "Money_roll";
    };
}, true] call CBA_fnc_addItemContextMenuOption;
