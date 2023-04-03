#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*sum_listint - function that returns the sum of all the data
*@head: pointer to node
*Return: sum
*/
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
