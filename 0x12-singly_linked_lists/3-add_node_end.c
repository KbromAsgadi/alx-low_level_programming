#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
*add_node_end - function that adds node at the end
*@head: pointer to a pointer
*@str: string
*Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	int count;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	for (count = 0; str[count]; count++)
		;
	ptr->len = count;
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
