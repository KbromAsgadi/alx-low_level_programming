#include "main.h"
/**
*_memcpy - function that copies memory area
*@dest: memory where stored
*@src: memory where is copied
*@n: number of byts
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	int i = n;

	for (x = 0; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
