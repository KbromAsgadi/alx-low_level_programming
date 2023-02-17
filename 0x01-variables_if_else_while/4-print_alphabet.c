#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 (Success)
*/
int main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
