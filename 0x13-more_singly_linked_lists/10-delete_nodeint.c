#include <stdlib.h>
#include "lists.h"
/**
*delete_nodeint_at_index - function that deletes the node at index index
*@head: pointer to pointer
*@index: position of the data to be deleted
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr1 = *head;
	listint_t *ptr2 = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = (*head)->next;
		free(ptr2);
		return (1);
	}
	else if (index == 1)
	{
		*head = ptr2->next;
		free(ptr2);
		ptr2 = NULL;
	}
	else
	{
		while ((index + 1) != 1)
		{
			ptr1 = ptr2;
			ptr2 = ptr2->next;
			index--;
		}
		ptr1->next = ptr2->next;
		free(ptr2);
		ptr2 = NULL;
	}
	return (1);
}
