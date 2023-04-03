#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint - function that adds a new node at the beginning
*@head: pointer to a pointer
*@n: data
*Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
                return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
