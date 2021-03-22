#include "lists.h"

/*
*add_nodeint_end - add a new node
*@head: pointer
*@n: is a number
*
*Return: pointer a new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ram;
	listint_t *h;

	/* Create a new node */
	ram = malloc(sizeof(listint_t));
	if (ram == NULL)
		return (NULL);

	ram->n = n;
	ram->next = NULL;

	if (*head == NULL)
	{
		*head = ram;
		return (ram);
	}
	else
		h = *head;

	/* Add a new node in the list¿? */
	for(; h->next != NULL;)
	{
		h = h->next;
	}

	h->next = ram;

	return (ram);
}
