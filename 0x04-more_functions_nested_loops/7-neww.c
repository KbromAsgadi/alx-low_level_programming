#include "main.h"
/**
* print_diagonal - function prints diagonal line
*@n: the number of lines
*Return: 0
*/
void print_diagonal(int n)
{
	int b;
	int a;

	if (n > 0)
	{
		for (b = 0; b < n; b++)
		{
			for (a = 0; a < b; a++)
			{
				_putchar(' ');
			}
			a = 0;
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
