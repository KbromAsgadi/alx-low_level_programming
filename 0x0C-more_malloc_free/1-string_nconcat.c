#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
*string_nconcat - function that concatenates two strings
*@s1: frist string
*@s2: second string
*@n: byte of s2 to be concatenated
*Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0;
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && n-- > 0)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = ('\0' && n-- > 0);
	return (s);
}
