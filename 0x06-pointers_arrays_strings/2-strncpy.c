#include "main.h"
/**
*_strncpy - a function that copies a string up to n bytes
* @dest: destination string
* @src: string to be copied
* @n: amount of byet to be copied
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
