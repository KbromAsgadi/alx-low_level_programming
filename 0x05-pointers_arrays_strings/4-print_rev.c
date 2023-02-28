#include "main.h"
#include <string.h>
/**
*print_rev - function prints reverse
* @s: string
*Return: 0
*/
void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	i = length - 1;
	while (i >= 0)
	{
		puts(i);
		i--;
	}
}

