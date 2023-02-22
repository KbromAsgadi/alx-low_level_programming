#include "main.h"
/**
* times_table - prints times table
* Return: void
*/
void times_table(void)
{
	int a = 0;
	int b;
	int rep;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			rep = a * b;
			if (b == 0)
			{
				_putchar(rep + '0');
			}
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar(rep + '0');
			}
			else
			{
				_putchar((rep / 10) + '0');
				_putchar((rep % 10) + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
