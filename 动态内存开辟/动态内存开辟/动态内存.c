#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main1()
{
//	int b[5];
//	int ax[3][5];//��̬���١�Ԥ��������ڴ�
//	
	//int* pb = malloc(sizeof(int) * 5);//һά���鶯̬���ٷ�ʽ
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

	free(pa); //�ͷ��ڴ�
	pa = NULL;



	system("pause");
}

void main2()
{
	while (1)
	{

		void *p=malloc(1024 * 1024 * 10);//��̬����

		Sleep(1000);
	}

}

void main5()
{
	int a[5];//����ʱ��ȷ����С�ˣ�

	int  n;
	scanf("%d", &n);
	int* p = malloc(sizeof(int) * n);//��̬�����С

	for (int i = 0; i < n; i++)
	{
		printf("%d ", p[i] = i);//��ֵ

	}




}

void main6()
{
	int a[1024 * 1024 * 100]; //����ջ��������Ĭ��Ϊ1 M�������ֶ�������С

	system("pause");





}