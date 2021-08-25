#include "GamepadPSP.h"

GamepadPSP gamepad;


int error = 0;
byte type = 0;
byte vibrate = 0;

void setup() {

    Serial.begin(115200);
    gamepad.initPSP();
}

void loop()
{
    gamepad.CheckInput();
    ///Serial.print("HEEE");
    delay(50);

}