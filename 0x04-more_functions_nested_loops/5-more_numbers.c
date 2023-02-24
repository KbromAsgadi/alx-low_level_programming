#include "main.h"
/**
*more_numbers - prints the number 0 to 14, 10 times
* Return: void
*/
void more_numbers(void)
{
	int j;
	int i = 0;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
