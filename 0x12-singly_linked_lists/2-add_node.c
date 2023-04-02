#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
*add_node - a function that add a node at the begginning
*@head: pointer to a pointer of head
*@str: character string
*Return: address of frist element, or NULL if faild
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int count = 0;

	ptr = malloc(sizeof(list_t));
	ptr->str = strdup(str);
	if (ptr == NULL)
		return (NULL);
	for (count = 0; str[count]; count++)
		;
	ptr->len = count;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
