// GamepadPSP.h
/*��ʾ
* ����ⲻ֧���Ȳ�Σ���Ҫ��Arduino������ʱ���ο���������������ٴ�config_gamepad(pins)����

*/
#ifndef _GAMEPADPSP_h
#define _GAMEPADPSP_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#include "ADXL345.h"
#else
	#include "WProgram.h"
#endif

class GamepadPSP
{
public:
	GamepadPSP();
	~GamepadPSP();
	void initPSP();
	void CheckInput();
	int giveSpeed();

	int *niceControl();

	int chassisControl();
	int turnControl();
	int aniContrl(Acceleration* acc);

	int powerUnion[2];
private:
	int rvalue=0;
};




#endif

