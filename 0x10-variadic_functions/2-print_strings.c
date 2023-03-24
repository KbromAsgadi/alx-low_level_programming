#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_strings - function that prints strings
*@separator: string between them
*@n: number of string passing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list my_str;

	va_start(my_str, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(my_str, char*);
		if (my_str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(my_str);
}
