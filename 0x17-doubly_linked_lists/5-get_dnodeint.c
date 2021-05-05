#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* get_dnodeint_at_index - return the inedx node
* @head: head nodo
* @index: index
* ----------------------------------------------------------------
* Return: a node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}
