#include "lists.h"

/**
 *print_list - function print list
 *@h: struct
 *
 *Return: int
*/
size_t print_list(const list_t *h)
{
	size_t num_node = 0;

	for (num_node = 0; 1 == 1; num_node++)
	{
		if (h == NULL)
			break;

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);

		h = h->next;
	}

	return (num_node);
}
