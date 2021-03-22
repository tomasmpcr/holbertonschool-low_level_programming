#include "lists.h"

/*
*print_listint - print tthe number in the struct andn next
*@h: pointer to the struct
*
*Return: size_t
*/
size_t print_listint(const listint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (num);
}
