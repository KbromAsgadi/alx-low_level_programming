#include <stdio.h>
#include <math.h>
/**
 * main -  program that finds and prints the largest prime factor of a number
 * Return: Always 0.
 */
int main(void)
{
	long int i = 612852475143;
	int prime;

	for (prime = 2; prime <= sqrt(i); prime++)
	{
		if (i / prime == 0)
		{
			i = i / prime;
			prime = 1;
		}
	}
	printf("%ld\n", i);
return (0);
}
