// Potentiometer.h

#ifndef _POTENTIOMETER_h
#define _POTENTIOMETER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
class Potentiometer
{
public:
	Potentiometer(int analogpin);
	~Potentiometer();
	int readPos();
	int readPosLevel(int levels);
private:
	int mypin;
};


#endif

