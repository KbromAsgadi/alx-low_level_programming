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
	int mul = 0;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
