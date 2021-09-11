// Motor.h

#ifndef _MOTOR_h
#define _MOTOR_h

#include "arduino.h"
#include <PID_v1.h>


class Motor
{
public:
	Motor(int numebr);
	~Motor();
	int speed;
	void Stop();
	void changeSpeed(int speed);//from 0 to 100
	int MotorNumber;
private:
	const byte encoder0pinA = 2;//A pin -> the interrupt pin 0
	const byte encoder0pinB = 3;//B pin -> the digital pin 3
	int E1 = 10; //L298P直流电机驱动板的使能端口连接到数字接口5
	int M1 = 12; //L298P直流电机驱动板的转向端口连接到数字接口4
	int E2 = 11;
	int M2 = 13;
	boolean Direction;//the rotation direction

	const int MotorPin[2][2] = { {E1,M1}, {E2,M2} };




};
#endif

