#include "main.h"
/**
*is_palindrome  - function returns 1 if a string is a palindrome and 0 if not
*@s: string
*Return: s
*/
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
* _strlen_recursion - function that returns the length of a string
*@s: string
*Return: length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
*check_pal - check the string for palindrome
*@s: string
*@i: iteretor
*@len: length
*Return: s
*/
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
