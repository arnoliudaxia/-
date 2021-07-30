//设置控制各段的数字IO脚，具体几号引脚对应哪一段，来源为数码管官方引脚图。
#include "globalConfig.h"
#include "digtubePlus.h"

int digtubepins[] = { pin_digtube_a ,pin_digtube_b,pin_digtube_c,pin_digtube_d,pin_digtube_e,pin_digtube_f,pin_digtube_g };
Digtube digitaltube1(digtubepins);
void setup()
{
	Serial.begin(115200);
	

}

void loop()
{
	for (int num = 0;num < 10;num++)
	{
		digitaltube1.digShowNumber(num);
		delay(1000);
	}

}
