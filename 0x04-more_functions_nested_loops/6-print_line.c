#include "main.h"
/**
* print_line - function that draws stright line in terminal
*@n: int n
* Return: 0
*/
void print_line(int n)
{
	int b = 0;

	if (n > 0)
	{
		while (b <= n)
		{
			_putchar('_');
			b++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
