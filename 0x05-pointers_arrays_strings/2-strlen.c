#include <string.h>
#include "main.h"
/**
*_strlen - function calculates the length of string
* @char: the character type
* @s: string type
* Return: length
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
