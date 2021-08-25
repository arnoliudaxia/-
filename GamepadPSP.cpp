// 
// 
// 

#include "GamepadPSP.h"
#include <PS2X_lib.h>  
#include "globalConfig.h"
PS2X ps2x; // create PS2 Controller Class

GamepadPSP::GamepadPSP()
{

}

GamepadPSP::~GamepadPSP()
{
}

void GamepadPSP::initPSP()
{
    if (millis() < 300)delay(310 - millis());  //��Ҫ�ý�������û�Ѿ����������ⲻ��
    int errorcode = ps2x.config_gamepad(pin_clk, pin_command, pin_cs, pin_data, false, true);   //GamePad(clock, command, attention, data, Pressures?, Rumble?) check for error
    switch (errorcode)
    {
    case 0:
        Serial.println("Found Controller, configured successful ");
        Serial.println("Try out all the buttons, X will vibrate the controller, faster as you press harder;");
        Serial.println("holding L1 or R1 will print out the analog stick values.");
        break;
    case 1:
        Serial.println("No controller found, check wiring, see readme.txt to enable debug. visit www.billporter.info for troubleshooting tips");
        break;
    case 2:
        Serial.println("Controller found but not accepting commands. see readme.txt to enable debug. Visit www.billporter.info for troubleshooting tips");
        break;
    case 3:
        Serial.println("Controller refusing to enter Pressures mode, may not support it. ");
        break;
    default:
        break;
    }
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

void GamepadPSP::CheckInput()
{
    //read_gamepad�����ֵ��÷�ʽ��һ����rumble��������ʱ�����޲������ã�����1
    //��һ����rumble������ʱ�����˳������𶯣�read_gamepad(small motor on/off, larger motor strenght from 0-255)
    ps2x.read_gamepad();          //read controller 
    //ps2x.read_gamepad(false, vibrate);          //read controller and set large motor to spin at 'vibrate' speed
   // vibrate = ps2x.Analog(PSAB_BLUE);
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



    if (ps2x.NewButtonState()||true)     
    {
        if (ps2x.Button(PSB_L3))
            Serial.println("L3");
        if (ps2x.Button(PSB_R3))
            Serial.println("R3");
        if (ps2x.Button(PSB_L2))
            Serial.println("L2");
        if (ps2x.Button(PSB_R2))
            Serial.println("R2");

    }
    //Button L3��R3��ң�а���
    //Button API
    //Button���µ��ã���������
    //ButtonPressed
    //ButtonReleased

    if (ps2x.ButtonPressed(PSB_RED))             //����
        Serial.println("CIRECLE");

    if (ps2x.ButtonReleased(PSB_PINK))             //���ɿ�
        Serial.println("SQUARE");
    if (ps2x.Button(PSB_GREEN))
        Serial.println("TRIANGLE");
    if (ps2x.NewButtonState(PSB_BLUE))            //�����ͱ��ɿ�
        Serial.println("X");

    Serial.print(ps2x.Analog(PSS_LY), DEC);
    Serial.print(",");
    Serial.print(ps2x.Analog(PSS_LX), DEC);
    Serial.print(",");
    Serial.print(ps2x.Analog(PSS_RY), DEC);
    Serial.print(",");
    Serial.println(ps2x.Analog(PSS_RX), DEC);


}

