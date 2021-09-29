//The sample code for driving one way motor encoder
#include "Motor.h"
#include "GamepadPSP.h"
#include "arduino.h"
#include <PID_v1.h>


GamepadPSP gp;
int maxspeed = 100;
int vt = 0,ht=0;
 
void setup()
{

    Serial.begin(115200);//Initialize the serial port
    Serial3.begin(115200);
    Serial3.println("Robot Started");

    gp.initPSP();

  
}

void loop()
{
    static Motor m1(1);
    Serial3.print("Motro:");
   Serial3.println( gp.chassisControl());
    //m1.changeSpeed(50);
    //gp.CheckInput();
 
   // int flymotorspeed = gp.enableflyMotor();
    //m1.changeSpeed(flymotorspeed);
    //Serial.print("\n");
    delay(50);

}

