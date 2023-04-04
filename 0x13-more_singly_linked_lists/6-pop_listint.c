#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*pop_listint - function that deletes the head node of a listint_t
*@head: pointer to pointer
*Return: head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	ptr = *head;
	if (*head == NULL)
		return (0);

	data = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	ptr = NULL;

	return (data);
}
