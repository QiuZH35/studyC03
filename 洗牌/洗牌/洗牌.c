
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int a[54] = { 0 };
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 54; i++)
	{
		printf("%d ", a[i] = i);
	}
	printf("\n");
	int count = 0;
	for (int i = 0; i < 54; i++)
	{
		int num = i + rand() % (54 - i);

		int temp = a[i];
		a[i] = a[num];
		a[num] = temp;
		count++;
		printf("%d ", a[i]);
		
	}


	printf("\n%d", count);
	



	system("pause");
}