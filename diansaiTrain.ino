//设置控制各段的数字IO脚，具体几号引脚对应哪一段，来源为数码管官方引脚图。
#include <Wire.h>
#include "ADXL345.h"
#include "buzzer.h"
#include "Music.h"
#include "ButtonPlus.h"
#include "ConvertAlgorithm.h"
#include "Potentiometer.h"
#include "globalConfig.h"
#include "digtubePlus.h"

int digtubepins[] = { pin_digtube_a ,pin_digtube_b,pin_digtube_c,pin_digtube_d,pin_digtube_e,pin_digtube_f,pin_digtube_g };
Digtube digitaltube1(digtubepins);
//Potentiometer poser1(10);
Button bt1(14,bt1.PULLUP);

void setup()
{
	Serial.begin(115200);

}

void loop() {

	Serial.print("TEST\n");
}
