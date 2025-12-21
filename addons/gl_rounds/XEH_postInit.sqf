#include "script_component.hpp"

FUNC(handleFired) = {
    //IGNORE_PRIVATE_WARNING ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle", "_gunner", "_turret"];
    if !(local _unit) exitWith {};
    if (_ammo != QCLASS(G_40mm_Stun)) exitWith {};

    private _config = configFile >> "CfgAmmo" >> _ammo;
    private _fuzeTime = 0.8 + random [-0.05, 0, 0.05];

    [{ call ace_grenades_fnc_flashbangThrownFuze}, _projectile, _fuzeTime] call CBA_fnc_waitAndExecute;
};

["ace_firedPlayer", { call FUNC(handleFired) }] call CBA_fnc_addEventHandler;
