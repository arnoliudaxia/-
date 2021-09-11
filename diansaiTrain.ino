//The sample code for driving one way motor encoder
#include "Motor.h"
#include "GamepadPSP.h"
#include "arduino.h"


GamepadPSP gp;

void setup()
{

    Serial.begin(115200);//Initialize the serial port
    gp.initPSP();
  
    //EncoderInit();//Initialize the module
}

void loop()
{
    static Motor m1(1);
    //m1.changeSpeed(50);
    //gp.CheckInput();
     
    //Serial.print(gp.enableflyMotor());
    int flymotorspeed = gp.enableflyMotor();
    m1.changeSpeed(flymotorspeed);
    //Serial.print("\n");
    delay(50);

}

