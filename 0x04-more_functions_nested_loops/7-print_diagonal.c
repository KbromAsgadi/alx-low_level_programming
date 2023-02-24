#include "main.h"
/**
* print_diagonal - function prints diagonal line
*@n: the number of lines
*Return: 0
*/
void print_diagonal(int n)
{
	int b = 0;
	int a = 0;

	if (n > 0)
	{
		while (b < n)
		{
			while (a < b)
			{
				_putchar(' ');
				a++;
			}
			a = 0;
			b++;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
