#include <stdlib.h>
#include "lists.h"
/**
*reverse_listint - function that reverses a listint_t
*@head: pointer to pointer
*Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL;
	listint_t *second = NULL;

	while (*head != NULL)
	{
		second = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = second;
	}
	*head = first;
	return (*head);
}
