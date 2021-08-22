#include "GamepadPSP.h"
#include <PS2X_lib.h>  

GamepadPSP gamepad;


int error = 0;
byte type = 0;
byte vibrate = 0;

void setup() {

    Serial.begin(115200);
}

void loop()
{
    gamepad.CheckInput();

    delay(50);

}