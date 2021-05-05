#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - insert node in index
* @h: head nodo
* @idx: index
* @n: value n in new node
* ----------------------------------------------------------------
* Return: new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node = NULL;
	dlistint_t *current = NULL;
	dlistint_t *prev = NULL;

	if (h == NULL)
		return (NULL);
	current = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	for (i = 0; 1 == 1; i++)
	{
		if (i == idx)
		{
			if (current)
			{
				if (current->prev != NULL)
				{
					new_node->prev = current->prev;
					current->prev->next = new_node;
				}
				current->prev = new_node;
				new_node->next = current;
			}
			else if (prev)
			{
				prev->next = new_node;
				new_node->prev = prev;
			}

			if (idx == 0)
				*h = new_node;

			return (new_node);
		}

		if (current != NULL)
		{
			prev = current;
			current = current->next;
		}
		else
			break;
	}

	free(new_node);
	return (NULL);
}
