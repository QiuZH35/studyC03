
#include <stdio.h>
#include <stdlib.h>

void main1()
{ 
	//空类型指针只能取地址赋值，不能直接赋值
	int num = 10;
	double db = 19.9;
	//void *p=1; 不能间接赋值，该指针为空类型指针，没有明确的赋值类型，跟地址
	
	void* p=&num;  

	printf("%d",*((int *)p));

	 p = &db;
	
	printf("\n%f", *((double*)p));
	system("pause");
}


void main2()
{
	int num = 10;
	int* p = NULL;//空指针,将指针置空，避免其在内存中乱指一通
	//置空的指针，需要&地址才能对其重新赋值

	p = &num;
	*p = 20;

	printf("%d", *p);



	system("pause");
}