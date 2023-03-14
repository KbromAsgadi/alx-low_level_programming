#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*create_array - function that creates an array of chars
*@size: size of array
*@c: character
*Return: a pointer to array or NULL if size is zero or fail
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(size * sizeof(char));
	if (str == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
