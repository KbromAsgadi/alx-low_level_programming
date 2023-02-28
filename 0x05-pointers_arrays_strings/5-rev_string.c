#include "main.h"
#include <string.h>
/**
* rev_string - reverse the string
*@s: string
* Return:0
*/
void rev_string(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	i = 0;

	while (i < len / 2)
	{
		char tmp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
		i++;
	}
}

