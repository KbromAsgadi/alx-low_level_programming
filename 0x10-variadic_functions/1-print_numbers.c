#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
*print_numbers - function that prints numbers followed by new line
*@separator: string to be printed between numbers
*@n: number of integers passed to the function
*Return: numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, nums;

	va_list my_number;

	va_start(my_number, n);

	for (i = 0; i < n; i++)
	{
		nums = va_arg(my_number, unsigned int);
		printf("%d", nums);
		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(my_number);
}
