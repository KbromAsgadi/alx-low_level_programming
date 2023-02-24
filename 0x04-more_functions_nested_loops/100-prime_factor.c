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

	while (prime < (i / 2))
	{
		if (i % 2 == 0)
		{
		i /= 2;
		continue;
		}
	for (prime = 3; prime < (i / 2); prime += 2)
	{
		if ((i % prime) == 0)
		{
		i /= prime;
		}
	}
	}
	printf("%ld\n", i);
	return (0);
}
