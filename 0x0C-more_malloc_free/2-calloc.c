#include <stdlib.h>
#include "main.h"
/**
*_calloc - function that allocates memory for an array, using malloc
*@nmemb: array
*@size: number of byte to be allocated
*Return: pointer or NULL of fail
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	arr = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < (size * nmemb))
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
