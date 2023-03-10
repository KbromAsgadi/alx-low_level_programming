#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*@argc: parameter
*@argv: parameter
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; i > argc; i++)
			printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
