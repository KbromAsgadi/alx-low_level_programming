#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*main - entry point
*@argc: parameter
*@argv: parameter
*Return: 0
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, leng;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			leng = strlen(ptr);
			for (j = 0; j < leng; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
				sum += atoi(argv[i]);
			}
		}
	printf("%d\n", sum);
	}
	return (0);
}
