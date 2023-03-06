#include "main.h"
/**
*_memset - function that fills memory with a constant byte.
* @s: starting adress of the memory to be filled
* @b: the desired value
* @n: number of byte to be changed
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
