

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
	
	HWND win = FindWindowA("GAMEAPP","QQ�ɳ�2.0 ������������2.19-2.20������A��-������+A��-������+10888�ㄻ+8���������� ���ҵ�С�ɰ�ؼ���ġ�");
	
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