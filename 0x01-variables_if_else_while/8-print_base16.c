#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 (Success)
*/
int main(void)
{
	char i;
	int j;

	i = 'a';
	j = 0;
	while (j < 10)
	{
		putchar(j + '0');
		j++;
	}
	while (i < 'g')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
