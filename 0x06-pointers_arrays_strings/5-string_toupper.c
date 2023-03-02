#include "main.h"
#include <string.h>
#include <ctype.h>
/**
* string_toupper - function that changes lowercase letters to uppercase
*@str: string parameter
* Return: string
*/
char *string_toupper(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}

