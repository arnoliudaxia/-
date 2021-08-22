// GamepadPSP.h

#ifndef _GAMEPADPSP_h
#define _GAMEPADPSP_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class GamepadPSP
{
public:
	GamepadPSP();
	~GamepadPSP();
	void CheckInput();

private:

};




#endif

