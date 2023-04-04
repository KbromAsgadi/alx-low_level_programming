#include <stdlib.h>
#include "lists.h"
/**
*free_listint - function that frees a listint_t list
*@head: pointer to first node
*Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
