#include <stdio.h>
#include "lists.h"
/**
*print_listint - function that prints all the elements of a listint_t list
*@h: pointer to the frist node
*Return: number of node
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	int count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
