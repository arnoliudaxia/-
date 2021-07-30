//设置控制各段的数字IO脚，具体几号引脚对应哪一段，来源为数码管官方引脚图。
#include "globalConfig.h"
#include "digtubePlus.h"

void setup()
{
	Serial.begin(115200);
	Serial2.begin(115200);
	Serial1.begin(115200);
	Serial3.begin(115200);
	initTube();

}

void loop()
{
	for (int num = 0;num < 10;num++)
	{
		digShowNumber(num);
		delay(1000);
	}

}
