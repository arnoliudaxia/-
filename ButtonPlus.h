// ButtonPlus.h

#ifndef _BUTTONPLUS_h
#define _BUTTONPLUS_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
class Button
{
public:
	enum buttonMode
	{
		PULLUP,NONE
	};
	Button(int pin,buttonMode bm);
	~Button();
	bool isOn();
	bool isChanged();
private:
	int mypin;
	bool status;
	int pressTimes;
};



#endif

