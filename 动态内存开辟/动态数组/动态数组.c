#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main1()
{
	int a[10];
	int N;
	scanf("%d", &N);
	int* p = malloc(sizeof(int) * N);

	int num=0;
	for (int i = 0; i < N; i++)
	{
		p[i] = num++;
		printf("%d\n", p[i]);
	}




}

void main2()
{
	int b[4][5];
	int n,m;
	scanf("%d%d", &n, &m);

	int(*p)[5] = malloc(sizeof(int)*(n*m));
	int num = 0;
	printf("%p\n", p);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

			printf(" %3d ", p[i][j] = num++);

		}
		printf("\n\n");
	}

	free(p);
	p = NULL;
	///p = 123;

	
	system("pause");
}

void main3()
{
	int* p = malloc(9923445566600000000);//����ʧ�ܷ��ؿ�null
	printf("%p", p);


	system("pause");
}
void main1()
{
	//int* p = malloc(-1);//-1���룬malloc�Ĳ�����unsigned  ����
	
	int* p = malloc(0);//���Կ��٣�����û������
	
	printf("%p", p);



}


void run()
{
	void* p = malloc(1024 * 1024 * 10);

	//û���ͷ��ڴ棬����ڴ�й©
	//free(p) 

}