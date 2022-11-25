
#include <stdio.h>
#include <stdlib.h>


void main()
{

	int a[3][4][5] = { 0 };

	for (int i = 0; i < 60; i++)
	{
		a[i / 20][i % 20 / 5][i % 20 % 5] = i;//优化数组赋值
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				printf("%4d ,%d", a[i][j][k],*(&a[i][j][k]));
			}
			printf("\n");
		}
		printf("\n\n");
	}




	system("pause");
}