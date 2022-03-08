#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[101] = "\0"; 
	char *p = str, tmp; 
	int k = 0; 

	scanf("%s", str); 

	while (k < strlen(str))
	{
		printf("%s\n", str); 
		for (p = str; p < str + strlen(str) - 1; p++)
		{
			tmp = *p; 
			*p = *(p + 1); 
			*(p + 1) = tmp; 
		}
		k++; 
	}

	return 0; 
}