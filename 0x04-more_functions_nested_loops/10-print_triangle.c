#include "main.h"
/**
 * print_triangle - Function that prints a triangle, followed by a new line.
 * @size: the int for the paramaters of my function
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int j, i = 0;
	int space;

	if (size > 0)
	{
		while (i < size)
		{
			space = size - i - 1;
			while (j < size)
			{
				if (space > j)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				j++;
			}
			i++;
			j = 0;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
