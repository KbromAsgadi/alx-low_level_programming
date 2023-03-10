#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - entry point
*@argc: parameter
*@argv: parameter
*Return: 0
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 2; i < argc; i++)
		{
			if (isalpha(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
