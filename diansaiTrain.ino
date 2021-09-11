//The sample code for driving one way motor encoder
#include "Motor.h"



void setup()
{

    Serial.begin(115200);//Initialize the serial port
   
  
    //EncoderInit();//Initialize the module
}

void loop()
{
    static Motor m1(1);
    m1.changeSpeed(50);


}

