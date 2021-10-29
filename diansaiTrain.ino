//The sample code for driving one way motor encoder

#include <PS2X_lib.h>
#include "Motor.h"
#include "GamepadPSP.h"
#include "arduino.h"
#include <PID_v1.h>
#include "globalConfig.h"


GamepadPSP gp;
int maxspeed = 100;
int vt = 0,ht=0;
 
void setup()
{

    Serial.begin(115200);//Initialize the serial port
    Serial3.begin(115200);
    Serial3.println("Robot Started");
    pinMode(9, OUTPUT);
    pinMode(E1, OUTPUT);
    pinMode(M1, OUTPUT);
    pinMode(E2, OUTPUT);
    pinMode(M2, OUTPUT);

    gp.initPSP();
}

void loop()
{
    static Motor m2(2);
    static Motor m1(1);
    
   // Serial3.print("Motro:");
    //Serial3.println(gp.chassisControl());
    int turnPower = gp.turnControl();
    //Serial3.println(turnPower);
    m1.changeSpeed(turnPower*2);
    int Gopower = gp.chassisControl();
    Serial3.println(Gopower);
    m2.changeSpeed(Gopower/2);
    //m2.changeSpeed( gp.chassisControl());
    //m1.changeSpeed(50);
    //gp.CheckInput();
 


   // int flymotorspeed = gp.enableflyMotor();
    //m1.changeSpeed(flymotorspeed);
    //Serial.print("\n");


    
    delay(50);

}

