#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>


//���������ʼ�����飬����ָ�룬�±���ҳ�һ�����ֵ
void main1() //ָ��ʵ��
{
	printf("�������֣���������Ĵ�С��");
	int n;
	scanf("%d", &n);
	int(* p)[5] = malloc(sizeof(int) * n);
	srand((unsigned int)time(NULL));//ʱ������
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			*(*(p + i) + j) = rand() % 100;
			printf("%d\n", *(*(p + i) + j));
		}
		printf("\n\n");
	}
	int max=0; //���������
	int maxi = 0,maxj=0;//�����������±�
	max = *( * (p + 0) + 0);//�������ֻ�ǵ�һ��Ԫ��

	for (int i = 0;i < n; i++)
	{
		for(int j=0;j<5;j++)
		if (max < *( * (p + i) + j))
		{
			max = *(*(p + i) + j);
			maxj=j;
			maxi = i;
		}
		
	}
	max = *(*(p+maxi)+maxj);
	printf("\n\n ���ֵ��%d ,�±���[%d,%d]", max, maxi,maxj);

	system("pause");
}

void main() //����ʵ��
{
	srand((unsigned int)time(NULL));
	int a[100]={0};
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		printf("%d \n", a[i]);
	}

	int max = a[0];
	int maxi=0;
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			maxi = i;
		}
	}

	max = a[maxi];
	printf("%d ,%d", max, maxi);






}