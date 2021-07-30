#include "globalConfig.h"
// 
// 
#ifndef _DIGTUBEPLUS_h
#include "digtubePlus.h"
#endif
//int pin_a = 28;
//int pin_b = 29;
//int pin_c = 30;
//int pin_d = 31;
//int pin_e = 32;
//int pin_f = 33;
//int pin_g = 34;
//int pin_p = 34;
int pins[] = { pin_a ,pin_b,pin_c,pin_d,pin_e,pin_f,pin_g };

//根据共阴极数码管段码表定义0~9显示的各段开关状态
int numTable[10][8] = {
	//1为点亮，0为关闭
	//a  b  c  d  e  f  g  dp
	{1, 1, 1, 1, 1, 1, 0, 0},     //0
	{0, 1, 1, 0, 0, 0, 0, 0},     //1
	{1, 1, 0, 1, 1, 0, 1, 0},     //2
	{1, 1, 1, 1, 0, 0, 1, 0},     //3
	{0, 1, 1, 0, 0, 1, 1, 0},     //4
	{1, 0, 1, 1, 0, 1, 1, 0},     //5
	{1, 0, 1, 1, 1, 1, 1, 0},     //6
	{1, 1, 1, 0, 0, 0, 0, 0},     //7
	{1, 1, 1, 1, 1, 1, 1, 0},     //8
	{1, 1, 1, 1, 0, 1, 1, 0},     //9
};
void initTube()
{
	for (int i = 0;i < sizeof(pins) / sizeof(pins[0]);i++)
	{
		pinMode(pins[i], OUTPUT);
	}
}
void digShowNumber(int numbertoshow)
{
	for (int i = 0;i < sizeof(pins) / sizeof(pins[0]);i++)
	{
		digitalWrite(pins[i], numTable[numbertoshow][i]);
	}
}
