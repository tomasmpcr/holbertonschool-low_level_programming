#include "lists.h"

/*
*listint_len - print the size
*@h: pointer to the struct
*
*Return: size_t
*/
size_t listint_len(const listint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}

	return (num);
}
