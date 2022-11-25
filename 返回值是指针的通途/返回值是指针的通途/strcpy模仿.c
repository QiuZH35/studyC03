#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* mystrcpy(char* dest, char* source)
{
	assert(*source); //╤оят
	
	char* last = NULL;

	last = dest;
	
	//while ((*dest++ = *source++) != '\0');
	while (( * source) !='\0')
	{
		*dest++ = *source++;
	}


	return last;




}




void main()
{
	char str[40]={0};
	;
	printf("%s",  mystrcpy(str, "hello xiaoqiu"));




	system("pause");
}