// digtubePlus.h

#ifndef _DIGTUBEPLUS_h
#define _DIGTUBEPLUS_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif


void initTube();
void digShowNumber(int numbertoshow);

#endif

