#include <stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all - function that returns the sum of all parametrs
*@n: number of parameters
*Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	int x;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(numbers, unsigned int);
		sum += x;
	}
	return (sum);
}
