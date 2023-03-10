#include "main.h"
#include <string.h>
/**
* _strncat - function that concatenates two strings to the extent of n byte
* @dest: destination string
* @src: string to be copied
* @n: integer for n byte
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && n-- > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = ('\0' && n-- > 0);
	return (dest);
}
