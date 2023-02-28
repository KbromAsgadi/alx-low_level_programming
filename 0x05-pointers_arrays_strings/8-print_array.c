#include "main.h"
/**
*print_array - a function that prints n elements of an array
* @a: array name
* @n: is the number of elements OF the array to be printe
* Return: a and n input
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
}
