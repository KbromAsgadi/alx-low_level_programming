#include "main.h"
/**
*_strncmp - compares two strings within b bytes.
 * @s1: string to check
 * @s2: string to check from
 * @b: number of bytes to check
 * Return: 0 if strings are the same
 * any other number if they are different.
 */
int _strncmp(char *s1, char *s2, unsigned int b)
{
	unsigned int j;
	for (j = 0; j <= b && *s1 == *s2 && *s1 != '\0' && *s2 != '\0'; j++)
	{
		s1++;
		s2++;
	}
	return (j - b);
}
/**
 * _strstr - locates a substring
 * @haystack: string to look though
 * @needle: substring to find
 * Return: pointer to string with result of search
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int length;
	/*Get length of needle for strncmp*/
	length = 0;
	while (needle[length] != '\0')
		length++;
	/*compare substring*/
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, length) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
