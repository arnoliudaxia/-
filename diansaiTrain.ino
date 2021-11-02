//The sample code for driving one way motor encoder

#include <PS2X_lib.h>
#include "Motor.h"
#include "GamepadPSP.h"
#include "arduino.h"
#include <PID_v1.h>
#include "globalConfig.h"
#include "ADXL345.h"

//Sensor and executer
GamepadPSP gp;
Acceleration acc;

//PID
double Setpoint, Input, Output;
double stableKp = 0.9, stableKi = 0, stableKd = 0.01;
PID myPID(&Input, &Output, &Setpoint, stableKp, stableKi, stableKd, DIRECT);

 
int serial_putc(char c, struct __file*)
{
    Serial3.write(c);
    return c;
}
void printf_begin(void)
{
    fdevopen(&serial_putc, 0);
}
void setup()
{

    //Serial.begin(115200);
    Serial3.begin(115200);
    printf_begin();
    Serial3.println("Robot Started");
    pinMode(9, OUTPUT);
    pinMode(E1, OUTPUT);
    pinMode(M1, OUTPUT);
    pinMode(E2, OUTPUT);
    pinMode(M2, OUTPUT);

    gp.initPSP();
    acc.init();
    myPID.SetMode(AUTOMATIC);
    myPID.SetOutputLimits(-70, 70);

}

void InputCom()
{
    if (Serial3.available())
    {
        String input = Serial3.readStringUntil('\n');
        if (input.indexOf("=") > 0)
        {
            float inputf = input.substring(input.indexOf("=") + 1).toFloat();
            String type = input.substring(0, input.indexOf("="));
            if (type == "kp")
            {
                stableKp = inputf;
                Serial3.print("update Kp : ");
                Serial3.println(myPID.GetKp());

            }
            if (type == "kd")
            {
                stableKd = inputf;
                Serial3.print("update Kd : ");
                Serial3.println(myPID.GetKd());
            }
            if (type == "ki")
            {
                stableKi = inputf;
                Serial3.print("update Ki : ");
                Serial3.println(myPID.GetKi());
            }
        }
        myPID.SetTunings(stableKp, stableKi, stableKd);
    }
}
void motorSystem()
{
    static Motor m2(2);
    static Motor m1(1);

#pragma region PID¿¹¶¶¶¯ 
    Input = (acc.readAcc())->pitch;
    Setpoint = gp.aniContrl(&acc);
    if (Setpoint != 0)
    {
        myPID.Compute();
    }
    else
    {
        Output = 0;
    }
#pragma endregion



    int turnPower = gp.turnControl();
    m1.changeSpeed(turnPower * 2);
    int Gopower = gp.chassisControl();
    //Serial3.println(Gopower);
    Gopower = Gopower >= 0 ? Gopower / 2 : Gopower / 1.5;
    if (Gopower == 0)
        m2.changeSpeed(Output);
    
    else
        m2.changeSpeed(Gopower);
    //OUTPUT,NOW,TARGET
    //Serial3.print(Output);
    //Serial3.print(",");
    //Serial3.print(Input);
    //Serial3.print(",");
    //Serial3.print(Setpoint);

}
void loop()
{
   
    //acc.readAcc();
    InputCom();
  
    motorSystem();

     delay(100);

}

