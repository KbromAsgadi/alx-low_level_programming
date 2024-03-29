#include <stdio.h>
#include "lists.h"
/**
*print_list - function that prints all the elements of a list_t list.
*@h: pointer to the frist node
*Return: number of node
*/
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nul)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
