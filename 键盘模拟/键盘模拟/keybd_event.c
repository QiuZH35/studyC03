

#include <windows.h>
#include <stdio.h>
#include <process.h>

void main()
{


	keybd_event(0x5B,0,0,0);
	keybd_event('R', 0, 0, 0);
	
	keybd_event('R', 0, 2, 0);
	keybd_event(0x5B,0,2,0);

	keybd_event(0x08, 0, 0, 0);
	keybd_event(0x08, 0, 2, 0);
	Sleep(1000);
	keybd_event('N', 0, 0, 0);
	keybd_event('N', 0, 2, 0);

	keybd_event('O', 0, 0, 0);
	keybd_event('O', 0, 2, 0);

	keybd_event('T', 0, 0, 0);
	keybd_event('T', 0, 2, 0);

	keybd_event('E', 0, 0, 0);
	keybd_event('E', 0, 2, 0);

	keybd_event('P', 0, 0, 0);
	keybd_event('P', 0, 2, 0);

	keybd_event('A', 0, 0, 0);
	keybd_event('A', 0, 2, 0);

	keybd_event('D', 0, 0, 0);
	keybd_event('D', 0, 2, 0);
	
	Sleep(1000);
	keybd_event(0X0d,0,0,0);
	keybd_event(0X0d, 0, 2, 0);
	system("pause");
}

void conctrl()
{
	
	HWND win = FindWindowA("GAMEAPP","QQ飞车2.0 【电信区】【2.19-2.20在线送A车-阿尔法+A车-阿尔法+10888点劵+8倍开启！】 【我的小可爱丶在哪】");
	
		if (win != NULL)
		{
			keybd_event('W', 0, 0, 0);
			Sleep(1000);
		}
		keybd_event('W', 0, 2, 0);
	
}
void main2()
{
	//conctrl();
	while (1)
	_beginthread(conctrl,0,NULL);


}