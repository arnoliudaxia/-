// globalConfig.h

#ifndef _GLOBALCONFIG_h
#define _GLOBALCONFIG_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
extern const int pin_digtube_a ;
extern const int pin_digtube_b ;
extern const int pin_digtube_c ;
extern const int pin_digtube_d ;
extern const int pin_digtube_e ;
extern const int pin_digtube_f  ;
extern const int pin_digtube_g ;
extern const int pin_digtube_p;

#endif

