#include "globalConfig.h"
// 
// 
#ifndef _DIGTUBEPLUS_h
#include "digtubePlus.h"
#endif


//���ݹ���������ܶ������0~9��ʾ�ĸ��ο���״̬
const int numTable[10][8] = {
	//1Ϊ������0Ϊ�ر�
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

Digtube::Digtube(int conpins[])
{
	for (int i = 0;i < 7;i++)
	{
		pinMode(conpins[i], OUTPUT);
		mypins[i] = conpins[i];
	}
}

Digtube::~Digtube()
{
}

void Digtube::digShowNumber(int numbertoshow)
{
	for (int i = 0;i < sizeof(mypins) / sizeof(mypins[0]);i++)
	{
		digitalWrite(mypins[i], numTable[numbertoshow][i]);
	}
}
