#include "lists.h"

/**
 *list_len - function print list
 *@h: struct
 *
 *Return: int
*/
size_t list_len(const list_t *h)
{
	size_t num_node = 0;

	for (num_node = 0; 1 == 1; num_node++)
	{
		if (h == NULL)
			break;

		h = h->next;
	}

	return (num_node);
}
