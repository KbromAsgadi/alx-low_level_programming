#include "main.h"
/**
* swap_int - swip the given functions
* @a: first int type
* @b: second int type
* Return: 0
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

