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