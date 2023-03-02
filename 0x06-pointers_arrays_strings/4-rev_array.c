#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to revers
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
		i++;
	}
}
