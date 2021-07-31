// ConvertAlgorithm.h

#ifndef _CONVERTALGORITHM_h
#define _CONVERTALGORITHM_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
int analog2real(int analogpin);

#endif

