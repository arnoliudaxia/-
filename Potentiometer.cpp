// 
// 
// 

#include "Potentiometer.h"
#include "globalConfig.h"


Potentiometer::Potentiometer(int analogpin)
{
	pinMode(analogInputToDigitalPin(analogpin), INPUT);
	mypin = analogInputToDigitalPin(analogpin);
}

Potentiometer::~Potentiometer()
{
}
int Potentiometer::readPos()
{
	return analogRead(mypin);
}

int Potentiometer::readPosLevel(int levels)
{
	return (int)(readPos() / (1024.0 / levels));
}
