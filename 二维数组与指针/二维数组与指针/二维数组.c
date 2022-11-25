#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>


//用随机数初始化数组，并用指针，下标个找出一次最大值
void main1() //指针实现
{
	printf("输入数字，定义数组的大小：");
	int n;
	scanf("%d", &n);
	int(* p)[5] = malloc(sizeof(int) * n);
	srand((unsigned int)time(NULL));//时间种子
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			*(*(p + i) + j) = rand() % 100;
			printf("%d\n", *(*(p + i) + j));
		}
		printf("\n\n");
	}
	int max=0; //存放最大的数
	int maxi = 0,maxj=0;//存放最大数的下标
	max = *( * (p + 0) + 0);//假设最大只是第一个元素

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
	printf("\n\n 最大值是%d ,下标是[%d,%d]", max, maxi,maxj);

	system("pause");
}

void main() //数组实现
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