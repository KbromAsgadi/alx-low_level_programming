#include <stdlib.h>
#include "lists.h"
/**
*insert_nodeint_at_index - function that inserts a new node at a given position
*@head: pointer to pointer
*@idx: position where the data to be inserted
*@n: data
*Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;

	ptr = *head;
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (!new || !head)
		return (NULL);

	while (idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	new->next = ptr->next;
	ptr->next = new;

	return (new);
}
