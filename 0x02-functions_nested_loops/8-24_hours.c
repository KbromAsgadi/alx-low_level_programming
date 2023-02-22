#include "main.h"
/**
* jack_bauer - prints every minute of the day of jack bauer
* Return: void
*/

void jack_bauer(void)
{
	int h2;
	int h1;
	int m2;
	int m1;

	h2 = 0;
	while (h2 <= 2)
	{
		h1 = 0;
		while (h1 <= 3)
		{
			m2 = 0;
			while (m2 <= 5)
			{
				m1 = 0;
				while (m1 <= 9)
				{
					_putchar(h2 + '0');
					_putchar(h1 + '0');
					_putchar(':');
					_putchar(m2 + '0');
					_putchar(m1 + '0');
					m1++;
					_putchar(' ');
					_putchar('\n');
				}
				m2++;
			}
			h1++;
		}
		h2++;
	}
}
