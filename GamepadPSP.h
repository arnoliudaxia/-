// GamepadPSP.h
/*��ʾ
* ����ⲻ֧���Ȳ�Σ���Ҫ��Arduino������ʱ���ο���������������ٴ�config_gamepad(pins)����

*/
#ifndef _GAMEPADPSP_h
#define _GAMEPADPSP_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
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

	int enableflyMotor();
private:
	int rvalue=0;
};




#endif

