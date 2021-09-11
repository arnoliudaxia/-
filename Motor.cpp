// 
// 
// 

#include "Motor.h"
inline void setMotorSpeed(int PIN, int speed)
{
	analogWrite(PIN, 255.0 * (speed / 100.0));   //PWM
}
Motor::Motor(int numebr)
{
	this->MotorNumber = numebr;
	pinMode(MotorPin[this->MotorNumber-1][1], OUTPUT);   //L298P直流电机驱动板的控制端口设置为输出模式
	pinMode(MotorPin[this->MotorNumber-1][0], OUTPUT);
}

Motor::~Motor()
{
}

void Motor::Stop()
{
	setMotorSpeed(MotorPin[this->MotorNumber-1][0], 0);
}

void Motor::changeSpeed(int speed)
{
	this->speed = speed;
	setMotorSpeed(MotorPin[this->MotorNumber-1][0], speed);

}
