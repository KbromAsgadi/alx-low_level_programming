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

	if (my_str == NULL)
		printf("nil");
	for (i = 0; i < n; i++)
	{
		str = va_arg(my_str, char*);
		printf("%s", str);
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(my_str);
}
