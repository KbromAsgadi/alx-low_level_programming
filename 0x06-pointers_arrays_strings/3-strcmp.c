#include "main.h"
#include <string.h>
/**
* _strcmp - function that compares two strings
* @s1: the first string
* @s2: the second string
* Return: which ever less than
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
