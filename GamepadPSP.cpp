// 
// 
// 

#include "GamepadPSP.h"
#include "globalConfig.c"
#include <PS2X_lib.h>  
PS2X ps2x; // create PS2 Controller Class

GamepadPSP::GamepadPSP()
{
     ps2x.config_gamepad(pin_clk, pin_command, pin_cs, pin_data, true, true);   //setup pins and settings:  GamePad(clock, command, attention, data, Pressures?, Rumble?) check for error

     switch (ps2x.readType()) {
     case 0:
         Serial.print("Unknown Controller type connected ");
         break;
     case 1:
         Serial.print("DualShock Controller connected ");
         break;
     case 2:
         Serial.print("GuitarHero Controller connected ");
         break;
     case 3:
         Serial.print("Wireless Sony DualShock Controller connected ");
         break;
     }
}

GamepadPSP::~GamepadPSP()
{
}

void GamepadPSP::CheckInput()
{
    ps2x.read_gamepad();          //read controller 
    ps2x.read_gamepad(false, vibrate);          //read controller and set large motor to spin at 'vibrate' speed
    vibrate = ps2x.Analog(PSAB_BLUE);
    if (ps2x.Button(PSB_START))           
        Serial.println("Start is being held");
    if (ps2x.Button(PSB_SELECT))
        Serial.println("Select is being held");

    if (ps2x.Button(PSB_PAD_UP))
    {
        Serial.print("Up held this hard: ");
        Serial.println(ps2x.Analog(PSAB_PAD_UP), DEC);
    }
    if (ps2x.Button(PSB_PAD_RIGHT))
    {
        Serial.print("Right held this hard: ");
        Serial.println(ps2x.Analog(PSAB_PAD_RIGHT), DEC);
    }
    if (ps2x.Button(PSB_PAD_LEFT))
    {
        Serial.print("LEFT held this hard: ");
        Serial.println(ps2x.Analog(PSAB_PAD_LEFT), DEC);
    }
    if (ps2x.Button(PSB_PAD_DOWN))
    {
        Serial.print("DOWN held this hard: ");
        Serial.println(ps2x.Analog(PSAB_PAD_DOWN), DEC);
    }



    if (ps2x.NewButtonState())     
    {
        if (ps2x.Button(PSB_L3))
            Serial.println("L3");
        if (ps2x.Button(PSB_R3))
            Serial.println("R3");
        if (ps2x.Button(PSB_L2))
            Serial.println("L2");
        if (ps2x.Button(PSB_R2))
            Serial.println("R2");
        if (ps2x.Button(PSB_GREEN))
            Serial.println("三角形");
    }


    if (ps2x.ButtonPressed(PSB_RED))             //被按
        Serial.println("圆圈");

    if (ps2x.ButtonReleased(PSB_PINK))             //被松开
        Serial.println("正方形");

    if (ps2x.NewButtonState(PSB_BLUE))            //被按和被松开
        Serial.println("X");

    Serial.print(ps2x.Analog(PSS_LY), DEC);
    Serial.print(",");
    Serial.print(ps2x.Analog(PSS_LX), DEC);
    Serial.print(",");
    Serial.print(ps2x.Analog(PSS_RY), DEC);
    Serial.print(",");
    Serial.println(ps2x.Analog(PSS_RX), DEC);


}

