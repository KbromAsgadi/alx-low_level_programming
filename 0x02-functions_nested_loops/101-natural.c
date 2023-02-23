#include <stdio.h>
#include <stdlib.h>
/**
* main - main Entry point
* description: comput and print the sum of the multiple of 3 or 5 below 1024
* Return: 0
*/
int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}
		c++;
	}
	printf("%d\n", sum);
	return (0);
}
