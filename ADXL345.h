// ADXL345.h

#ifndef _ADXL345_h
#define _ADXL345_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#define DEVICE (0x53) //ADXL345 device address
#define TO_READ (6)        //num of bytes we are going to read each time (two bytes for each axis)

class Acceleration
{
public:
	Acceleration();
	~Acceleration();
	void init();
	void readAcc();
	int x, y, z;                        //three axis acceleration data
	double roll = 0.00, pitch = 0.00;       //Roll & Pitch are the angles which rotate by the axis X and y

private:
	byte buff[TO_READ];        //6 bytes buffer for saving data read from the device
	char str[512];              //string buffer to transform data before sending it to the serial port
	int regAddress = 0x32;      //first axis-acceleration-data register on the ADXL345
	//in the sequence of R(x-y-z),more info visit
// https://www.dfrobot.com/wiki/index.php?title=How_to_Use_a_Three-Axis_Accelerometer_for_Tilt_Sensing#Introduction
};



#endif

