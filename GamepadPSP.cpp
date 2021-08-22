// 
// 
// 

#include "GamepadPSP.h"
#include "globalConfig.c"
PS2X ps2x; // create PS2 Controller Class

GamepadPSP::GamepadPSP()
{
     ps2x.config_gamepad(13, 11, 10, 12, true, true);   //setup pins and settings:  GamePad(clock, command, attention, data, Pressures?, Rumble?) check for error

}

GamepadPSP::~GamepadPSP()
{
}

