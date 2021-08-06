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
extern const int analogpinA6;
extern const int analogpinA7;
extern const int analogpinA8;
extern const int analogpinA9;
extern const int analogpinA10;
extern const int analogpinA11;
extern const int analogpinA12;
extern const int analogpinA13;
extern const int analogpinA14;
extern const int analogpinA15;
#define musicPin 41

//定义宏来选择要播放的歌曲
//一共有如下的歌 SuperMalio, PIRATE, CrazyFrog, Mariounderworld, Titanic，放哪首定义哪个
#define SuperMalio
#endif

