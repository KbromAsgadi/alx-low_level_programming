#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*_strdup - function that returns a pointer to a newly allocated space in memory
*@str: stirng parameter
*Return: pointer to string or NULL if str = NULL
*/
char *_strdup(char *str)
{
	char *z;
	int i, y = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	z = malloc(sizeof(char) * (i + 1));

	if (z == NULL)
		return (NULL);
	for (y = 0; str[y]; y++)
		z[y] = str[y];
	return (z);
}
