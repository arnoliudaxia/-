# EmatchPre����Ϊ2021��������
globalConfigΪȫ�������ļ���������������<br>
digtubePlus������ܿ�(���໯)

	Digtube(int pins[]);
		��ʼ����ʱ���һ��lengthΪ7��int���飬�ֱ��Ǵ�A��G�����ź�
	void digShowNumber(int numbertoshow);
		numbertoshow�Ǽ�����ʾ��

ButtonPlus.h�ǰ���������

	enum buttonMode ���������ǲ�����Ҫʹ�ð�����������
	Button(int pin,buttonMode bm);��ʼ��
	bool isOn();ָʾ��ǰ���صĿ���״̬�������������������������ǣ�������true����������false
	bool isChanged();���������������¼��ص�

	
Potentiometer.h �ǵ�λ����

	Potentiometer(int analogpin);�����analogpinֱ��д��Ax�е�x��ɣ�������Զ�ת����mega�Ͽ��ԣ�
	int readPos(); ���ص�ǰ�ĵ�λ��0~1023��
	int readPosLevel(int levels); ����λ�ּ������levels=10��ô��λ��0~102�򷵻�1���Դ�����


	

