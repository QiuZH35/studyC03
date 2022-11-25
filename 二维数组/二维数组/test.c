#include <stdio.h>
#include <stdlib.h>



void main()
{
	int a[5] = { 1,2,3,4,5 };
	int(*p)[5] = a;
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", (*p)[i]);

		printf(" %d\n", *(*p+ i));
	}



}
void main1()
{
	/*int a[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("a=%p,&a=%p\n", a, &a);
	printf("a+1=%p,&a+1=%p", a+1, &a+1);*/



	/*int a[3][5] = { 1,2,3,4,5,6,7,8,9,0,0,0,0,0,0 };

	for (int *p = &a[0][0]; p < &a[0][0] + 15; p++)
	{
		printf("%4d,%p\n", *p,p);
	}
	printf("\n\n");
	for (int i = 0; i < 15; i++)
	{
		printf("%4d,%p\n", a[i / 5][i % 5], &a[i / 5][i % 5]);
	}



	*/
	int a[3][5] = { 1,2,3,4,5,6,7,8,9,0,0,0,0,0,0 };
	int(*p)[5] = a;//二位数组名的本质是数组指针

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf(" \n%d, %p", *(*(a + i) + j), *(a + i) + j);
			printf(" %d,%p", *(*(p + i) + j), *(p + i) + j);
		}
		printf("\n");
	}
	printf("\n\n");

	//printf("%d,%d\n",a[0][0], *( * (a)+0));


	
	

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%p\n", a + i); //行指针
	//	printf("%p\n", &a[i]); //三者等价
	//	printf("%p\n", *(a + i));
	//}

	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%p\n", &a[0][i]);//控制列，
	//	printf("%p\n", a[0] + i);//三者等价
	//	printf("%p\n", *(a + 0) + i);
	//}




	system("pause");
}