#include "main.h"
/**
* is_prime_number - function returs either the number is prime nuber or not
*@n: given number
*Return: 1 if number is prime, 0 if not
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
*actual_prime - calculate if the number is prime ot not
*@n: given number
*@i: iteretor
*Return: 1 if n is prime, 0 if not
*/
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
