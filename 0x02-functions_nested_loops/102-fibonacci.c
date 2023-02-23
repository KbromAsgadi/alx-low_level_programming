#include <stdio.h>
/**
* main - enty point
* Description: print the first 50 fibonacci numbers
* Return: 0
*/
int main(void)
{
	int i = 0;
	long int a = 0, b = 1, sum;

	while (i < 50)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf("%lu", sum);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
