#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
		/* i never increments in this line and the loop go in to infinite*/
	}
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
