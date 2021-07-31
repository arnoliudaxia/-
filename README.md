# EmatchPre——为2021电赛而生
globalConfig为全局配置文件，包含引脚设置<br>
digtubePlus是数码管库(已类化)

	Digtube(int pins[]);
		初始化的时候给一个length为7的int数组，分别是从A到G的引脚号
	void digShowNumber(int numbertoshow);
		numbertoshow是几就显示几

ButtonPlus.h是按键开关类

	enum buttonMode 表明开关是不是需要使用板载上拉电阻
	Button(int pin,buttonMode bm);初始化
	bool isOn();指示当前开关的开闭状态，（即便是上拉电阻下依旧是）按下是true，不按便是false
	bool isChanged();可以用来做按键事件回调

	
Potentiometer.h 是电位器类

	Potentiometer(int analogpin);这里的analogpin直接写入Ax中的x便可，程序会自动转化（mega上可以）
	int readPos(); 返回当前的电位（0~1023）
	int readPosLevel(int levels); 将电位分级，如果levels=10那么电位是0~102则返回1，以此类推


	

