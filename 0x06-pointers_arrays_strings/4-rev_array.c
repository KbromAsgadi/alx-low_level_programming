#include "main.h"
#include <stdio.h>

/**
 * print_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to revers
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		if (i != 1)
		{
			printf(", ");
		}
		printf("%d", a[n-i]);
		i++;
	}
	printf("\n");
}
