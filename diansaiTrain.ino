//The sample code for driving one way motor encoder
#include "Motor.h"
#include "GamepadPSP.h"
#include "arduino.h"
#include <PID_v1.h>


GamepadPSP gp;
int maxspeed = 100;
int vt = 0,ht=0;
 
void updatePar()
{
    if (Serial3.available())
    {
        String input = Serial3.readStringUntil('\n');
        if (input.indexOf("=") > 0)
        {
            float inputf = input.substring(input.indexOf("=")+1).toInt() ;
            String type = input.substring(0, input.indexOf("="));
            if (type == "vt")
            {
                vt = inputf;
                Serial3.print("update enable time");
                Serial3.println(inputf);

            }
            if (type == "ht")
            {
                ht = inputf;
                Serial3.print("update disabled time");
                Serial3.println(inputf);
            }
        }
    }
}
void setup()
{

    Serial.begin(115200);//Initialize the serial port
    Serial3.begin(115200);
    gp.initPSP();
    while (true)
    {
        gp.niceControl();
        delay(50);
    }
    while (ht==0)
    {
        updatePar();
        delay(100);

    }
    Serial3.println("Start!!!");
    //EncoderInit();//Initialize the module
}

void loop()
{
    static Motor m1(1);
    //m1.changeSpeed(50);
    //gp.CheckInput();
    static int flymotorspeed = 0;


    updatePar();
    Serial3.print(vt);
    Serial3.print(",");
    Serial3.println(ht);
   // int flymotorspeed = gp.enableflyMotor();
    //m1.changeSpeed(flymotorspeed);
    m1.changeSpeed(100);
    delay(vt);
    m1.changeSpeed(0);
    delay(ht);
    //Serial.print("\n");
    //delay(50);

}

