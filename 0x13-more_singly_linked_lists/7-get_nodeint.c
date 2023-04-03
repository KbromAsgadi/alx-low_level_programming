#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*get_nodeint_at_index - function that returns the nth node
*@head: pointer to the first node
*@index: number of node
*Return: pointer or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count = 0;

	ptr = head;
	if (head == NULL)
		return (NULL);
	while (ptr != NULL && count < index)
	{
		if (count == index)
			printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (ptr);
}
