// globalConfig.h

#ifndef _GLOBALCONFIG_h
#define _GLOBALCONFIG_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#pragma region 数码管
#define pin_digtube_a = 28;
#define pin_digtube_b = 29;
#define pin_digtube_c = 30;
#define pin_digtube_d = 31;
#define pin_digtube_e = 32;
#define pin_digtube_f = 33;
#define pin_digtube_g = 34;
#define pin_digtube_p = 34;
//extern const int pin_digtube_a;
//extern const int pin_digtube_b;
//extern const int pin_digtube_c;
//extern const int pin_digtube_d;
//extern const int pin_digtube_e;
//extern const int pin_digtube_f;
//extern const int pin_digtube_g;
//extern const int pin_digtube_p;
#pragma endregion


#define musicPin 41

//定义宏来选择要播放的歌曲
//一共有如下的歌 SuperMalio, PIRATE, CrazyFrog, Mariounderworld, Titanic，放哪首定义哪个
#define SuperMalio



#pragma region 遥控器配置区
#define pin_clk  7
#define pin_command  5
#define pin_cs  6
#define pin_data  4
#pragma endregionnb

#pragma region 电机驱动扩展板配置区
#define E1 10
#define M1 12
#define E2 11
#define M2 13
#pragma endregion


#endif

