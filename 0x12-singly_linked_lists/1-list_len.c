#include <stdio.h>
#include "lists.h"
/**
*list_len - function that returns the number of elements
*@h: a pointer to the frist node
*Return: number of element
*/
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
