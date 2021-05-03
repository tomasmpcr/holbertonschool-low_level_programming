#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* dlistint_len - Prints all the elements of a dlistint_t list.
* @h: head nodo
* ----------------------------------------------------------------
* Return: the size_t
*/
size_t dlistint_len(const dlistint_t *h)
{
	int n_sum = 0;

	if (h == NULL)
		return (0);

	for (; h;)
	{
		n_sum++;
		h = h->next;
	}

	return (n_sum);
}
