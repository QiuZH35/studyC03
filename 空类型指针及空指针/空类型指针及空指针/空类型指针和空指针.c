
#include <stdio.h>
#include <stdlib.h>

void main1()
{ 
	//������ָ��ֻ��ȡ��ַ��ֵ������ֱ�Ӹ�ֵ
	int num = 10;
	double db = 19.9;
	//void *p=1; ���ܼ�Ӹ�ֵ����ָ��Ϊ������ָ�룬û����ȷ�ĸ�ֵ���ͣ�����ַ
	
	void* p=&num;  

	printf("%d",*((int *)p));

	 p = &db;
	
	printf("\n%f", *((double*)p));
	system("pause");
}


void main2()
{
	int num = 10;
	int* p = NULL;//��ָ��,��ָ���ÿգ����������ڴ�����ָһͨ
	//�ÿյ�ָ�룬��Ҫ&��ַ���ܶ������¸�ֵ

	p = &num;
	*p = 20;

	printf("%d", *p);



	system("pause");
}