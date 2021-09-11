// 
// 
// 

#include "ADXL345.h"
#include <Wire.h>
//---------------- Functions
//Writes val to address register on device
void writeTo(int device, byte address, byte val) {
	Wire.beginTransmission(device); //start transmission to device
	Wire.write(address);        // send register address
	Wire.write(val);        // send value to write
	Wire.endTransmission(); //end transmission
}

//reads num bytes starting from address register on device in to buff array
void readFrom(int device, byte address, int num, byte buff[]) {
	Wire.beginTransmission(device); //start transmission to device
	Wire.write(address);        //sends address to read from
	Wire.endTransmission(); //end transmission

	Wire.beginTransmission(device); //start transmission to device
	Wire.requestFrom(device, num);    // request 6 bytes from device

	int i = 0;
	while (Wire.available())    //device may send less than requested (abnormal)
	{
		buff[i] = Wire.read(); // receive a byte
		i++;
	}
	Wire.endTransmission(); //end transmission
}

Acceleration::Acceleration()
{

}

Acceleration::~Acceleration()
{
}
void Acceleration::init()
{
	Wire.begin();

	//Turning on the ADXL345
	writeTo(DEVICE, 0x2D, 0);
	writeTo(DEVICE, 0x2D, 16);
	writeTo(DEVICE, 0x2D, 8);
}
void Acceleration::readAcc()
{
	readFrom(DEVICE, regAddress, TO_READ, buff); //read the acceleration data from the ADXL345
											 //each axis reading comes in 10 bit resolution, ie 2 bytes.  Least Significat Byte first!!
											 //thus we are converting both bytes in to one int
	x = (((int)buff[1]) << 8) | buff[0];
	y = (((int)buff[3]) << 8) | buff[2];
	z = (((int)buff[5]) << 8) | buff[4];


#pragma region Roll & Pitch calculate
	double x_Buff = float(x);
	double y_Buff = float(y);
	double z_Buff = float(z);
	roll = atan2(y_Buff, z_Buff) * 57.3;
	pitch = atan2((-x_Buff), sqrt(y_Buff * y_Buff + z_Buff * z_Buff)) * 57.3;
#pragma endregion
}
