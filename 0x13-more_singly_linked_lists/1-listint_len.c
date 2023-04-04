#include <stdio.h>
#include "lists.h"
/**
*listint_len - function that returns the number of elements
*@h: pointer to first node
*Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h-> next;
	}
	return (count);
}
