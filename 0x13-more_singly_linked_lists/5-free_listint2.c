#include "lists.h"

/**
*free_listint2 - feree int the struct
*@head: pointer to the struct
*
*Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *h;
	listint_t *ram;

	h = *head;
	for (; 1 == 1;)
	{
		ram = h;
		h = (*h).next;
		free(ram);
		if (h == NULL)
			break;
	}
	*head = NULL;
}
