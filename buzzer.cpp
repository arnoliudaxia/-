// 
// 
// 

#include "buzzer.h"

Buzzer::Buzzer(int pin)
{
	pinMode(pin, OUTPUT);
	mypin = pin;
}

Buzzer::~Buzzer()
{
}
void Buzzer::beep()
{
	digitalWrite(mypin, HIGH);
	delay(100);
	digitalWrite(mypin, LOW);

}