// 
// 
// 

#include "ButtonPlus.h"
Button::Button(int pin, buttonMode bm)
{
	switch (bm)
	{
	case Button::PULLUP:
		pinMode(pin, INPUT_PULLUP);
		break;
	case Button::NONE:
		pinMode(pin, INPUT);
		break;
	default:
		break;
	}
	mypin = pin;
	status = this->isOn();
}

Button::~Button()
{
}

bool Button::isOn()
{
	return 1-digitalRead(mypin);
}

bool Button::isChanged()
{
	if (this->isOn() == status)return false;
	else
	{
		delay(100);
		if (this->isOn() == status)return false;
		else
		{
			this->status = !this->status;
			return true;
		}
	}
}

