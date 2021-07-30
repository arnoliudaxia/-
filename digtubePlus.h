// digtubePlus.h

#ifndef _DIGTUBEPLUS_h
#define _DIGTUBEPLUS_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class Digtube
{
public:
	//Digtube();
	Digtube(int pins[]);
	~Digtube();
	void digShowNumber(int numbertoshow);
private:
	int mypins[7];
};




#endif

