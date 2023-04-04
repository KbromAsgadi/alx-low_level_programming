#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint_end - function that adds node at the end
*@head: pointer to a pointer
*@n: intger data
*Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = ptr;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = ptr;
	}
	return (*head);
}
