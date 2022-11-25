#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main1()
{
//	int b[5];
//	int ax[3][5];//静态开辟。预处理分配内存
//	
	//int* pb = malloc(sizeof(int) * 5);//一维数组动态开辟方式
	//printf("%p \n", pb);
	//for (int i = 0; i < 5; i++)
	//{

	//	*pb = i;
	//	printf("%d\n", *pb);
	//}

	int(*pa)[5] = malloc(sizeof(int) * 15);
	printf("%p \n", pa);
	for (int i = 0; i < 15; i++)
	{

		pa[i / 5][i % 5] = i;
		printf(" %d,%p \n", pa[i/5][i%5],&pa[i/5][i%5]);

	}

	free(pa); //释放内存
	pa = NULL;



	system("pause");
}

void main2()
{
	while (1)
	{

		void *p=malloc(1024 * 1024 * 10);//动态开辟

		Sleep(1000);
	}

}

void main5()
{
	int a[5];//编译时就确定大小了，

	int  n;
	scanf("%d", &n);
	int* p = malloc(sizeof(int) * n);//动态分配大小

	for (int i = 0; i < n; i++)
	{
		printf("%d ", p[i] = i);//赋值

	}




}

void main6()
{
	int a[1024 * 1024 * 100]; //超出栈的容量，默认为1 M，可以手动调整大小

	system("pause");





}